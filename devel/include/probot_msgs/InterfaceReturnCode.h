// Generated by gencpp from file probot_msgs/InterfaceReturnCode.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_INTERFACERETURNCODE_H
#define PROBOT_MSGS_MESSAGE_INTERFACERETURNCODE_H


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
struct InterfaceReturnCode_
{
  typedef InterfaceReturnCode_<ContainerAllocator> Type;

  InterfaceReturnCode_()
    : val(0)  {
    }
  InterfaceReturnCode_(const ContainerAllocator& _alloc)
    : val(0)  {
  (void)_alloc;
    }



   typedef int8_t _val_type;
  _val_type val;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(FAILURE)
  #undef FAILURE
#endif

  enum {
    SUCCESS = 1,
    FAILURE = -1,
  };


  typedef boost::shared_ptr< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> const> ConstPtr;

}; // struct InterfaceReturnCode_

typedef ::probot_msgs::InterfaceReturnCode_<std::allocator<void> > InterfaceReturnCode;

typedef boost::shared_ptr< ::probot_msgs::InterfaceReturnCode > InterfaceReturnCodePtr;
typedef boost::shared_ptr< ::probot_msgs::InterfaceReturnCode const> InterfaceReturnCodeConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator1> & lhs, const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator2> & rhs)
{
  return lhs.val == rhs.val;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator1> & lhs, const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85a4e241266be66b1e1426b03083a412";
  }

  static const char* value(const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85a4e241266be66bULL;
  static const uint64_t static_value2 = 0x1e1426b03083a412ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_msgs/InterfaceReturnCode";
  }

  static const char* value(const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# App Interface return codes for requests.  All App Interface service\n"
"# replies are required to have a return code indicating success or failure\n"
"# Specific return codes for different failure should be negative.\n"
"int8 val\n"
"\n"
"int8 SUCCESS = 1\n"
"int8 FAILURE = -1\n"
;
  }

  static const char* value(const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterfaceReturnCode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_msgs::InterfaceReturnCode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_msgs::InterfaceReturnCode_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    Printer<int8_t>::stream(s, indent + "  ", v.val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_INTERFACERETURNCODE_H
