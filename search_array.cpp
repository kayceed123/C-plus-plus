#include <iostream>

int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}

int searchNames(std::string array[], int size, std::string element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter a number to search for (1-10): \n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index << '\n';
    }

    else{
        std::cout << myNum << " is not in the array \n";
    } 

    std::string names[] = {"Willow", "Kaycee", "Olivia", "Jaxon", "Darcie"};
    int namesize = sizeof(names)/ sizeof(names[0]);
    int nameindex;
    std::string namechoice;

    std::cout << "Enter a name you would like to search for (case sensitive): \n";
    std::cin >> namechoice;

    nameindex = searchNames(names, namesize, namechoice);

    if(nameindex != -1){
        std::cout << "Your chosen name is in index " << nameindex << '\n';
    }
    else{
        std::cout << "Your chosen name is not in the array \n";
    }

    return 0;
}