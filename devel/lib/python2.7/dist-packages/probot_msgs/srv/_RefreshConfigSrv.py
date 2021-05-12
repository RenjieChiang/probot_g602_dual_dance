# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from probot_msgs/RefreshConfigSrvRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import probot_msgs.msg

class RefreshConfigSrvRequest(genpy.Message):
  _md5sum = "ccf0925ee9999c5ce68e1258a98426d8"
  _type = "probot_msgs/RefreshConfigSrvRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# The SetConfig service set system configuration data

int8 ctrlCode

int8 CONFIG_GET    = 0
int8 CONFIG_SET    = 1

probot_msgs/Config config

================================================================================
MSG: probot_msgs/Config
# The Config message contains system configuration data

# The output log level for controller
int8 controller_log_level
bool init_with_all_zero_pos

# The zero calibration parameters
bool        enable_joint_calibration
float32[]   seneor_position
float32[]   speed_to_sensor
float32[]   speed_to_zero

# The tool setting parameters
int8 pump_io_number
int8 changer_io_number

# The tool's relative pose to end-effector(tool0)
# This is used to jog tool instead of end-effector
# If it is to jog end-effector, set pose_to_eef to 0, that is (0,0,0)(0,0,0,1)
geometry_msgs/Pose[] pose_to_eef

# The bit-map mask of valid fields which this message contains
int32 mask

