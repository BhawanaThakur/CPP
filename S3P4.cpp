#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
     int id;
     double salary;
Employee(int i,double s){
    id=i;
    salary=s;
}
void outputData(){
    cout<<"EmployeId"<<id<<endl;
    cout<<"Salary"<<salary<<endl;
}};
int main(){
Employee E1(123,20200);
E1.outputData();
Employee E2(124,35000);
E2.outputData();
return 0;
}