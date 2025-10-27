//simple class example
#include <iostream>
using namespace std;

class Student {
private:
	int rollNo;
	string name;

public:
	void setData(int r, string n){
		rollNo = r;
		name = n;
	}

	void display(){
		cout << "Roll no: " << rollNo << endl;
		cout << "Name: " << name << endl;
	}
};

int main(){
	Student s1;
	s1.setData(101, "Avinash");
	s1.display();
	return 0;
}