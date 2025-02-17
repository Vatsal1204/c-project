#include <iostream>
using namespace std;

class MathOperations {
public:
    double division(int a, int b) {
        if (b == 0)
            throw "Division by zero error!";
        return (double)a / b;
    }
};
int main() {
    MathOperations math;
    try {
        cout << "Result: " << math.division(10, 2) << endl;
        cout << "Result: " << math.division(5, 0) << endl;
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
