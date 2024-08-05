#include <iostream>

struct marvel{
    std::string name;
    std::string debut;
    bool good;
};

void printMarvel(marvel &marvel){
    std::cout  << &marvel << '\n';
    std::cout << marvel.name << '\n';
    std::cout << marvel.debut << '\n';
    std::cout << marvel.good << '\n';
}

void afterLoki(marvel &marvel, bool good){
    marvel.good = good;
}

int main(){

    marvel character1;
    marvel character2;

    character1.name = "SpiderMan";
    character1.debut = "Spider-Man";
    character1.good = true;

    character2.name = "Loki";
    character2.debut = "Thor";
    character2.good = false;

    printMarvel(character1);
    std::cout  << &character2 << '\n';
    printMarvel(character2);

    afterLoki(character2, true);
    printMarvel(character2);

    return 0;
}

