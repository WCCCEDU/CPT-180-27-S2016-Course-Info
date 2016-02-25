#include <iostream>

int identity(int number);

int main(int argc, char * argv[]) {
    int result = identity(10);
    return 0;
}

double awesome_double(){
    return 0.0;
}

void returns_nothing(){

}

// f(x) = x Identity

int identity(int number){
    return number;
}

std::string babyfood(int count){
    return count + " jars of babyfood";
}

std::string babyfood(int count, std::string type){
    return count + " jars of " + type + " babyfood";
}

void printBabyfood(int count, std::string type){
    std::cout << babyfood(count, type);
}

void babyfood(int count, std::string type, char puncuation){
    std::cout << count << " jars of " << type << " babyfood" << puncuation
}

void babyfood(std::string message){
    std::cout << message;
}
