//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>
#include <type_traits>

int main() {
    if constexpr (std::is_same_v<int,
      std::remove_volatile_t<volatile int>
    >) {
        std::cout << "Those are the same";
    }
}