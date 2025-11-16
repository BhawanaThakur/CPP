#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }

    ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    cout << "Creating Derived object...\n";
    Derived d;  // Object of Derived class
    cout << "Derived object created.\n";

    return 0;
}