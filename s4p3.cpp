#include <iostream>
using namespace std;
class Circle{
    public:
    float radius;
    Circle(){
        radius=0;
    }
    Circle( float r){
        radius=r;
    }
    void showRadius(){
        cout<<"Radius:"<<radius<<endl;
    }
};
void increaseRadius(Circle*c){
    c->radius+=5;
}
int main(){
    Circle c1(10);
c1.showRadius();
increaseRadius(&c1);
cout<<"After increasing:"<<endl;
c1.showRadius();
return 0;
}






