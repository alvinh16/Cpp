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

string * swapcell(string a[], int source, int dest)
{
    
string tmpstr;

tmpstr = a[dest];
a[dest] = a[source];
a[source] = tmpstr;

    return a;
}

int main()
{

const int arraysize=10;
string tools[arraysize];
string* t;
//     int source, dest;
int bottom, smallest;

for (int i=0; i < arraysize; i++)
    tools[i] = equation(i);

disparray(tools, arraysize);
cout << endl;

smallest = 0;
//outer loop
bottom = smallest;
// inner loop
for (int i=bottom; i < arraysize; i++){
     if (tools[i] < tools[smallest])
          smallest = i;
}
cout << tools[smallest] << endl;
cout << "the smallest is : " << smallest << endl;
cout << "the bottom is now : " << bottom << endl;
cout << endl;
t = swapcell(tools, smallest, bottom);
bottom++;
// end of outer loop

disparray(tools, arraysize);
     return 0;

}
