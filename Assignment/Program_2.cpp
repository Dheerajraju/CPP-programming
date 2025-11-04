//write a c++ program to define a class called student with datamember as roll number, name and marks, define the appropriate member function 
//1.setdata 2.display for reading and displaying the data and also define a member function called sort_data() to sort 5 students resukts according to rollnumber, name and marks
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
    int roll_no;
    string name;
    float marks;

    void setData() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << roll_no << "\t" << name << "\t" << marks << endl;
    }

    // Static function to sort array of students
    static void sort_data(Student s[], int n) {
        int choice;
        cout << "\nSort by: \n1. Roll Number \n2. Name \n3. Marks\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                sort(s, s + n, [](Student a, Student b) {
                    return a.roll_no < b.roll_no;
                });
                break;

            case 2:
                sort(s, s + n, [](Student a, Student b) {
                    return a.name < b.name;
                });
                break;

            case 3:
                sort(s, s + n, [](Student a, Student b) {
                    return a.marks > b.marks;  // Higher marks first
                });
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
};

int main() {
    Student s[5];

    // Input student data
    for(int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        s[i].setData();
    }

    // Sorting
    Student::sort_data(s, 5);

    // Display after sorting
    cout << "\nRoll No\tName\tMarks\n";
    for(int i = 0; i < 5; i++) {
        s[i].display();
    }

    return 0;
}

