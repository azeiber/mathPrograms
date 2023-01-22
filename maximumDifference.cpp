#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

const int SIZE = 20;

unsigned int seed = (unsigned int)(time(0));
double random ( unsigned int &seed );
void fill_array ( double a[SIZE] );

using namespace std;

int main()
{
    double max_value = 0.0, min_value = 1.0, a[SIZE];
    
    fill_array ( a );
    
    for (int i = 0; i < SIZE; ++i)
    {
        if ( a[i] < min_value )
            min_value = a[i]; //if new value is lower it becomes the min_value
    }
    
    for (int i = 0; i < SIZE; ++i )
    {
        if ( a[i] > max_value )
            max_value = a[i]; //if new value is higher it becomes the min_value
    }
    
    cout << fixed << showpoint << setprecision(5);
    cout << "              The maximum value: " << max_value << endl;
    cout << "              The minimum value: " << min_value << endl;
    cout << "Difference between two elements: ";
    cout << ( max_value - min_value ) << endl; //difference between max and min values
    
    return 0;
}

void fill_array ( double a[] )
{
    for (int i = 0; i < SIZE; ++i) //for loop to populate array
        a[i] = double (random(seed));
}

double random ( unsigned int &seed )
    {
        const int MODULUS = 15749;
        const int MULTIPLIER = 69069;
        const int INCREMENT = 1;
        seed = ((MULTIPLIER * seed) + INCREMENT)%MODULUS;
        
        return double (seed)/MODULUS;
    }

/*
              The maximum value: 0.85866
              The minimum value: 0.01867
Difference between two elements: 0.83999
Program ended with exit code: 0
 */

