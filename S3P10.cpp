#include<iostream>
using namespace std;
class Report{
    string name;
    int rollno;
    int marks[5];
    string grade;
    public:
    void inputData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter rollno: ";
        cin>>rollno;
        cout<<"Enter marks in 5 subjects: ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void calculateGrade(){
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        float percentage = total / 5.0;
        
        if(percentage>=90){
            grade="A";
        }
        else if(percentage>=80){
            grade="B";
        }
        else if(percentage>=70){
            grade="C";
        }
        else if(percentage>=60){
            grade="D";
        }
        else{
            grade="Fail";
        }
    }
    void displayReport(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: ";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<"  " ;
        } 
        void calculateGrade();{
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        float percentage = total / 5.0;
        cout << "\nTotal = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;
        cout<<"Grade: "<<grade<<endl;
    }
    }

};
 int main(){
    Report r1,r2,r3;
    r1.inputData();
    r1.calculateGrade();
    r1.displayReport();
    r2.inputData();
    r2.calculateGrade();
    r2.displayReport();
    r3.inputData();
    r3.calculateGrade();
    r3.displayReport();

    return 0;
}