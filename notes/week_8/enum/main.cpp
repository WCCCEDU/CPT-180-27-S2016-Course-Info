#include <iostream>

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

enum Month { JANUARY=1, MARCH=3};

int main() {
    Day::FRIDAY;

    bool same = Day::MONDAY == Day::MONDAY;

    if(same){
        std::cout << same << " " << Day::MONDAY;
    }
    return 0;
}
