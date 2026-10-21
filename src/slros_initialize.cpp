#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "multimodecbf";

// For Block multimodecbf/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_52;

// For Block multimodecbf/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_53;

// For Block multimodecbf/Subscribe4
SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_54;

// For Block multimodecbf/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_55;

// For Block multimodecbf/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Pub_multimodecbf_49;

// For Block multimodecbf/Publish2
SimulinkPublisher<std_msgs::Int8, SL_Bus_multimodecbf_std_msgs_Int8> Pub_multimodecbf_93;

// For Block multimodecbf/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Pub_multimodecbf_96;

// For Block multimodecbf/Publish4
SimulinkPublisher<std_msgs::Int8, SL_Bus_multimodecbf_std_msgs_Int8> Pub_multimodecbf_113;

// For Block multimodecbf/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_multimodecbf_97;

// For Block multimodecbf/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_multimodecbf_98;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

