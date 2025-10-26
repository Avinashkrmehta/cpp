#include <iostream>
using namespace std;

// int main(){
	// int age;
	// cout << "Hello World!" << endl;
	// cout << "The sum of 2 and 3 is " << 2 + 3 << endl;
	// cin >> age;
	// cout << "Your age is " << age << endl;



	// int a, b;
	// cout	<< "Enter two numbers: ";
	// cin		>> a >> b;
	// cout	<< "The sum of " << a << " and " << b << " is " << a + b << endl;


	// string name;
	// cout << "Enter your name: ";
	// // cin >> name;
	// getline(cin, name);
	// cin	.get(); // to consume the newline character left in the buffer
	// cout << "Hello " << name << ", have a good day!" << endl;

// 	return 0;
// }





	// int main(){
	// 	string name;
	// 	int age;
	// 	double salary;

	// 	cout << "Enter Your name";
	// 	getline(cin, name);

	// 	cout << "Enter Your age";
	// 	cin >> age;

	// 	cout<< "Enter Your salary";
	// 	cin >> salary;

	// 	cout << "\n --- Employee Details ----" << endl;
	// 	cout << "Name: " << name << endl;
	// 	cout << "Age: " << age << endl;
	// 	cout << "Salary: " << salary << endl;
	// 	return 0;
	// }





int main(){
	// int a = 5;
	// int* p;
	// p = &a;
	// cout << "The address of a is " << p << endl;
	// cout << "The value of a is " << *p << endl;
	// cout << "The address of p is " << &p << endl;
	// cout << "The value of p is " << p << endl;

	// *p	= 10;
	// cout << "The new value of a is " << a << endl;
	// cout << "The address of a is " << p << endl;
	// cout << "The value of a is " << *p << endl;

	// int* ptr = nullptr;
	// cout << *ptr << endl; // segmentation fault
	
	
	// int x = 5;
	// int* p = &x;
	// int y = *p;
	// *p = 10;
	// cout << x << " " << y << endl; // 10 5
	
	
	// int arr[3] = {10, 20, 30};
	// int* p = arr;
	// cout << *p << " " << *(p + 1) << endl; // 10 20
	// cout << "address of p: " << p << endl;
	// cout << "address of arr: " << arr << endl;
	// cout << "address of &arr[0]: " << &arr[0] << endl;
	// cout  << *p << endl;
	// cout << "&p: " << &p << endl;
	// cout << "&arr: " << &arr << endl;
	// p++;
	// cout << *p << endl; // 20
	// cout << "p: " << p << endl;
	// cout << "&arr: " << &arr << endl;

	// p--;
	// cout << *p << endl; // 10
	// cout << "p: " << p << endl;
	// cout << "&arr: " << &arr << endl;


	// p = p+2;
	// cout << *p << endl; // 30
	// cout << "p: " << p << endl;
	// cout << "&arr: " << &arr << endl;

	// p = (p-2);
	// cout << *p << endl; // 10
	// cout << "p: " << p << endl;
	// cout << "&arr: " << &arr << endl;


	// cout << "&arr : " << &arr << endl;
	// cout << "&arr[0] : " << &arr[0] << endl;
	// cout << "&arr[1] : " << &arr[1] << endl;
	// cout << "&arr[2] : " << &arr[2] << endl;	



	// int arr [3] = {10, 20, 30};
	// int* p = arr;

	// cout << arr[1] << " " << *(arr + 1) << endl; // 20 20
	// cout << p[1]   << " " << *(p + 1) << endl;   // 20 20


    // for (int i = 0; i < 3; i++) {
    //     cout << "Address of arr[" << i << "]: " << (p + i) << endl;
    //     cout << "Value of arr[" << i << "]: " << *(p + i) << endl;
    // }

	// cout << 1[arr] << endl; // 20
	// cout << 2[arr] << endl; // 30
	int size;
	cout << "Enter number of elements:";
	cin >> size;
	
	int *arr = new int[size];
	cout << " Enter" << size << "elements:\n";
	for(int i=0; i< size; i++)
		cin>> arr[i];
	cout << "You have entyered: \n";
	for(int i=0; i< size; i++)
		cout << arr[i] << " ";
	delete[] arr;	
	
	
	
	
	return 0;
}	
