#include <iostream>
using namespace std;
class Account
{
public:
    int accno;
    string name;
    static int count;
    Account()
    {
        count++;
    }
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
        count++;
    }
    void display()
    {
        cout << accno << " " << name << endl;
    }
};
int Account::count = 0;
int main()
{
    Account a1 = Account(201, "Sanjay");
    Account a2 = Account(202, "Nikhil");
    Account a3 = Account(203, "Renu");
    Account a4;
    a1.display();
    a2.display();
    a3.display();
    cout << "\nTotal Objects are: " << Account::count;
    return 0;
}