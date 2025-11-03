// 1 Write a program to add two numbers.
#include<iostream>
using namespace std;

int main() {
    std::cout << "Minimum signed int: " << INT_MIN << std::endl;
    std::cout << "Maximum signed int: " << INT_MAX << std::endl;
    std::cout << "Maximum unsigned int: " << UINT_MAX << std::endl;
	int num1, num2;
	cout << "Enter first number \n";
	cin >> num1;
	cout << "Enter second number \n";
	cin >> num2;
	cout << "Sum of Number " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
	return 0;
}
