// Generated by gencpp from file plutodrone/PlutoPilotRequest.msg
// DO NOT EDIT!


#ifndef PLUTODRONE_MESSAGE_PLUTOPILOTREQUEST_H
#define PLUTODRONE_MESSAGE_PLUTOPILOTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace plutodrone
{
template <class ContainerAllocator>
struct PlutoPilotRequest_
{
  typedef PlutoPilotRequest_<ContainerAllocator> Type;

  PlutoPilotRequest_()
    : roll(0)
    , pitch(0)
    , yaw(0)
    , accX(0.0)
    , accY(0.0)
    , accZ(0.0)
    , gyroX(0.0)
    , gyroY(0.0)
    , gyroZ(0.0)
    , magX(0.0)
    , magY(0.0)
    , magZ(0.0)
    , alt(0.0)  {
    }
  PlutoPilotRequest_(const ContainerAllocator& _alloc)
    : roll(0)
    , pitch(0)
    , yaw(0)
    , accX(0.0)
    , accY(0.0)
    , accZ(0.0)
    , gyroX(0.0)
    , gyroY(0.0)
    , gyroZ(0.0)
    , magX(0.0)
    , magY(0.0)
    , magZ(0.0)
    , alt(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _roll_type;
  _roll_type roll;

   typedef int32_t _pitch_type;
  _pitch_type pitch;

   typedef int32_t _yaw_type;
  _yaw_type yaw;

   typedef float _accX_type;
  _accX_type accX;

   typedef float _accY_type;
  _accY_type accY;

   typedef float _accZ_type;
  _accZ_type accZ;

   typedef float _gyroX_type;
  _gyroX_type gyroX;

   typedef float _gyroY_type;
  _gyroY_type gyroY;

   typedef float _gyroZ_type;
  _gyroZ_type gyroZ;

   typedef float _magX_type;
  _magX_type magX;

   typedef float _magY_type;
  _magY_type magY;

   typedef float _magZ_type;
  _magZ_type magZ;

   typedef float _alt_type;
  _alt_type alt;





  typedef boost::shared_ptr< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlutoPilotRequest_

typedef ::plutodrone::PlutoPilotRequest_<std::allocator<void> > PlutoPilotRequest;

typedef boost::shared_ptr< ::plutodrone::PlutoPilotRequest > PlutoPilotRequestPtr;
typedef boost::shared_ptr< ::plutodrone::PlutoPilotRequest const> PlutoPilotRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plutodrone::PlutoPilotRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace plutodrone

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'plutodrone': ['/home/supastrikaromil/catkin_ws/src/pluto_drone/plutodrone/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e61791776d560375085144e1668140e";
  }

  static const char* value(const ::plutodrone::PlutoPilotRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e61791776d56037ULL;
  static const uint64_t static_value2 = 0x5085144e1668140eULL;
};

template<class ContainerAllocator>
struct DataType< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plutodrone/PlutoPilotRequest";
  }

  static const char* value(const ::plutodrone::PlutoPilotRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
int32 roll\n\
int32 pitch\n\
int32 yaw\n\
float32 accX\n\
float32 accY\n\
float32 accZ\n\
float32 gyroX\n\
float32 gyroY\n\
float32 gyroZ\n\
float32 magX\n\
float32 magY\n\
float32 magZ\n\
float32 alt\n\
\n\
";
  }

  static const char* value(const ::plutodrone::PlutoPilotRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.accX);
      stream.next(m.accY);
      stream.next(m.accZ);
      stream.next(m.gyroX);
      stream.next(m.gyroY);
      stream.next(m.gyroZ);
      stream.next(m.magX);
      stream.next(m.magY);
      stream.next(m.magZ);
      stream.next(m.alt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlutoPilotRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plutodrone::PlutoPilotRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plutodrone::PlutoPilotRequest_<ContainerAllocator>& v)
  {
    s << indent << "roll: ";
    Printer<int32_t>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.yaw);
    s << indent << "accX: ";
    Printer<float>::stream(s, indent + "  ", v.accX);
    s << indent << "accY: ";
    Printer<float>::stream(s, indent + "  ", v.accY);
    s << indent << "accZ: ";
    Printer<float>::stream(s, indent + "  ", v.accZ);
    s << indent << "gyroX: ";
    Printer<float>::stream(s, indent + "  ", v.gyroX);
    s << indent << "gyroY: ";
    Printer<float>::stream(s, indent + "  ", v.gyroY);
    s << indent << "gyroZ: ";
    Printer<float>::stream(s, indent + "  ", v.gyroZ);
    s << indent << "magX: ";
    Printer<float>::stream(s, indent + "  ", v.magX);
    s << indent << "magY: ";
    Printer<float>::stream(s, indent + "  ", v.magY);
    s << indent << "magZ: ";
    Printer<float>::stream(s, indent + "  ", v.magZ);
    s << indent << "alt: ";
    Printer<float>::stream(s, indent + "  ", v.alt);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLUTODRONE_MESSAGE_PLUTOPILOTREQUEST_H
