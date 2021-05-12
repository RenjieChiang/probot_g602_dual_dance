// Generated by gencpp from file probot_blockly/SetCurrentBlockId.msg
// DO NOT EDIT!


#ifndef PROBOT_BLOCKLY_MESSAGE_SETCURRENTBLOCKID_H
#define PROBOT_BLOCKLY_MESSAGE_SETCURRENTBLOCKID_H

#include <ros/service_traits.h>


#include <probot_blockly/SetCurrentBlockIdRequest.h>
#include <probot_blockly/SetCurrentBlockIdResponse.h>


namespace probot_blockly
{

struct SetCurrentBlockId
{

typedef SetCurrentBlockIdRequest Request;
typedef SetCurrentBlockIdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetCurrentBlockId
} // namespace probot_blockly


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::probot_blockly::SetCurrentBlockId > {
  static const char* value()
  {
    return "4df111d1d4ad61c42177e2b8cae23a38";
  }

  static const char* value(const ::probot_blockly::SetCurrentBlockId&) { return value(); }
};

template<>
struct DataType< ::probot_blockly::SetCurrentBlockId > {
  static const char* value()
  {
    return "probot_blockly/SetCurrentBlockId";
  }

  static const char* value(const ::probot_blockly::SetCurrentBlockId&) { return value(); }
};


// service_traits::MD5Sum< ::probot_blockly::SetCurrentBlockIdRequest> should match
// service_traits::MD5Sum< ::probot_blockly::SetCurrentBlockId >
template<>
struct MD5Sum< ::probot_blockly::SetCurrentBlockIdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::probot_blockly::SetCurrentBlockId >::value();
  }
  static const char* value(const ::probot_blockly::SetCurrentBlockIdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::probot_blockly::SetCurrentBlockIdRequest> should match
// service_traits::DataType< ::probot_blockly::SetCurrentBlockId >
template<>
struct DataType< ::probot_blockly::SetCurrentBlockIdRequest>
{
  static const char* value()
  {
    return DataType< ::probot_blockly::SetCurrentBlockId >::value();
  }
  static const char* value(const ::probot_blockly::SetCurrentBlockIdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::probot_blockly::SetCurrentBlockIdResponse> should match
// service_traits::MD5Sum< ::probot_blockly::SetCurrentBlockId >
template<>
struct MD5Sum< ::probot_blockly::SetCurrentBlockIdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::probot_blockly::SetCurrentBlockId >::value();
  }
  static const char* value(const ::probot_blockly::SetCurrentBlockIdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::probot_blockly::SetCurrentBlockIdResponse> should match
// service_traits::DataType< ::probot_blockly::SetCurrentBlockId >
template<>
struct DataType< ::probot_blockly::SetCurrentBlockIdResponse>
{
  static const char* value()
  {
    return DataType< ::probot_blockly::SetCurrentBlockId >::value();
  }
  static const char* value(const ::probot_blockly::SetCurrentBlockIdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PROBOT_BLOCKLY_MESSAGE_SETCURRENTBLOCKID_H
