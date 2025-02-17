#include <iostream>
using namespace std;
class Employee {
public:
    string name;
    int age;
    Employee(string n, int a) {
        name = n;
        age = a;
    }
    int operator-(Employee e) {
        return abs(age - e.age);
    }
};
int main() {
    Employee e1("rohan", 25), e2("mohan", 28);
    cout << "Age Difference: " << e1 - e2 << " years" << endl;
    return 0;
}
