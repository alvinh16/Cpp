#include <iostream>
#include <string>
using namespace std;

// This function accepts fahrenheit temp &
// computes the equiv in celcius 
float f2c(float fahren)
{
    return ((fahren - 32.0) * 5.0 / 9.0);
}

// This function accepts celcius temp &
// computes the equiv in fahrenheit 
float c2f (float celci)
{
    return (celci * 9.0 / 5.0 +32.0);
}

int main()
{
    double op1;
    char fc;

     cout << "Would you like to convert to (f)ahrenheit or (c)elcius?" << endl;
     cin >> fc;
     if (fc == 'f'){
           cout << "Please give temp in celcius \n";
           cin >> op1;
           cout << "temp in Fahrenheit is ";
           cout << c2f(op1) <<endl;
     }
     else if (fc == 'c'){
           cout << "Please give temp in Fahrenheit \n";
           cin >> op1;
           cout << "temp in Celcius is ";
           cout << f2c(op1) <<endl;
     }
     else
           cout << "invalid input. Please try again. \n";
     
     return 0;

}
