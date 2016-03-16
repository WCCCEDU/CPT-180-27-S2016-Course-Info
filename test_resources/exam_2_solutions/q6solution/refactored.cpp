#include <iostream>
#include <math.h>

double print_area(char* shape, double area);
double calculate_area(char* argv[]);
double area_of_rectangle(char * argv[]);
double area_of_square(char * argv[]);

int main(int argc, char* argv[]) {
    double area = calculate_area(argv);
    print_area(argv[1], area);
    return 0;
}

double print_area(char* shape, double area){
    std::cout << "Area of " << shape << " is " << area;
}

double calculate_area(char* argv[]){
    if(strcmp(argv[1], "rectangle") == 0){
        return area_of_rectangle(argv);
    }else if(strcmp(argv[1], "square") == 0){
        return area_of_square(argv);
    }
}

double area_of_rectangle(char * argv[]){
    double side_1 = atof(argv[2]);
    double side_2 = atof(argv[3]);
    return side_1 * side_2;
}

double area_of_square(char * argv[]){
    double sides = atof(argv[2]);
    return pow(sides, 2);
}
