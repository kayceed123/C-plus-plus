#include <iostream>

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int x = 0; x < size - i - 1; x++){
            if(array[x] > array[x + 1]){
                temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
            }
        }
    }
}

void sort_descending(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int x = 0; x < size - i - 1; x++){
            if(array[x] < array[x + 1]){
                temp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = temp;
            }
        }
    }
}

int main(){

    int array[] = {81, 57, 19, 35, 50, 91, 30, 73};
    int size = sizeof(array)/sizeof(array[0]);

    std::cout << "The unsorted array is: \n";

    for (int element : array){
        std::cout << element << " ";
    }

    std::cout << "\nThe sorted array in ascending order is: \n";

    sort(array, size);
    
    for (int element : array){
        std::cout << element << " ";
    }

    std::cout << "\nThe sorted array in descending order is: \n";

    sort_descending(array, size);
    
    for (int element : array){
        std::cout << element << " ";
    }

    return 0;
}