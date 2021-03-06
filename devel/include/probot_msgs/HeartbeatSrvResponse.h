// Generated by gencpp from file probot_msgs/HeartbeatSrvResponse.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_HEARTBEATSRVRESPONSE_H
#define PROBOT_MSGS_MESSAGE_HEARTBEATSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace probot_msgs
{
template <class ContainerAllocator>
struct HeartbeatSrvResponse_
{
  typedef HeartbeatSrvResponse_<ContainerAllocator> Type;

  HeartbeatSrvResponse_()
    : countResponse(0)  {
    }
  HeartbeatSrvResponse_(const ContainerAllocator& _alloc)
    : countResponse(0)  {
  (void)_alloc;
    }



   typedef int32_t _countResponse_type;
  _countResponse_type countResponse;





  typedef boost::shared_ptr< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct HeartbeatSrvResponse_

typedef ::probot_msgs::HeartbeatSrvResponse_<std::allocator<void> > HeartbeatSrvResponse;

typedef boost::shared_ptr< ::probot_msgs::HeartbeatSrvResponse > HeartbeatSrvResponsePtr;
typedef boost::shared_ptr< ::probot_msgs::HeartbeatSrvResponse const> HeartbeatSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator1> & lhs, const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.countResponse == rhs.countResponse;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator1> & lhs, const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4b441852a5db47dfa689349d7628591";
  }

  static const char* value(const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4b441852a5db47dULL;
  static const uint64_t static_value2 = 0xfa689349d7628591ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_msgs/HeartbeatSrvResponse";
  }

  static const char* value(const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 countResponse\n"
;
  }

  static const char* value(const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.countResponse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeartbeatSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_msgs::HeartbeatSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "countResponse: ";
    Printer<int32_t>::stream(s, indent + "  ", v.countResponse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_HEARTBEATSRVRESPONSE_H
