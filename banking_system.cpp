#include <iostream>
using namespace std;
class Customer{
private:
    string name;
    int acc_no;
    float balance;
    string country_name;
public:
    void insert(string s, int a, float b) {
        name = s;
        acc_no = a;
        balance = b;
        country_name = "India";
    }

    void deposit(float amount){
        if (amount > 0){
            balance += amount;
            cout << "\nAmount Is Deposited ! " << endl;
        }
        else{
            cout << "Invalid Deposited Amount !" << endl;
        }
    }
    void withdraw(float amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            cout << "\nAmount withrawn succesfully ! " << endl;
        }
        else if (amount > balance){
            cout << "\nInsufficient Balance !" << endl;
        }
        else{
            cout << "Invallid Withrawal Amount ! ";
        }
    }
    void checkBalance()    {
        cout << "Current Balance : " << balance << endl;
    }
    void display()    {
        cout << "Customer Name : " << name << endl;
        cout << "Account NUmber : " << acc_no << endl;
        cout << "Country Name : " << country_name << endl;
        cout << "Balance : " << balance << endl;
    }
};
int main(){
    Customer customer1;
    customer1.insert("Nitin kumar", 123456789, 600000);
    cout << "Initial Customer Details:" << endl;
    customer1.display();
    
    customer1.deposit(500);
    customer1.checkBalance();
    customer1.withdraw(1000);
    customer1.checkBalance();
    cout << "\nFinal Customer Details : " << endl;
    customer1.display();
}