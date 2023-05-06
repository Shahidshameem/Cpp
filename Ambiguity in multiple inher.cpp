#include<iostream>
using namespace std;
class base1 {
  public:
      void someFunction( ) {....}  
};
class base2 {
    void someFunction( ) {....} 
};
class derived : public base1, public base2 {};

int main() {
    derived obj;
    obj.someFunction() // Error!  
}
