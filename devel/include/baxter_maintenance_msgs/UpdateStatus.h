/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/tangy-user/groovy_ws/src/baxter_common/baxter_maintenance_msgs/msg/UpdateStatus.msg
 *
 */


#ifndef BAXTER_MAINTENANCE_MSGS_MESSAGE_UPDATESTATUS_H
#define BAXTER_MAINTENANCE_MSGS_MESSAGE_UPDATESTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_maintenance_msgs
{
template <class ContainerAllocator>
struct UpdateStatus_
{
  typedef UpdateStatus_<ContainerAllocator> Type;

  UpdateStatus_()
    : status(0)
    , progress(0.0)
    , long_description()  {
    }
  UpdateStatus_(const ContainerAllocator& _alloc)
    : status(0)
    , progress(0.0)
    , long_description(_alloc)  {
    }



   typedef uint16_t _status_type;
  _status_type status;

   typedef float _progress_type;
  _progress_type progress;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _long_description_type;
  _long_description_type long_description;


    enum { STS_IDLE = 0 };
     enum { STS_INVALID = 1 };
     enum { STS_BUSY = 2 };
     enum { STS_CANCELLED = 3 };
     enum { STS_ERR = 4 };
     enum { STS_MOUNT_UPDATE = 5 };
     enum { STS_VERIFY_UPDATE = 6 };
     enum { STS_PREP_STAGING = 7 };
     enum { STS_MOUNT_STAGING = 8 };
     enum { STS_EXTRACT_UPDATE = 9 };
     enum { STS_LOAD_KEXEC = 10 };
 

  typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct UpdateStatus_

typedef ::baxter_maintenance_msgs::UpdateStatus_<std::allocator<void> > UpdateStatus;

typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateStatus > UpdateStatusPtr;
typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateStatus const> UpdateStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_maintenance_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'baxter_maintenance_msgs': ['/home/tangy-user/groovy_ws/src/baxter_common/baxter_maintenance_msgs/msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74e246350421569590252c39e8aa7b85";
  }

  static const char* value(const ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74e2463504215695ULL;
  static const uint64_t static_value2 = 0x90252c39e8aa7b85ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_maintenance_msgs/UpdateStatus";
  }

  static const char* value(const ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# See the class UpdateRunner()\n\
# status:           One-word description of the current action being performed\n\
# long_description: Details pertaining to status if any.  Used for verbose error messages.\n\
\n\
uint16  status\n\
float32 progress\n\
string  long_description\n\
\n\
uint16 STS_IDLE            = 0\n\
uint16 STS_INVALID         = 1\n\
uint16 STS_BUSY            = 2\n\
uint16 STS_CANCELLED       = 3\n\
uint16 STS_ERR             = 4\n\
uint16 STS_MOUNT_UPDATE    = 5\n\
uint16 STS_VERIFY_UPDATE   = 6\n\
uint16 STS_PREP_STAGING    = 7\n\
uint16 STS_MOUNT_STAGING   = 8\n\
uint16 STS_EXTRACT_UPDATE  = 9\n\
uint16 STS_LOAD_KEXEC      = 10\n\
\n\
\n\
";
  }

  static const char* value(const ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.progress);
      stream.next(m.long_description);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct UpdateStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_maintenance_msgs::UpdateStatus_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.status);
    s << indent << "progress: ";
    Printer<float>::stream(s, indent + "  ", v.progress);
    s << indent << "long_description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.long_description);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_MAINTENANCE_MSGS_MESSAGE_UPDATESTATUS_H
