#include <iostream>
#include <string>
using namespace std;

int main()
{
string name = "Mike";
int age = 34;
float height = 1.7f;

bool tennis, swim;
tennis = false;
swim = true;

bool *pswim = &swim;

     cout << "my name is ";
     cout << name << endl;
     cout << "i am "; 
     cout << height;
     cout << "tall." << endl;
     cout << "i am "; 
     cout << age;
     cout << "years old." << endl;
     cout << "played tennis? "; 
     cout << tennis << endl; 
     cout << "swam? " <<  swim << endl;
     cout << "the mem adr of swam is " <<  pswim << endl;
     cout << "the content of pswim is ";
     cout << *pswim << endl;

     return 0;

}
