#include <iostream> using namespace std; class Base { private: 
    int privateData;   protected: 
    int protectedData;  public: 
    int publicData; 
    Base() : privateData(1), protectedData(2), publicData(3) {}     int getPrivateData() const {         return privateData; 
    } }; 
class DerivedPublic : public Base { public: 
    void show() {         cout << "Protected Data: " << protectedData << endl;         cout << "Public Data: " << publicData << endl; 
    } }; 
class DerivedProtected : protected Base { public: 
    void show() {         cout << "Protected Data: " << protectedData << endl;         cout << "Public Data: " << publicData << endl; 
    } }; 
class DerivedPrivate : private Base { public: 
    void show() {         cout << "Protected Data: " << protectedData << endl;         cout << "Public Data: " << publicData << endl; 
    } }; int main() { 
    DerivedPublic objPublic;     objPublic.show();     cout << "Accessing public data: " << objPublic.publicData << endl;     DerivedProtected objProtected;     objProtected.show();     DerivedPrivate objPrivate;     objPrivate.show(); 
    return 0; 
} 

