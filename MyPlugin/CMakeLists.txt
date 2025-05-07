# If not stated otherwise in this file or this component's LICENSE file the
# following copyright and licenses apply:
#
# Copyright 2025 Your Name
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.22.1)
 
project(MyPlugin)
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} /install/usr/lib) 
find_package(WPEFramework REQUIRED)

# Set the correct path to WPEFramework include directory
set(WPEFRAMEWORK_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../install/usr/include/WPEFramework" CACHE PATH "Path to WPEFramework include directory")
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} /home/runner/work/myplugin/myplugin/install/usr/lib)

include_directories(
    ${WPEFRAMEWORK_INCLUDE_DIRS}
    /home/runner/work/myplugin/myplugin/install/usr/include/WPEFramework
)

add_definitions(-DPLUGIN_MyPlugin)
 
set(SOURCES
    Module.h
    Module.cpp
    Data.h
    MyPlugin.h
    MyPlugin.cpp
)
 
add_library(${PROJECT_NAME} SHARED ${SOURCES})
 
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${WPEFRAMEWORK_INCLUDE_DIR}
        ${CMAKE_SOURCE_DIR}/../../Thunder/docs/plugin
)
 
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    ${WPEFrameworkPlugins}
)
 
# Install configuration files
install(
    FILES ${CMAKE_CURRENT_SOURCE_DIR}/MyPlugin.config
    DESTINATION ${CMAKE_INSTALL_PREFIX}/etc/WPEFramework/plugins
)

# Process and install the configuration template if needed
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/MyPlugin.conf.in
    ${CMAKE_CURRENT_BINARY_DIR}/MyPlugin.conf
    @ONLY
)

install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/MyPlugin.conf
    DESTINATION ${CMAKE_INSTALL_PREFIX}/etc/WPEFramework/plugins
)

# Install the plugin library
install(TARGETS ${PROJECT_NAME}
    DESTINATION lib/wpeframework/plugins
)

# Copy data directory if it exists
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Data)
    install(
        DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/Data/
        DESTINATION ${CMAKE_INSTALL_PREFIX}/share/${PROJECT_NAME}
    )
endif()
