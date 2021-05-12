;; Auto-generated. Do not edit!


(when (boundp 'probot_g602_demo::leader_control)
  (if (not (find-package "PROBOT_G602_DEMO"))
    (make-package "PROBOT_G602_DEMO"))
  (shadow 'leader_control (find-package "PROBOT_G602_DEMO")))
(unless (find-package "PROBOT_G602_DEMO::LEADER_CONTROL")
  (make-package "PROBOT_G602_DEMO::LEADER_CONTROL"))

(in-package "ROS")
;;//! \htmlinclude leader_control.msg.html


(defclass probot_g602_demo::leader_control
  :super ros::object
  :slots (_ready2next _dance_group_number ))

(defmethod probot_g602_demo::leader_control
  (:init
   (&key
    ((:ready2next __ready2next) nil)
    ((:dance_group_number __dance_group_number) 0)
    )
   (send-super :init)
   (setq _ready2next __ready2next)
   (setq _dance_group_number (round __dance_group_number))
   self)
  (:ready2next
   (&optional __ready2next)
   (if __ready2next (setq _ready2next __ready2next)) _ready2next)
  (:dance_group_number
   (&optional __dance_group_number)
   (if __dance_group_number (setq _dance_group_number __dance_group_number)) _dance_group_number)
  (:serialization-length
   ()
   (+
    ;; bool _ready2next
    1
    ;; uint8 _dance_group_number
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _ready2next
       (if _ready2next (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _dance_group_number
       (write-byte _dance_group_number s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _ready2next
     (setq _ready2next (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _dance_group_number
     (setq _dance_group_number (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get probot_g602_demo::leader_control :md5sum-) "8d093b10ec6105b43f38045b407beccb")
(setf (get probot_g602_demo::leader_control :datatype-) "probot_g602_demo/leader_control")
(setf (get probot_g602_demo::leader_control :definition-)
      "bool ready2next
uint8 dance_group_number
")



(provide :probot_g602_demo/leader_control "8d093b10ec6105b43f38045b407beccb")


