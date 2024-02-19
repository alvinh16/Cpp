#include <iostream>
#include <string>
using namespace std;

class Food
{
    public:
    string vegetable = "tomato";
    string fruit = "apple";
    string protein1 = "meat";
    string protein2 = "toufu";
    int calories = 250;
};

int main()
{
    Food foodObj;
     cout << foodObj.vegetable;
     cout << " is a vegetable."<< endl;
     cout << foodObj.fruit;
     cout << " is a fruit."<< endl;
     cout << foodObj.protein1;
     cout << " is a protein."<< endl;
     cout << foodObj.protein2;
     cout << " is also a protein."<< endl;
     cout << "together they have "<< endl;
     cout << foodObj.calories;
     cout << " calories."<< endl;
     return 0;

}
