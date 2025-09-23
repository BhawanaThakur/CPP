#include<iostream>
using namespace std;
class Car{
    string brand;
    double price;
    public:
    void inputData(string b,double p){
        brand=b;
        price=p;
    }
    void outputData(){
        cout<<"Brand:"<<brand<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main(){
    Car c1;
    c1.inputData("HYUNDAI",20000);
    c1.outputData();
    Car c2(c1);
    c2.outputData();
    return 0;
}