1.0.0 (2014-5-1)
---------------------------------
- Adds new 'raw' joint position control mode
- Updates robot_enable to validate SDK versus robot software versions
- Updates joint trajectory action server adding linear, cubic and quintic spline fitting
- Updates joint trajectory action server adding raw joint position control mode option for trajectory execution
- Updates joint trajectory action server allowing execution parameters from messages to override parameter server options
- Updates Limb class to use tcp_nodelay transport hint for joint states, endpoint state, and joint commands
- Updates Limb class move_to_joint_positions adding optional accuracy threshold argument
- Updates Gripper class to validate compatible gripper firmware versions
- Updates Gripper class adding signaling on type, gripping, and moving state changes
- Updates Gripper class adding convenience reset methods for reverting custom gripper properties
- Updates Navigator class wheel_changed signal to use difference since last value
- Renames Gripper class hardware_version to hardware_name
- Fixes Head's nod incorrect wait_for validation

0.7.0 (2013-11-21)
---------------------------------
- Creation of baxter_interface repository from sdk-examples/baxter_interface package.
- Adds joint torque control through the Limb interface.
- Significant joint position accuracy improvements. Low level controls are responsible. The limb interface exploits these gains by introducing a low-pass filter in the move_to_joint_positions method allowing the robot to achieve <0.5 degrees accuracy across each joint.
- Adds ability to set joint position command execution speed.
- Package restructure in support of Catkin expected standards.
- Limb interface API changes. Supports introduction of new singular joint command message, baxter_core_msgs/JointCommand, allowing for control in joint position, velocity and torque modes. The set_command_timeout method has been added to allow user specification of a safety timeout for joint velocity or torque control mode. If this timeout is not met, the robot will disable. Upon exiting one of these control modes, the user must specify another new method exit_control_mode which will enter the robot back into position control mode which has no command timeout.
- Gripper interface API changes. Supports introduction of new gripper plugin robot interface. This new robot gripper software requires the use of the three main baxter_core_msgs gripper messages, EndEffectorCommand, EndEffectorState, and EndEffectorProperties. Commands to the gripper now require json strings containing the parameters which will describe the grippers actuation as well as the commands for execution.
- Adds ability to specify a gripper/object mass.
- Cameras interface adds ability to reset cameras. Useful if not all cameras are enumerated at boot.
- Adds gripper action server. Follows standard ROS gripper action type control_msgs/GripperCommand.
- Digital IO interface now uses signals/slots method.
- Digital IO interface now uses read-only state property (no longer callable).
- Adds clear_calibration to gripper interface. Sequences gripper commands for robust usage.
- Adds Limb move_to_neutral command timeout parameter.
- Renames trajectory_controller.py to joint_trajectory_action_server.py matching form of gripper_action_server.py.
- Fixes reset errors on non-fatal error states.
- Adds feedback to the joint trajectory action server.
- Clarifies timeout messages to be explicit.
- Removes Limb state_rate method.

