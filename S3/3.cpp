// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
//pound(#) sign are called directives and are processed by preprocessor which is a program invoked by the compiler.
//contains declarations of all the standard input/output library functions.
int main()
//By default, it will return zero.
{
    std:: cout << "Hello World!\n";  //It is an object of iostream
    printf("Hallo Welt\n");   // printf is a function!!
    int a = 1;
    char Name[] = "Farhad";
    printf("%s=%d",Name, a);

    // For double values std::cout is a little slower but still reasonably closer to his C counterpart.
    //For int and char* printing std::cout is faster than printf. 
    // std::cout should be preferred over printf unless the output is of type double.
    //Looks like also that std::cin is faster than scanf
  // Printf is a function in C
  // cout is an object in C++
    

}



/*
#include <iostream>
using namespace std;
//The statement using namespace std is generally considered a bad practice
 //The alternative to this statement is to specify the namespace to which the identifier belongs using the scope operator(::) 
int main()

{
        cout << "Hello World!\n";
      
      //  return 0;
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
