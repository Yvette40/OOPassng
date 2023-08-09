#include <iostream>
using namespace std;
class Shapes{
    protected:
    float width,length,area,perimeter;

    public:
    //GET INPUT FROM USER 
    void get_length(){
        cout<<"Enter the length of the rectangle : \n";
        cin>>length;
        cout<<"Enter the width of the rectangle :\n ";
        cin>>width;
    }
    // CALCULATE AREA
    int findarea(){
        
        area = length * width ;
        cout<<"The results is "<<area;
        
        return area;
    };
    //CALCULATE PERIMETER
    int findperimeter(){
        
        perimeter = 2*(length+width) ;
        cout<<"\n The results is "<<perimeter;
        
        return perimeter;
    };

};
//CHILD CLASS INHERIT BASE CLASS
class rectangle : public Shapes{

};
int main() {
    //ASSIGN A CLASS
    rectangle a;
    a.get_length();
    a.findarea();
    a.findperimeter();

    return 0;
}