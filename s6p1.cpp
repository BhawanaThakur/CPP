#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    public:
    void showPerson()
    {
        cout<<"Name:"<<name<<"Age:"<<age;
    }
};
class Student:public Person{
    private:
    string course;
    public:
    void showStudent()
    {
        showPerson();
        cout<<"course"<<course;
    }
};
int main(){
    Person p1;
    Student s1;
    s1.showStudent();
    return 0;
}
