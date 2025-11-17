#include <iostream>
#include <string>
using namespace std;

class Flight {
public:
    string flightNo;
    string source;
    string destination;
    int seatsAvailable;

    void read() {
        cin >> flightNo >> source >> destination >> seatsAvailable;
    }

    void display() {
        cout << flightNo << " " << source << " " << destination << " " << seatsAvailable << endl;
    }

    void bookSeats(int n) {
        if (n <= seatsAvailable)
            seatsAvailable -= n;
    }
};

void showFlightsTo(Flight* arr, int n, string dest) {
    for (int i = 0; i < n; i++) {
        if (arr[i].destination == dest)
            arr[i].display();
    }
}

int main() {
    int n;
    cin >> n;
    Flight* flights = new Flight[n];

    for (int i = 0; i < n; i++)
        flights[i].read();

    string dest;
    cin >> dest;

    showFlightsTo(flights, n, dest);

    int bookingIndex, seatsToBook;
    cin >> bookingIndex >> seatsToBook; // index of flight to book
    flights[bookingIndex].bookSeats(seatsToBook);

    showFlightsTo(flights, n, dest);

    delete[] flights;
    return 0;
}