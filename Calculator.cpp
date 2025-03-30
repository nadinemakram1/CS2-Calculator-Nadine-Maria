
#include "Calculator.h"
#include <iostream>
#include <cstdlib>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout<< "Error: Cannot divide by 0." <<endl;
        return 0;
    }
    return a / b;
}

double factorial (int n) {
    if (n < 0) return -1;
   double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a,b)) * b;
}

int generateRandomNumber (int min, int max) {
    return (min + (rand() % (max - min + 1)));
}
int modulus(int a, int b) {
 return a % b;
 }
