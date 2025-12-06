# cmake -P test.cmake
cmake_minimum_required(VERSION 3.20)

message(STATUS "This is .cmake")

# VERSION
message(STATUS "VERSION ${CMAKE_VERSION}")

# set
set(Var1 /home/rk3588/cpp/*)
message(STATUS "set:${Var1}")

# $PATH
# message(STATUS "$ENV{PATH}")

# list
list(APPEND LIST1 list1 list2 list3) #添加
message(STATUS "list:${LIST1}")

list(LENGTH LIST1 len) #获取长度
message(STATUS "list_len:${len}")
