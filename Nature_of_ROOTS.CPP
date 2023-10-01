#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter coefficients a, b, and c for the quadratic equation (ax^2 + bx + c): ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        cout << "Roots are real and distinct." << endl;
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        cout << "Roots are real and equal." << endl;
        double root1 = -b / (2 * a);
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        cout << "Roots are complex and imaginary." << endl;
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
