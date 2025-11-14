# CMakeList.txt : CMake-projekti H2a:lle, sisällytä lähdekoodi ja määritä
# projektikohtainen logiikka täällä.
#
cmake_minimum_required (VERSION 3.10)

# Ota käyttöön Hot Reload MSVC-kääntäjille, jos tuettu.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("H2a")

# Lisää lähdekoodit tämän projektin suoritustiedostoon.
add_executable (H2a 
    "H2a.cpp" 
    "H2a.h"
    "Car.cpp"
    "Car.h"
    "Rectangle.cpp"
    "Rectangle.h"
    "Student.cpp"
    "Student.h"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET H2a PROPERTY CXX_STANDARD 20)
endif()

# TODO: Lisää testit ja asennuskohteet tarvittaessa.
