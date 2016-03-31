#include <iostream>

void message(int times);
int factorial(int n);
int summation(int n);

int main() {
    //message(2);
    //std::cout << factorial(5);
    std::cout << summation(5);
}

int summation(int n){
    int partial_summation = 0;
    if(n > 0){
        partial_summation = n + summation(n - 1);
        return partial_summation;
    }
    return 0;
}

void message(int times) {
    if (times > 0) {
        std::cout << "A recursive function called "<< times <<".\n";
        message(times - 1);
    }
}

int factorial(int n){
    int partial_factorial = 0;
    if(n == 0){
        return 1;
    }else{
        std::cout << partial_factorial << std::endl;
        partial_factorial = n * factorial(n - 1);
        std::cout << partial_factorial << std::endl;

        return partial_factorial;
    }
}
