#include <iostream>
using namespace std;
class Student {
    string name;
    int rollNumber;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << endl;
    }
};
int main() {
    Student students[] = {
        Student("rohan", 1),
        Student("mohan", 2),
        Student("sohan", 3)
    };
    for (int i = 0; i < 3; i++)
        students[i].display();
    return 0;
}
