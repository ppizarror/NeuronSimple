cmake_minimum_required(VERSION 3.10)
project(NeuronSimple)

set(CMAKE_CXX_STANDARD 14)

# Create neuron library (to link in test executable)
add_library(neuron
        neuron.h
        neuron.cpp)

# Import googletest CMakeList
add_subdirectory(googletest)

# Import tests
add_subdirectory(test)

# Enable testing
enable_testing()

# Create executable
add_executable(NeuronSimple main.cpp)
target_link_libraries(NeuronSimple neuron) # Add neuron library to executable