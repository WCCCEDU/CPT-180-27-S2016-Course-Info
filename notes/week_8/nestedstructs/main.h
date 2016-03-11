bool cmpMenu(menu* menu1, menu* menu2);

struct green_eggs_and_ham{
    std::string name;
    double price;
};

struct bacon_skillet{
    std::string name;
    double price;
    bool bacon;
};

struct western_omelette{
    std::string name;
    double price;
};

struct menu{
    std::string time_of_day;
    green_eggs_and_ham green_eggs;
    bacon_skillet skillet;
    western_omelette omelette;
};
