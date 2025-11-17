#include <iostream>
using namespace std;

class Car {
public:
    string model;
    string company;
    float price;

    void read() {
        cin >> model >> company >> price;
    }

    void display() {
        cout << model << " " << company << " " << price << endl;
    }
};

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main() {
    int n;
    cin >> n;
    Car* cars = new Car[n];

    for (int i = 0; i < n; i++)
        cars[i].read();

    string searchCompany;
    cin >> searchCompany;
    string searchLower = toLower(searchCompany);

    for (int i = 0; i < n; i++) {
        if (toLower(cars[i].company) == searchLower)
            cars[i].display();
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (cars[i].price > cars[maxIndex].price)
            maxIndex = i;
    }

    cars[maxIndex].display();

    delete[] cars;
    return 0;
}