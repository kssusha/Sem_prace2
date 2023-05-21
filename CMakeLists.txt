cmake_minimum_required(VERSION 3.23)
project(Sem_prace2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sem_prace2 main.cpp Image.cpp Image.h Pixel.cpp Pixel.h AsciiImage.cpp AsciiImage.h ImageReader.cpp ImageReader.h BmpReader.cpp BmpReader.h PngReader.cpp PngReader.h Outputer.cpp Outputer.h ImageFilter.cpp ImageFilter.h ConvFilter.cpp ConvFilter.h SizeFilter.cpp SizeFilter.h NegativeFilter.cpp NegativeFilter.h BrightFilter.cpp BrightFilter.h MirrorFilter.cpp MirrorFilter.h)
