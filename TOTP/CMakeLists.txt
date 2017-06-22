#创建一个名为“Hello”的库，其中包含源文件“hello.cxx”。
#已经找到扩展名。这里可以列出任何数量的来源。

#确保编译器可以找到我们的Hello库的include文件
#当其他库或可执行文件链接到你好

set(SOURCE_FILES library.cpp library.h )

add_library(TOTP ${SOURCE_FILES})

target_include_directories(TOTP PUBLIC $ {SOURCE_FILES})