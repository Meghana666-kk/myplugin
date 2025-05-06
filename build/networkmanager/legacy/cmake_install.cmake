# Install script for directory: /home/mkk/netmgr/networkmanager/legacy

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mkk/netmgr/install/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/mkk/netmgr/install/usr/lib/wpeframework/plugins" TYPE SHARED_LIBRARY FILES "/home/mkk/netmgr/build/networkmanager/legacy/libWPEFrameworkNetwork.so")
  if(EXISTS "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so"
         OLD_RPATH "/home/mkk/netmgr/install/usr/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkNetwork.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/mkk/netmgr/install/usr/lib/wpeframework/plugins" TYPE SHARED_LIBRARY FILES "/home/mkk/netmgr/build/networkmanager/legacy/libWPEFrameworkWiFiManager.so")
  if(EXISTS "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so"
         OLD_RPATH "/home/mkk/netmgr/install/usr/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/mkk/netmgr/install/usr/lib/wpeframework/plugins/libWPEFrameworkWiFiManager.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xNetworkManagerx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/mkk/netmgr/install/usr/../etc/WPEFramework/plugins/LegacyNetworkAPIs.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/mkk/netmgr/install/usr/../etc/WPEFramework/plugins" TYPE FILE RENAME "LegacyNetworkAPIs.json" FILES "/home/mkk/netmgr/build/networkmanager/legacy/config/LegacyNetworkAPIs.json")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xNetworkManagerx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/mkk/netmgr/install/usr/../etc/WPEFramework/plugins/LegacyWiFiManagerAPIs.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/mkk/netmgr/install/usr/../etc/WPEFramework/plugins" TYPE FILE RENAME "LegacyWiFiManagerAPIs.json" FILES "/home/mkk/netmgr/build/networkmanager/legacy/config/LegacyWiFiManagerAPIs.json")
endif()

