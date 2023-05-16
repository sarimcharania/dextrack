# Dextrack
A dexterity framework for robot manipulators with an eye-in-hand configuration. The system is designed for manipulators that face hardware execution errors and performs hardware execution error correction based by using the reltaive pose estimation done by integrated model based trackers to implement a planning based iterative sense-plan-act hand-eye coordination system. Dextrack is implemented on ROS framework and allows integration of third party model-based trackers like ICG and ViSP, and the thrid party planning interface MoveIt for planning of trajectories. 

## Usage
1. Run roscore
2. Initialize the motor drivers
    >Start up the dynamixel driver node that controls the joint motors (example below)
    >
    >      roslaunch rob_launch arm.launch
 
  

  
