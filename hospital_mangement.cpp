#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Patient {
protected:
    string name;
    int age;
    string medicalHistory;

public:
    Patient(string n, int a, string mh) : name(n), age(a), medicalHistory(mh) {}

    virtual void viewDetails() const {
        cout << "Patient Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Medical History: " << medicalHistory << endl;
    }

    virtual void scheduleAppointment() {
        cout << "Scheduling appointment for " << name << endl;
    }

    virtual ~Patient() {
        cout << "Destroying Patient: " << name << endl;
    }
};

class InPatient : public Patient {
private:
    string roomNumber;

public:
    InPatient(string n, int a, string mh, string room)
        : Patient(n, a, mh), roomNumber(room) {}

    void viewDetails() const {
        Patient::viewDetails();
        cout << "Room Number: " << roomNumber << endl;
    }
};

class OutPatient : public Patient {
private:
    string appointmentTime;

public:
    OutPatient(string n, int a, string mh, string time)
        : Patient(n, a, mh), appointmentTime(time) {}

    void viewDetails() const {
        Patient::viewDetails();
        cout << "Appointment Time: " << appointmentTime << endl;
    }
};

class Doctor {
private:
    string name;
    string specialization;
    vector<string> appointments;

public:
    Doctor(string n, string spec) : name(n), specialization(spec) {}

    void viewAppointments() const {
        cout << "Doctor: " << name << " (" << specialization << ")" << endl;
        cout << "Scheduled Appointments:" << endl;

        for (vector<string>::const_iterator it = appointments.begin(); it != appointments.end(); ++it) {
            cout << " - " << *it << endl;
        }
    }

    void addAppointment(const string& appointment) {
        appointments.push_back(appointment);
        cout << "Appointment added: " << appointment << endl;
    }
};

class Appointment {
private:
    string date;
    Patient* patient;
    Doctor* doctor;

public:
    Appointment(string d, Patient* p, Doctor* dctr)
        : date(d), patient(p), doctor(dctr) {}

    void schedule() {
        cout << "Appointment Scheduled on " << date << endl;
        patient->viewDetails();
        doctor->addAppointment(date);
    }

    void cancel() {
        cout << "Appointment on " << date << " canceled." << endl;
    }
};

class Billing {
private:
    Patient* patient;
    float amount;

public:
    Billing(Patient* p, float amt) : patient(p), amount(amt) {}

    void generateInvoice() const {
        cout << "Invoice Generated:" << endl;
        patient->viewDetails();
        cout << "Total Amount Due: Rs" << amount << endl;
    }
};

int main() {
    InPatient inPatient("Rahul Sharma", 30, "Diabetes", "101A");
    OutPatient outPatient("Priya Singh", 25, "Flu", "10:30 AM");

    Doctor doctor("Dr. Anjali Mehra", "Cardiology");

    Appointment appointment1("2024-11-20", &inPatient, &doctor);
    Appointment appointment2("2024-11-21", &outPatient, &doctor);

    appointment1.schedule();
    cout << endl;

    appointment2.schedule();
    cout << endl;

    doctor.viewAppointments();
    cout << endl;

    Billing billing1(&inPatient, 12000.50);
    Billing billing2(&outPatient, 1500.75);

    billing1.generateInvoice();
    cout << endl;

    billing2.generateInvoice();
    cout << endl;

    appointment1.cancel();

    return 0;
}

