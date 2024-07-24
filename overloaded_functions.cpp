#include <iostream>

void bakePizza(){
    std::cout << "Here is your pizza \n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza \n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza \n";
}


int main(){

    bakePizza();
    bakePizza("Pepperoni");
    bakePizza("Ham", "Sweetcorn");

    return 0;
}