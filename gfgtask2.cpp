// Given the string "A string.".Print on one line the letter on the index 0; the pointer position and the letter t. Update the pointer to pointer + 2. Then in other line print the pointer and the letters r and g of the string(using the pointer).
#include <iostream>
using namespace std;
int main()
{
    char str[] = "A string";
    char *ptr = str;
    cout << *ptr << endl;
    ptr += 2;
    cout << *ptr << endl;
    cout << ptr[2] << " " << ptr[5] << endl;
    return 0;
}