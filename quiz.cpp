#include <iostream>

int main(){

    std::string questions[] = {"1. What is my favourite game?: ",
                               "2. What is my favourite food?: ",
                               "3. What is my favourite pokemon?: ",
                               "4. Who is my favourite music artist?: ",
                               "5. What is my favourite anime?: "};

    std::string options[][5] = {{"A. Pokemon Shield", "B. Genshin Impact", "C. Overwatch 2", "D. Animal Crossing"},
                               {"A. Naan Bread", "B. Croissants", "C. Nachos", "D. Chicken Curry"},
                               {"A. Raichu", "B. Oshawott", "C. Vaporeon", "D. Umbreon"},
                               {"A. Set it off", "B. My Chemical Romance", "C. Hatsune Miku", "D. Mother Mother"},
                               {"A. My Hero Academia", "B. Tokyo Revengers", "C. Assassination Classroom", "D. Death note"}};

    char answerKey[] = {'B', 'D', 'D', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "******************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            score ++;
        }
        else{
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout << "******************************\n";
    std::cout << "*           RESULTS          *\n";
    std::cout << "******************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# of QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
}