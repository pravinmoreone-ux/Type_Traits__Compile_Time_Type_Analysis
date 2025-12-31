//
// Created by PravinMore on 31/12/2025.
//

#include <iostream>
#include <type_traits>

int main() {
    if constexpr (std::is_same_v<int,
      std::remove_const<const int>::type>) {
        std::cout << "Those are the same";
      }

    if constexpr (std::is_same_v<int,
      std::remove_reference_t<int&>>) {
        std::cout << "\nThose are the same too";
      }
}