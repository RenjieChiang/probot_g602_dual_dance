;; Auto-generated. Do not edit!


(when (boundp 'probot_msgs::SetTool)
  (if (not (find-package "PROBOT_MSGS"))
    (make-package "PROBOT_MSGS"))
  (shadow 'SetTool (find-package "PROBOT_MSGS")))
(unless (find-package "PROBOT_MSGS::SETTOOL")
  (make-package "PROBOT_MSGS::SETTOOL"))

(in-package "ROS")
;;//! \htmlinclude SetTool.msg.html


(intern "*OFF*" (find-package "PROBOT_MSGS::SETTOOL"))
(shadow '*OFF* (find-package "PROBOT_MSGS::SETTOOL"))
(defconstant probot_msgs::SetTool::*OFF* 0)
(intern "*ON*" (find-package "PROBOT_MSGS::SETTOOL"))
(shadow '*ON* (find-package "PROBOT_MSGS::SETTOOL"))
(defconstant probot_msgs::SetTool::*ON* 1)
(defclass probot_msgs::SetTool
  :super ros::object
  :slots (_status _pump_io_number _changer_io_number ))

(defmethod probot_msgs::SetTool
  (:init
   (&key
    ((:status __status) 0)
    ((:pump_io_number __pump_io_number) 0)
    ((:changer_io_number __changer_io_number) 0)
    )
   (send-super :init)
   (setq _status (round __status))
   (setq _pump_io_number (round __pump_io_number))
   (setq _changer_io_number (round __changer_io_number))
   self)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:pump_io_number
   (&optional __pump_io_number)
   (if __pump_io_number (setq _pump_io_number __pump_io_number)) _pump_io_number)
  (:changer_io_number
   (&optional __changer_io_number)
   (if __changer_io_number (setq _changer_io_number __changer_io_number)) _changer_io_number)
  (:serialization-length
   ()
   (+
    ;; uint8 _status
    1
    ;; uint16 _pump_io_number
    2
    ;; uint16 _changer_io_number
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _status
       (write-byte _status s)
     ;; uint16 _pump_io_number
       (write-word _pump_io_number s)
     ;; uint16 _changer_io_number
       (write-word _changer_io_number s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _status
     (setq _status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint16 _pump_io_number
     (setq _pump_io_number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _changer_io_number
     (setq _changer_io_number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get probot_msgs::SetTool :md5sum-) "7f7565228b99c0ac4e365518708762e2")
(setf (get probot_msgs::SetTool :datatype-) "probot_msgs/SetTool")
(setf (get probot_msgs::SetTool :definition-)
      "uint8 status
uint16 pump_io_number
uint16 changer_io_number

uint8 OFF = 0
uint8 ON  = 1

")



(provide :probot_msgs/SetTool "7f7565228b99c0ac4e365518708762e2")


