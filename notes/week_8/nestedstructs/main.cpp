#include <iostream>
#include "./main.h"

int main() {

    menu breakfast;
    menu lunch;
    menu dinner;

    breakfast.green_eggs.name = "delicious";
    breakfast.time_of_day = "Morning";

    breakfast.skillet.bacon = false;

    lunch.time_of_day = "Midway";
    lunch.green_eggs.name = "Over cooked";

    return 0;
}
