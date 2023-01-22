#include <iostream>
#include <iomanip>
#include <cmath>

void triangle (double a, double b, double c); //function to determine if values are a valid triangle

using namespace std;

int main()
{
    double a = 0.0, b = 0.0, c = 0.0;
    
    triangle (a, b, c);
    
    cout << endl;
    
    return 0;
}

void triangle (double a, double b, double c)
{
    cout << endl;
    cout << "Enter side a: ";
    cin >> a;
    cout << endl;
    cout << "Enter side b: ";
    cin >> b;
    cout << endl;
    cout << "Enter side c: ";
    cin >> c;
    cout << endl;
    
    if(a+b>c)
        cout << "a, b, and c constitute a triangle";
    else
        cout << "a, b, and c do not constitute a triangle";
}

/*
 Enter side a: 3

 Enter side b: 4

 Enter side c: 5

 a, b, and c constitute a triangle
 Program ended with exit code: 0
 */
