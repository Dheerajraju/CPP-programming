//write a program to implement following operator ob3 = (ob1 + ob2) *ob4
#include <iostream>
using namespace std;

class Number {
private:
    float value;

public:
    // Default & Parameterized Constructor
    Number(float v = 0) {
        value = v;
    }

    // Function to input value
    void input() {
        cin >> value;
    }

    // Function to display value
    void display() {
        cout << value << endl;
    }

    // Operator overloading for +
    Number operator + (Number &obj) {
        Number temp;
        temp.value = this->value + obj.value;
        return temp;
    }

    // Operator overloading for *
    Number operator * (Number &obj) {
        Number temp;
        temp.value = this->value * obj.value;
        return temp;
    }
};

int main() {
    Number ob1, ob2, ob3, ob4;

    cout << "Enter value for ob1: ";
    ob1.input();

    cout << "Enter value for ob2: ";
    ob2.input();

    cout << "Enter value for ob4: ";
    ob4.input();

    // Expression ob3 = (ob1 + ob2) * ob4
    ob3 = (ob1 + ob2) * ob4;

    cout << "\nResult (ob3 = (ob1 + ob2) * ob4) = ";
    ob3.display();

    return 0;
}
