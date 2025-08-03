#include <iostream> // contains the definition of cout, endl
 #include <complex> // contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace
using cfloat= complex<float>; // using alias for complex<float>

 int main()
 {
 auto num1 = cfloat{2.0, 2.0}; // use auto for type deduction
 auto num2 = cfloat{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

auto answer = num1 * num2; // type deduced for 'answer' is:complex<float>
 cout << "The answer is: " << answer << endl;
 cout << "Or in a more familiar form: " << answer.real() << " + " << answer.imag() << "j" << endl << endl;

 //answer++;  
 // uncommenting the above line will cause a compilation error because complex numbers do not support increment operator

return 0;
 }