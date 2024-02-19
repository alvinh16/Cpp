#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
string getsen ()
{
    string sand;

     getline(cin, sand);
    return sand;
}

int main()
{

    int op1;
    char pu;
    string sentence;

sentence = "start";

while (sentence != "None"){
     cout << "Please enter a sentence : " << endl;
     sentence = getsen();
     cout << "you just entered " << sentence << endl;
}
     
     return 0;

}
