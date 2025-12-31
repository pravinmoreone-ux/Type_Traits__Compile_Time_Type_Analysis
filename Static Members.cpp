//
// Created by PravinMore on 31/12/2025.
//

struct SomeStruct {
    using type = bool;
    static const int value{42};
};

int main() {
    // This will be a bool
    SomeStruct::type MyVariableA;

    // This will have a value of 42
    int MyVariableB = SomeStruct::value;
}