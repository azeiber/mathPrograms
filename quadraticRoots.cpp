#include <iostream>
#include <iomanip>
#include <cmath>

double root_1 (double a, double b, double c);
double root_2 (double a, double b, double c);

using namespace std;

int main()
{
    double a, b, c;
    
    cout << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    
    cout << endl;
    cout << showpoint << setprecision (5);
    cout << "  a = " << setw(6) << a << endl;
    cout << "  b = " << setw(6) << b << endl;
    cout << "  c = " << setw(6) << c << endl;
    cout << "r_1 = " << setw(6) << root_1(a, b, c) << endl;
    cout << "r_2 = " << setw(6) << root_2(a, b, c) << endl;
   
    return 0;
}
double root_1( double a, double b, double c)
{
    return (-b - sqrt(pow(b, 2) - 4 * a * c))/(2 * a); //find the negative root
}

double root_2( double a, double b, double c)
{
    return (-b + sqrt(pow(b, 2) - 4 * a * c))/(2 * a); //find the positive root
}

/*
 Enter a: 1
 Enter b: -3
 Enter c: 2

   a = 1.0000
   b = -3.0000
   c = 2.0000
 r_1 = 1.0000
 r_2 = 2.0000
 Program ended with exit code: 0
 */
