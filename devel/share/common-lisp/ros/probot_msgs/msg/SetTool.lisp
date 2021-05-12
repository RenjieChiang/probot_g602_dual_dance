; Auto-generated. Do not edit!


(cl:in-package probot_msgs-msg)


;//! \htmlinclude SetTool.msg.html

(cl:defclass <SetTool> (roslisp-msg-protocol:ros-message)
  ((status
    :reader status
    :initarg :status
    :type cl:fixnum
    :initform 0)
   (pump_io_number
    :reader pump_io_number
    :initarg :pump_io_number
    :type cl:fixnum
    :initform 0)
   (changer_io_number
    :reader changer_io_number
    :initarg :changer_io_number
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SetTool (<SetTool>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetTool>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetTool)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name probot_msgs-msg:<SetTool> is deprecated: use probot_msgs-msg:SetTool instead.")))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <SetTool>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader probot_msgs-msg:status-val is deprecated.  Use probot_msgs-msg:status instead.")
  (status m))

(cl:ensure-generic-function 'pump_io_number-val :lambda-list '(m))
(cl:defmethod pump_io_number-val ((m <SetTool>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader probot_msgs-msg:pump_io_number-val is deprecated.  Use probot_msgs-msg:pump_io_number instead.")
  (pump_io_number m))

(cl:ensure-generic-function 'changer_io_number-val :lambda-list '(m))
(cl:defmethod changer_io_number-val ((m <SetTool>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader probot_msgs-msg:changer_io_number-val is deprecated.  Use probot_msgs-msg:changer_io_number instead.")
  (changer_io_number m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<SetTool>)))
    "Constants for message type '<SetTool>"
  '((:OFF . 0)
    (:ON . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'SetTool)))
    "Constants for message type 'SetTool"
  '((:OFF . 0)
    (:ON . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetTool>) ostream)
  "Serializes a message object of type '<SetTool>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'status)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pump_io_number)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'pump_io_number)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'changer_io_number)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'changer_io_number)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetTool>) istream)
  "Deserializes a message object of type '<SetTool>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'status)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pump_io_number)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'pump_io_number)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'changer_io_number)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'changer_io_number)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetTool>)))
  "Returns string type for a message object of type '<SetTool>"
  "probot_msgs/SetTool")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetTool)))
  "Returns string type for a message object of type 'SetTool"
  "probot_msgs/SetTool")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetTool>)))
  "Returns md5sum for a message object of type '<SetTool>"
  "7f7565228b99c0ac4e365518708762e2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetTool)))
  "Returns md5sum for a message object of type 'SetTool"
  "7f7565228b99c0ac4e365518708762e2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetTool>)))
  "Returns full string definition for message of type '<SetTool>"
  (cl:format cl:nil "uint8 status~%uint16 pump_io_number~%uint16 changer_io_number~%~%uint8 OFF = 0~%uint8 ON  = 1~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetTool)))
  "Returns full string definition for message of type 'SetTool"
  (cl:format cl:nil "uint8 status~%uint16 pump_io_number~%uint16 changer_io_number~%~%uint8 OFF = 0~%uint8 ON  = 1~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetTool>))
  (cl:+ 0
     1
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetTool>))
  "Converts a ROS message object to a list"
  (cl:list 'SetTool
    (cl:cons ':status (status msg))
    (cl:cons ':pump_io_number (pump_io_number msg))
    (cl:cons ':changer_io_number (changer_io_number msg))
))
