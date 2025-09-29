#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    public:
    Complex(int r,int i){
       real=r;
       imag=i;
    }
    Complex(){
        real=0;
        imag=0;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
void addComplex(Complex c1,Complex c2){
     Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    cout<<"Result of addition is:"<<  temp.real<<"+"<< temp.imag<<"i"<<endl;
}
int main(){
    Complex c1(1,7);
    cout<<"First number:";
    c1.display();
     Complex c2(2,7);
     cout<<"Second number:";
    c2.display();
    addComplex(c1,c2);
     return 0;
}

