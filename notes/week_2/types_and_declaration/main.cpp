#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Declaration and Initilization
    int apple_pie_count = 5;
    double tax_rate = 0.06;

    // Declaration
    int orange_smoothie_count;

    // Initialization
    orange_smoothie_count = 10;

    // Is this also initialization
    orange_smoothie_count = 20;

    // Oh Man auto!  NOOOOOOOOOOOOO!
    // Don't Event Think About it
    auto mangorita = 1;

    char middle_initial = 'K';
    char new_line = '\n';
    char tab = '\t';
    char slash = '\\';
    char seth_middle_initial = 'C';

    std::string my_name = "Paul Scarrone";

    int babys_first_number = 10;
    long babys_longest_number = babys_first_number;
    double babys_double_number = babys_longest_number;
    std::cout << std::fixed << std::setprecision(2)
        << babys_first_number << " " << babys_longest_number
        << " " << babys_double_number << std::endl;

    int a_ladies_tax = 2.99;
    int a_ladies_number = a_ladies_tax;
    std::cout << std::fixed << std::setprecision(2)
        << a_ladies_tax << " " << a_ladies_number << std::endl;

    int first_lovely_number = 5;
    int second_lovely_number = 10;

    double lovely_result = first_lovely_number/ static_cast<double>(second_lovely_number);

    std::cout << lovely_result << std::endl;


    std::cout << "Hello, " << my_name << mangorita << new_line;
    return 0;
}
