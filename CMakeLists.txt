cmake_minimum_required(VERSION 3.13)  # Check CMake version
project(GiaoHangNhanh_ShippingPriceList)  # Project name

set(CMAKE_CXX_STANDARD 14)  # Use C++14 standard

# Include directory for header files
include_directories(GiaoHangNhanh_ShippingPriceList/include)  # Use relative path for include directory

# Create a list of source files
set(SOURCE_FILES
        GiaoHangNhanh_ShippingPriceList/src/main.cpp
        GiaoHangNhanh_ShippingPriceList/src/ship_manager.cpp
)


# Create executable target
add_executable(GiaoHangNhanh_ShippingPriceList ${SOURCE_FILES})  # Build executable from source files
