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
 * Auto-generated by genmsg_cpp from file /home/tangy-user/groovy_ws/src/baxter_common/baxter_core_msgs/msg/EndEffectorCommand.msg
 *
 */


#ifndef BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORCOMMAND_H
#define BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct EndEffectorCommand_
{
  typedef EndEffectorCommand_<ContainerAllocator> Type;

  EndEffectorCommand_()
    : id(0)
    , command()
    , args()
    , sender()
    , sequence(0)  {
    }
  EndEffectorCommand_(const ContainerAllocator& _alloc)
    : id(0)
    , command(_alloc)
    , args(_alloc)
    , sender(_alloc)
    , sequence(0)  {
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _args_type;
  _args_type args;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sender_type;
  _sender_type sender;

   typedef uint32_t _sequence_type;
  _sequence_type sequence;


    static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_NO_OP;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_SET;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_CONFIGURE;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_REBOOT;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_RESET;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_CALIBRATE;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_CLEAR_CALIBRATION;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_PREPARE_TO_GRIP;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_GRIP;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_RELEASE;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_GO;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_STOP;
 

  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct EndEffectorCommand_

typedef ::baxter_core_msgs::EndEffectorCommand_<std::allocator<void> > EndEffectorCommand;

typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand > EndEffectorCommandPtr;
typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand const> EndEffectorCommandConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_NO_OP =
        
          "no_op"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_SET =
        
          "set"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_CONFIGURE =
        
          "configure"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_REBOOT =
        
          "reboot"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_RESET =
        
          "reset"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_CALIBRATE =
        
          "calibrate"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_CLEAR_CALIBRATION =
        
          "clear_calibration"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_PREPARE_TO_GRIP =
        
          "prepare_to_grip"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_GRIP =
        
          "grip"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_RELEASE =
        
          "release"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_GO =
        
          "go"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      EndEffectorCommand_<ContainerAllocator>::CMD_STOP =
        
          "stop"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/groovy/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/tangy-user/groovy_ws/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c003234e90416f2ca02ac7837c42cbb7";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc003234e90416f2cULL;
  static const uint64_t static_value2 = 0xa02ac7837c42cbb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/EndEffectorCommand";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Command to be sent to an end effector\n\
uint32 id       # target end effector id\n\
string command  # operation to perform\n\
# Well known commands:\n\
string   CMD_NO_OP           = no_op\n\
string   CMD_SET             = set\n\
string   CMD_CONFIGURE       = configure\n\
string   CMD_REBOOT          = reboot\n\
string   CMD_RESET           = reset\n\
string   CMD_CALIBRATE       = calibrate\n\
string   CMD_CLEAR_CALIBRATION = clear_calibration\n\
string   CMD_PREPARE_TO_GRIP = prepare_to_grip\n\
string   CMD_GRIP            = grip\n\
string   CMD_RELEASE         = release\n\
string   CMD_GO              = go\n\
string   CMD_STOP            = stop\n\
#\n\
string args     # JSON arguments to the command\n\
#\n\
string sender   # optional identifier, returned in state when the command is handled\n\
uint32 sequence # optional sequence number, return in state when the command is handled\n\
\n\
\n\
";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.command);
      stream.next(m.args);
      stream.next(m.sender);
      stream.next(m.sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct EndEffectorCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "args: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.args);
    s << indent << "sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sender);
    s << indent << "sequence: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sequence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORCOMMAND_H
