#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int myInteger1;
	int myInteger2;
	int* ptr_myInteger;

	cout << "enter integer 1: ";
	cin >> myInteger1; cin.ignore();
	cout << endl;

	cout << "enter integer 2: ";
	cin >> myInteger2; cin.ignore();
	cout << endl;

	ptr_myInteger = &myInteger1;

	cout << "The integer myInteger1 has a value of: " << myInteger1 << endl;
	cout << "The address of myInteger1 (&myInteger1) is: " << &myInteger1 << endl;
	cout << "The integer myInteger2 has a value of: " << myInteger2 << endl;
	cout << "The address of myInteger2 (&myInteger2) is: " << &myInteger2 << endl;
	cout << "ptr_myInteger is: " << ptr_myInteger << endl;
	cout << "*ptr_myInteger is: " << *ptr_myInteger << endl;
	cout << "&ptr_myInteger is: " << &ptr_myInteger << endl;
	
	ptr_myInteger = &myInteger2;
	cout << "now, ptr_myInteger points to myInteger2" << endl;
	cout << "ptr_myInteger is: " << ptr_myInteger << endl;
	cout << "*ptr_myInteger is: " << *ptr_myInteger << endl;
	cout << "&ptr_myInteger is: " << &ptr_myInteger << endl;

	int &ref_myInteger2 = myInteger2;

	cout << "&ref_myInteger2: " << &ref_myInteger2 << endl;
	cout << "ref_myInteger2: " << ref_myInteger2 << endl;
	
	return 0;
}