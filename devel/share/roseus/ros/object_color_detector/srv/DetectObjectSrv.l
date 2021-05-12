;; Auto-generated. Do not edit!


(when (boundp 'object_color_detector::DetectObjectSrv)
  (if (not (find-package "OBJECT_COLOR_DETECTOR"))
    (make-package "OBJECT_COLOR_DETECTOR"))
  (shadow 'DetectObjectSrv (find-package "OBJECT_COLOR_DETECTOR")))
(unless (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRV")
  (make-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRV"))
(unless (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST")
  (make-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(unless (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE")
  (make-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*RED_OBJECT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(shadow '*RED_OBJECT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(defconstant object_color_detector::DetectObjectSrvRequest::*RED_OBJECT* 0)
(intern "*GREEN_OBJECT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(shadow '*GREEN_OBJECT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(defconstant object_color_detector::DetectObjectSrvRequest::*GREEN_OBJECT* 1)
(intern "*BLUE_OBJECT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(shadow '*BLUE_OBJECT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(defconstant object_color_detector::DetectObjectSrvRequest::*BLUE_OBJECT* 2)
(intern "*BLACK_OBJECT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(shadow '*BLACK_OBJECT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(defconstant object_color_detector::DetectObjectSrvRequest::*BLACK_OBJECT* 3)
(intern "*ALL_OBJECT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(shadow '*ALL_OBJECT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVREQUEST"))
(defconstant object_color_detector::DetectObjectSrvRequest::*ALL_OBJECT* 255)
(defclass object_color_detector::DetectObjectSrvRequest
  :super ros::object
  :slots (_objectType ))

(defmethod object_color_detector::DetectObjectSrvRequest
  (:init
   (&key
    ((:objectType __objectType) 0)
    )
   (send-super :init)
   (setq _objectType (round __objectType))
   self)
  (:objectType
   (&optional __objectType)
   (if __objectType (setq _objectType __objectType)) _objectType)
  (:serialization-length
   ()
   (+
    ;; int32 _objectType
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _objectType
       (write-long _objectType s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _objectType
     (setq _objectType (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(intern "*SUCCESS*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(shadow '*SUCCESS* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(defconstant object_color_detector::DetectObjectSrvResponse::*SUCCESS* 0)
(intern "*ERROR*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(shadow '*ERROR* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(defconstant object_color_detector::DetectObjectSrvResponse::*ERROR* 1)
(intern "*TIMEOUT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(shadow '*TIMEOUT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(defconstant object_color_detector::DetectObjectSrvResponse::*TIMEOUT* 2)
(intern "*NOT_DETECTED*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(shadow '*NOT_DETECTED* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(defconstant object_color_detector::DetectObjectSrvResponse::*NOT_DETECTED* 3)
(intern "*NOT_SUPPORT*" (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(shadow '*NOT_SUPPORT* (find-package "OBJECT_COLOR_DETECTOR::DETECTOBJECTSRVRESPONSE"))
(defconstant object_color_detector::DetectObjectSrvResponse::*NOT_SUPPORT* 4)
(defclass object_color_detector::DetectObjectSrvResponse
  :super ros::object
  :slots (_result _redObjList _greenObjList _blueObjList _blackObjList ))

(defmethod object_color_detector::DetectObjectSrvResponse
  (:init
   (&key
    ((:result __result) 0)
    ((:redObjList __redObjList) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose :init) r)) r))
    ((:greenObjList __greenObjList) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose :init) r)) r))
    ((:blueObjList __blueObjList) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose :init) r)) r))
    ((:blackObjList __blackObjList) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose :init) r)) r))
    )
   (send-super :init)
   (setq _result (round __result))
   (setq _redObjList __redObjList)
   (setq _greenObjList __greenObjList)
   (setq _blueObjList __blueObjList)
   (setq _blackObjList __blackObjList)
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:redObjList
   (&rest __redObjList)
   (if (keywordp (car __redObjList))
       (send* _redObjList __redObjList)
     (progn
       (if __redObjList (setq _redObjList (car __redObjList)))
       _redObjList)))
  (:greenObjList
   (&rest __greenObjList)
   (if (keywordp (car __greenObjList))
       (send* _greenObjList __greenObjList)
     (progn
       (if __greenObjList (setq _greenObjList (car __greenObjList)))
       _greenObjList)))
  (:blueObjList
   (&rest __blueObjList)
   (if (keywordp (car __blueObjList))
       (send* _blueObjList __blueObjList)
     (progn
       (if __blueObjList (setq _blueObjList (car __blueObjList)))
       _blueObjList)))
  (:blackObjList
   (&rest __blackObjList)
   (if (keywordp (car __blackObjList))
       (send* _blackObjList __blackObjList)
     (progn
       (if __blackObjList (setq _blackObjList (car __blackObjList)))
       _blackObjList)))
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ;; geometry_msgs/Pose[] _redObjList
    (apply #'+ (send-all _redObjList :serialization-length)) 4
    ;; geometry_msgs/Pose[] _greenObjList
    (apply #'+ (send-all _greenObjList :serialization-length)) 4
    ;; geometry_msgs/Pose[] _blueObjList
    (apply #'+ (send-all _blueObjList :serialization-length)) 4
    ;; geometry_msgs/Pose[] _blackObjList
    (apply #'+ (send-all _blackObjList :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;; geometry_msgs/Pose[] _redObjList
     (write-long (length _redObjList) s)
     (dolist (elem _redObjList)
       (send elem :serialize s)
       )
     ;; geometry_msgs/Pose[] _greenObjList
     (write-long (length _greenObjList) s)
     (dolist (elem _greenObjList)
       (send elem :serialize s)
       )
     ;; geometry_msgs/Pose[] _blueObjList
     (write-long (length _blueObjList) s)
     (dolist (elem _blueObjList)
       (send elem :serialize s)
       )
     ;; geometry_msgs/Pose[] _blackObjList
     (write-long (length _blackObjList) s)
     (dolist (elem _blackObjList)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; geometry_msgs/Pose[] _redObjList
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _redObjList (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose :init) r)) r))
     (dolist (elem- _redObjList)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; geometry_msgs/Pose[] _greenObjList
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _greenObjList (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose :init) r)) r))
     (dolist (elem- _greenObjList)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; geometry_msgs/Pose[] _blueObjList
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _blueObjList (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose :init) r)) r))
     (dolist (elem- _blueObjList)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; geometry_msgs/Pose[] _blackObjList
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _blackObjList (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose :init) r)) r))
     (dolist (elem- _blackObjList)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(defclass object_color_detector::DetectObjectSrv
  :super ros::object
  :slots ())

(setf (get object_color_detector::DetectObjectSrv :md5sum-) "48ea0118b512eb884c42e18a92c6a0ea")
(setf (get object_color_detector::DetectObjectSrv :datatype-) "object_color_detector/DetectObjectSrv")
(setf (get object_color_detector::DetectObjectSrv :request) object_color_detector::DetectObjectSrvRequest)
(setf (get object_color_detector::DetectObjectSrv :response) object_color_detector::DetectObjectSrvResponse)

(defmethod object_color_detector::DetectObjectSrvRequest
  (:response () (instance object_color_detector::DetectObjectSrvResponse :init)))

(setf (get object_color_detector::DetectObjectSrvRequest :md5sum-) "48ea0118b512eb884c42e18a92c6a0ea")
(setf (get object_color_detector::DetectObjectSrvRequest :datatype-) "object_color_detector/DetectObjectSrvRequest")
(setf (get object_color_detector::DetectObjectSrvRequest :definition-)
      "# The detect object service commands robot to find objects pose

# request constants
int32 RED_OBJECT    = 0
int32 GREEN_OBJECT  = 1
int32 BLUE_OBJECT   = 2
int32 BLACK_OBJECT  = 3

int32 ALL_OBJECT    = 255


# object type:
int32 objectType

---

# response constants
int32 SUCCESS        = 0
int32 ERROR          = 1
int32 TIMEOUT        = 2
int32 NOT_DETECTED   = 3
int32 NOT_SUPPORT    = 4

# detect result
int32 result
geometry_msgs/Pose[] redObjList
geometry_msgs/Pose[] greenObjList
geometry_msgs/Pose[] blueObjList
geometry_msgs/Pose[] blackObjList


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
")

(setf (get object_color_detector::DetectObjectSrvResponse :md5sum-) "48ea0118b512eb884c42e18a92c6a0ea")
(setf (get object_color_detector::DetectObjectSrvResponse :datatype-) "object_color_detector/DetectObjectSrvResponse")
(setf (get object_color_detector::DetectObjectSrvResponse :definition-)
      "# The detect object service commands robot to find objects pose

# request constants
int32 RED_OBJECT    = 0
int32 GREEN_OBJECT  = 1
int32 BLUE_OBJECT   = 2
int32 BLACK_OBJECT  = 3

int32 ALL_OBJECT    = 255


# object type:
int32 objectType

---

# response constants
int32 SUCCESS        = 0
int32 ERROR          = 1
int32 TIMEOUT        = 2
int32 NOT_DETECTED   = 3
int32 NOT_SUPPORT    = 4

# detect result
int32 result
geometry_msgs/Pose[] redObjList
geometry_msgs/Pose[] greenObjList
geometry_msgs/Pose[] blueObjList
geometry_msgs/Pose[] blackObjList


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
")



(provide :object_color_detector/DetectObjectSrv "48ea0118b512eb884c42e18a92c6a0ea")


