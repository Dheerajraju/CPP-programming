//write a program to implement postdecrement using member and friend function
// Post-decrement using member function
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    void getData() {
        cin >> value;
    }

    void showData() {
        cout << "Value = " << value << endl;
    }

    // Post-decrement using member function
    void operator--(int) {
        value--;   // Just decrement, don’t return old value
    }
};

int main() {
    Number n;
    cout << "Enter value: ";
    n.getData();

    cout << "Before decrement: ";
    n.showData();

    n--;  // Calls member function

    cout << "After post-decrement: ";
    n.showData();

    return 0;
}


// Post-decrement using friend function
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    void getData() {
        cin >> value;
    }

    void showData() {
        cout << "Value = " << value << endl;
    }

    friend void operator--(Number &n, int);  // Friend function
};

void operator--(Number &n, int) {
    n.value--;  // Just decrement
}

int main() {
    Number n;
    cout << "Enter value: ";
    n.getData();

    cout << "Before decrement: ";
    n.showData();

    n--;  // Calls friend function

    cout << "After post-decrement: ";
    n.showData();

    return 0;
}

