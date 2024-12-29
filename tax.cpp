#include <iostream>
using namespace std;

class Member
{
private:
    int pan;
    string name;
    double annual_income;
    double tax;

public:
    void inputInfo()
    {
        cout << "Entre The NAme :" << endl;
        cin >> name;
        cout << "Entre The Pan Card Number  :" << endl;
        cin >> pan;
        cout << "Entre The Anual Tax Income  :" << endl;
        cin >> annual_income;
    }

    void taxCalc()
    {
        if (annual_income <= 250000)
        {
            tax = 0.0;
        }
        else if (annual_income > 250000 && annual_income <= 300000)
        {
            tax = 0.10 * (annual_income - 250000);
        }
        else if (annual_income > 300000 && annual_income <= 400000)
        {
            tax = 5000 + 0.20 * (annual_income - 300000);
        }
        else if (annual_income > 400000)
        {
            tax = 25000 + 0.30 * (annual_income - 400000);
        }
    }

    void display()
    {
        cout << "\n\nName : " << name << endl
             << "PAN CARD NUMBER : " << pan << endl
             << "Anual Income : " << annual_income << endl
             << "TAx : " << tax << endl;
    }
};

int main()
{
    Member m;
    m.inputInfo();
    m.taxCalc();
    m.display();
}