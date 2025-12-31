cmake_minimum_required(VERSION 4.0)
project(Type_Traits__Compile_Time_Type_Analysis)

set(CMAKE_CXX_STANDARD 20)

add_executable(Type_Traits__Compile_Time_Type_Analysis main.cpp
        "Static Members.cpp"
        "Using Type Traits.cpp"
        "Type Traits 2.cpp"
        "Type Traits with Templates.cpp"
        "constexpr .cpp"
        "More Standard Library Examples.cpp"
        "Using static_assert().cpp"
        "Comparing Types.cpp"
        "Comparing types 2.cpp"
        "remove const and ref.cpp"
        remove_cvref.cpp
        remove_volatile_t.cpp
        remove_cvref_t.cpp
        "Creating our own Type Traits.cpp"
        "Using std  false_type.cpp"
        "Implementing the _v and _t Pattern.cpp")
