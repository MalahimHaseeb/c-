// false
#include <iostream>
using namespace std;

int main()
{
    bool condition1 = true, condition2 = false;
    bool logicalAndResult = condition1 && condition2; // false
    bool logicalOrResult = (condition1 || condition2);  // true
    bool logicalNotResult = !condition1;

    cout << "The is logicalAndResult to " << logicalAndResult << "\n";
    cout << "The is logicalOrResult to " << logicalOrResult << "\n";
    cout << "The is logicalNotResult to " << logicalNotResult << "\n";
    return 0;
}