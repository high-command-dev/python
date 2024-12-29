#include <iostream>
using namespace std;
class B;
class A {
private:
    int x;
public:
    int set(int val){
        x =val;
    }
    friend int add(A, B);
};
class B {
private:
    int y;

public:
    int set(int val){
        y = val;
    }
    friend int add(A a, B b)
    {
        return a.x + b.y;
    }
};
// int add(A a, B b) {
//     return a.x + b.y;
// }
int main() {
    A a;  
    B b;
   a.set(10);
    b.set(60);  
    cout << "Sum of private members of A and B: " << add(a, b) << endl;
    return 0;
}