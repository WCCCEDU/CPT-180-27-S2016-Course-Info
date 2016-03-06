#include <iostream>

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Orig: x = " << x << std::endl
        << "      y = " << y << std::endl;

    x = x + y;
    y = x - y;
    x = x - y;

    std::cout << "Flip: x = " << x << std::endl
    << "      y = " << y << std::endl;

    return 0;
}
