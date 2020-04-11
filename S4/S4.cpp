// S3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int samename = 1;
int main()
{
    // address with & 
 // pointer with * ... stores the memory address as its value
    string var = "Var";
    // Pointer declaration
    string* pointer1 = &var;
    // the value of var1
    cout << var << "\n";
    // Dereference
    *pointer1 = "Varrrr";
    cout << *pointer1 << "\n";
    cout << var << endl;
    // the memory address of var1
    cout << &var << "\n";

    // the memory address of var1 with the pointer

    cout << pointer1 << "\n";
    string** pointer2 = &pointer1;
    **pointer2 = "Varrrrrrrrrrrrr";
    cout << pointer2 << endl;
    cout << var << endl;




    //sizeof datetypes
    // with cout
    const int const1 = 1;
    cout <<"sizeof(int): "<< sizeof(const1) << endl;
    // with printf
    printf("Size of int: %d\n", sizeof(const1));
    /* The sizeof(char) is 1 bytes
    The sizeof(short) is 2 bytes
        The sizeof(int) is 4 bytes
        The sizeof(long) is 8 bytes
        The sizeof(long long) is 8 bytes
        The sizeof(float) is 4 bytes
        The sizeof(double) is 8 bytes
        The sizeof(long double) is 16 bytes
        The sizeof(bool) is 1 bytes
        */




    // we can declare sth outside of main and have a local one in main or other function with the same name 
    cout <<"sameName: "<< samename << endl;
    int samename = 0;
    cout << "sameName: " << samename << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
