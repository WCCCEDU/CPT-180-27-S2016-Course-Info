#include <iostream>
#include <math.h>

// Area Program
// Arg1 is the geometric shape
// Arg2 is side1
// Arg3 is side2
// Arg4 is side3
// ...

int main(int argc, char* argv[]) {
    double answer = 0.0;
    if(strcmp(argv[1], "rectangle") == 0){
        double side_1 = atof(argv[2]);
        double side_2 = atof(argv[3]);
        answer = side_1 * side_2;
    }else if(strcmp(argv[1], "square") == 0){
        double sides = atof(argv[2]);
        answer = pow(sides, 2);
    }
    std::cout << "Area of " << argv[1] << " is " << answer;
    return 0;
}
