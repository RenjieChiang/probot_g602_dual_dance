// Generated by gencpp from file probot_blockly/SetCurrentBlockIdResponse.msg
// DO NOT EDIT!


#ifndef PROBOT_BLOCKLY_MESSAGE_SETCURRENTBLOCKIDRESPONSE_H
#define PROBOT_BLOCKLY_MESSAGE_SETCURRENTBLOCKIDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace probot_blockly
{
template <class ContainerAllocator>
struct SetCurrentBlockIdResponse_
{
  typedef SetCurrentBlockIdResponse_<ContainerAllocator> Type;

  SetCurrentBlockIdResponse_()
    : result(false)  {
    }
  SetCurrentBlockIdResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetCurrentBlockIdResponse_

typedef ::probot_blockly::SetCurrentBlockIdResponse_<std::allocator<void> > SetCurrentBlockIdResponse;

typedef boost::shared_ptr< ::probot_blockly::SetCurrentBlockIdResponse > SetCurrentBlockIdResponsePtr;
typedef boost::shared_ptr< ::probot_blockly::SetCurrentBlockIdResponse const> SetCurrentBlockIdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator1> & lhs, const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator1> & lhs, const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_blockly

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_blockly/SetCurrentBlockIdResponse";
  }

  static const char* value(const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"\n"
;
  }

  static const char* value(const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCurrentBlockIdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_blockly::SetCurrentBlockIdResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_BLOCKLY_MESSAGE_SETCURRENTBLOCKIDRESPONSE_H
