# Install script for directory: /home/mkk/netmgr/Thunder/Source/core

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/mkk/netmgr/build/Thunder/Source/core/libWPEFrameworkCore.so.1.0.0"
    "/home/mkk/netmgr/build/Thunder/Source/core/libWPEFrameworkCore.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/mkk/netmgr/build/Thunder/Source/core/libWPEFrameworkCore.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libWPEFrameworkCore.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevelx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/WPEFramework/core" TYPE FILE FILES
    "/home/mkk/netmgr/Thunder/Source/core/ASN1.h"
    "/home/mkk/netmgr/Thunder/Source/core/DoorBell.h"
    "/home/mkk/netmgr/Thunder/Source/core/Config.h"
    "/home/mkk/netmgr/Thunder/Source/core/core.h"
    "/home/mkk/netmgr/Thunder/Source/core/CyclicBuffer.h"
    "/home/mkk/netmgr/Thunder/Source/core/DataBuffer.h"
    "/home/mkk/netmgr/Thunder/Source/core/DataElementFile.h"
    "/home/mkk/netmgr/Thunder/Source/core/DataElement.h"
    "/home/mkk/netmgr/Thunder/Source/core/Enumerate.h"
    "/home/mkk/netmgr/Thunder/Source/core/Factory.h"
    "/home/mkk/netmgr/Thunder/Source/core/FileSystem.h"
    "/home/mkk/netmgr/Thunder/Source/core/FileObserver.h"
    "/home/mkk/netmgr/Thunder/Source/core/Frame.h"
    "/home/mkk/netmgr/Thunder/Source/core/IAction.h"
    "/home/mkk/netmgr/Thunder/Source/core/IIterator.h"
    "/home/mkk/netmgr/Thunder/Source/core/IObserver.h"
    "/home/mkk/netmgr/Thunder/Source/core/IPCMessage.h"
    "/home/mkk/netmgr/Thunder/Source/core/IPFrame.h"
    "/home/mkk/netmgr/Thunder/Source/core/IPCChannel.h"
    "/home/mkk/netmgr/Thunder/Source/core/IPCConnector.h"
    "/home/mkk/netmgr/Thunder/Source/core/ISO639.h"
    "/home/mkk/netmgr/Thunder/Source/core/JSON.h"
    "/home/mkk/netmgr/Thunder/Source/core/JSONRPC.h"
    "/home/mkk/netmgr/Thunder/Source/core/KeyValue.h"
    "/home/mkk/netmgr/Thunder/Source/core/Library.h"
    "/home/mkk/netmgr/Thunder/Source/core/Link.h"
    "/home/mkk/netmgr/Thunder/Source/core/LockableContainer.h"
    "/home/mkk/netmgr/Thunder/Source/core/Measurement.h"
    "/home/mkk/netmgr/Thunder/Source/core/Media.h"
    "/home/mkk/netmgr/Thunder/Source/core/MessageException.h"
    "/home/mkk/netmgr/Thunder/Source/core/Module.h"
    "/home/mkk/netmgr/Thunder/Source/core/Netlink.h"
    "/home/mkk/netmgr/Thunder/Source/core/NetworkInfo.h"
    "/home/mkk/netmgr/Thunder/Source/core/NodeId.h"
    "/home/mkk/netmgr/Thunder/Source/core/Number.h"
    "/home/mkk/netmgr/Thunder/Source/core/Optional.h"
    "/home/mkk/netmgr/Thunder/Source/core/Parser.h"
    "/home/mkk/netmgr/Thunder/Source/core/Portability.h"
    "/home/mkk/netmgr/Thunder/Source/core/Process.h"
    "/home/mkk/netmgr/Thunder/Source/core/ProcessInfo.h"
    "/home/mkk/netmgr/Thunder/Source/core/Proxy.h"
    "/home/mkk/netmgr/Thunder/Source/core/Queue.h"
    "/home/mkk/netmgr/Thunder/Source/core/Range.h"
    "/home/mkk/netmgr/Thunder/Source/core/ReadWriteLock.h"
    "/home/mkk/netmgr/Thunder/Source/core/Rectangle.h"
    "/home/mkk/netmgr/Thunder/Source/core/RequestResponse.h"
    "/home/mkk/netmgr/Thunder/Source/core/ResourceMonitor.h"
    "/home/mkk/netmgr/Thunder/Source/core/Serialization.h"
    "/home/mkk/netmgr/Thunder/Source/core/SerialPort.h"
    "/home/mkk/netmgr/Thunder/Source/core/Services.h"
    "/home/mkk/netmgr/Thunder/Source/core/SharedBuffer.h"
    "/home/mkk/netmgr/Thunder/Source/core/Singleton.h"
    "/home/mkk/netmgr/Thunder/Source/core/SocketPort.h"
    "/home/mkk/netmgr/Thunder/Source/core/SocketServer.h"
    "/home/mkk/netmgr/Thunder/Source/core/StateTrigger.h"
    "/home/mkk/netmgr/Thunder/Source/core/StopWatch.h"
    "/home/mkk/netmgr/Thunder/Source/core/Stream.h"
    "/home/mkk/netmgr/Thunder/Source/core/StreamJSON.h"
    "/home/mkk/netmgr/Thunder/Source/core/StreamText.h"
    "/home/mkk/netmgr/Thunder/Source/core/StreamTypeLengthValue.h"
    "/home/mkk/netmgr/Thunder/Source/core/Sync.h"
    "/home/mkk/netmgr/Thunder/Source/core/Synchronize.h"
    "/home/mkk/netmgr/Thunder/Source/core/SynchronousChannel.h"
    "/home/mkk/netmgr/Thunder/Source/core/SystemInfo.h"
    "/home/mkk/netmgr/Thunder/Source/core/TextFragment.h"
    "/home/mkk/netmgr/Thunder/Source/core/TextReader.h"
    "/home/mkk/netmgr/Thunder/Source/core/Thread.h"
    "/home/mkk/netmgr/Thunder/Source/core/ThreadPool.h"
    "/home/mkk/netmgr/Thunder/Source/core/Time.h"
    "/home/mkk/netmgr/Thunder/Source/core/Timer.h"
    "/home/mkk/netmgr/Thunder/Source/core/Trace.h"
    "/home/mkk/netmgr/Thunder/Source/core/TriState.h"
    "/home/mkk/netmgr/Thunder/Source/core/TypeTraits.h"
    "/home/mkk/netmgr/Thunder/Source/core/ValueRecorder.h"
    "/home/mkk/netmgr/Thunder/Source/core/XGetopt.h"
    "/home/mkk/netmgr/Thunder/Source/core/WorkerPool.h"
    "/home/mkk/netmgr/Thunder/Source/core/IWarningReportingControl.h"
    "/home/mkk/netmgr/Thunder/Source/core/WarningReportingControl.h"
    "/home/mkk/netmgr/Thunder/Source/core/WarningReportingCategories.h"
    "/home/mkk/netmgr/Thunder/Source/core/Module.h"
    "/home/mkk/netmgr/Thunder/Source/core/CallsignTLS.h"
    "/home/mkk/netmgr/Thunder/Source/core/TokenizedStringList.h"
    "/home/mkk/netmgr/Thunder/Source/core/MessageStore.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/core/WPEFrameworkCore.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets.cmake"
         "/home/mkk/netmgr/build/Thunder/Source/core/CMakeFiles/Export/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/core/CMakeFiles/Export/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/core/CMakeFiles/Export/lib/cmake/WPEFrameworkCore/WPEFrameworkCoreTargets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/WPEFrameworkCore" TYPE FILE FILES
    "/home/mkk/netmgr/build/Thunder/Source/core/WPEFrameworkCoreConfigVersion.cmake"
    "/home/mkk/netmgr/build/Thunder/Source/core/WPEFrameworkCoreConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CompileSettingsDebug/CompileSettingsDebugTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CompileSettingsDebug/CompileSettingsDebugTargets.cmake"
         "/home/mkk/netmgr/build/Thunder/Source/core/CMakeFiles/Export/lib/cmake/CompileSettingsDebug/CompileSettingsDebugTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CompileSettingsDebug/CompileSettingsDebugTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/CompileSettingsDebug/CompileSettingsDebugTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CompileSettingsDebug" TYPE FILE FILES "/home/mkk/netmgr/build/Thunder/Source/core/CMakeFiles/Export/lib/cmake/CompileSettingsDebug/CompileSettingsDebugTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/CompileSettingsDebug" TYPE FILE FILES
    "/home/mkk/netmgr/build/Thunder/Source/core/CompileSettingsDebugConfigVersion.cmake"
    "/home/mkk/netmgr/build/Thunder/Source/core/CompileSettingsDebugConfig.cmake"
    )
endif()

