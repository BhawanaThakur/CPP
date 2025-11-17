#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    int code;
    string name;
    int quantity;

    void read() {
        cin >> code >> name >> quantity;
    }

    Item operator+(Item &other) {
        Item temp;
        temp.code = code;
        temp.name = name;
        temp.quantity = quantity + other.quantity;
        return temp;
    }

    void display() {
        cout << code << " " << name << " " << quantity << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Item* A = new Item[n];
    Item* B = new Item[n];
    Item* C = new Item[n];

    for (int i = 0; i < n; i++) A[i].read();
    for (int i = 0; i < n; i++) B[i].read();

    for (int i = 0; i < n; i++) {
        if (A[i].code == B[i].code)
            C[i] = A[i] + B[i];
        else
            C[i] = A[i];
    }

    for (int i = 0; i < n; i++)
        C[i].display();

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}