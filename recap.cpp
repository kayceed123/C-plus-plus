#include <iostream>
#include <vector>

typedef std::string text_t;
typedef int number_t;
using bool_t = bool;

namespace first{
    int x = 1; 
}

namespace second{
    int x = 2;
}

namespace third{
    int x = 3;
}

int main() {

    //integer
    int year = 2007;
    int age = 16;
    std::cout << age << '\n' << year << '\n';

    //double (float)
    double price = 10.99;
    std::cout << price << '\n';

    // single character
    char initial = 'K';
    std::cout << initial << '\n';

    // boolean
    bool student = true;
    std::cout << student << '\n';

    //string
    std::string name = "Kaycee";
    std::cout << "Hello " << name << '\n';

    //constant
    const double PI = 3.14159;
    double radius = 10;
    const double CIRCUM = 2 * PI * radius;

    std::cout << CIRCUM << "cm" << '\n';

    //namespaces
    using namespace third;
    std::cout << x << '\n' << first::x << '\n' << second::x << '\n';

    using std::cout;
    using std::string;
    string initials = "KD";
    cout << initials  << '\n';

    //typedef
    text_t middlename = "Mae";
    number_t birthdayage = 17;
    bool_t college = true;
    std::cout << middlename << '\n' << birthdayage << '\n' << college <<'\n';

    //arithmetic operators
    //addition
    int students = 20;
    students = students + 2;
    std::cout << students << '\n';
    int girls = 10;
    girls+=1;
    std::cout << girls << '\n';
    int boys = 10;
    boys++;
    std::cout << boys << '\n';

    //subtraction
    int hours = 10;
    hours = hours - 1;
    std::cout << hours << '\n';
    int days = 20;
    days -=1;
    std::cout << days << '\n';
    int years  = 5;
    years--;
    std::cout << years << '\n';

    //multiplication
    int people = 10;
    int adults = 6;
    people = people * 2;
    adults*= 2;
    std::cout << people << '\n' << adults << '\n';

    //division
    people = people / 2;
    adults/=2;
    std::cout << people << '\n' << adults << '\n';
    double decimal = 10.5;
    decimal/=2;
    std::cout << decimal << '\n';

    //remainder
    int children = 20;
    int remainder = children % 3;
    std::cout << remainder << '\n';

    //BIDMAS
    int equation = 6 - (5 + 4) * 3 / 2;
    std::cout << equation << '\n';

    //Type conversions

    //Implicit 
    int y = 3.14;
    std::cout << x << '\n';

    //Explicit
    double z = (int) 4.152;
    std::cout << z << '\n';

    char num = 100;
    std::cout << (int) num << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;
    std::cout << score << "%" << '\n';

    //user input
    std::string language;
    std::cout << "What programming language are you learning?: ";
    std::getline(std::cin >> std::ws, language);
    std::cout << "You are learning " << language << '\n';

    return 0;
}