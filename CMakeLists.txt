cmake_minimum_required(VERSION 3.16)
project(template_images)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

set(SOURCE_FILES Image.cpp Image.h PixelRGB.cpp PixelRGB.h Pixel.cpp Pixel.h PixelG.cpp PixelG.h PixelRGBA.cpp PixelRGBA.h PixelGA.cpp PixelGA.h)
add_executable(template_images main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(template_images core)
