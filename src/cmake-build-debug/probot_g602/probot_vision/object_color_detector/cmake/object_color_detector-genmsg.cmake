# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "object_color_detector: 0 messages, 1 services")

set(MSG_I_FLAGS "-Isensor_msgs:/opt/ros/melodic/share/sensor_msgs/cmake/../msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(object_color_detector_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" NAME_WE)
add_custom_target(_object_color_detector_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "object_color_detector" "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" "geometry_msgs/Pose:geometry_msgs/Quaternion:geometry_msgs/Point"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(object_color_detector
  "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/object_color_detector
)

### Generating Module File
_generate_module_cpp(object_color_detector
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/object_color_detector
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(object_color_detector_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(object_color_detector_generate_messages object_color_detector_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" NAME_WE)
add_dependencies(object_color_detector_generate_messages_cpp _object_color_detector_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(object_color_detector_gencpp)
add_dependencies(object_color_detector_gencpp object_color_detector_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS object_color_detector_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(object_color_detector
  "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/object_color_detector
)

### Generating Module File
_generate_module_eus(object_color_detector
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/object_color_detector
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(object_color_detector_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(object_color_detector_generate_messages object_color_detector_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" NAME_WE)
add_dependencies(object_color_detector_generate_messages_eus _object_color_detector_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(object_color_detector_geneus)
add_dependencies(object_color_detector_geneus object_color_detector_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS object_color_detector_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(object_color_detector
  "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/object_color_detector
)

### Generating Module File
_generate_module_lisp(object_color_detector
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/object_color_detector
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(object_color_detector_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(object_color_detector_generate_messages object_color_detector_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" NAME_WE)
add_dependencies(object_color_detector_generate_messages_lisp _object_color_detector_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(object_color_detector_genlisp)
add_dependencies(object_color_detector_genlisp object_color_detector_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS object_color_detector_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(object_color_detector
  "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/object_color_detector
)

### Generating Module File
_generate_module_nodejs(object_color_detector
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/object_color_detector
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(object_color_detector_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(object_color_detector_generate_messages object_color_detector_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" NAME_WE)
add_dependencies(object_color_detector_generate_messages_nodejs _object_color_detector_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(object_color_detector_gennodejs)
add_dependencies(object_color_detector_gennodejs object_color_detector_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS object_color_detector_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(object_color_detector
  "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/object_color_detector
)

### Generating Module File
_generate_module_py(object_color_detector
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/object_color_detector
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(object_color_detector_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(object_color_detector_generate_messages object_color_detector_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/tianbot/probot_g602_ws/src/probot_g602/probot_vision/object_color_detector/srv/DetectObjectSrv.srv" NAME_WE)
add_dependencies(object_color_detector_generate_messages_py _object_color_detector_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(object_color_detector_genpy)
add_dependencies(object_color_detector_genpy object_color_detector_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS object_color_detector_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/object_color_detector)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/object_color_detector
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(object_color_detector_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(object_color_detector_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(object_color_detector_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/object_color_detector)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/object_color_detector
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(object_color_detector_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(object_color_detector_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(object_color_detector_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/object_color_detector)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/object_color_detector
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(object_color_detector_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(object_color_detector_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(object_color_detector_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/object_color_detector)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/object_color_detector
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(object_color_detector_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(object_color_detector_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(object_color_detector_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/object_color_detector)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/object_color_detector\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/object_color_detector
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(object_color_detector_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(object_color_detector_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(object_color_detector_generate_messages_py geometry_msgs_generate_messages_py)
endif()
