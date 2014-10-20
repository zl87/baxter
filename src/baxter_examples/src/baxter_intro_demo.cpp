//============================================================================
// Name        : baxter_intro_demo.hpp
// Author      : Jacob Li
// Version     : 1.0
// Copyright   :
// Description : 
//============================================================================
#include <ros/ros.h>

#include "stdlib.h"
#include <vector>
#include <string>

//Include headers for ROS service
#include <actionlib/server/simple_action_server.h>
#include <moveit/move_group_interface/move_group.h>
#include <moveit_msgs/DisplayTrajectory.h>
#include <moveit/planning_interface/planning_interface.h>
#include <iostream>
#include <map>
#include <std_msgs/Bool.h>
#include <geometry_msgs/Pose.h>
#include <cmath>
#include <time.h>
#include <actionlib/server/simple_action_server.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include "std_msgs/String.h"
#include "trajectory_msgs/JointTrajectory.h"
#include "control_msgs/FollowJointTrajectoryAction.h"
#include "control_msgs/FollowJointTrajectoryActionGoal.h"
#include "control_msgs/FollowJointTrajectoryActionResult.h"
#include "control_msgs/FollowJointTrajectoryActionFeedback.h"
#include <algorithm>
#include <boost/thread/thread.hpp>
#include <boost/thread/condition.hpp>
#include <sstream>
#include <ros/console.h>
#include <unistd.h>
#include <moveit/move_group_interface/move_group.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <signal.h>
#include <unistd.h>
#include <moveit_msgs/RobotState.h>
#include <sensor_msgs/Image.h>
#include <image_transport/image_transport.h>
#include <opencv/cvwimage.h>
#include <opencv/highgui.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <baxter_core_msgs/HeadPanCommand.h>
#include <baxter_core_msgs/DigitalIOState.h>
#include <baxter_core_msgs/JointCommand.h>

using namespace std;

class baxter_intro_demo{

  public:

    double pos_x;
    double pos_y;
    double pos_z;
    string behavior;
    moveit::planning_interface::MoveGroup both_arms;
    moveit::planning_interface::MoveGroup right_arm;
    moveit::planning_interface::MoveGroup left_arm;
    moveit::planning_interface::MoveGroup right_hand;
    moveit::planning_interface::MoveGroup left_hand;

      struct DrRobotArmConfig
        {
            std::string robotID;
            std::string robotIP;
            int portNum;

        };

    std::string robotID;
    std::string robotIP;
    int portNum;


    baxter_intro_demo(): both_arms("both_arms"), right_arm("right_arm"), left_arm("left_arm"), right_hand("right_hand"), left_hand("left_hand")
    {
    }

    ~baxter_intro_demo()
    {
    }

    void reset_arms(){
        ros::AsyncSpinner spinner(0);
        spinner.start();

        std::map<std::string,double> jointmap;
        jointmap.insert(std::pair<std::string,double>("left_s0", -0.08));
        jointmap.insert(std::pair<std::string,double>("left_s1", -1.0));
        jointmap.insert(std::pair<std::string,double>("left_e0", -1.19));
        jointmap.insert(std::pair<std::string,double>("left_e1", 1.94));
        jointmap.insert(std::pair<std::string,double>("left_w0", 0.67));
        jointmap.insert(std::pair<std::string,double>("left_w1", 1.03));
        jointmap.insert(std::pair<std::string,double>("left_w2", -0.50));
        jointmap.insert(std::pair<std::string,double>("right_s0", 0.08));
        jointmap.insert(std::pair<std::string,double>("right_s1", -1.0));
        jointmap.insert(std::pair<std::string,double>("right_e0", 1.19));
        jointmap.insert(std::pair<std::string,double>("right_e1", 1.94));
        jointmap.insert(std::pair<std::string,double>("right_w0", -0.67));
        jointmap.insert(std::pair<std::string,double>("right_w1", 1.03));
        jointmap.insert(std::pair<std::string,double>("right_w2", 0.50));

        both_arms.setJointValueTarget(jointmap);
        both_arms.move();

        spinner.stop();
    }

