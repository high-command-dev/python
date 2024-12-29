#include<iostream>
using namespace std;
class unary{
	private:
		int value;
	public:
		unary() {
			this->value=5;
		}
	
	unary operator -(){
		return -value;
	}
	unary operator ++(){
		return value++;
	}
	unary operator ++(int){
		return ++value;
	}
	
	void print(){
		cout<<value<<endl;
	}
	
};
int main(){
	unary u;
	u++;
	u.print();
	++u;
	u.print();
	-u;
	u.print();
}
