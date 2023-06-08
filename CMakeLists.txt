cmake_minimum_required(VERSION 3.25)
project(Snakey)

set(CMAKE_CXX_STANDARD 11)


include_directories(./EasyX/include)
link_directories(./EasyX/lib64)
link_libraries(libeasyx.a)

add_executable(Snakey main.cpp Snake.cpp GameScene.cpp Sprite.cpp Food.cpp)
