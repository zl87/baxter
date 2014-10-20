## *********************************************************
## 
## File autogenerated for the baxter_interface package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

##**********************************************************
## Software License Agreement (BSD License)
##
##  Copyright (c) 2008, Willow Garage, Inc.
##  All rights reserved.
##
##  Redistribution and use in source and binary forms, with or without
##  modification, are permitted provided that the following conditions
##  are met:
##
##   * Redistributions of source code must retain the above copyright
##     notice, this list of conditions and the following disclaimer.
##   * Redistributions in binary form must reproduce the above
##     copyright notice, this list of conditions and the following
##     disclaimer in the documentation and/or other materials provided
##     with the distribution.
##   * Neither the name of the Willow Garage nor the names of its
##     contributors may be used to endorse or promote products derived
##     from this software without specific prior written permission.
##
##  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
##  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
##  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
##  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
##  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
##  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
##  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
##  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
##  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
##  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
##  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
##  POSSIBILITY OF SUCH DAMAGE.
##**********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 231, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 260, 'description': 'Amount of time (s) controller is permitted to be late achieving goal', 'max': 120.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'goal_time', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 260, 'description': 'Maximum velocity (m/s) at end of trajectory to be considered stopped', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'stopped_velocity_tolerance', 'edit_method': '', 'default': 0.25, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_s0 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_s0_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_s1 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_s1_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_e0 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_e0_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_e1 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_e1_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_w0 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_w0_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_w1 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_w1_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_w2 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_w2_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_s0 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_s0_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_s1 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_s1_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_e0 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_e0_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_e1 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_e1_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_w0 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_w0_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_w1 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_w1_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_w2 - maximum final error', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_w2_goal', 'edit_method': '', 'default': -1.0, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_s0 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_s0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_s1 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_s1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_e0 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_e0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_e1 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_e1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_w0 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_w0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_w1 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_w1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'left_w2 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'left_w2_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_s0 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_s0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_s1 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_s1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_e0 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_e0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_e1 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_e1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_w0 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_w0_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_w1 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_w1_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}, {'srcline': 260, 'description': 'right_w2 - maximum error during trajectory execution', 'max': 1.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/groovy/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'right_w2_trajectory', 'edit_method': '', 'default': 0.2, 'level': 0, 'min': -1.0, 'type': 'double'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']
