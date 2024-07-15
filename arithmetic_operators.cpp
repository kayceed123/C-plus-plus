#include <iostream>

int main(){

    /* arithmetic operators = return the result of a specific arithmetic operation 
    (+ - * /) */

    //addition
    int students = 20;
    //students += 2;
    students ++;
    std::cout << students << '\n';

    //subtraction
    int people = 15;
    //people = people - 1;
    //people -= 2;
    people --;
    std::cout << people << '\n';

    //multiplication
    int multiply = 10;
    //multiply = multiply * 2;
    multiply *= 2;
    std::cout << multiply << '\n';

    //division
    int divide = 21;
    //divide = divide / 2;
    //divide /= 3;
    //% is useful when finding out whether num is even or odd, 0 would be outputted if even
    int remainder = divide % 2;
    //std::cout << divide << '\n';
    std::cout << remainder << '\n';

    //arithmetics follows rules of bidmas
    int formula = 6 - (5 + 4) * 3 / 2;
    std::cout << formula << '\n';

    return 0;
}