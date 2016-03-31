#include <iostream>

int fib(int n, int &count);

int main() {
    int count = 0;
    std::cout<< fib(30, count) << " " << count;

    return 0;
}

int fib(int n, int &count){
    if(n <= 0){
        std::cout << 0 << std::endl;
        count++;
        return 0;
    }else if(n == 1){
        std::cout << 1 << std::endl;
        count++;
        return 1;
    }else{
        std::cout << "Recursing" << std::endl;
        count++;
        return fib(n - 1, count) + fib(n - 2, count);
    }
}