    //Higher level gesture behaviors
    void gripper_demo()
    {
        ros::AsyncSpinner spinner(0);
        spinner.start();
        reset_arms();
        sleep(0.1);


    }
    void wave()
    {
        ros::AsyncSpinner spinner(0);
        spinner.start();
        // reset_arms();
        sleep(1);
        //Create a series of stored plans, to be executed one by one in a blocking queue
        //Get current state of robot->create plan to next state->set new start state to that one->repeat
        robot_state::RobotStatePtr curr_state=right_arm.getCurrentState();
        
        std::map<std::string, double> r_jm;
        r_jm.insert(std::pair<std::string,double>("right_s0", -0.2868));
        r_jm.insert(std::pair<std::string,double>("right_s1", -0.6756));
        r_jm.insert(std::pair<std::string,double>("right_e0", 1.1900));
        r_jm.insert(std::pair<std::string,double>("right_e1", 1.94));
        r_jm.insert(std::pair<std::string,double>("right_w0", -0.67));
        r_jm.insert(std::pair<std::string,double>("right_w1", -1.5707));
        r_jm.insert(std::pair<std::string,double>("right_w2", 0.50));

        moveit::planning_interface::MoveGroup::Plan r_ap0;
        right_arm.setJointValueTarget(r_jm);+
        right_arm.plan(r_ap0);

        curr_state->setStateValues(r_jm);
        right_arm.setStartState(*curr_state);

        r_jm.clear();
        r_jm.insert(std::pair<std::string,double>("right_s0", -0.2868));
        r_jm.insert(std::pair<std::string,double>("right_s1", -0.6756));
        r_jm.insert(std::pair<std::string,double>("right_e0", 1.1900));
        r_jm.insert(std::pair<std::string,double>("right_e1", 1.94));
        r_jm.insert(std::pair<std::string,double>("right_w0", -1.5467));
        r_jm.insert(std::pair<std::string,double>("right_w1", -1.5707));
        r_jm.insert(std::pair<std::string,double>("right_w2", 0.50));
        
        moveit::planning_interface::MoveGroup::Plan r_ap1;
        right_arm.setJointValueTarget(r_jm);
        right_arm.plan(r_ap1);

        curr_state->setStateValues(r_jm);
        right_arm.setStartState(*curr_state);

        r_jm.clear();
        r_jm.insert(std::pair<std::string,double>("right_s0", -0.2868));
        r_jm.insert(std::pair<std::string,double>("right_s1", -0.6756));
        r_jm.insert(std::pair<std::string,double>("right_e0", 1.1900));
        r_jm.insert(std::pair<std::string,double>("right_e1", 1.94));
        r_jm.insert(std::pair<std::string,double>("right_w0", -0.2062));
        r_jm.insert(std::pair<std::string,double>("right_w1", -1.5707));
        r_jm.insert(std::pair<std::string,double>("right_w2", 0.50));

        moveit::planning_interface::MoveGroup::Plan r_ap2;
        right_arm.setJointValueTarget(r_jm);
        right_arm.plan(r_ap2);

        curr_state->setStateValues(r_jm);
        right_arm.setStartState(*curr_state);

        r_jm.clear();
        r_jm.insert(std::pair<std::string,double>("right_s0", -0.2868));
        r_jm.insert(std::pair<std::string,double>("right_s1", -0.6756));
        r_jm.insert(std::pair<std::string,double>("right_e0", 1.1900));
        r_jm.insert(std::pair<std::string,double>("right_e1", 1.94));
        r_jm.insert(std::pair<std::string,double>("right_w0", -1.5467));
        r_jm.insert(std::pair<std::string,double>("right_w1", -1.5707));
        r_jm.insert(std::pair<std::string,double>("right_w2", 0.50));

        moveit::planning_interface::MoveGroup::Plan r_ap3;
        right_arm.setJointValueTarget(r_jm);
        right_arm.plan(r_ap3);

        // curr_state->setStateValues(r_jm);
        // right_arm.setStartState(*curr_state);

        // r_jm.clear();
        // r_jm.insert(std::pair<std::string,double>("right_s0", -0.2868));
        // r_jm.insert(std::pair<std::string,double>("right_s1", -0.6756));
        // r_jm.insert(std::pair<std::string,double>("right_e0", 1.1900));
        // r_jm.insert(std::pair<std::string,double>("right_e1", 1.94));
        // r_jm.insert(std::pair<std::string,double>("right_w0", -0.2062));
        // r_jm.insert(std::pair<std::string,double>("right_w1", -1.5707));
        // r_jm.insert(std::pair<std::string,double>("right_w2", 0.50));

        // moveit::planning_interface::MoveGroup::Plan r_ap4;
        // right_arm.setJointValueTarget(r_jm);
        // right_arm.plan(r_ap4);

        right_arm.execute(r_ap0);
        right_arm.execute(r_ap1);
        right_arm.execute(r_ap2);
        right_arm.execute(r_ap3);
        // right_arm.execute(r_ap4);

        spinner.stop();

    }

