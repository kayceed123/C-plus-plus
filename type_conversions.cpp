#include <iostream>

int main(){

    /* type conversion =conversion of a value of one data type to another
    implicit = automatic
    explicit = precede value with the data type (int) */

    //explicit
    double x = (int) 3.14;
    std::cout << x << std::endl;

    //implicit
    char y = 100;
    std::cout << y << std::endl;

    std::cout << (char) 100 << std::endl;

    int correct = 8;
    int questions = 10;
    double score = (double) correct / (double) questions * 100;

    std::cout << score << "%"; 

    return 0;

}