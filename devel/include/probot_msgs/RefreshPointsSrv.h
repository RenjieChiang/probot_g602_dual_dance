// Generated by gencpp from file probot_msgs/RefreshPointsSrv.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_REFRESHPOINTSSRV_H
#define PROBOT_MSGS_MESSAGE_REFRESHPOINTSSRV_H

#include <ros/service_traits.h>


#include <probot_msgs/RefreshPointsSrvRequest.h>
#include <probot_msgs/RefreshPointsSrvResponse.h>


namespace probot_msgs
{

struct RefreshPointsSrv
{

typedef RefreshPointsSrvRequest Request;
typedef RefreshPointsSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RefreshPointsSrv
} // namespace probot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::probot_msgs::RefreshPointsSrv > {
  static const char* value()
  {
    return "45f7b8282295bca51124b6665b808529";
  }

  static const char* value(const ::probot_msgs::RefreshPointsSrv&) { return value(); }
};

template<>
struct DataType< ::probot_msgs::RefreshPointsSrv > {
  static const char* value()
  {
    return "probot_msgs/RefreshPointsSrv";
  }

  static const char* value(const ::probot_msgs::RefreshPointsSrv&) { return value(); }
};


// service_traits::MD5Sum< ::probot_msgs::RefreshPointsSrvRequest> should match
// service_traits::MD5Sum< ::probot_msgs::RefreshPointsSrv >
template<>
struct MD5Sum< ::probot_msgs::RefreshPointsSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::probot_msgs::RefreshPointsSrv >::value();
  }
  static const char* value(const ::probot_msgs::RefreshPointsSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::probot_msgs::RefreshPointsSrvRequest> should match
// service_traits::DataType< ::probot_msgs::RefreshPointsSrv >
template<>
struct DataType< ::probot_msgs::RefreshPointsSrvRequest>
{
  static const char* value()
  {
    return DataType< ::probot_msgs::RefreshPointsSrv >::value();
  }
  static const char* value(const ::probot_msgs::RefreshPointsSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::probot_msgs::RefreshPointsSrvResponse> should match
// service_traits::MD5Sum< ::probot_msgs::RefreshPointsSrv >
template<>
struct MD5Sum< ::probot_msgs::RefreshPointsSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::probot_msgs::RefreshPointsSrv >::value();
  }
  static const char* value(const ::probot_msgs::RefreshPointsSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::probot_msgs::RefreshPointsSrvResponse> should match
// service_traits::DataType< ::probot_msgs::RefreshPointsSrv >
template<>
struct DataType< ::probot_msgs::RefreshPointsSrvResponse>
{
  static const char* value()
  {
    return DataType< ::probot_msgs::RefreshPointsSrv >::value();
  }
  static const char* value(const ::probot_msgs::RefreshPointsSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_REFRESHPOINTSSRV_H