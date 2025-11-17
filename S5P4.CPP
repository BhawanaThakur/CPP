#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string playerName;
    int matches;
    int runs;
    float average;

    void read() {
        cin >> playerName >> matches >> runs;
        average = (float)runs / matches;
    }

    void display() {
        cout << playerName << " " << matches << " " << runs << " " << average << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Cricketer* arr = new Cricketer[n];

    for (int i = 0; i < n; i++)
        arr[i].read();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].average < arr[j + 1].average) {
                Cricketer temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        arr[i].display();

    delete[] arr;
    return 0;
}