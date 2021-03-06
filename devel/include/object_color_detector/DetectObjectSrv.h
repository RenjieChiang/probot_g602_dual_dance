// Generated by gencpp from file object_color_detector/DetectObjectSrv.msg
// DO NOT EDIT!


#ifndef OBJECT_COLOR_DETECTOR_MESSAGE_DETECTOBJECTSRV_H
#define OBJECT_COLOR_DETECTOR_MESSAGE_DETECTOBJECTSRV_H

#include <ros/service_traits.h>


#include <object_color_detector/DetectObjectSrvRequest.h>
#include <object_color_detector/DetectObjectSrvResponse.h>


namespace object_color_detector
{

struct DetectObjectSrv
{

typedef DetectObjectSrvRequest Request;
typedef DetectObjectSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DetectObjectSrv
} // namespace object_color_detector


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::object_color_detector::DetectObjectSrv > {
  static const char* value()
  {
    return "48ea0118b512eb884c42e18a92c6a0ea";
  }

  static const char* value(const ::object_color_detector::DetectObjectSrv&) { return value(); }
};

template<>
struct DataType< ::object_color_detector::DetectObjectSrv > {
  static const char* value()
  {
    return "object_color_detector/DetectObjectSrv";
  }

  static const char* value(const ::object_color_detector::DetectObjectSrv&) { return value(); }
};


// service_traits::MD5Sum< ::object_color_detector::DetectObjectSrvRequest> should match
// service_traits::MD5Sum< ::object_color_detector::DetectObjectSrv >
template<>
struct MD5Sum< ::object_color_detector::DetectObjectSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::object_color_detector::DetectObjectSrv >::value();
  }
  static const char* value(const ::object_color_detector::DetectObjectSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::object_color_detector::DetectObjectSrvRequest> should match
// service_traits::DataType< ::object_color_detector::DetectObjectSrv >
template<>
struct DataType< ::object_color_detector::DetectObjectSrvRequest>
{
  static const char* value()
  {
    return DataType< ::object_color_detector::DetectObjectSrv >::value();
  }
  static const char* value(const ::object_color_detector::DetectObjectSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::object_color_detector::DetectObjectSrvResponse> should match
// service_traits::MD5Sum< ::object_color_detector::DetectObjectSrv >
template<>
struct MD5Sum< ::object_color_detector::DetectObjectSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::object_color_detector::DetectObjectSrv >::value();
  }
  static const char* value(const ::object_color_detector::DetectObjectSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::object_color_detector::DetectObjectSrvResponse> should match
// service_traits::DataType< ::object_color_detector::DetectObjectSrv >
template<>
struct DataType< ::object_color_detector::DetectObjectSrvResponse>
{
  static const char* value()
  {
    return DataType< ::object_color_detector::DetectObjectSrv >::value();
  }
  static const char* value(const ::object_color_detector::DetectObjectSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OBJECT_COLOR_DETECTOR_MESSAGE_DETECTOBJECTSRV_H
