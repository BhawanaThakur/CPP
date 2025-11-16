#include<iostream>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    float marks[5];
    public:
    Student()
    {
        rollno=0;
        name=0;
        for(int i=0;i<5;i++)
        {
            marks[i]=0;
        }

    }
    Student(int r,string n,float m[i])
    {
        rollno=r;
        name=n;
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
    }
    void setData(){
        cout<<"Enter the roll no";
        cin>>rollno;
        cout<<"Enter name";
        cin>>name;
        total=0;
        cout<<"Enter marks of 5 subjects:";
        for(int i=0;i<n;i++){
            cin<<marks[i];
            total+=marks[i];
        }
    }
    void displayData(){
        cout<<"Name:"<<name<<"\n Rollno:"<<rollno<<"Total marks:"<<total;
    }
    string setName(){
        return string;
    }
    int setRollno(){
        return int
    }
};
int main(){
    int n;
    cout<<"Enter the number of students.";
    cin>>n;
    Student stArr[n];
    for(int i=0;i<n;i++)
    {
        stArr[i].setData();
    }
    for(int i=0;i<n;i++)
    {
        stArr[].displayData();
    }
    int topper=0;
    for(int i=0;i<n;i++){
        if(stArr[i].getMarks()>stArr[topper].getMarks){
            topper=i;
        }
    }
    cout<<"Topper:"<<stArr[Topper].getName()<<"with"<<stArr[topper].displayData();
    return 0;
}

