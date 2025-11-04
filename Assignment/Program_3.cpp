//write a program to implement following operator? ob3 = 0b1*ob2/ob4
#include <iostream>
using namespace std;

class Number {
private:
    float value;   // Data member

public:
    // Default and Parameterized Constructor
    Number(float v = 0) {
        value = v;
    }

    // Function to read input
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }

    // Function to display output
    void display() {
        cout << value << endl;
    }

    // Overload * operator
    Number operator * (Number &obj) {
        Number temp;
        temp.value = this->value * obj.value;
        return temp;
    }

    // Overload / operator
    Number operator / (Number &obj) {
        Number temp;
        if (obj.value != 0)
            temp.value = this->value / obj.value;
        else {
            cout << "Error: Division by zero!" << endl;
            temp.value = 0;
        }
        return temp;
    }
};

int main() {
    Number ob1, ob2, ob4, ob3;

    cout << "Enter value for ob1: ";
    ob1.input();

    cout << "Enter value for ob2: ";
    ob2.input();

    cout << "Enter value for ob4: ";
    ob4.input();

    // Expression: ob3 = ob1 * ob2 / ob4
    ob3 = ob1 * ob2 / ob4;

    cout << "\nResult (ob3 = ob1 * ob2 / ob4) = ";
    ob3.display();

    return 0;
}
