execute_process(COMMAND "/home/tangy-user/groovy_ws/build/baxter_examples/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/tangy-user/groovy_ws/build/baxter_examples/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
