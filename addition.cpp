#include <iostream>
using namespace std;
class Add{
    int num1,num2,num3;
    
public:
    void get(){
        cout<<"Enter the first number:\n";
        cin>>num1;
        cout<<"Enter the second number: \n";
        cin>>num2;
    };
    
    void addition(){
        
        
        num3 = num1 + num2 ;
        cout<<"The results is "<<num3;
    };
};
int main() {

    Add a;
    a.get();
    a.addition();
    return 0;
};