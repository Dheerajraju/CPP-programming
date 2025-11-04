//write a program to implement predecrement operator function usinf member and friend fumction
//predrecement opertor using member function
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {   // Constructor
        value = v;
    }

    // Pre-decrement using member function
    void operator--() {  
        --value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(10);
    cout << "Before decrement: ";
    n.display();

    --n;   // Calls member function

    cout << "After pre-decrement: ";
    n.display();

    return 0;
}


//predrecement using friend function
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Friend function for pre-decrement
    friend Number operator--(Number &n);

    void display() {
        cout << "Value = " << value << endl;
    }
};

// Friend function definition
Number operator--(Number &n) {
    --n.value;   // Pre-decrement
    return n;
}

int main() {
    Number n(15);
    cout << "Before decrement: ";
    n.display();

    --n;   // Calls friend function

    cout << "After pre-decrement: ";
    n.display();

    return 0;
}
