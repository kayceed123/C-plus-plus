#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
typedef int number_t;
using text_t = std::string;

int main(){

    /* typedef = reserved keyboard used to create an additional name (alias) for another data type
    new identifier for an existing type 
    helps with readability and reduces typos 
    use when there is a clear benefit 
    replaced with 'using' (work better w/ tenplates) */

    //std::vector<std::pair<std::string, int>> pairlist; <- instead of this you can use the new identifier
    //pairlist_t pairlist;
    text_t firstName = "Kaycee";
    std::cout << firstName << '\n';
    number_t age = 16;
    std::cout << age << '\n';

    return 0;
}