//Rectangle Area 
#include <iostream>
using namespace std;
class rectangle{
    private:
    float length,breadth;
    public:
    void input(){
        cout << "Enter length of reactangle:";
        cin>>length;
        cout << " Enter breadth of reactangle:";
        cin >> breadth;

    }
    float calculateArea(){
        return length*breadth;

    }
    void displayArea (){
        cout<< "area of rectangle ="<< calculateArea()<<endl;

    } 

};
int main(){
    rectangle r;
    r.input ();
    r.displayArea();
    return 0;
}