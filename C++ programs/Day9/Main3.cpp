#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    string phone;
    string USN;
    float fees;
    string transport;
    string sportsClub;
    string musicClub;
};

void addStudent(vector<Student> &students) {
    Student s;
    cout << "Enter name: ";
    cin>>s.name;
    cout << "Enter phone: ";
    cin >> s.phone;
    cout << "USN: ";
    cin>>s.USN;
    cout << "Enter fees: ";
    cin >> s.fees;
    char opt;

    cout << "Uses transport? (y/n): ";
    cin >> opt;
    if (opt == 'y')
        s.transport = "Yes";
    else if (opt == 'Y')
        s.transport = "Yes";
    else
        s.transport = "No";

    cout << "In sports club? (y/n): ";
    cin >> opt;
    if (opt == 'y')
        s.sportsClub = "Yes";
    else if (opt == 'Y')
        s.sportsClub = "Yes";
    else
        s.sportsClub = "No";

    cout << "In music club? (y/n): ";
    cin >> opt;
    if (opt == 'y')
        s.musicClub = "Yes";
    else if (opt == 'Y')
        s.musicClub = "Yes";
    else
        s.musicClub = "No";

    students.push_back(s);
}

void showStudents(const vector<Student> &students) {
    for (int i = 0; i < students.size(); i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Phone: " << students[i].phone << "\n";
        cout << "USN: " << students[i].USN << "\n";
        cout << "Fees: " << students[i].fees << "\n";
        cout << "Transport: " << students[i].transport << "\n";
        cout << "Sports Club: " << students[i].sportsClub << "\n";
        cout << "Music Club: " << students[i].musicClub << "\n";
    }
}

int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "\n1. Add Student\n2. Show Students\n3. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1)
            addStudent(students);
        else if (choice == 2)
            showStudents(students);
    } while (choice != 3);
	return 0;
}