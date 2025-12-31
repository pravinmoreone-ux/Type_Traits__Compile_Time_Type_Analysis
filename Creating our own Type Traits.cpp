//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>

// General Template
template <typename T>
struct is_renderable {
    static const bool value{false};
};

class Fish {
public:
    void Render() {
        std::cout << "Fish: ><((((`>";
    }
};

// Specialized Template
template<>
struct is_renderable<Fish> {
    static const bool value{true};
};

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