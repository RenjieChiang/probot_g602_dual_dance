// Generated by gencpp from file probot_msgs/PredefinedPointList.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_PREDEFINEDPOINTLIST_H
#define PROBOT_MSGS_MESSAGE_PREDEFINEDPOINTLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <probot_msgs/PredefinedPoint.h>

namespace probot_msgs
{
template <class ContainerAllocator>
struct PredefinedPointList_
{
  typedef PredefinedPointList_<ContainerAllocator> Type;

  PredefinedPointList_()
    : points()  {
    }
  PredefinedPointList_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::probot_msgs::PredefinedPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::probot_msgs::PredefinedPoint_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::probot_msgs::PredefinedPointList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_msgs::PredefinedPointList_<ContainerAllocator> const> ConstPtr;

}; // struct PredefinedPointList_

typedef ::probot_msgs::PredefinedPointList_<std::allocator<void> > PredefinedPointList;

typedef boost::shared_ptr< ::probot_msgs::PredefinedPointList > PredefinedPointListPtr;
typedef boost::shared_ptr< ::probot_msgs::PredefinedPointList const> PredefinedPointListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_msgs::PredefinedPointList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_msgs::PredefinedPointList_<ContainerAllocator1> & lhs, const ::probot_msgs::PredefinedPointList_<ContainerAllocator2> & rhs)
{
  return lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_msgs::PredefinedPointList_<ContainerAllocator1> & lhs, const ::probot_msgs::PredefinedPointList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::PredefinedPointList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::PredefinedPointList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::PredefinedPointList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8339ed0e8007f7ed7eb571e91644c004";
  }

  static const char* value(const ::probot_msgs::PredefinedPointList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8339ed0e8007f7edULL;
  static const uint64_t static_value2 = 0x7eb571e91644c004ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_msgs/PredefinedPointList";
  }

  static const char* value(const ::probot_msgs::PredefinedPointList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The predefined points list message contains all the pre-defined points\n"
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

  static const char* value(const ::probot_msgs::PredefinedPointList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PredefinedPointList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_msgs::PredefinedPointList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_msgs::PredefinedPointList_<ContainerAllocator>& v)
  {
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::probot_msgs::PredefinedPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_PREDEFINEDPOINTLIST_H
