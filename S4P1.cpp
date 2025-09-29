#include<iostream>
using namespace std;
class Point{
    public:
    int x,y;
    public:
    Point(int a,int b){
        x=a;
        y=b;
    }
    Point(){
        x=0;
        y=0;
    }
   void display(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};
void increment(Point p){
    p.x++;
    p.y++;
    cout<<"New values:"<<endl;
}
    
int main(){
    Point p1(12,40);
    p1.display();
    increment(p1);
    p1.display();
    return 0;

}
