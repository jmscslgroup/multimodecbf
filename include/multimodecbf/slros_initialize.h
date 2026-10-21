#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "multimodecbf_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block multimodecbf/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_52;

// For Block multimodecbf/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_53;

// For Block multimodecbf/Subscribe4
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_54;

// For Block multimodecbf/Subscribe6
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Sub_multimodecbf_55;

// For Block multimodecbf/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Pub_multimodecbf_49;

// For Block multimodecbf/Publish2
extern SimulinkPublisher<std_msgs::Int8, SL_Bus_multimodecbf_std_msgs_Int8> Pub_multimodecbf_93;

// For Block multimodecbf/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_multimodecbf_std_msgs_Float64> Pub_multimodecbf_96;

// For Block multimodecbf/Publish4
extern SimulinkPublisher<std_msgs::Int8, SL_Bus_multimodecbf_std_msgs_Int8> Pub_multimodecbf_113;

// For Block multimodecbf/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_multimodecbf_97;

// For Block multimodecbf/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_multimodecbf_98;

void slros_node_init(int argc, char** argv);

#endif
