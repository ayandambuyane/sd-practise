#include <iostream>
#include <complex>
using namespace std;
using cdouble = complex<double>; // using alias for complex<double>
int main() {
    char  choice;
do {
    cdouble a, b, c;
    cin >> a >> b >> c;
   cdouble discriminant = b * b - 4.0 * a * c;
    cdouble root1 = (-b + sqrt(discriminant)) / (2.0 * a);
    cdouble root2 = (-b - sqrt(discriminant)) / (2.0 * a);
    cout << "Roots: " << root1 << ", " << root2 << endl;
    cout << "Press 'q' to quit or any other key to continue: ";
    cin >> choice;

} while (choice != 'q');

    return 0;
}