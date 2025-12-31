//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>
#include <type_traits>

// General Template
template <typename>
struct is_renderable : std::false_type {};

class Fish {
public:
    void Render() {
        std::cout << "Fish: ><((((`>";
    }
};

// Specialized Template
template <>
struct is_renderable<Fish> : std::true_type {};

template <typename T>
void Render(T Param) {
    if constexpr (is_renderable<T>::value) {
        Param.Render();
    } else {
        std::cout << "\nNot Renderable";
    }
}

int main() {
    Fish MyFish;
    Render(MyFish); // Renderable
    Render(42);     // Not Renderable
}