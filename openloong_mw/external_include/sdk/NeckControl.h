// Generated by gencpp from file sdk/NeckControl.msg
// DO NOT EDIT!


#ifndef SDK_MESSAGE_NECKCONTROL_H
#define SDK_MESSAGE_NECKCONTROL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sdk
{
template <class ContainerAllocator>
struct NeckControl_
{
  typedef NeckControl_<ContainerAllocator> Type;

  NeckControl_()
    : neck_q()  {
      neck_q.assign(0.0);
  }
  NeckControl_(const ContainerAllocator& _alloc)
    : neck_q()  {
  (void)_alloc;
      neck_q.assign(0.0);
  }



   typedef boost::array<float, 2>  _neck_q_type;
  _neck_q_type neck_q;





  typedef boost::shared_ptr< ::sdk::NeckControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sdk::NeckControl_<ContainerAllocator> const> ConstPtr;

}; // struct NeckControl_

typedef ::sdk::NeckControl_<std::allocator<void> > NeckControl;

typedef boost::shared_ptr< ::sdk::NeckControl > NeckControlPtr;
typedef boost::shared_ptr< ::sdk::NeckControl const> NeckControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sdk::NeckControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sdk::NeckControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sdk::NeckControl_<ContainerAllocator1> & lhs, const ::sdk::NeckControl_<ContainerAllocator2> & rhs)
{
  return lhs.neck_q == rhs.neck_q;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sdk::NeckControl_<ContainerAllocator1> & lhs, const ::sdk::NeckControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sdk

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sdk::NeckControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sdk::NeckControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdk::NeckControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdk::NeckControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdk::NeckControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdk::NeckControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sdk::NeckControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b545a69ed759c2010f1ae02a8d2c0bf";
  }

  static const char* value(const ::sdk::NeckControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b545a69ed759c20ULL;
  static const uint64_t static_value2 = 0x10f1ae02a8d2c0bfULL;
};

template<class ContainerAllocator>
struct DataType< ::sdk::NeckControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sdk/NeckControl";
  }

  static const char* value(const ::sdk::NeckControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sdk::NeckControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[2] neck_q\n"
;
  }

  static const char* value(const ::sdk::NeckControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sdk::NeckControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.neck_q);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NeckControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sdk::NeckControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sdk::NeckControl_<ContainerAllocator>& v)
  {
    s << indent << "neck_q[]" << std::endl;
    for (size_t i = 0; i < v.neck_q.size(); ++i)
    {
      s << indent << "  neck_q[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.neck_q[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SDK_MESSAGE_NECKCONTROL_H
