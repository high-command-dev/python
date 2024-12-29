#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class student{
    private:
    string name;
    int age;
    char section;
    public:
    student(string s,int a,char sec)
    {
        name = s;
        age = a;
        section = sec;
    }

    friend int operator-(student &s1,student &s2)
    {
        return (s1.age - s2.age);
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << ", Section: " << section << endl;
    }
};

int main()
{
    student s1("Nitin",20,'D');
    student s2("Rahul",16,'B');

     cout << "Student 1 details: ";
    s1.display();

    cout << "Student 2 details: ";
    s2.display();

    int agegap = s1 - s2;

    cout << "The age gap between the two students is: " << agegap << " years." << endl;

}