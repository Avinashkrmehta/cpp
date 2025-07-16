// #include <iostrea>


// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }


// - Errors and Warnings

    // compile time error
    /*
        #include <iostream>

        int main() {
            std::cout << "Hello, World!" << std::endl  // Missing semicolon here will cause a compile-time error
            return 0;
        }
    */


    // run time error
    /*
        #include <iostream>
        int main() {
            std::cout << "Hello, World!" << std::endl;
        int value =  7/0; // Division by zero will cause a runtime error
            std::cout << "Value: " << value << std::endl; // This line will not execute due to the runtime error
            return 0;
        }
    */


#include <iostream>

int Sum(int a, int b) {
    return a + b;
}

int main() {
    int firstNumber = 14;
    int secondNumber = 5;

    int sum = firstNumber + secondNumber;

    std::cout << firstNumber << " + " << secondNumber << " = " << sum << std::endl;

    // std::cout << "Hello, World!" << std::endl;
    std::cout << "Sum: " << Sum(firstNumber, secondNumber) << std::endl;

    return 0;
}
