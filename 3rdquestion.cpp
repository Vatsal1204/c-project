#include <iostream>
using namespace std;
class Device {
protected:
    string brand;
    int powerConsumption;
public:
    void setDevice(string b, int p) {
        brand = b;
        powerConsumption = p;
    }
    void display() {
        cout << "Brand: " << brand << ", Power: " << powerConsumption << "W" << endl;
    }
};
class Laptop : public Device {
public:
    void show() {
        cout << "Laptop = ";
        display();
    }
};
class Smartphone : public Device {
public:
    void show() {
        cout << "Smartphone = ";
        display();
    }
};
int main() {
    Laptop l;
    Smartphone s;
    l.setDevice("Dell", 65);
    s.setDevice("Samsung", 15);
    l.show();
    s.show();
    return 0;
}