int32 MASK_LOGLEVEL          = 1
int32 MASK_ZERO_CALIBRATION  = 2
int32 MASK_TOOL_SETTING      = 4
int32 MASK_TOOL_POSE         = 8

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  # Pseudo-constants
  CONFIG_GET = 0
  CONFIG_SET = 1

  __slots__ = ['ctrlCode','config']
  _slot_types = ['int8','probot_msgs/Config']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ctrlCode,config

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RefreshConfigSrvRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.ctrlCode is None:
        self.ctrlCode = 0
      if self.config is None:
        self.config = probot_msgs.msg.Config()
    else:
      self.ctrlCode = 0
      self.config = probot_msgs.msg.Config()

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
      buff.write(_get_struct_2b2B().pack(_x.ctrlCode, _x.config.controller_log_level, _x.config.init_with_all_zero_pos, _x.config.enable_joint_calibration))
      length = len(self.config.seneor_position)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.config.seneor_position))
      length = len(self.config.speed_to_sensor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.config.speed_to_sensor))
      length = len(self.config.speed_to_zero)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.config.speed_to_zero))
      _x = self
      buff.write(_get_struct_2b().pack(_x.config.pump_io_number, _x.config.changer_io_number))
      length = len(self.config.pose_to_eef)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.pose_to_eef:
        _v1 = val1.position
        _x = _v1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v2 = val1.orientation
        _x = _v2
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      _x = self.config.mask
      buff.write(_get_struct_i().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.config is None:
        self.config = probot_msgs.msg.Config()
      end = 0
      _x = self
      start = end
      end += 4
      (_x.ctrlCode, _x.config.controller_log_level, _x.config.init_with_all_zero_pos, _x.config.enable_joint_calibration,) = _get_struct_2b2B().unpack(str[start:end])
      self.config.init_with_all_zero_pos = bool(self.config.init_with_all_zero_pos)
      self.config.enable_joint_calibration = bool(self.config.enable_joint_calibration)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config.seneor_position = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config.speed_to_sensor = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config.speed_to_zero = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 2
      (_x.config.pump_io_number, _x.config.changer_io_number,) = _get_struct_2b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.pose_to_eef = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v3 = val1.position
        _x = _v3
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v4 = val1.orientation
        _x = _v4
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.config.pose_to_eef.append(val1)
      start = end
      end += 4
      (self.config.mask,) = _get_struct_i().unpack(str[start:end])
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
      buff.write(_get_struct_2b2B().pack(_x.ctrlCode, _x.config.controller_log_level, _x.config.init_with_all_zero_pos, _x.config.enable_joint_calibration))
      length = len(self.config.seneor_position)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.config.seneor_position.tostring())
      length = len(self.config.speed_to_sensor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.config.speed_to_sensor.tostring())
      length = len(self.config.speed_to_zero)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.config.speed_to_zero.tostring())
      _x = self
      buff.write(_get_struct_2b().pack(_x.config.pump_io_number, _x.config.changer_io_number))
      length = len(self.config.pose_to_eef)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.pose_to_eef:
        _v5 = val1.position
        _x = _v5
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v6 = val1.orientation
        _x = _v6
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      _x = self.config.mask
      buff.write(_get_struct_i().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.config is None:
        self.config = probot_msgs.msg.Config()
      end = 0
      _x = self
      start = end
      end += 4
      (_x.ctrlCode, _x.config.controller_log_level, _x.config.init_with_all_zero_pos, _x.config.enable_joint_calibration,) = _get_struct_2b2B().unpack(str[start:end])
      self.config.init_with_all_zero_pos = bool(self.config.init_with_all_zero_pos)
      self.config.enable_joint_calibration = bool(self.config.enable_joint_calibration)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config.seneor_position = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config.speed_to_sensor = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config.speed_to_zero = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      _x = self
      start = end
      end += 2
      (_x.config.pump_io_number, _x.config.changer_io_number,) = _get_struct_2b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.pose_to_eef = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v7 = val1.position
        _x = _v7
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v8 = val1.orientation
        _x = _v8
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.config.pose_to_eef.append(val1)
      start = end
      end += 4
      (self.config.mask,) = _get_struct_i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2b = None
def _get_struct_2b():
    global _struct_2b
    if _struct_2b is None:
        _struct_2b = struct.Struct("<2b")
    return _struct_2b
_struct_2b2B = None
def _get_struct_2b2B():
    global _struct_2b2B
    if _struct_2b2B is None:
        _struct_2b2B = struct.Struct("<2b2B")
    return _struct_2b2B
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from probot_msgs/RefreshConfigSrvResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import probot_msgs.msg

class RefreshConfigSrvResponse(genpy.Message):
  _md5sum = "46cb22b112e1f12c07576f208de9bf83"
  _type = "probot_msgs/RefreshConfigSrvResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """probot_msgs/InterfaceReturnCode code
probot_msgs/Config config_feedback


================================================================================
MSG: probot_msgs/InterfaceReturnCode
# App Interface return codes for requests.  All App Interface service
# replies are required to have a return code indicating success or failure
# Specific return codes for different failure should be negative.
int8 val

int8 SUCCESS = 1
int8 FAILURE = -1
================================================================================
MSG: probot_msgs/Config
# The Config message contains system configuration data

# The output log level for controller
int8 controller_log_level
bool init_with_all_zero_pos

# The zero calibration parameters
bool        enable_joint_calibration
float32[]   seneor_position
float32[]   speed_to_sensor
float32[]   speed_to_zero

# The tool setting parameters
int8 pump_io_number
int8 changer_io_number

# The tool's relative pose to end-effector(tool0)
# This is used to jog tool instead of end-effector
# If it is to jog end-effector, set pose_to_eef to 0, that is (0,0,0)(0,0,0,1)
geometry_msgs/Pose[] pose_to_eef

# The bit-map mask of valid fields which this message contains
int32 mask

int32 MASK_LOGLEVEL          = 1
int32 MASK_ZERO_CALIBRATION  = 2
int32 MASK_TOOL_SETTING      = 4
int32 MASK_TOOL_POSE         = 8

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['code','config_feedback']
  _slot_types = ['probot_msgs/InterfaceReturnCode','probot_msgs/Config']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       code,config_feedback

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RefreshConfigSrvResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.code is None:
        self.code = probot_msgs.msg.InterfaceReturnCode()
      if self.config_feedback is None:
        self.config_feedback = probot_msgs.msg.Config()
    else:
      self.code = probot_msgs.msg.InterfaceReturnCode()
      self.config_feedback = probot_msgs.msg.Config()

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
      buff.write(_get_struct_2b2B().pack(_x.code.val, _x.config_feedback.controller_log_level, _x.config_feedback.init_with_all_zero_pos, _x.config_feedback.enable_joint_calibration))
      length = len(self.config_feedback.seneor_position)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.config_feedback.seneor_position))
      length = len(self.config_feedback.speed_to_sensor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.config_feedback.speed_to_sensor))
      length = len(self.config_feedback.speed_to_zero)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.config_feedback.speed_to_zero))
      _x = self
      buff.write(_get_struct_2b().pack(_x.config_feedback.pump_io_number, _x.config_feedback.changer_io_number))
      length = len(self.config_feedback.pose_to_eef)
      buff.write(_struct_I.pack(length))
      for val1 in self.config_feedback.pose_to_eef:
        _v9 = val1.position
        _x = _v9
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v10 = val1.orientation
        _x = _v10
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      _x = self.config_feedback.mask
      buff.write(_get_struct_i().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.code is None:
        self.code = probot_msgs.msg.InterfaceReturnCode()
      if self.config_feedback is None:
        self.config_feedback = probot_msgs.msg.Config()
      end = 0
      _x = self
      start = end
      end += 4
      (_x.code.val, _x.config_feedback.controller_log_level, _x.config_feedback.init_with_all_zero_pos, _x.config_feedback.enable_joint_calibration,) = _get_struct_2b2B().unpack(str[start:end])
      self.config_feedback.init_with_all_zero_pos = bool(self.config_feedback.init_with_all_zero_pos)
      self.config_feedback.enable_joint_calibration = bool(self.config_feedback.enable_joint_calibration)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config_feedback.seneor_position = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config_feedback.speed_to_sensor = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config_feedback.speed_to_zero = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 2
      (_x.config_feedback.pump_io_number, _x.config_feedback.changer_io_number,) = _get_struct_2b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config_feedback.pose_to_eef = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v11 = val1.position
        _x = _v11
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v12 = val1.orientation
        _x = _v12
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.config_feedback.pose_to_eef.append(val1)
      start = end
      end += 4
      (self.config_feedback.mask,) = _get_struct_i().unpack(str[start:end])
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
      buff.write(_get_struct_2b2B().pack(_x.code.val, _x.config_feedback.controller_log_level, _x.config_feedback.init_with_all_zero_pos, _x.config_feedback.enable_joint_calibration))
      length = len(self.config_feedback.seneor_position)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.config_feedback.seneor_position.tostring())
      length = len(self.config_feedback.speed_to_sensor)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.config_feedback.speed_to_sensor.tostring())
      length = len(self.config_feedback.speed_to_zero)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.config_feedback.speed_to_zero.tostring())
      _x = self
      buff.write(_get_struct_2b().pack(_x.config_feedback.pump_io_number, _x.config_feedback.changer_io_number))
      length = len(self.config_feedback.pose_to_eef)
      buff.write(_struct_I.pack(length))
      for val1 in self.config_feedback.pose_to_eef:
        _v13 = val1.position
        _x = _v13
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v14 = val1.orientation
        _x = _v14
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      _x = self.config_feedback.mask
      buff.write(_get_struct_i().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.code is None:
        self.code = probot_msgs.msg.InterfaceReturnCode()
      if self.config_feedback is None:
        self.config_feedback = probot_msgs.msg.Config()
      end = 0
      _x = self
      start = end
      end += 4
      (_x.code.val, _x.config_feedback.controller_log_level, _x.config_feedback.init_with_all_zero_pos, _x.config_feedback.enable_joint_calibration,) = _get_struct_2b2B().unpack(str[start:end])
      self.config_feedback.init_with_all_zero_pos = bool(self.config_feedback.init_with_all_zero_pos)
      self.config_feedback.enable_joint_calibration = bool(self.config_feedback.enable_joint_calibration)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config_feedback.seneor_position = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config_feedback.speed_to_sensor = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.config_feedback.speed_to_zero = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      _x = self
      start = end
      end += 2
      (_x.config_feedback.pump_io_number, _x.config_feedback.changer_io_number,) = _get_struct_2b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config_feedback.pose_to_eef = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v15 = val1.position
        _x = _v15
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v16 = val1.orientation
        _x = _v16
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.config_feedback.pose_to_eef.append(val1)
      start = end
      end += 4
      (self.config_feedback.mask,) = _get_struct_i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2b = None
def _get_struct_2b():
    global _struct_2b
    if _struct_2b is None:
        _struct_2b = struct.Struct("<2b")
    return _struct_2b
_struct_2b2B = None
def _get_struct_2b2B():
    global _struct_2b2B
    if _struct_2b2B is None:
        _struct_2b2B = struct.Struct("<2b2B")
    return _struct_2b2B
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
class RefreshConfigSrv(object):
  _type          = 'probot_msgs/RefreshConfigSrv'
  _md5sum = '5ef91ebf5713253d2dce341db84ea662'
  _request_class  = RefreshConfigSrvRequest
  _response_class = RefreshConfigSrvResponse
