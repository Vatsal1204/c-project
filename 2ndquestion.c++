#include <iostream>
using namespace std;
class Car {
    string model;
    int year;
    float speed;
public:
    void setCar(string m, int y, float s) {
        model = m;
        year = y;
        speed = s;
    }
    void display() {
        cout << "Model: " << model << ", Year: " << year << ", Speed: " << speed << " km/h" << endl;
    }
};
int main() {
    Car c1, c2;
    c1.setCar("Tesla", 2022, 150);
    c2.setCar("Ford", 2020, 130);
    c1.display();
    c2.display();
    return 0;
}
