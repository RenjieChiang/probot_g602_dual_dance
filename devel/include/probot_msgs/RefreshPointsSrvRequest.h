// Generated by gencpp from file probot_msgs/RefreshPointsSrvRequest.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_REFRESHPOINTSSRVREQUEST_H
#define PROBOT_MSGS_MESSAGE_REFRESHPOINTSSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <probot_msgs/PredefinedPointList.h>

namespace probot_msgs
{
template <class ContainerAllocator>
struct RefreshPointsSrvRequest_
{
  typedef RefreshPointsSrvRequest_<ContainerAllocator> Type;

  RefreshPointsSrvRequest_()
    : ctrlCode(0)
    , pointList()  {
    }
  RefreshPointsSrvRequest_(const ContainerAllocator& _alloc)
    : ctrlCode(0)
    , pointList(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _ctrlCode_type;
  _ctrlCode_type ctrlCode;

   typedef  ::probot_msgs::PredefinedPointList_<ContainerAllocator>  _pointList_type;
  _pointList_type pointList;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POINTS_GET)
  #undef POINTS_GET
#endif
#if defined(_WIN32) && defined(POINTS_ADD)
  #undef POINTS_ADD
#endif
#if defined(_WIN32) && defined(POINTS_UPDATE)
  #undef POINTS_UPDATE
#endif
#if defined(_WIN32) && defined(POINTS_DELETE)
  #undef POINTS_DELETE
#endif

  enum {
    POINTS_GET = 0,
    POINTS_ADD = 1,
    POINTS_UPDATE = 2,
    POINTS_DELETE = 3,
  };


  typedef boost::shared_ptr< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RefreshPointsSrvRequest_

typedef ::probot_msgs::RefreshPointsSrvRequest_<std::allocator<void> > RefreshPointsSrvRequest;

typedef boost::shared_ptr< ::probot_msgs::RefreshPointsSrvRequest > RefreshPointsSrvRequestPtr;
typedef boost::shared_ptr< ::probot_msgs::RefreshPointsSrvRequest const> RefreshPointsSrvRequestConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator1> & lhs, const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ctrlCode == rhs.ctrlCode &&
    lhs.pointList == rhs.pointList;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator1> & lhs, const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f08e45c8af24d4a195995ab547506c50";
  }

  static const char* value(const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf08e45c8af24d4a1ULL;
  static const uint64_t static_value2 = 0x95995ab547506c50ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_msgs/RefreshPointsSrvRequest";
  }

  static const char* value(const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The RefreshPoints service notify system to update the pre-defined points list\n"
"\n"
"int8 ctrlCode\n"
"\n"
"int8 POINTS_GET    = 0\n"
"int8 POINTS_ADD    = 1\n"
"int8 POINTS_UPDATE = 2\n"
"int8 POINTS_DELETE = 3\n"
"\n"
"probot_msgs/PredefinedPointList pointList\n"
"\n"
"================================================================================\n"
"MSG: probot_msgs/PredefinedPointList\n"
"# The predefined points list message contains all the pre-defined points\n"
"\n"
"PredefinedPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: probot_msgs/PredefinedPoint\n"
"# The Predefined message contains the information of a pre-defined point on rviz\n"
"\n"
"string name\n"
"geometry_msgs/Pose pose\n"
"float64[] joints\n"
"uint32 digitalOutput\n"
"uint32 relayOutput\n"
"float64 pointDelayBeforeExecute\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ctrlCode);
      stream.next(m.pointList);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RefreshPointsSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_msgs::RefreshPointsSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "ctrlCode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ctrlCode);
    s << indent << "pointList: ";
    s << std::endl;
    Printer< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >::stream(s, indent + "  ", v.pointList);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_REFRESHPOINTSSRVREQUEST_H