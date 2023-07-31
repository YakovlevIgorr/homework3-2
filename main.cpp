#include <iostream>

class Counter{
    int number = 1;

public:
    int plus(){
        return number++;
    }
    int minus(){
        return number--;
    }
    int output(){
        return number;
    }
    void set_number(int number){
        this -> number = number;
    }

};
int main() {
    int number;
    std::string input = "";
    Counter counter;
    std::cout << "Вы хотите указать начальное значение счётчика? ";

    while (input != "да" || input != "нет") {
        std::cout << "Введите да или нет: ";
        std::cin >> input;
        if (input == "да") {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> number;
            counter.set_number(number);
            break;
        }else if(input == "нет") break;
    }

    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> input;

        if (input == "+") {
            counter.plus();
            continue;
        } else if (input == "-") {
            counter.minus();
            continue;
        } else if (input == "=") {
            std::cout << counter.output() << "\n";
            continue;
        }else if(input == "x" || input == "х") break;

    }




    return 0;
}
