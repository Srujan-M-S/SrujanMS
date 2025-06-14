#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
class Train {
public:
    int trainNumber;
    string trainName;
    string source;
    string destination;

    struct ClassInfo {
        string className;
        int price;
        int availableSeats;
    };

    vector<ClassInfo> classes;

    Train(int number, string name, string src, string dest, vector<ClassInfo> cls)
        : trainNumber(number), trainName(name), source(src), destination(dest), classes(cls) {}

    void displayTrainInfo() {
        cout << "\nTrain No: " << trainNumber
             << ", Name: " << trainName
             << ", From: " << source
             << ", To: " << destination << "\n";

        cout << "Available Classes:\n";
        cout << left << setw(15) << "Class" << setw(10) << "Price" << "Seats Available\n";
        for (auto &c : classes) {
            cout << left << setw(15) << c.className
                 << setw(10) << c.price
                 << c.availableSeats << endl;
        }
    }
};

class Booking {
public:
    string passengerName;
    int trainNumber;
    string className;
    int seats;
    int totalPrice;

    Booking(string name, int tNum, string cls, int s, int price)
        : passengerName(name), trainNumber(tNum), className(cls), seats(s), totalPrice(price) {}

    void displayBooking() {
        cout << "Passenger: " << passengerName
             << ", Train No: " << trainNumber
             << ", Class: " << className
             << ", Seats: " << seats
             << ", Total Price: $" << totalPrice << endl;
    }
};

class TrainBookingSystem {
    vector<Train> trains;
    vector<Booking> bookings;

public:
    void addSampleTrains() {
        trains.push_back(Train(101, "Super Express", "CityA", "CityB", {
            {"Sleeper", 300, 50},
            {"AC", 700, 30},
            {"First Class", 1000, 20}
        }));

        trains.push_back(Train(102, "Night Rider", "CityC", "CityD", {
            {"Sleeper", 350, 40},
            {"AC", 750, 25},
            {"First Class", 1200, 15}
        }));
    }

    void showTrains() {
        cout << "\n==== Available Trains ====\n";
        for (auto &train : trains) {
            train.displayTrainInfo();
        }
    }

    void bookTicket() {
        string name, className;
        int tNumber, seats;

        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter Train Number: ";
        cin >> tNumber;

        Train* selectedTrain = nullptr;
        for (auto &train : trains) {
            if (train.trainNumber == tNumber) {
                selectedTrain = &train;
                break;
            }
        }

        if (!selectedTrain) {
            cout << "Train not found.\n";
            return;
        }

        selectedTrain->displayTrainInfo();
        cout << "Enter class name (e.g., Sleeper, AC, First Class): ";
        cin.ignore();
        getline(cin, className);

        cout << "Enter number of seats: ";
        cin >> seats;

        for (auto &c : selectedTrain->classes) {
            if (c.className == className) {
                if (c.availableSeats >= seats) {
                    c.availableSeats -= seats;
                    int totalPrice = c.price * seats;
                    bookings.push_back(Booking(name, tNumber, className, seats, totalPrice));
                    cout << "Booking successful! Total amount: $" << totalPrice << "\n";
                } else {
                    cout << "Not enough seats available.\n";
                }
                return;
            }
        }

        cout << "Class not found.\n";
    }

    void showBookings() {
        cout << "\n==== All Bookings ====\n";
        for (auto &b : bookings) {
            b.displayBooking();
        }
    }

    void menu() {
        int choice;
        do {
            cout << "\n=== Train Booking Menu ===\n";
            cout << "1. Show Available Trains\n";
            cout << "2. Book Ticket\n";
            cout << "3. Show Bookings\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: showTrains(); break;
                case 2: bookTicket(); break;
                case 3: showBookings(); break;
                case 0: cout << "Thank you for using Train Booking System!\n"; break;
                default: cout << "Invalid choice.\n";
            }
        } while (choice != 0);
    }
};

int main()
{
    TrainBookingSystem system;
    system.addSampleTrains();
    system.menu();
    return 0;
}