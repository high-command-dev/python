#include <iostream>
using namespace std;
class B;
class A
{
private:
    int x;

public:
    void setdata()
    {
        cin >> x;
    }
    friend void min(A, B);
};
class B
{
private:
    int y;

public:
    void setdata()
    {
        cin >> y;
    }
    friend void min(A a, B b)
    {
        if (a.x < b.y)
        {
            cout << a.x << "  IS MINIMUM " << endl;
        }
        else
        {
            cout << b.y << "  IS MINIMUM " << endl;
        }
    }
};
int main()
{
    A a;
    B b;
    a.setdata();
    b.setdata();
    min(a, b);
}