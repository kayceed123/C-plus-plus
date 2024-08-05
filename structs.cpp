#include <iostream>

struct student{
    std::string name;
    char grade;
    bool enrolled = true;
};

struct genshin{
    std::string name;
    int rarity;
    std::string element;
};

int main(){

    //structure that groups related variables under one name

    student kaycee;
    kaycee.name = "Kaycee";
    kaycee.grade = 'B';

    student olivia;
    olivia.name = "Olivia";
    olivia.enrolled = false;

    student ben;
    ben.name = "Ben";
    ben.grade = 'A';

    std::cout << kaycee.name << '\n';
    std::cout << kaycee.grade << '\n';
    std::cout << kaycee.enrolled << '\n';

    std::cout << olivia.name << '\n';
    std::cout << olivia.grade << '\n';
    std::cout << olivia.enrolled << '\n';

    std::cout << ben.name << '\n';
    std::cout << ben.grade << '\n';
    std::cout << ben.enrolled << '\n';

    genshin character1;
    character1.name = "Diluc";
    character1.rarity = 5;
    character1.element = "Pyro";

    genshin character2;
    character2.name = "Kaeya";
    character2.rarity = 4;
    character2.element = "Cryo";

    genshin character3;
    character3.name = "Childe";
    character3.rarity = 5;
    character3.element = "Hydro";

    std::cout << character1.name << '\n';
    std::cout << character1.rarity << '\n';
    std::cout << character1.element << '\n';

    std::cout << character2.name << '\n';
    std::cout << character2.rarity << '\n';
    std::cout << character2.element << '\n';

    std::cout << character3.name << '\n';
    std::cout << character3.rarity << '\n';
    std::cout << character3.element << '\n';

    return 0;
}