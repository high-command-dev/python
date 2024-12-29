#include <iostream>
#include <string.h>
using namespace std;
class electricity
{
    string name;
    int units;
    float charges;

public:
    electricity() {}
    electricity(string n, int u);
    void display();
};
electricity::electricity(string n, int u)
{
    name = n;
    units = u;
    charges = 0.00;
    if (u <= 100)
    {
        charges = (u * 0.60) + 50;
    }
    else if (u <= 200)
    {
        charges = (u * 0.60) + 50 + (u - 100) * 0.80;
    }
    else
    {
        charges = (u * 0.60) + 50 + (u - 100) * 0.80 + (u - 200) * 0.90 + 0.15;
    }
}
void electricity::display()
{
    cout << "the charges as per the units are " << charges << endl;
}

int main()
{
    string n;
    int u;

    electricity e1;
    cout << "enter your name" << endl;
    cin >> n;
    cout << "enter the units consumed" << endl;
    cin >> u;
    e1 = electricity(n, u);
    e1.display();
    return 0;
}