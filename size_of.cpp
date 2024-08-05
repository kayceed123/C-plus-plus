#include <iostream>

int main(){

    double gpa = 2.5;
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";

    std::string name = "Kaycee";
    std::cout << sizeof(name) << " bytes\n";

    int age = 16;
    std::cout << sizeof(age) << " bytes\n";

    bool college = true;
    std::cout << sizeof(college) << " bytes\n";

    char grade = 'A';
    std::cout << sizeof(grade) << " bytes\n";

    char grades[] {'A', 'B', 'C', 'D', 'E', 'F', 'U'};
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements\n";

    return 0;
}