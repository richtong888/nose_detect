// Generated by gencpp from file pcl_icp/nose_xyz_data.msg
// DO NOT EDIT!


#ifndef PCL_ICP_MESSAGE_NOSE_XYZ_DATA_H
#define PCL_ICP_MESSAGE_NOSE_XYZ_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pcl_icp
{
template <class ContainerAllocator>
struct nose_xyz_data_
{
  typedef nose_xyz_data_<ContainerAllocator> Type;

  nose_xyz_data_()
    : lnx(0)
    , lny(0)
    , rnx(0)
    , rny(0)  {
    }
  nose_xyz_data_(const ContainerAllocator& _alloc)
    : lnx(0)
    , lny(0)
    , rnx(0)
    , rny(0)  {
  (void)_alloc;
    }



   typedef int64_t _lnx_type;
  _lnx_type lnx;

   typedef int64_t _lny_type;
  _lny_type lny;

   typedef int64_t _rnx_type;
  _rnx_type rnx;

   typedef int64_t _rny_type;
  _rny_type rny;





  typedef boost::shared_ptr< ::pcl_icp::nose_xyz_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pcl_icp::nose_xyz_data_<ContainerAllocator> const> ConstPtr;

}; // struct nose_xyz_data_

typedef ::pcl_icp::nose_xyz_data_<std::allocator<void> > nose_xyz_data;

typedef boost::shared_ptr< ::pcl_icp::nose_xyz_data > nose_xyz_dataPtr;
typedef boost::shared_ptr< ::pcl_icp::nose_xyz_data const> nose_xyz_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pcl_icp::nose_xyz_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pcl_icp::nose_xyz_data_<ContainerAllocator1> & lhs, const ::pcl_icp::nose_xyz_data_<ContainerAllocator2> & rhs)
{
  return lhs.lnx == rhs.lnx &&
    lhs.lny == rhs.lny &&
    lhs.rnx == rhs.rnx &&
    lhs.rny == rhs.rny;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pcl_icp::nose_xyz_data_<ContainerAllocator1> & lhs, const ::pcl_icp::nose_xyz_data_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pcl_icp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pcl_icp::nose_xyz_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl_icp::nose_xyz_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl_icp::nose_xyz_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bdeaa40a8607bdbfa496b05a8dcf2e21";
  }

  static const char* value(const ::pcl_icp::nose_xyz_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbdeaa40a8607bdbfULL;
  static const uint64_t static_value2 = 0xa496b05a8dcf2e21ULL;
};

template<class ContainerAllocator>
struct DataType< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pcl_icp/nose_xyz_data";
  }

  static const char* value(const ::pcl_icp::nose_xyz_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 lnx\n"
"int64 lny\n"
"int64 rnx\n"
"int64 rny\n"
;
  }

  static const char* value(const ::pcl_icp::nose_xyz_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lnx);
      stream.next(m.lny);
      stream.next(m.rnx);
      stream.next(m.rny);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct nose_xyz_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pcl_icp::nose_xyz_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pcl_icp::nose_xyz_data_<ContainerAllocator>& v)
  {
    s << indent << "lnx: ";
    Printer<int64_t>::stream(s, indent + "  ", v.lnx);
    s << indent << "lny: ";
    Printer<int64_t>::stream(s, indent + "  ", v.lny);
    s << indent << "rnx: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rnx);
    s << indent << "rny: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rny);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PCL_ICP_MESSAGE_NOSE_XYZ_DATA_H
