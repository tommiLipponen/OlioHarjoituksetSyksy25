# CMakeList.txt : CMake project for h2b, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("h2b")

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tuote-kirjasto (jaettu koodi kaikille tehtäville)
add_library(TuoteLib STATIC
    Tuote.cpp
    Tuote.h
)

# Tehtävä 1: Olioiden tallentaminen listaan
add_executable(tehtava1
    tehtava1.cpp
)
target_link_libraries(tehtava1 PRIVATE TuoteLib)

# Tehtävä 2: Käytä emplace_back-metodia
add_executable(tehtava2
    tehtava2.cpp
)
target_link_libraries(tehtava2 PRIVATE TuoteLib)

# Tehtävä 3: Tietojen lukeminen käyttäjältä
add_executable(tehtava3
    tehtava3.cpp
)
target_link_libraries(tehtava3 PRIVATE TuoteLib)

# Tehtävä 4: Kalleimman tuotteen etsiminen
add_executable(tehtava4
    tehtava4.cpp
)
target_link_libraries(tehtava4 PRIVATE TuoteLib)

# Bonus: Kaikki tehtävät yhdessä
add_executable(kaikki_tehtavat
    kaikki_tehtavat.cpp
)
target_link_libraries(kaikki_tehtavat PRIVATE TuoteLib)

# TODO: Add tests and install targets if needed.
