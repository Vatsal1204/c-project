#include <iostream>
using namespace std;
class Device {
protected:
    string brand;
    int price;
public:
    void setDevice(string b, int p) {
        brand = b;
        price = p;
    }
    virtual double calculateDiscount() {
        return 0.0;
    }
    void display() {
        cout << "Brand: " << brand << ", Price: $" << price << ", Discounted Price: $" << price - calculateDiscount() << endl;
    }
};
class Laptop : public Device {
public:
    double calculateDiscount() {
        return price * 0.1;
    }
};
class Smartphone : public Device {
public:
    double calculateDiscount() {
        return price * 0.05;
    }
};
int main() {
    Device* devices[2];
    Laptop l;
    Smartphone s;
    l.setDevice("HP", 1000);
    s.setDevice("iPhone", 1200);
    devices[0] = &l;
    devices[1] = &s;
    for (int i = 0; i < 2; i++)
        devices[i]->display();
    return 0;
}
