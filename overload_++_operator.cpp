#include <iostream>
using namespace std;

class count
{
    int x;

public:
    void input()
    {
        cout << "ENTRE THE NUMBER : ";
        cin >> x;
    }

    // overload when ++ used as pre increment
    friend void operator++(count &c)
    {
        (c.x) = c.x + 1;
    }

    // overload when ++ used as post increment
    friend count operator++(count &c, int)
    {
        count temp = c;
        (c.x) = c.x + 1;
        return temp;  // returning the old value 
    }
    // overload == operator
    friend bool operator==(count &c1, count &c2)
    {
        return (c1.x) == (c2.x);
    }

    void print()
    {
        cout << " The Count Is : " << x;
    }
};

int main()
{
    count num;
    num.input();
    ++num;
    cout << "Prefix increment:";
    num.print();

    num++;
    cout << "\nPostfix increment:";
    num.print();

    // overload == operator
    int n1, n2;
    n1 = 5;
    n2 = 9;
    if (n1 == n2)
    {
        cout << "\nBoth The Numbers Are Equal : ";
    }
    else
    {
        cout << "\nBoth Numbers Are Not  Equal : ";
    }
}