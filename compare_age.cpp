#include <iostream>
using namespace std;

class Person
{
private:
    int age;

public:
    Person(int a)
    {
        age = a;
    }

    friend void compareAge(Person p1, Person p2)
    {
        if (p1.age > p2.age)
        {
            cout << "Person 1 is older than Person 2." << endl;
        }
        else if (p1.age < p2.age)
        {
            cout << "Person 2 is older than Person 1." << endl;
        }
        else
        {
            cout << "Both persons are of the same age." << endl;
        }
    }
};


int main()
{

    Person p1(25);
    Person p2(30);

    

    compareAge(p1, p2);

    return 0;
}
