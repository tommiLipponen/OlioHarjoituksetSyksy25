# CMakeList.txt : CMake-projekti H3a:lle, sisällytä lähdekoodi ja määrittele
# projektikohtainen logiikka tässä.
#
cmake_minimum_required (VERSION 3.10)

# Ota käyttöön Hot Reload MSVC-kääntäjille, jos tuettu.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("H3a")

# Lisää lähdekoodit tämän projektin suoritettavaan tiedostoon.
add_executable (H3a "H3a.cpp" "H3a.h" "Chef.cpp" "Chef.h" "ItalianChef.cpp" "ItalianChef.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET H3a PROPERTY CXX_STANDARD 20)
endif()

# TODO: Lisää testit ja asennuskohteet tarvittaessa.
