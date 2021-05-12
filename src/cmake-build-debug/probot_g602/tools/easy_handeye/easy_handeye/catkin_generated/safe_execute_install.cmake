execute_process(COMMAND "/home/tianbot/probot_g602_ws/src/cmake-build-debug/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/tianbot/probot_g602_ws/src/cmake-build-debug/probot_g602/tools/easy_handeye/easy_handeye/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
