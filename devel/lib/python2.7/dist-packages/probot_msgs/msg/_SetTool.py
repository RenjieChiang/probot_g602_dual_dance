# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from probot_msgs/SetTool.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetTool(genpy.Message):
  _md5sum = "7f7565228b99c0ac4e365518708762e2"
  _type = "probot_msgs/SetTool"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 status
uint16 pump_io_number
uint16 changer_io_number

uint8 OFF = 0
uint8 ON  = 1
"""
  # Pseudo-constants
  OFF = 0
  ON = 1

  __slots__ = ['status','pump_io_number','changer_io_number']
  _slot_types = ['uint8','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status,pump_io_number,changer_io_number

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetTool, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
      if self.pump_io_number is None:
        self.pump_io_number = 0
      if self.changer_io_number is None:
        self.changer_io_number = 0
    else:
      self.status = 0
      self.pump_io_number = 0
      self.changer_io_number = 0

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
      _x = self
      buff.write(_get_struct_B2H().pack(_x.status, _x.pump_io_number, _x.changer_io_number))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.status, _x.pump_io_number, _x.changer_io_number,) = _get_struct_B2H().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B2H().pack(_x.status, _x.pump_io_number, _x.changer_io_number))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.status, _x.pump_io_number, _x.changer_io_number,) = _get_struct_B2H().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B2H = None
def _get_struct_B2H():
    global _struct_B2H
    if _struct_B2H is None:
        _struct_B2H = struct.Struct("<B2H")
    return _struct_B2H
