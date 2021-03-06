// Generated by gencpp from file probot_msgs/Config.msg
// DO NOT EDIT!


#ifndef PROBOT_MSGS_MESSAGE_CONFIG_H
#define PROBOT_MSGS_MESSAGE_CONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace probot_msgs
{
template <class ContainerAllocator>
struct Config_
{
  typedef Config_<ContainerAllocator> Type;

  Config_()
    : controller_log_level(0)
    , init_with_all_zero_pos(false)
    , enable_joint_calibration(false)
    , seneor_position()
    , speed_to_sensor()
    , speed_to_zero()
    , pump_io_number(0)
    , changer_io_number(0)
    , pose_to_eef()
    , mask(0)  {
    }
  Config_(const ContainerAllocator& _alloc)
    : controller_log_level(0)
    , init_with_all_zero_pos(false)
    , enable_joint_calibration(false)
    , seneor_position(_alloc)
    , speed_to_sensor(_alloc)
    , speed_to_zero(_alloc)
    , pump_io_number(0)
    , changer_io_number(0)
    , pose_to_eef(_alloc)
    , mask(0)  {
  (void)_alloc;
    }



   typedef int8_t _controller_log_level_type;
  _controller_log_level_type controller_log_level;

   typedef uint8_t _init_with_all_zero_pos_type;
  _init_with_all_zero_pos_type init_with_all_zero_pos;

   typedef uint8_t _enable_joint_calibration_type;
  _enable_joint_calibration_type enable_joint_calibration;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _seneor_position_type;
  _seneor_position_type seneor_position;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _speed_to_sensor_type;
  _speed_to_sensor_type speed_to_sensor;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _speed_to_zero_type;
  _speed_to_zero_type speed_to_zero;

   typedef int8_t _pump_io_number_type;
  _pump_io_number_type pump_io_number;

   typedef int8_t _changer_io_number_type;
  _changer_io_number_type changer_io_number;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _pose_to_eef_type;
  _pose_to_eef_type pose_to_eef;

   typedef int32_t _mask_type;
  _mask_type mask;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MASK_LOGLEVEL)
  #undef MASK_LOGLEVEL
#endif
#if defined(_WIN32) && defined(MASK_ZERO_CALIBRATION)
  #undef MASK_ZERO_CALIBRATION
#endif
#if defined(_WIN32) && defined(MASK_TOOL_SETTING)
  #undef MASK_TOOL_SETTING
#endif
#if defined(_WIN32) && defined(MASK_TOOL_POSE)
  #undef MASK_TOOL_POSE
#endif

  enum {
    MASK_LOGLEVEL = 1,
    MASK_ZERO_CALIBRATION = 2,
    MASK_TOOL_SETTING = 4,
    MASK_TOOL_POSE = 8,
  };


  typedef boost::shared_ptr< ::probot_msgs::Config_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::probot_msgs::Config_<ContainerAllocator> const> ConstPtr;

}; // struct Config_

typedef ::probot_msgs::Config_<std::allocator<void> > Config;

