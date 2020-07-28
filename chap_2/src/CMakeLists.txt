
add_library(Gun AbstractGun.cpp HandGun.cpp MachineGun.cpp Rifle.cpp Soldier.cpp)

add_executable(Soldier main.cpp)
target_link_libraries(Soldier Gun)