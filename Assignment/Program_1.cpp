//Write a program to swap two members usinig friend function
//example:
//input: a = 5, b =9
//output a=9, b=5
#include <iostream>
using namespace std;

class Swap {
private:
    int a, b;

public:
    // Function to take input
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    // Function to display values
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    // Friend function declaration
    friend void swapValues(Swap &s);
};

// Friend function definition
void swapValues(Swap &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main() {
    Swap s;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    s.setData(x, y);

    cout << "Before swapping: ";
    s.display();

    // Call friend function
    swapValues(s);

    cout << "After swapping: ";
    s.display();

    return 0;
}

