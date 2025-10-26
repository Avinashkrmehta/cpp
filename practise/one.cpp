//Write a program to add two numbers.

#include <iostream>
using namespace std;

int main(){
	int x,y;
	cout << "Enter two number for getting sum \n";
	cin >> x;
	cin >> y;
	cout << "Sum of two number" << x << "and" << y << "is" << x+y << endl;
       return 0;	
}




// Optimized code

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum of " << x << " and " << y << " is " << x + y << endl;
    return 0;
}
