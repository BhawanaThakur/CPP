#include<iostream>
using namespace std;
class Circle{ public:
    int radius;
    public:
    Circle(){
        cout<<"Default constructor."<<endl;
        radius=1;
    }
    Circle(double r){
        cout<<"Parameterized constructor."<<endl;
        radius=r;
    }
    void area(){
        double a,r;
        cout<<"Enter the radius."<<endl;
        cin>>r;
        a=3.14*r*r;
        cout<<"Area of circle is:"<<a<<endl;
        
    }
};
int main(){
 double r;
Circle c1;
c1.area();
Circle c2(r);
c2.area();
return 0;
}