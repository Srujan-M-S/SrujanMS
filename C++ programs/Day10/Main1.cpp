#include <iostream>
using namespace std;

class Ninja {
    string name;
    int chakra;

public:
    // Default
    Ninja() {
        name = "Unknown";
        chakra = 0;
        cout << "Default Ninja summoned." << endl;
    }

    // Parameterized
    Ninja(string n, int c) {
        name = n;
        chakra = c;
        cout << "Ninja " << name << " with chakra " << chakra << endl;
    }

    // Copy
    Ninja(Ninja &other) {
        name = other.name;
        chakra = other.chakra;
        cout << "Clone of " << name << " created!" << endl;
    }

    // Destructor
    ~Ninja() {
        cout << "Ninja " << name << " disappeared in smoke ??" << endl;
    }

    void show() {
        cout << name << "'s chakra: " << chakra << endl;
    }
};

int main() {
    Ninja n1("Sasuke", 95);
    Ninja n2 = n1;  // copy constructor
    n2.show();

    Ninja n3;
    return 0;
}