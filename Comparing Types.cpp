//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>
#include <type_traits>

template <typename T>
void Print(T&& x) {
    if constexpr (std::is_same_v<T, int>) {
        std::cout << x << " is an int\n";
    } else {
        std::cout << x << " is not an int\n";
    }
}

int main() {
    Print(1);
}