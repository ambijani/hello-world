#include "calculator.h"
#include <iostream>
using namespace std;
int main() {
    calculator calc;
    try {
        cout << calc.compute('+', 10, 20) << endl;
        cout << calc.compute('-', 10) << endl;
        cout << calc.compute('*', 5, 5) << endl;
        cout << calc.compute('/', 5) << endl;
    }
    catch (std::invalid_argument& e) {
        cout << "exception caught: " << e.what() << endl;
    }
    return 0;
}