  private:
      std::string to_string(int value)
      {
          stringstream ss;
          ss << value;
          return ss.str();
      }
};

image_transport::Publisher image_pub;
ros::Publisher headpan_pub;
ros::Publisher headnod_pub;
int r_being_manipulated;
int l_being_manipulated;
int r_arm_moving;
int l_arm_moving;

//Pan the head at a medium speed 0.5 rad to the right
void head_pan_right(){
    if(headpan_pub!=NULL){
        baxter_core_msgs::HeadPanCommand pan_r_cmd;
        pan_r_cmd.target=-0.5;
        pan_r_cmd.speed=15;
        headpan_pub.publish(pan_r_cmd);
        sleep(1.5);
    }
}
//Pan the head at a medium speed 0.5 rad to the left
void head_pan_left(){
    if(headpan_pub!=NULL){
        baxter_core_msgs::HeadPanCommand pan_l_cmd;
        pan_l_cmd.target=0.5;
        pan_l_cmd.speed=15;
        headpan_pub.publish(pan_l_cmd);
        sleep(1.5);
    }
}
//Pan the head at a medium speed to the center
void head_reset(){
    if(headpan_pub!=NULL){
        baxter_core_msgs::HeadPanCommand pan_s_cmd;
        pan_s_cmd.target=0;
        pan_s_cmd.speed=15;
        headpan_pub.publish(pan_s_cmd);
        sleep(1);
    }
}
//Quickly nod
void head_nod(){
    if(headnod_pub!=NULL){
        std_msgs::Bool nod_msg;
        nod_msg.data=true;
        headnod_pub.publish(nod_msg);
    }
}

//Display an emotion on the screen using the following arguments: a ros publisher, and one of the following strings
// "happy", "sad", "unhappy", "very happy", "surprised", "neutral"
void display_expression(std::string emotion){
    if(image_pub!=NULL){
        cv_bridge::CvImage out_msg;
        if(emotion.compare("happy")==0){
            ROS_INFO("Happy was called");
            IplImage* img = cvLoadImage("/home/tangy-user/groovy_ws/src/baxter_examples/share/images/smile.png");
            cv::Mat imageMat(img);
            out_msg.encoding = sensor_msgs::image_encodings::BGR8; 
            out_msg.image    = imageMat;
        }else if (emotion.compare("sad")==0){
            IplImage* img = cvLoadImage("/home/tangy-user/groovy_ws/src/baxter_examples/share/images/sad.png");
            cv::Mat imageMat(img);
            out_msg.encoding = sensor_msgs::image_encodings::BGR8; 
            out_msg.image    = imageMat;
        }else if (emotion.compare("very happy")==0){
            IplImage* img = cvLoadImage("/home/tangy-user/groovy_ws/src/baxter_examples/share/images/laugh.png");
            cv::Mat imageMat(img);
            out_msg.encoding = sensor_msgs::image_encodings::BGR8; 
            out_msg.image    = imageMat;
            out_msg.header.stamp = ros::Time::now();
            image_pub.publish(out_msg.toImageMsg());
        }else if (emotion.compare("neutral")==0){
            IplImage* img = cvLoadImage("/home/tangy-user/groovy_ws/src/baxter_examples/share/images/neutral.png");
            cv::Mat imageMat(img);
            out_msg.encoding = sensor_msgs::image_encodings::BGR8; 
            out_msg.image    = imageMat;
        }else if (emotion.compare("unhappy")==0){
            IplImage* img = cvLoadImage("/home/tangy-user/groovy_ws/src/baxter_examples/share/images/frown.png");
            cv::Mat imageMat(img);
            out_msg.encoding = sensor_msgs::image_encodings::BGR8; 
            out_msg.image    = imageMat;
        }else if(emotion.compare("surprised")==0){
            IplImage* img = cvLoadImage("/home/tangy-user/groovy_ws/src/baxter_examples/share/images/surprised.png");
            cv::Mat imageMat(img);
            out_msg.encoding = sensor_msgs::image_encodings::BGR8; 
            out_msg.image    = imageMat;
        }
        image_pub.publish(out_msg.toImageMsg());
    }
}
//Display a surprised expression when manipulating arms with cuff buttons
void r_cuff_button_pressed(const baxter_core_msgs::DigitalIOState::ConstPtr& msg){
    if(r_being_manipulated==0){
        if(msg->state==1){
            display_expression("surprised");
            r_being_manipulated=1;
            head_pan_right();
        }
    }else if(r_being_manipulated==1){
        if(msg->state==0){
            display_expression("neutral");
            r_being_manipulated=0;
            head_reset();
        }
    }
}

