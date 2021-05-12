// Generated by gencpp from file probot_msgs/SFUCommandCtrl.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_SFUCOMMANDCTRL_H
#define PROBOT_MSGS_MESSAGE_SFUCOMMANDCTRL_H

#include <ros/service_traits.h>


#include <probot_msgs/SFUCommandCtrlRequest.h>
#include <probot_msgs/SFUCommandCtrlResponse.h>


namespace probot_msgs
{

struct SFUCommandCtrl
{

typedef SFUCommandCtrlRequest Request;
typedef SFUCommandCtrlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SFUCommandCtrl
} // namespace probot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::probot_msgs::SFUCommandCtrl > {
  static const char* value()
  {
    return "e479b58adc2a7d2843c02e703b0e9f7f";
  }

  static const char* value(const ::probot_msgs::SFUCommandCtrl&) { return value(); }
};

template<>
struct DataType< ::probot_msgs::SFUCommandCtrl > {
  static const char* value()
  {
    return "probot_msgs/SFUCommandCtrl";
  }

  static const char* value(const ::probot_msgs::SFUCommandCtrl&) { return value(); }
};


// service_traits::MD5Sum< ::probot_msgs::SFUCommandCtrlRequest> should match
// service_traits::MD5Sum< ::probot_msgs::SFUCommandCtrl >
template<>
struct MD5Sum< ::probot_msgs::SFUCommandCtrlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::probot_msgs::SFUCommandCtrl >::value();
  }
  static const char* value(const ::probot_msgs::SFUCommandCtrlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::probot_msgs::SFUCommandCtrlRequest> should match
// service_traits::DataType< ::probot_msgs::SFUCommandCtrl >
template<>
struct DataType< ::probot_msgs::SFUCommandCtrlRequest>
{
  static const char* value()
  {
    return DataType< ::probot_msgs::SFUCommandCtrl >::value();
  }
  static const char* value(const ::probot_msgs::SFUCommandCtrlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::probot_msgs::SFUCommandCtrlResponse> should match
// service_traits::MD5Sum< ::probot_msgs::SFUCommandCtrl >
template<>
struct MD5Sum< ::probot_msgs::SFUCommandCtrlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::probot_msgs::SFUCommandCtrl >::value();
  }
  static const char* value(const ::probot_msgs::SFUCommandCtrlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::probot_msgs::SFUCommandCtrlResponse> should match
// service_traits::DataType< ::probot_msgs::SFUCommandCtrl >
template<>
struct DataType< ::probot_msgs::SFUCommandCtrlResponse>
{
  static const char* value()
  {
    return DataType< ::probot_msgs::SFUCommandCtrl >::value();
  }
  static const char* value(const ::probot_msgs::SFUCommandCtrlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_SFUCOMMANDCTRL_H