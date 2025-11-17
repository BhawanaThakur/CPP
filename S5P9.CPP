#include <iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    void read() {
        cin >> real >> imag;
    }

    void display() {
        cout << real << " " << imag << endl;
    }

    Complex operator+(Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator*(Complex &c) {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }
};

int main() {
    int n;
    cin >> n;

    Complex* arr = new Complex[n];
    for (int i = 0; i < n; i++)
        arr[i].read();

    Complex sum;
    sum.real = 0;
    sum.imag = 0;

    Complex product;
    product.real = 1;
    product.imag = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    sum.display();
    product.display();

    delete[] arr;
    return 0;
}