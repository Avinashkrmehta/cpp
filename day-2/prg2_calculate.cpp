#include <iostream>
using namespace std;


class CalculateSum{
    public:
        int num1 = 10;
        int num2 = 20;

        int addition(){
            int result = num1 + num2;
            cout << "Sum of the two number is " << result;
        }

};
int main(){
    CalculateSum cal;
    cal.addition();
    return 0;
}