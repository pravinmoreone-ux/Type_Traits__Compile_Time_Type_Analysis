//
// Created by PravinMore on 31/12/2025.
//

#include <type_traits>
#include <iostream>

int main() {
    if (std::is_arithmetic_v<double>) {
        std::cout << "double is arithmetic\\n";
    }
    if (std::is_arithmetic<std::int32_t>()) {
        std::cout << "int32_t is also arithmetic";
    }
}