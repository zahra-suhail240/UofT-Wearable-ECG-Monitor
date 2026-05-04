cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

# project name
project(wearable-ecg-monitor-spi)

# list of all target source files
target_sources(app PRIVATE
    src/main.c
    # add more here
)

# list of all include directories, to search for source files
target_include_directories(app PRIVATE
    include
)