#include<iostream>
using namespace std;

class Demo{
public:
	int a;
private:
	int b;
protected:
	int c;

public:
	void setValues(int x, int y, int z){
		a= x;
		b=y;
		c=z;
	}

	void display(){
		cout << "a = " << a << " b = " << b << " c = " << c << endl;
	}
};

int main(){
	Demo obj;
	obj.a =10;
	// obj.b =20;
	// obj.c =30;

	obj.setValues(10,20,30);
	obj.display();
	return 0;
}