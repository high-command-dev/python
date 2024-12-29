#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int room_no;
    string room_type;
    int price;
    bool available;

public:
    // Room(int room_no, string room_type, int price)
    //     : room_no(room_no), room_type(room_type), price(price), available(true) {}
    void input() {
        cout << "Enter Room Number: ";
        cin >> room_no;
        cout << "Enter Room Type (Single/Double): ";
        cin >> room_type;
        cout << "Enter Price: ";
        cin >> price;
        available = true; // Default availability is true
    }

    void bookRoom() {
        if (available) {
            available = false;
            cout << "Room " << room_no << " has been booked successfully." << endl;
        } else {
            cout << "Room " << room_no << " is already booked." << endl;
        }
    }

    void cancelRoom() {
        if (!available) {
            available = true;
            cout << "Booking for room " << room_no << " has been cancelled." << endl;
        } else {
            cout << "Room " << room_no << " is not booked." << endl;
        }
    }

    void checkRoom() const {
        cout << "Room Number: " << room_no
             << ", Type: " << room_type
             << ", Price: $" << price
             << ", Status: " << (available ? "Available" : "Booked") << endl;
    }

    int getRoomNo() const {
        return room_no;
    }
};

int main() {
    int n;
    cout << "Enter the number of rooms: ";
    cin >> n;
    
    Room** rooms = new Room*[n]; // Dynamically allocate an array of Room pointers

    for (int i = 0; i < n; i++) {
        rooms[i]->input();
    }

    int choice, roomno;

    while (true) {
        cout << "\nPRESS 1 FOR BOOK ROOM " << endl
             << "PRESS 2 FOR CANCEL A ROOM " << endl
             << "PRESS 3 FOR CHECK AVAILABLE ROOMS " << endl
             << "PRESS 4 FOR EXIT " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter room number to book: ";
                cin >> roomno;
                for (int i = 0; i < n; i++) {
                    if (rooms[i]->getRoomNo() == roomno) {
                        rooms[i]->bookRoom();
                        break;
                    }
                }
                break;

            case 2:
                cout << "Enter room number to cancel: ";
                cin >> roomno;
                for (int i = 0; i < n; i++) {
                    if (rooms[i]->getRoomNo() == roomno) {
                        rooms[i]->cancelRoom();
                        break;
                    }
                }
                break;

            case 3:
                cout << "Available Rooms:\n";
                for (int i = 0; i < n; i++) {
                    rooms[i]->checkRoom();
                }
                break;

            case 4:
                for (int i = 0; i < n; i++) {
                    delete rooms[i];
                }
                delete[] rooms; // Delete the array of pointers
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}
