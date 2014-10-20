# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(WARNING "Invoking generate_messages() without having added any message or service file before.
You should either add add_message_files() and/or add_service_files() calls or remove the invocation of generate_messages().")
message(STATUS "baxter_examples: 0 messages, 0 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/groovy/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/groovy/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/groovy/share/sensor_msgs/cmake/../msg;-Itrajectory_msgs:/opt/ros/groovy/share/trajectory_msgs/cmake/../msg;-Icontrol_msgs:/opt/ros/groovy/share/control_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/groovy/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(baxter_examples_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_cpp(baxter_examples
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/baxter_examples
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(baxter_examples_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(baxter_examples_generate_messages baxter_examples_generate_messages_cpp)

# target for backward compatibility
add_custom_target(baxter_examples_gencpp)
add_dependencies(baxter_examples_gencpp baxter_examples_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS baxter_examples_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_lisp(baxter_examples
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/baxter_examples
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(baxter_examples_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(baxter_examples_generate_messages baxter_examples_generate_messages_lisp)

# target for backward compatibility
add_custom_target(baxter_examples_genlisp)
add_dependencies(baxter_examples_genlisp baxter_examples_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS baxter_examples_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_py(baxter_examples
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/baxter_examples
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(baxter_examples_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(baxter_examples_generate_messages baxter_examples_generate_messages_py)

# target for backward compatibility
add_custom_target(baxter_examples_genpy)
add_dependencies(baxter_examples_genpy baxter_examples_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS baxter_examples_generate_messages_py)


debug_message(2 "baxter_examples: Iflags=${MSG_I_FLAGS}")


if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/baxter_examples)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/baxter_examples
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(baxter_examples_generate_messages_cpp std_msgs_generate_messages_cpp)
add_dependencies(baxter_examples_generate_messages_cpp geometry_msgs_generate_messages_cpp)
add_dependencies(baxter_examples_generate_messages_cpp sensor_msgs_generate_messages_cpp)
add_dependencies(baxter_examples_generate_messages_cpp trajectory_msgs_generate_messages_cpp)
add_dependencies(baxter_examples_generate_messages_cpp control_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/baxter_examples)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/baxter_examples
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(baxter_examples_generate_messages_lisp std_msgs_generate_messages_lisp)
add_dependencies(baxter_examples_generate_messages_lisp geometry_msgs_generate_messages_lisp)
add_dependencies(baxter_examples_generate_messages_lisp sensor_msgs_generate_messages_lisp)
add_dependencies(baxter_examples_generate_messages_lisp trajectory_msgs_generate_messages_lisp)
add_dependencies(baxter_examples_generate_messages_lisp control_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/baxter_examples)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/baxter_examples\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/baxter_examples
    DESTINATION ${genpy_INSTALL_DIR}
    # skip all init files
    PATTERN "__init__.py" EXCLUDE
    PATTERN "__init__.pyc" EXCLUDE
  )
  # install init files which are not in the root folder of the generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/baxter_examples
    DESTINATION ${genpy_INSTALL_DIR}
    FILES_MATCHING
    REGEX "/baxter_examples/.+/__init__.pyc?$"
  )
endif()
add_dependencies(baxter_examples_generate_messages_py std_msgs_generate_messages_py)
add_dependencies(baxter_examples_generate_messages_py geometry_msgs_generate_messages_py)
add_dependencies(baxter_examples_generate_messages_py sensor_msgs_generate_messages_py)
add_dependencies(baxter_examples_generate_messages_py trajectory_msgs_generate_messages_py)
add_dependencies(baxter_examples_generate_messages_py control_msgs_generate_messages_py)
