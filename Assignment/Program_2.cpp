//write a c++ program to define a class called student with datamember as roll number, name and marks, define the appropriate member function 
//1.setdata 2.display for reading and displaying the data and also define a member function called sort_data() to sort 5 students resukts according to rollnumber, name and marks
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void setData() {
        cout << "Enter Roll No, Name and Marks: ";
        cin >> roll >> name >> marks;
    }

    void display() {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }

    void sort_data(Student s[], int n) {
        int choice;
        cout << "\nSort by:\n1. Roll Number\n2. Name\n3. Marks\nEnter your choice: ";
        cin >> choice;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                bool swap_needed = false;

                if (choice == 1 && s[i].roll > s[j].roll)
                    swap_needed = true;
                else if (choice == 2 && s[i].name > s[j].name)
                    swap_needed = true;
                else if (choice == 3 && s[i].marks < s[j].marks)
                    swap_needed = true;

                if (swap_needed) {
                    Student temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }
};

int main() {
    Student s[5];

    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; i++)
        s[i].setData();

    s[0].sort_data(s, 5);

    cout << "\nSorted Student Details:\n";
    cout << "Roll\tName\tMarks\n";
    for (int i = 0; i < 5; i++)
        s[i].display();

    return 0;
}
