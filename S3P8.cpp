#include<iostream>  
using namespace std;
class Complex{
    public:
    double real;
    double imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(float r,float i){
        real=r;
        imag=i;
    }
    Complex add(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void displayData(){
    cout<<real<<" + "<<imag<<"i"<<endl;
    }   
};
int main(){
    Complex c1(2.5,3.5);
    Complex c2(1.5,2.5);
    cout<<"First number is:"<<endl;
    c1.displayData();
    cout<<"Second number is:"<<endl;
    c2.displayData();
    Complex c3=c1.add(c2);
    cout<<"New number is:"<<endl;
    c3.displayData();
    return 0;
}