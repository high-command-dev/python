#include<iostream>
using namespace std;

class Telcall{
    int phno;
    string sname;
    int n;
    double amt;
    public:
    Telcall(int phoneno,string name,int no_of_calls)
    {
        this->phno = phoneno;
        this->sname = name;
        this->n = no_of_calls;
    }
    void compute()
    {
        if(n>0 && n<100)
        {
            amt = 500;
        }
        else if(n>100 && n< 200)
        {
            amt = n*1.00 + 500;
        }
        else if(n<200 && n>300)
        {
            amt = n*1.20 + 500;
        }
        else{
            amt = n*1.50 + 500;
        }
    }

    void display()
    {
        cout<<"NAME : "<<sname<<endl;
        cout<<"PHONE NUMBER : "<<phno<<endl;
        cout<<"NO OF CALLS : "<<n<<endl;
        cout<<"BILL AMOUNT : "<<amt<<endl;

    }
};

int main()
{
    Telcall t1(6769569,"Nitin",248);
    t1.compute();
    t1.display();
}
