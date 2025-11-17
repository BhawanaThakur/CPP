#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;
    float price;

    void read() {
        cin >> bookID;
        cin.ignore();
        getline(cin, title);
        getline(cin, author);
        cin >> price;
    }

    void display() {
        cout << bookID << " " << title << " " << author << " " << price << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Book* arr = new Book[n];
    for (int i = 0; i < n; i++)
        arr[i].read();

    cin.ignore();
    string searchAuthor;
    getline(cin, searchAuthor);

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i].author.find(searchAuthor) != string::npos) {
            arr[i].display();
            found = true;
        }
    }

    if (!found)
        cout << "No book found";

    delete[] arr;
    return 0;
}