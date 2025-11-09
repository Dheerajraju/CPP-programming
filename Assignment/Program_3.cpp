//write a program to implement following operator? ob3 = 0b1*ob2/ob4
#include <iostream>
using namespace std;

class Number {
public:
    float value;

    void getData() {
        cin >> value;
    }

    Number operator*(Number n) {
        Number temp;
        temp.value = value * n.value;
        return temp;
    }

    Number operator/(Number n) {
        Number temp;
        temp.value = value / n.value;
        return temp;
    }
};

int main() {
    Number ob1, ob2, ob3, ob4;

    cout << "Enter ob1, ob2 and ob4 values: ";
    ob1.getData();
    ob2.getData();
    ob4.getData();

    ob3 = ob1 * ob2 / ob4;

    cout << "Result = " << ob3.value;
    return 0;
}
