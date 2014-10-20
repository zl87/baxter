"""autogenerated by genpy from baxter_core_msgs/AnalogIOStates.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import baxter_core_msgs.msg

class AnalogIOStates(genpy.Message):
  _md5sum = "0a05ba3bbb53a8a3b164e34946d619f7"
  _type = "baxter_core_msgs/AnalogIOStates"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string[]         names
AnalogIOState[] states
================================================================================
MSG: baxter_core_msgs/AnalogIOState
time timestamp
float64 value
bool isInputOnly

"""
  __slots__ = ['names','states']
  _slot_types = ['string[]','baxter_core_msgs/AnalogIOState[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       names,states

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AnalogIOStates, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.names is None:
        self.names = []
      if self.states is None:
        self.states = []
    else:
      self.names = []
      self.states = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.names)
      buff.write(_struct_I.pack(length))
      for val1 in self.names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.states)
      buff.write(_struct_I.pack(length))
      for val1 in self.states:
        _v1 = val1.timestamp
        _x = _v1
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = val1
        buff.write(_struct_dB.pack(_x.value, _x.isInputOnly))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.states is None:
        self.states = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.states = []
      for i in range(0, length):
        val1 = baxter_core_msgs.msg.AnalogIOState()
        _v2 = val1.timestamp
        _x = _v2
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        _x = val1
        start = end
        end += 9
        (_x.value, _x.isInputOnly,) = _struct_dB.unpack(str[start:end])
        val1.isInputOnly = bool(val1.isInputOnly)
        self.states.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.names)
      buff.write(_struct_I.pack(length))
      for val1 in self.names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.states)
      buff.write(_struct_I.pack(length))
      for val1 in self.states:
        _v3 = val1.timestamp
        _x = _v3
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = val1
        buff.write(_struct_dB.pack(_x.value, _x.isInputOnly))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.states is None:
        self.states = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.states = []
      for i in range(0, length):
        val1 = baxter_core_msgs.msg.AnalogIOState()
        _v4 = val1.timestamp
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        _x = val1
        start = end
        end += 9
        (_x.value, _x.isInputOnly,) = _struct_dB.unpack(str[start:end])
        val1.isInputOnly = bool(val1.isInputOnly)
        self.states.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_dB = struct.Struct("<dB")
_struct_2I = struct.Struct("<2I")
