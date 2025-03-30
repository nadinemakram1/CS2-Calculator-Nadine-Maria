#include <iostream>
#include "Calculator.h"
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    cout << "Addition (4 + 3): " << add(4, 3) << endl;
    cout << "Subtraction (10 - 6): " << subtract(10, 6) << endl;
    cout << "Multiplication (6 * 8): " << multiply(6, 8) << endl;
   cout << "Division (8 / 2): " << divide(8, 2) << endl;
    cout << "Factorial (5!): " << factorial(5) << endl;
    cout << "GCD (36, 24): " << gcd(36, 24) << endl;
    cout << "LCM (6, 8): " << lcm(6, 8) << endl;
   cout << "Random Number (50-100): " << generateRandomNumber(50, 100) << endl;
    
    return 0;
}
