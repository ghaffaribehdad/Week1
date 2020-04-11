// S5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int fun1() { return 1; }

int main()
{
	// auto type for variable
	auto int1 = 1;
	auto double1 = 0.11;
	auto pointer = &int1;
	cout << typeid(int1).name() << endl; // output : integer
	cout << typeid(double1).name() << endl; // output : double
	cout << typeid(pointer).name() << endl; // output : int pointer


	// decltype inspects the type of an expression

	decltype(fun1()) x;
	cout << typeid(x).name() << endl; //its an Int






	int y;
	cout << "enter a number between 1 and 4"<<endl;
	cin >> y;
	int arr[4] = { 2,1,4,3 };
	//int n = sizeof(arr) / sizeof(arr[0]); then n = 4 
	
	for (int i : arr) {
		if (i == y) {
			cout << "The Index is: " << i;
			break;
		}
	}
	return 0;

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
