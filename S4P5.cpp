#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }

        void display() const {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};
Student compare(const Student &s1, const Student &s2) {
    if (s1.marks > s2.marks)
        return s1;   
    else
        return s2;
}

int main() {
    Student a("Bhawana", 85);
    Student b("Noor", 92);

    cout << "Student 1: ";
    a.display();
    cout << "Student 2: ";
    b.display();

    Student topper = compare(a, b);

    cout << "\nStudent with higher marks:\n";
    topper.display();

    return 0;
}