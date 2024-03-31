#include <iostream>
#include "MyString.h"
#include <string>

using namespace std;

int main()
{
    MyString a = "Tanish";
    MyString b = " Sharma";
    a += b;
    cout << a << endl;

    a.erase(70, 1);
    cout << a << endl;

    // Use the functionalities as per your preferences
    
    return 0;
}