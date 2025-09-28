#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        Length=l;
        Breadth=b;
    }
    Rectangle(){
        Length=0;
        Breadth=0;
    }
    void displayData();
    int area();
};
void Rectangle::displayData(){
    cout<<"Length: "<<Length<<endl;
    cout<<"Breadth: "<<Breadth<<endl;
}
int Rectangle::area(){
    return Length*Breadth;
}
int main(){
    Rectangle r1(10,5);
    r1.displayData();
    cout<<"Area: "<<r1.area()<<endl;
    return 0;
}