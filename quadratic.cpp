#include <iostream>
#include <complex>
using namespace std;

int main() {
    char  choice;
do {
    complex<double> a, b, c;
    cin >> a >> b >> c;
   complex<double> discriminant = b * b - 4.0 * a * c;
    complex<double> root1 = (-b + sqrt(discriminant)) / (2.0 * a);
    complex<double> root2 = (-b - sqrt(discriminant)) / (2.0 * a);
    cout << "Roots: " << root1 << ", " << root2 << endl;
    cout << "Press 'q' to quit or any other key to continue: ";
    cin >> choice;

} while (choice != 'q');
//cout << "Do you want to solve another equation? (Press 'q' to quit): "<< endl;
    return 0;
}