#include "husky_highlevel_controller/HuskyHighlevelController.hpp"
#include "std_msgs/String.h"



namespace husky_highlevel_controller {

void chatterCallback(const std_msgs:: msg){
	ROS_INFO("I heard:[%s]",msg.data.c_str());
}


HuskyHighlevelController::HuskyHighlevelController(ros::NodeHandle& nodeHandle) :
  nodeHandle_(nodeHandle)
{
	ros::Subscriber subscriber = nodeHandle.subscribe(chatter,10,chatterCallback);
}

HuskyHighlevelController::~HuskyHighlevelController()
{
}

} /* namespace */
