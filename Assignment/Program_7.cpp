//Overload Insertion (<<) and Extraction (>>) Operators Using Friend Function
#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
public:
    friend istream& operator>>(istream &in, Student &s);
    friend ostream& operator<<(ostream &out, Student &s);
};

istream& operator>>(istream &in, Student &s) {
    cout << "Enter Roll No: ";
    in >> s.roll;
    cout << "Enter Name: ";
    in >> s.name;
    return in;
}

ostream& operator<<(ostream &out, Student &s) {
    out << "Roll No: " << s.roll << ", Name: " << s.name;
    return out;
}

int main() {
    Student s;
    cin >> s;
    cout << s;
    return 0;
}
