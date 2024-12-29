#include<iostream>
#include<string>

using namespace std;

class cars{
	private:
	// members variables or data member
	string company_name;
	string model_name;
	string fuel_type;
	float mileage;
	double price;
	
	public:
		//member functions
		void setdata(string cname,string nname,string ftype, float m,double p){
				company_name=cname;
				model_name=nname;
				fuel_type=ftype;
				mileage=m;
				price=p;		
		}
		void display(){
			cout<<"Car Properties:->:"<<endl;
			cout<<"Car Company Name: "<<company_name<<endl;
			cout<<"Car Campany Model: "<<model_name<<endl;
			cout<<"Car Fuel Type: "<<fuel_type<<endl;
			cout<<"Car Mileage: "<<mileage<<endl;
			cout<<"Car Price: "<<price<<endl;
		}
		
		
};




int main(){
	cars c;
	c.setdata("Audi","XYZ","Electric",35.6,123456);
	c.display();
	return 0;
}
