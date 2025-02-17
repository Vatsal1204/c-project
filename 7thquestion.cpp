#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0;
    virtual void move() = 0;
};
class Lion : public Animal {
public:
    void makeSound() override {
        cout << "Lion: Roar!" << endl;
    }
    void move() override {
        cout << "Lion: Running" << endl;
    }
};
class Fish : public Animal {
public:
    void makeSound() override {
        cout << "Fish: Blub blub!" << endl;
    }
    void move() override {
        cout << "Fish: Swimming" << endl;
    }
};
int main() {
    Animal* a1 = new Lion();
    Animal* a2 = new Fish();
    a1->makeSound();
    a1->move();
    a2->makeSound();
    a2->move();
    delete a1;
    delete a2;
    return 0;
}
