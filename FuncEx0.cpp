#include <iostream>
#include <string>
using namespace std;

void mysubproc(){
    cout << "this is my sub routine.\n";
}
int main()
{
     cout << "i'm now exercising my 1st sub proc" << endl;
     mysubproc();
     return 0;

}
