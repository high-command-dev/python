#include<iostream>
using namespace std;
class Time{
private:
	int hour;
	int min;
	int sec;
public:
	Time(){
		hour=0;
		min=0;
		sec=0;
	}
	Time(int hour,int min,int sec){
		this->hour=hour;
		this->min=min;
		this->sec=sec;
	}
	Time operator +(Time t1,Time t2){
		Time t;
		t.sec=t1.sec+t2.sec;
		t.min=(t1.min+t2.min)+(sec/60);
		t.hour=(t1.hour+t2.hour)+(min/60);
		t.sec=sec%60;
		t.min=min%60;
		t.hour=hour%12;
		
		return t;
	}
	void display(){
		cout<<hour<<" "<<min<<" "<<sec<<endl;
	}
	
};
int main(){
	Time t1(10,20,35);
	Time t2(5,20,25);
	
	Time t3;
	t3=t1+t2;
	t3.display();
	
}