void l_cuff_button_pressed(const baxter_core_msgs::DigitalIOState::ConstPtr& msg){
    if(l_being_manipulated==0){
        if(msg->state==1){
            display_expression("surprised");
            l_being_manipulated=1;
            head_pan_left();
        }
    }else if(l_being_manipulated==1){
        if(msg->state==0){
            display_expression("neutral");
            l_being_manipulated=0;
            head_reset();
        }
    }
}

void follow_arm_movement(const baxter_core_msgs::JointCommand::ConstPtr& msg){
    // if(msg->names[0]=="left_s0"){
    //     l_arm_moving=1;
    // }else if(msg->names[0]=="right_s0"){
    //     r_arm_moving=1;
    // }

    // if(r_being_manipulated!=1 && l_being_manipulated!=1){
    //     if(r_arm_moving!=0 && l_arm_moving!=0){
    //         display_expression("neutral");

    //     }else if (r_arm_moving!=0 && l_arm_moving==0){
    //         head_pan_right();
    //         display_expression("happy");

    //     }else if (r_arm_moving==0 && l_arm_moving!=0){
    //         head_pan_left();
    //         display_expression("happy");

    //     }else if (r_arm_moving==0 && l_arm_moving==0){
    //         head_reset();
    //         display_expression("neutral");
    //     }
    // }
}

/*void move_arms(std::string movement){
    if(movement.compare("reset")==0){
        move_client.reset_arms();
    }else if (movement.compare("wave")==0){
        move_client.wave();
    }
}*/

int main(int argc, char **argv)
{
  ros::init(argc, argv, "baxter_intro_demo");
  ros::NodeHandle nh;
  ros::Rate loop_rate(5);

  baxter_intro_demo move_client;
  r_being_manipulated=0;
  l_being_manipulated=0;
  r_arm_moving=0;
  l_arm_moving=0;
  //Screen display publisher for faces
  image_transport::ImageTransport it(nh);
  image_pub = it.advertise("/robot/xdisplay", 10);
  //Head publishers for panning and nodding head
  headpan_pub= nh.advertise<baxter_core_msgs::HeadPanCommand>("/robot/head/command_head_pan", 10);
  headnod_pub= nh.advertise<std_msgs::Bool>("/robot/head/command_head_nod", 10);
  //Cuff subscriber to identify when arms are being manipulated
  ros::Subscriber r_cuff_sub=nh.subscribe("robot/digital_io/right_lower_cuff/state",5, r_cuff_button_pressed);
  ros::Subscriber l_cuff_sub=nh.subscribe("robot/digital_io/left_lower_cuff/state",5, l_cuff_button_pressed);
  //Arm command subscriber to identify when arms are running a script
  ros::Subscriber r_com_sub=nh.subscribe("robot/limb/right/joint_command",5,follow_arm_movement);
  ros::Subscriber l_com_sub=nh.subscribe("robot/limb/left/joint_command",5,follow_arm_movement);
  //Script for introduction demo

  move_client.reset_arms();
  move_client.reset_arms();
  head_reset();
  head_pan_right();

  display_expression("very happy");
  head_pan_left();

  head_reset();

  move_client.wave();
  display_expression("happy");
  
  move_client.reset_arms();
  display_expression("neutral");

  ros::spin();
  loop_rate.sleep();
  return 0;
}