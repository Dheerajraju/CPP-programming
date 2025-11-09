//Write a program to swap two members usinig friend function
//example:
//input: a = 5, b =9
//output a=9, b=5
#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    friend void swapValues(Swap &s);

    void getData() {
        cin >> a >> b;
    }

    void show() {
        cout << a << " " << b << endl;
    }
};

void swapValues(Swap &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main() {
    Swap s;
    cout << "Enter two numbers: ";
    s.getData();

    cout << "Before swap: ";
    s.show();

    swapValues(s);

    cout << "After swap: ";
    s.show();

    return 0;
}
