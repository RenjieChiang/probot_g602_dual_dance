// Generated by gencpp from file probot_g602_demo/leader_control.msg
// DO NOT EDIT!


#ifndef PROBOT_G602_DEMO_MESSAGE_LEADER_CONTROL_H
#define PROBOT_G602_DEMO_MESSAGE_LEADER_CONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace probot_g602_demo
{
template <class ContainerAllocator>
struct leader_control_
{
  typedef leader_control_<ContainerAllocator> Type;

  leader_control_()
    : ready2next(false)
    , dance_group_number(0)  {
    }
  leader_control_(const ContainerAllocator& _alloc)
    : ready2next(false)
    , dance_group_number(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ready2next_type;
  _ready2next_type ready2next;

   typedef uint8_t _dance_group_number_type;
  _dance_group_number_type dance_group_number;





  typedef boost::shared_ptr< ::probot_g602_demo::leader_control_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_g602_demo::leader_control_<ContainerAllocator> const> ConstPtr;

}; // struct leader_control_

typedef ::probot_g602_demo::leader_control_<std::allocator<void> > leader_control;

typedef boost::shared_ptr< ::probot_g602_demo::leader_control > leader_controlPtr;
typedef boost::shared_ptr< ::probot_g602_demo::leader_control const> leader_controlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_g602_demo::leader_control_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_g602_demo::leader_control_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_g602_demo::leader_control_<ContainerAllocator1> & lhs, const ::probot_g602_demo::leader_control_<ContainerAllocator2> & rhs)
{
  return lhs.ready2next == rhs.ready2next &&
    lhs.dance_group_number == rhs.dance_group_number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_g602_demo::leader_control_<ContainerAllocator1> & lhs, const ::probot_g602_demo::leader_control_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_g602_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_g602_demo::leader_control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_g602_demo::leader_control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_g602_demo::leader_control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_g602_demo::leader_control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_g602_demo::leader_control_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_g602_demo::leader_control_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_g602_demo::leader_control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d093b10ec6105b43f38045b407beccb";
  }

  static const char* value(const ::probot_g602_demo::leader_control_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d093b10ec6105b4ULL;
  static const uint64_t static_value2 = 0x3f38045b407beccbULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_g602_demo::leader_control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_g602_demo/leader_control";
  }

  static const char* value(const ::probot_g602_demo::leader_control_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_g602_demo::leader_control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ready2next\n"
"uint8 dance_group_number\n"
;
  }

  static const char* value(const ::probot_g602_demo::leader_control_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_g602_demo::leader_control_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ready2next);
      stream.next(m.dance_group_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct leader_control_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_g602_demo::leader_control_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_g602_demo::leader_control_<ContainerAllocator>& v)
  {
    s << indent << "ready2next: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ready2next);
    s << indent << "dance_group_number: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dance_group_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_G602_DEMO_MESSAGE_LEADER_CONTROL_H
