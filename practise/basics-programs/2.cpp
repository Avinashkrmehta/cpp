// 2 Write a program to calculate area of a circle.
#include<iostream>
using namespace std;

int main(){
	const float pie = 3.142;
	float radius;
	cout << "Enter radius of the circle \n";
	cin >> radius;
	cout << "Area of the circle for radius " << radius << " is " << 2 * pie * radius << endl;

	return 0;
}
