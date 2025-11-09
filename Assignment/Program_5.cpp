//write a program to implement predecrement operator function usinf member and friend fumction
//predrecement opertor using member function
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    void getData() {
        cin >> value;
    }

    // Pre-decrement using member function
    void operator--() {  
        --value;
    }

    void showData() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n;
    cout << "Enter value: ";
    n.getData();

    cout << "Before decrement: ";
    n.showData();

    --n;  // Calls member operator function

    cout << "After pre-decrement: ";
    n.showData();

    return 0;
}


//predrecement using friend function
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

    // Friend function declaration
    friend void operator--(Number &n);
};

// Friend function definition
void operator--(Number &n) {
    --n.value;  // Pre-decrement
}

int main() {
    Number n;
    cout << "Enter value: ";
    n.getData();

    cout << "Before decrement: ";
    n.showData();

    --n;  // Calls friend function

    cout << "After pre-decrement: ";
    n.showData();

    return 0;
}

