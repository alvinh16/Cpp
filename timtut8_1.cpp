#include <iostream>
#include <string>
using namespace std;

// sub routine to display content of array
string equation(int objref)
{
    string sentence;

    cout << "please enter string " << objref << " : ";
     getline(cin, sentence);
     cout << endl;
    return sentence;
}

int disparray(string a[], int arraysize)
{
    
for (int j=0; j < arraysize; j++)
     cout << a[j] << endl;

    return 0;
}

int main()
{

const int arraysize=10;
string tools[arraysize];

//     int op1, op2, err1, err2, result;

for (int i=0; i < arraysize; i++)
    tools[i] = equation(i);

disparray(tools, arraysize);
// for (int j=0; j < 10; j++)
//     cout << tools[j] << endl;

     return 0;

}
