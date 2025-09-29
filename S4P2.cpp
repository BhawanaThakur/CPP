#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }

void display(){
    cout<<"length="<<l<<endl;
    cout<<"breadth="<<b<<endl;
}};
void scale(Rectangle &r){
    r.length*=2;
    r.breadth*=2;
cout<<"Values after scaling:"<<endl;
}
int main(){
    Rectangle R1(2,4);
    R1.display();
    scale(R1);
    R1.display();
    return 0;
}