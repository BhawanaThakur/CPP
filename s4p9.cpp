#include <iostream>
using namespace std;

class Matrix {
public:
    int a[2][2];

    Matrix() {
        a[0][0] = a[0][1] = a[1][0] = a[1][1] = 0;
    }

    Matrix add(Matrix &m) {
        Matrix temp;
        temp.a[0][0] = a[0][0] + m.a[0][0];
        temp.a[0][1] = a[0][1] + m.a[0][1];
        temp.a[1][0] = a[1][0] + m.a[1][0];
        temp.a[1][1] = a[1][1] + m.a[1][1];
        return temp;
    }
};

int main() {
    Matrix m1, m2, m3;

    m1.a[0][0] = 1; m1.a[0][1] = 2;
    m1.a[1][0] = 3; m1.a[1][1] = 4;

    m2.a[0][0] = 5; m2.a[0][1] = 6;
    m2.a[1][0] = 7; m2.a[1][1] = 8;

    m3 = m1.add(m2);

    cout << m3.a[0][0] << " " << m3.a[0][1] << endl;
    cout << m3.a[1][0] << " " << m3.a[1][1] << endl;

    return 0;
}