//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>
#include <type_traits>

template <typename T>
void Print(T&& x) {
    using BaseType = std::remove_cvref_t<T>;

    if constexpr (std::is_same_v<BaseType, int>) {
        std::cout << x << " is an int\n";
    } else {
        std::cout << x << " is not an int\n";
    }
}

int main() {
    Print(1);

    int y{2};
    Print(y);

    const int x{3};
    Print(x);
}