#include <iostream>

int main(int argc, char* argv[]) {
    const int SIZE = 12;
    std::string* months = new std::string[SIZE];
    int* max_days = new int[SIZE];

    months[0] = "january";
    max_days[0] = 31;

    months[1] = "february";
    max_days[1] = 29;

    months[2] = "march";
    max_days[2] = 31;

    months[3] = "april";
    max_days[3] = 30;

    months[4] = "may";
    max_days[4] = 31;

    std::string user_selection = static_cast<std::string>(argv[1]);
    int selected_month_index;

    for(int i = 0; i < SIZE; i++){
        if(user_selection == months[i]){
            selected_month_index = i;
        }
    }

    int number_of_days = max_days[selected_month_index];

    std::cout << "The number of days in " << user_selection << " is " << number_of_days << std::endl;

    return 0;
}
