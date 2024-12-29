#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void input()
    {
        cout << "ENTRE THE VALUE OF X : ";
        cin >> x;
    }

    friend void operator-(A &a)
    {
        a.x = -(a.x);
    }

    void display()
    {
        cout << "Element After Operations : " << x << endl;
    }
};

int main()
{
    A a;
    a.input();
    -a;
    a.display();
}