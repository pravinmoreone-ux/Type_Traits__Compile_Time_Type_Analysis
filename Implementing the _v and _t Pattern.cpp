#include <iostream>
#include <type_traits>

template <typename>
struct is_renderable : std::false_type {};

template <typename T>
constexpr bool is_renderable_v{
    is_renderable<T>::value};

class Fish {
public:
    void Render() {
        std::cout << "Fish: ><((((`>";
    }
};

template <>
struct is_renderable<Fish> : std::true_type {};

template <typename T>
void Render(T Param) {
    if constexpr (is_renderable_v<T>) {
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