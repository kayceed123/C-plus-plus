#include  <iostream>

//this is a comment
/*
this
is
a
multi
line
comment
*/

//main function is where program begins, a program must have a main function
int main(){
    std::cout << "Hello World" << std::endl;
    std::cout << "This is my first c++ program" << '\n';
    /* if return 0 is reached, there is no problems in the program
    if 1 is outputted, the program has encountered an error */
    return 0; 
}

/* std::cout stands for standard character output
<< means output
"" are used for strings whilst '' is used for singular characters
; lets the compiler know that the statement is done
endl means end line and so does \n */