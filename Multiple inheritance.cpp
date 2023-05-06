#include<iostream>
using namespace std;

class BaseClass1 {
public:
    BaseClass1() { 
        cout << "BaseClass1, constructor called" << endl; 
    }
};

class BaseClass2 {
public:
    BaseClass2() { 
        cout << "BaseClass2, constructor called" << endl; 
    }
};

class DerivedClass: public BaseClass2, public BaseClass1 {
public:
    DerivedClass() { 
        cout << "DerviedClass, constructor called" << endl; 
    
    }
};

int main() {
	DerivedClass x;
	return 0;
}

