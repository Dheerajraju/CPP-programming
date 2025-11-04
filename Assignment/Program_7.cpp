//Overload Insertion (<<) and Extraction (>>) Operators Using Friend Function
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Operator overloading
    friend istream& operator>>(istream &in, Student &s) {
        in >> s.roll >> s.name;
        return in;
    }

    friend ostream& operator<<(ostream &out, const Student &s) {
        out << s.roll << " " << s.name;
        return out;
    }
};

int main() {
    Student s;
    cout << "Enter roll number and name: ";
    cin >> s;
    cout << "Student Details: " << s;
    return 0;
}
