#include <iostream>
#include <string>

using namespace std;

class MyString
{
private:
    string str;
    int num;

public:
    void input()
    {
        cout<<"ENTRE THE STRING : ";
        getline(cin,str);
        cout<<"ENTRE THE NUMBER : ";
        cin>>num;
    }
   friend string operator+( MyString &a)
    {
        return to_string(a.num) + a.str;
    }
    int getnum() 
    {
        return num;
    }
    string getsting() {
        return str;
    }
};

int main()
{
    MyString a;
    
    a.input();

    string result = to_string(a.getnum()) + a.getsting();

    cout << "Result: " << result << endl;

    return 0;
}
