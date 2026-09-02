// Number analyzer programe
# include <iostream>
using namespace std;
class number {
    private:
    int num;
    public:
    void input() {
        cout<< "Enter a number:";
        cin>> num;

    } 
    bool isEven()
    {
        if (num % 2 == 0) 
            return true;
         else 
           return false;
        
    }
    void display () 
    {
        if(isEven())
            cout<< "the number is Even ";
        else
            cout<< "the number is Odd"; 
    }
};
int main( ){
    number n;
    n.input();
    n.display ();
    return 0;
}