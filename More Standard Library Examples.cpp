//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>
#include <type_traits>

class Actor {};
class Monster : Actor {};

template <typename T>
void Function(T Param) {
    if constexpr (std::is_pointer_v<T>) {
        std::cout << "\nType is a pointer";
    }

    if constexpr (std::is_class_v<T>) {
        std::cout << "\nType is a class";
    }

    if constexpr (std::is_same_v<Actor, T>) {
        std::cout << "\nType is an Actor";
    }

    if constexpr (
      std::is_base_of_v<Actor, T>) {
        std::cout << "\nType is derived from Actor";
      }
}

int main() {
    std::cout << "&x: ";
    int x{5};
    Function(&x);

    std::cout << "\n\nMyActor: ";
    Actor MyActor;
    Function(MyActor);

    std::cout << "\n\nMyMonster: ";
    Monster MyMonster;
    Function(MyMonster);
}