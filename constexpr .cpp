#include <iostream>
#include <type_traits>

template <typename T>
void LogDouble(T Param) {
    if constexpr (std::is_arithmetic_v<T>) {
        std::cout << "Double: " << Param * 2;
    }
}

int main() {
    LogDouble(42);
    LogDouble(std::string("Hello World"));
}