//write a program to implement postdecrement using member and friend function
// Post-decrement using member function
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Post-decrement using member function
    Number operator--(int) { 
        Number temp = *this; // store old value
        value--;             // decrement value
        return temp;         // return old value
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(10);
    cout << "Before decrement: ";
    n.display();

    Number result = n--; // post-decrement

    cout << "After post-decrement: ";
    n.display();

    cout << "Returned value (before decrement): ";
    result.display();

    return 0;
}


// Post-decrement using friend function
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    friend Number operator--(Number &n, int); // Declaration

    void display() {
        cout << "Value = " << value << endl;
    }
};

// Friend function definition
Number operator--(Number &n, int) {
    Number temp = n;  // store current value
    n.value--;        // decrement actual object
    return temp;      // return old value
}

int main() {
    Number n(15);
    cout << "Before decrement: ";
    n.display();

    Number result = n--; // Calls friend function

    cout << "After post-decrement: ";
    n.display();

    cout << "Returned value (before decrement): ";
    result.display();

    return 0;
}

