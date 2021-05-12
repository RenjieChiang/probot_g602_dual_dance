; Auto-generated. Do not edit!


(cl:in-package probot_g602_demo-msg)


;//! \htmlinclude leader_control.msg.html

(cl:defclass <leader_control> (roslisp-msg-protocol:ros-message)
  ((ready2next
    :reader ready2next
    :initarg :ready2next
    :type cl:boolean
    :initform cl:nil)
   (dance_group_number
    :reader dance_group_number
    :initarg :dance_group_number
    :type cl:fixnum
    :initform 0))
)

(cl:defclass leader_control (<leader_control>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <leader_control>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'leader_control)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name probot_g602_demo-msg:<leader_control> is deprecated: use probot_g602_demo-msg:leader_control instead.")))

(cl:ensure-generic-function 'ready2next-val :lambda-list '(m))
(cl:defmethod ready2next-val ((m <leader_control>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader probot_g602_demo-msg:ready2next-val is deprecated.  Use probot_g602_demo-msg:ready2next instead.")
  (ready2next m))

(cl:ensure-generic-function 'dance_group_number-val :lambda-list '(m))
(cl:defmethod dance_group_number-val ((m <leader_control>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader probot_g602_demo-msg:dance_group_number-val is deprecated.  Use probot_g602_demo-msg:dance_group_number instead.")
  (dance_group_number m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <leader_control>) ostream)
  "Serializes a message object of type '<leader_control>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ready2next) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dance_group_number)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <leader_control>) istream)
  "Deserializes a message object of type '<leader_control>"
    (cl:setf (cl:slot-value msg 'ready2next) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dance_group_number)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<leader_control>)))
  "Returns string type for a message object of type '<leader_control>"
  "probot_g602_demo/leader_control")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'leader_control)))
  "Returns string type for a message object of type 'leader_control"
  "probot_g602_demo/leader_control")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<leader_control>)))
  "Returns md5sum for a message object of type '<leader_control>"
  "8d093b10ec6105b43f38045b407beccb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'leader_control)))
  "Returns md5sum for a message object of type 'leader_control"
  "8d093b10ec6105b43f38045b407beccb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<leader_control>)))
  "Returns full string definition for message of type '<leader_control>"
  (cl:format cl:nil "bool ready2next~%uint8 dance_group_number~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'leader_control)))
  "Returns full string definition for message of type 'leader_control"
  (cl:format cl:nil "bool ready2next~%uint8 dance_group_number~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <leader_control>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <leader_control>))
  "Converts a ROS message object to a list"
  (cl:list 'leader_control
    (cl:cons ':ready2next (ready2next msg))
    (cl:cons ':dance_group_number (dance_group_number msg))
))
