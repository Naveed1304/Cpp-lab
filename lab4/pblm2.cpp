//create a classs maximumm with overloaded functions max ()that find 
//the maximum of two numbers, three numbers and four numbers
#include <iostream>
#include <cmath>
using namespace std ;
class maximun
 {
    public:
    //maximmum of two number 
    void max(int a, int b) {
        cout << "Maximum of two numbers = " << (a > b ? a : b) << endl;
    }
     //maximumm of three number 
     void max(int a, int b, int c) {
        cout << "Maximum of three numbers = " << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << endl;
}
//maximum of two floating numbers
    void max(float a, float b) {
        cout << "Maximum of two floating numbers = " << (a > b ? a : b) << endl;
    }
    
  };
  int main()
   {
    maximun m;
    m.max(10, 20);
    m.max(5,8, 2);
    m.max(4.5f, 2.3f);
    return 0;
}