typedef boost::shared_ptr< ::probot_msgs::Config > ConfigPtr;
typedef boost::shared_ptr< ::probot_msgs::Config const> ConfigConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::probot_msgs::Config_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::probot_msgs::Config_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::probot_msgs::Config_<ContainerAllocator1> & lhs, const ::probot_msgs::Config_<ContainerAllocator2> & rhs)
{
  return lhs.controller_log_level == rhs.controller_log_level &&
    lhs.init_with_all_zero_pos == rhs.init_with_all_zero_pos &&
    lhs.enable_joint_calibration == rhs.enable_joint_calibration &&
    lhs.seneor_position == rhs.seneor_position &&
    lhs.speed_to_sensor == rhs.speed_to_sensor &&
    lhs.speed_to_zero == rhs.speed_to_zero &&
    lhs.pump_io_number == rhs.pump_io_number &&
    lhs.changer_io_number == rhs.changer_io_number &&
    lhs.pose_to_eef == rhs.pose_to_eef &&
    lhs.mask == rhs.mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::probot_msgs::Config_<ContainerAllocator1> & lhs, const ::probot_msgs::Config_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace probot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::Config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::probot_msgs::Config_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::Config_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::probot_msgs::Config_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::Config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::probot_msgs::Config_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::probot_msgs::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2140a2cd47f33c6649b1e6b52754c1e2";
  }

  static const char* value(const ::probot_msgs::Config_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2140a2cd47f33c66ULL;
  static const uint64_t static_value2 = 0x49b1e6b52754c1e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::probot_msgs::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "probot_msgs/Config";
  }

  static const char* value(const ::probot_msgs::Config_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::probot_msgs::Config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The Config message contains system configuration data\n"
"\n"
"# The output log level for controller\n"
"int8 controller_log_level\n"
"bool init_with_all_zero_pos\n"
"\n"
"# The zero calibration parameters\n"
"bool        enable_joint_calibration\n"
"float32[]   seneor_position\n"
"float32[]   speed_to_sensor\n"
"float32[]   speed_to_zero\n"
"\n"
"# The tool setting parameters\n"
"int8 pump_io_number\n"
"int8 changer_io_number\n"
"\n"
"# The tool's relative pose to end-effector(tool0)\n"
"# This is used to jog tool instead of end-effector\n"
"# If it is to jog end-effector, set pose_to_eef to 0, that is (0,0,0)(0,0,0,1)\n"
"geometry_msgs/Pose[] pose_to_eef\n"
"\n"
"# The bit-map mask of valid fields which this message contains\n"
"int32 mask\n"
"\n"
"int32 MASK_LOGLEVEL          = 1\n"
"int32 MASK_ZERO_CALIBRATION  = 2\n"
"int32 MASK_TOOL_SETTING      = 4\n"
"int32 MASK_TOOL_POSE         = 8\n"
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

  static const char* value(const ::probot_msgs::Config_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::probot_msgs::Config_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.controller_log_level);
      stream.next(m.init_with_all_zero_pos);
      stream.next(m.enable_joint_calibration);
      stream.next(m.seneor_position);
      stream.next(m.speed_to_sensor);
      stream.next(m.speed_to_zero);
      stream.next(m.pump_io_number);
      stream.next(m.changer_io_number);
      stream.next(m.pose_to_eef);
      stream.next(m.mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Config_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::probot_msgs::Config_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::probot_msgs::Config_<ContainerAllocator>& v)
  {
    s << indent << "controller_log_level: ";
    Printer<int8_t>::stream(s, indent + "  ", v.controller_log_level);
    s << indent << "init_with_all_zero_pos: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.init_with_all_zero_pos);
    s << indent << "enable_joint_calibration: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable_joint_calibration);
    s << indent << "seneor_position[]" << std::endl;
    for (size_t i = 0; i < v.seneor_position.size(); ++i)
    {
      s << indent << "  seneor_position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.seneor_position[i]);
    }
    s << indent << "speed_to_sensor[]" << std::endl;
    for (size_t i = 0; i < v.speed_to_sensor.size(); ++i)
    {
      s << indent << "  speed_to_sensor[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.speed_to_sensor[i]);
    }
    s << indent << "speed_to_zero[]" << std::endl;
    for (size_t i = 0; i < v.speed_to_zero.size(); ++i)
    {
      s << indent << "  speed_to_zero[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.speed_to_zero[i]);
    }
    s << indent << "pump_io_number: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pump_io_number);
    s << indent << "changer_io_number: ";
    Printer<int8_t>::stream(s, indent + "  ", v.changer_io_number);
    s << indent << "pose_to_eef[]" << std::endl;
    for (size_t i = 0; i < v.pose_to_eef.size(); ++i)
    {
      s << indent << "  pose_to_eef[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_to_eef[i]);
    }
    s << indent << "mask: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROBOT_MSGS_MESSAGE_CONFIG_H
