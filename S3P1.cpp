#include<iostream>
using namespace std;
class Student{
    public
    int Roll no;
    string name;
    }
    void getData(int r,string n){
        Roll no=r;
        name=n;
    }void display(){
        cout<<"Roll no:"<<Roll no<<endl;
        cout<<"Name:"<<name<<endl;
        
    }
};
int main(){
    Student s1;
    s1.getData(3,"Madhu");
    s1.display();
    return 0;
}