cmake_minimum_required(VERSION 3.6)
project(TOTPLib)

#这个项目中的CMakeLists文件可以
#将项目的根源目录指向$ {HELLO_SOURCE_DIR}和
#到项目的根二进制目录为$ {HELLO_BINARY_DIR}。


#重复进入“Hello”和“Demo”子目录。这实际上并不是这样
#使另一个cmake可执行文件运行。相同的过程将会贯穿
#项目的整个目录结构。
add_subdirectory(TOTP)

add_executable(Test Main.cpp)

target_link_libraries(Test LINK_PUBLIC TOTP)