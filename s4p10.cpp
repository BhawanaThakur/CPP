#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    int salary;

    Employee(int i = 0, int s = 0) {
        id = i;
        salary = s;
    }

    void updateSalary(Employee &e) {
        salary = e.salary;
    }

    void showSalary() {
        cout << "Employee ID: " << id << ", Salary: " << salary << endl;
    }
};

void swap(Employee *e1, Employee *e2) {
    int temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}

int main() {
    Employee e1(1, 5000);
    Employee e2(2, 8000);

    cout << "Salaries before update:\n";
    e1.showSalary();
    e2.showSalary();

    e1.updateSalary(e2);
    cout << "\nSalaries after updating e1 from e2:\n";
    e1.showSalary();
    e2.showSalary();

    swap(&e1, &e2);
    cout << "\nSalaries after swapping:\n";
    e1.showSalary();
    e2.showSalary();

    return 0;
}