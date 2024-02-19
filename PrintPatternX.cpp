#include <iostream>
#include <string>
using namespace std;

int main()
{

    int i;
    string x1 = "* * * * *";
    string x2 = "*       *";
    string x3 = "    *    ";
    string x4 = "  *   *  ";
    string x5 = " *     * ";
    string x6 = "   * *   ";

for (int i = 0; i < 2; i++) {
     cout << x1 << endl;
     cout << " " << x1 << endl;
}
     cout << x1 << endl;
     cout << "\n\n";

     cout << x3 << "\n" << x4 << "\n" << x2 << "\n" << x4 << "\n" << x3 << "\n\n";

     cout << x1 << endl;
for (int i = 0; i < 3; i++) {
     cout << x2 << endl;
} 
     cout << x1 << endl;
     
     cout << x1 << "\n" << x5 << "\n" << x4 << "\n" << x6 << "\n" << x3 << "\n\n";
     return 0;

}
