# Install script for directory: /home/mkk/netmgr/Thunder/Source/plugins

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/mkk/netmgr/build/Thunder/Source/plugins/libWPEFrameworkPlugins.so.1.0.0"
    "/home/mkk/netmgr/build/Thunder/Source/plugins/libWPEFrameworkPlugins.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/mkk/netmgr/build/Thunder/Source/com:/home/mkk/netmgr/build/Thunder/Source/websocket:/home/mkk/netmgr/build/Thunder/Source/messaging:/home/mkk/netmgr/build/Thunder/Source/cryptalgo:/home/mkk/netmgr/build/Thunder/Source/core:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/libWPEFrameworkPlugins.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so"
         OLD_RPATH "/home/mkk/netmgr/build/Thunder/Source/com:/home/mkk/netmgr/build/Thunder/Source/websocket:/home/mkk/netmgr/build/Thunder/Source/messaging:/home/mkk/netmgr/build/Thunder/Source/cryptalgo:/home/mkk/netmgr/build/Thunder/Source/core:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkPlugins.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/WPEFramework/plugins" TYPE FILE FILES
    "/home/mkk/netmgr/Thunder/Source/plugins/Channel.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Config.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Configuration.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IPlugin.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IShell.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IController.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IControllerDeprecated.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Shell.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IStateControl.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/StateControl.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/ISubSystem.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IDispatcher.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/SubSystem.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/JSONRPC.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/MetaData.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/plugins.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Request.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Service.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/System.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Types.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/VirtualInput.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/IVirtualInput.h"
    "/home/mkk/netmgr/Thunder/Source/plugins/Module.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs" TYPE SHARED_LIBRARY FILES
    "/home/mkk/netmgr/build/Thunder/Source/plugins/libWPEFrameworkProxyStubs.so.1.0.0"
    "/home/mkk/netmgr/build/Thunder/Source/plugins/libWPEFrameworkProxyStubs.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/mkk/netmgr/build/Thunder/Source/com:/home/mkk/netmgr/build/Thunder/Source/messaging:/home/mkk/netmgr/build/Thunder/Source/core:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs" TYPE SHARED_LIBRARY FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/libWPEFrameworkProxyStubs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so"
         OLD_RPATH "/home/mkk/netmgr/build/Thunder/Source/com:/home/mkk/netmgr/build/Thunder/Source/messaging:/home/mkk/netmgr/build/Thunder/Source/core:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/wpeframework/proxystubs/libWPEFrameworkProxyStubs.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/WPEFrameworkPlugins.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets.cmake"
         "/home/mkk/netmgr/build/Thunder/Source/plugins/CMakeFiles/Export/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/CMakeFiles/Export/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/CMakeFiles/Export/lib/cmake/WPEFrameworkPlugins/WPEFrameworkPluginsTargets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkPlugins" TYPE FILE FILES
    "/home/mkk/netmgr/build/Thunder/Source/plugins/WPEFrameworkPluginsConfigVersion.cmake"
    "/home/mkk/netmgr/build/Thunder/Source/plugins/WPEFrameworkPluginsConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets.cmake"
         "/home/mkk/netmgr/build/Thunder/Source/plugins/CMakeFiles/Export/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/CMakeFiles/Export/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/plugins/CMakeFiles/Export/lib/cmake/WPEFrameworkProxyStubs/WPEFrameworkProxyStubsTargets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkProxyStubs" TYPE FILE FILES
    "/home/mkk/netmgr/build/Thunder/Source/plugins/WPEFrameworkProxyStubsConfigVersion.cmake"
    "/home/mkk/netmgr/build/Thunder/Source/plugins/WPEFrameworkProxyStubsConfig.cmake"
    )
endif()

