#include <iostream>

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
    /* namespace = provides a solution for preventing name conflicts in large projects
    each entity needs a unique name
    a namespace allows for identically named entities as long as the namespaces are different*/

    
    int x = 0;

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl; 

    /*using namespace first;
    std::cout << x << std::endl;*/

    return 0;
}