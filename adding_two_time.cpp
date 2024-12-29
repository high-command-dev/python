#include <iostream>
using namespace std;
class Time
{
private:
    int hours, min, sec;
public:
    Time(){
        hours = 0;
        min = 0;
        sec = 0;
    }
    // Time(int h, int m, int s) {
    //     hours = h;
    //     min = m;
    //     sec = s;
    // }
    void gettime(){
        cin >> hours >> min >> sec;
    }
    friend Time operator+(Time &T1, Time &T2){
        Time temp;
        temp.sec = T1.sec + T2.sec;
        temp.min = T1.min + T2.min + temp.sec / 60;
        temp.hours = T1.hours + T2.hours + temp.min / 60;
        temp.sec %= 60;
        temp.min %= 60;
        return temp;
    }
    void display(){
        cout << "Time : " << hours << ":" << min << ":" << sec << endl;
    }
};
int main(){
    Time T1, T2, T3;
    cout << "Enter time for T1 : ";
    T1.gettime();
    cout << "Enter time for T2 : ";
    T2.gettime();
    T3 = T1 + T2;
    T3.display();
    return 0;
}
