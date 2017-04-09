cmake_minimum_required(VERSION 3.6)
project(mvms_2017)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    /usr/local/include/opencv2/opencv.hpp
    commun_task.h
    main.cpp
    task1.cpp
    task1.h
    task2.cpp
    task2.h
    task3.cpp
    task3.h
    task4.cpp
    task4.h
    task5.cpp
    task5.h
        Anatoliy_Korovkin_201755322_Task1.cpp Anatoliy_Korovkin_201755322_Task1.h
        Anatoliy_Korovkin_201755322_Task2.cpp Anatoliy_Korovkin_201755322_Task2.h)

add_executable(mvms_2017 ${SOURCE_FILES})

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(mvms_2017 ${OpenCV_LIBS})