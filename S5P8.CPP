#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int id;
    string name;
    float price;
    float discount;

    float finalPrice() {
        return price - (price * discount / 100);
    }

    void read() {
        cin >> id >> name >> price >> discount;
    }

    void display() {
        cout << id << " " << name << " " << finalPrice() << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Product* cart = new Product[n];

    for (int i = 0; i < n; i++)
        cart[i].read();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cart[j].finalPrice() < cart[j + 1].finalPrice()) {
                Product temp = cart[j];
                cart[j] = cart[j + 1];
                cart[j + 1] = temp;
            }
        }
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        cart[i].display();
        total += cart[i].finalPrice();
    }

    cout << "Total " << total << endl;

    delete[] cart;
    return 0;
}