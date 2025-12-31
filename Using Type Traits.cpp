//
// Created by PravinMore on 31/12/2025.
//

#include <type_traits>
#include <iostream>

int main() {
    if (std::is_arithmetic<int>::value) {
        std::cout << "int is arithmetic";
    }
    if (!std::is_arithmetic<std::string>::value) {
        std::cout << "\nbut std::string isn't";
    }
}