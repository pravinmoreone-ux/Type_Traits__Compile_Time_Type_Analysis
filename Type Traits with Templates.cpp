//
// Created by PravinMore on 31/12/2025.
//


#include <type_traits>
#include <iostream>

template <typename T>
void Function(T Param) {
    if (std::is_arithmetic_v<T>) {
        std::cout << Param << " is arithmetic\n";
    } else {
        std::cout << Param << " is not arithmetic\n";
    }
}

int main() {
    Function(42);
    Function("Hello World");
}

