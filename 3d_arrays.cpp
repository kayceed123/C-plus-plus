#include <iostream> 

int main(){

    std::string games[][3] = {{"Genshin Impact", "Honkai Star Rail", "Zenless Zone Zero"},
                             {"Pokemon", "Mario", "Animal Crossing"},
                             {"Sonic", "Hatsune Miku: Colourful Stage", "Persona 5"}};

    std::cout << "Hoyoverse games: \n";
    std::cout << games[0][0] << ", ";
    std::cout << games[0][1] << ", ";
    std::cout << games[0][2] << '\n';

    std::cout << "Nintendo games: \n";
    std::cout << games[1][0] << ", ";
    std::cout << games[1][1] << ", ";
    std::cout << games[1][2] << '\n';

    std::cout << "Sega games: \n";
    std::cout << games[2][0] << ", ";
    std::cout << games[2][1] << ", ";
    std::cout << games[2][2] << '\n';

    std::string movies[][3] = {{"Ironman", "Spiderman", "Thor"},
                             {"Batman", "Superman", "Wonder Women"},
                             {"Philosophers Stone", "Chamber of Secrets", "Prisoner of Azkaban"}};

    int rows = sizeof(movies)/sizeof(movies[0]);
    int columns = sizeof(movies[0])/sizeof(movies[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << movies[i][j] << ", ";
        }
        
        std::cout << '\n';
    }

    return 0;
}