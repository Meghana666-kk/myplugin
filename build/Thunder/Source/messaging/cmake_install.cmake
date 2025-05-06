# Install script for directory: /home/mkk/netmgr/Thunder/Source/messaging

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/mkk/netmgr/build/Thunder/Source/messaging/libWPEFrameworkMessaging.so.1.0.0"
    "/home/mkk/netmgr/build/Thunder/Source/messaging/libWPEFrameworkMessaging.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/mkk/netmgr/build/Thunder/Source/core:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/mkk/netmgr/build/Thunder/Source/messaging/libWPEFrameworkMessaging.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so"
         OLD_RPATH "/home/mkk/netmgr/build/Thunder/Source/core:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkMessaging.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/WPEFramework/messaging" TYPE FILE FILES
    "/home/mkk/netmgr/Thunder/Source/messaging/Module.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/MessageClient.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/messaging.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/MessageDispatcher.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/MessageUnit.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TraceCategories.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TraceControl.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/Control.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/Logging.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/LoggingCategories.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/DirectOutput.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/Module.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TraceFactory.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TextMessage.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/BaseCategory.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets.cmake"
         "/home/mkk/netmgr/build/Thunder/Source/messaging/CMakeFiles/Export/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/messaging/CMakeFiles/Export/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/messaging/CMakeFiles/Export/lib/cmake/WPEFrameworkMessaging/WPEFrameworkMessagingTargets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkMessaging" TYPE FILE FILES
    "/home/mkk/netmgr/build/Thunder/Source/messaging/WPEFrameworkMessagingConfigVersion.cmake"
    "/home/mkk/netmgr/build/Thunder/Source/messaging/WPEFrameworkMessagingConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/WPEFramework/tracing" TYPE FILE FILES
    "/home/mkk/netmgr/Thunder/Source/messaging/Module.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/MessageClient.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/messaging.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/MessageDispatcher.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/MessageUnit.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TraceCategories.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TraceControl.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/Control.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/Logging.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/LoggingCategories.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/DirectOutput.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/Module.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TraceFactory.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/TextMessage.h"
    "/home/mkk/netmgr/Thunder/Source/messaging/BaseCategory.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkTracing/WPEFrameworkTracingTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkTracing/WPEFrameworkTracingTargets.cmake"
         "/home/mkk/netmgr/build/Thunder/Source/messaging/CMakeFiles/Export/lib/cmake/WPEFrameworkTracing/WPEFrameworkTracingTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkTracing/WPEFrameworkTracingTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkTracing/WPEFrameworkTracingTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkTracing" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/messaging/CMakeFiles/Export/lib/cmake/WPEFrameworkTracing/WPEFrameworkTracingTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkTracing" TYPE FILE FILES
    "/home/mkk/netmgr/build/Thunder/Source/messaging/WPEFrameworkTracingConfigVersion.cmake"
    "/home/mkk/netmgr/build/Thunder/Source/messaging/WPEFrameworkTracingConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/mkk/netmgr/install/usr/include/WPEFramework/tracing/tracing.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/mkk/netmgr/install/usr/include/WPEFramework/tracing" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/messaging/tracing.h")
endif()

