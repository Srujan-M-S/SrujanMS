#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Car {
    int id;
    string model;
    double pricePerDay;
    bool isAvailable;

    Car(int id, string model, double price)
        : id(id), model(model), pricePerDay(price), isAvailable(true) {}
};

struct Booking {
    int bookingId;
    string customerName;
    int carId;
    int days;
    double totalAmount;
    string upiId;
};

vector<Car> cars;
vector<Booking> bookings;
int nextBookingId = 1;

// Function to add dummy cars to the system
void initializeCars() {
    cars.push_back(Car(1, "BMW", 40000));
    cars.push_back(Car(2, "Ferrari", 100000));
    cars.push_back(Car(3, "Lamborghini", 120000));
}

// Display available cars
void viewAvailableCars() {
    cout << "\nAvailable Cars:\n";
    for (const auto& car : cars) {
        if (car.isAvailable) {
            cout << "ID: " << car.id << ", Model: " << car.model
                 << ", Price/Day: ?" << car.pricePerDay << endl;
        }
    }
}

// Book a car
void bookCar() {
    string name, upiId;
    int carId, days;

    cout << "\nEnter your name: ";
    cin.ignore();
    getline(cin, name);

    viewAvailableCars();

    cout << "Enter the ID of the car to book: ";
    cin >> carId;
    cout << "Enter number of days: ";
    cin >> days;

    for (auto& car : cars) {
        if (car.id == carId && car.isAvailable) {
            double totalAmount = car.pricePerDay * days;

            cout << "Total amount to pay: ?" << totalAmount << endl;
            cout << "Enter your upi ID to proceed with payment: ";
            cin.ignore();
            getline(cin, upiId);

            car.isAvailable = false;
            bookings.push_back({nextBookingId++, name, carId, days, totalAmount, upiId});
            cout << "Booking successful! Booking ID: " << nextBookingId - 1 << endl;
            return;
        }
    }

    cout << "Car not available or invalid ID.\n";
}

// View all bookings
void viewBookings() {
    cout << "\nCurrent Bookings:\n";
    for (const auto& booking : bookings) {
        cout << "Booking ID: " << booking.bookingId
             << ", Name: " << booking.customerName
             << ", Car ID: " << booking.carId
             << ", Days: " << booking.days
             << ", Total: ?" << booking.totalAmount
             << ", UPI ID: " << booking.upiId << endl;
    }
}

// Cancel a booking
void cancelBooking() {
    int id;
    cout << "\nEnter Booking ID to cancel: ";
    cin >> id;

    for (size_t i = 0; i < bookings.size(); ++i) {
        if (bookings[i].bookingId == id) {
            for (auto& car : cars) {
                if (car.id == bookings[i].carId) {
                    car.isAvailable = true;
                    break;
                }
            }
            bookings.erase(bookings.begin() + i);
            cout << "Booking canceled successfully.\n";
            return;
        }
    }

    cout << "Booking ID not found.\n";
}

int main() {
    initializeCars();

    int choice;
    do {
        cout << "\n===== ROYAL'S CAR RENTAL SYSTEM BY SMS =====\n";
        cout << "1. View Available Cars\n";
        cout << "2. Book a Car\n";
        cout << "3. View Bookings\n";
        cout << "4. Cancel Booking\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: viewAvailableCars(); break;
            case 2: bookCar(); break;
            case 3: viewBookings(); break;
            case 4: cancelBooking(); break;
            case 5: cout << "THANK YOU FOR USING THE ROYAL'S CAR RENTAL SYSTEM BY SMS !\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

	return 0;
}