# Install script for directory: /home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tianbot/probot_g602_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/tianbot/probot_g602_ws/build/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye/msg" TYPE FILE FILES
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/msg/HandeyeCalibration.msg"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/msg/SampleList.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye/srv" TYPE FILE FILES
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/srv/ComputeCalibration.srv"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/srv/RemoveSample.srv"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/srv/TakeSample.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye/cmake" TYPE FILE FILES "/home/tianbot/probot_g602_ws/build/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/installspace/easy_handeye-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/tianbot/probot_g602_ws/devel/include/easy_handeye")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/tianbot/probot_g602_ws/devel/share/roseus/ros/easy_handeye")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/tianbot/probot_g602_ws/devel/share/common-lisp/ros/easy_handeye")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/tianbot/probot_g602_ws/devel/share/gennodejs/ros/easy_handeye")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/tianbot/probot_g602_ws/devel/lib/python2.7/dist-packages/easy_handeye")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/tianbot/probot_g602_ws/devel/lib/python2.7/dist-packages/easy_handeye" REGEX "/\\_\\_init\\_\\_\\.py$" EXCLUDE REGEX "/\\_\\_init\\_\\_\\.pyc$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/tianbot/probot_g602_ws/devel/lib/python2.7/dist-packages/easy_handeye" FILES_MATCHING REGEX "/home/tianbot/probot_g602_ws/devel/lib/python2.7/dist-packages/easy_handeye/.+/__init__.pyc?$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tianbot/probot_g602_ws/build/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/installspace/easy_handeye.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye/cmake" TYPE FILE FILES "/home/tianbot/probot_g602_ws/build/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/installspace/easy_handeye-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye/cmake" TYPE FILE FILES
    "/home/tianbot/probot_g602_ws/build/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/installspace/easy_handeyeConfig.cmake"
    "/home/tianbot/probot_g602_ws/build/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/installspace/easy_handeyeConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye" TYPE FILE FILES "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/easy_handeye" TYPE PROGRAM FILES
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/scripts/calibrate.py"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/scripts/handeye_calibration_commander.py"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/scripts/publish.py"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/src/easy_handeye/handeye_calibration.py"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/src/easy_handeye/handeye_calibrator.py"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/src/easy_handeye/handeye_client.py"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/src/easy_handeye/handeye_server.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/easy_handeye/launch" TYPE FILE FILES
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/launch/calibrate.launch"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/launch/publish.launch"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/launch/rqt_easy_handeye.perspective"
    "/home/tianbot/probot_g602_ws/src/probot_g602/tools/easy_handeye/easy_handeye/launch/rviz_easy_handeye.config"
    )
endif()

