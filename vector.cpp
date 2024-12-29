#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l){
	for(int i:l){
	cout<<i<<" ";
}
cout<<endl;
}
int main(){
list<int> l;
l.push_back(1);
l.push_back(2);
l.push_front(3);
l.push_back(4);	
l.push_back(5);

display(l);
l.pop_back();
display(l);
l.pop_front();
display(l);

return 0;

}
