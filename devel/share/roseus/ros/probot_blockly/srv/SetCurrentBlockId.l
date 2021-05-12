;; Auto-generated. Do not edit!


(when (boundp 'probot_blockly::SetCurrentBlockId)
  (if (not (find-package "PROBOT_BLOCKLY"))
    (make-package "PROBOT_BLOCKLY"))
  (shadow 'SetCurrentBlockId (find-package "PROBOT_BLOCKLY")))
(unless (find-package "PROBOT_BLOCKLY::SETCURRENTBLOCKID")
  (make-package "PROBOT_BLOCKLY::SETCURRENTBLOCKID"))
(unless (find-package "PROBOT_BLOCKLY::SETCURRENTBLOCKIDREQUEST")
  (make-package "PROBOT_BLOCKLY::SETCURRENTBLOCKIDREQUEST"))
(unless (find-package "PROBOT_BLOCKLY::SETCURRENTBLOCKIDRESPONSE")
  (make-package "PROBOT_BLOCKLY::SETCURRENTBLOCKIDRESPONSE"))

(in-package "ROS")





(defclass probot_blockly::SetCurrentBlockIdRequest
  :super ros::object
  :slots (_block_id ))

(defmethod probot_blockly::SetCurrentBlockIdRequest
  (:init
   (&key
    ((:block_id __block_id) "")
    )
   (send-super :init)
   (setq _block_id (string __block_id))
   self)
  (:block_id
   (&optional __block_id)
   (if __block_id (setq _block_id __block_id)) _block_id)
  (:serialization-length
   ()
   (+
    ;; string _block_id
    4 (length _block_id)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _block_id
       (write-long (length _block_id) s) (princ _block_id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _block_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _block_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass probot_blockly::SetCurrentBlockIdResponse
  :super ros::object
  :slots (_result ))

(defmethod probot_blockly::SetCurrentBlockIdResponse
  (:init
   (&key
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _result __result)
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass probot_blockly::SetCurrentBlockId
  :super ros::object
  :slots ())

(setf (get probot_blockly::SetCurrentBlockId :md5sum-) "4df111d1d4ad61c42177e2b8cae23a38")
(setf (get probot_blockly::SetCurrentBlockId :datatype-) "probot_blockly/SetCurrentBlockId")
(setf (get probot_blockly::SetCurrentBlockId :request) probot_blockly::SetCurrentBlockIdRequest)
(setf (get probot_blockly::SetCurrentBlockId :response) probot_blockly::SetCurrentBlockIdResponse)

(defmethod probot_blockly::SetCurrentBlockIdRequest
  (:response () (instance probot_blockly::SetCurrentBlockIdResponse :init)))

(setf (get probot_blockly::SetCurrentBlockIdRequest :md5sum-) "4df111d1d4ad61c42177e2b8cae23a38")
(setf (get probot_blockly::SetCurrentBlockIdRequest :datatype-) "probot_blockly/SetCurrentBlockIdRequest")
(setf (get probot_blockly::SetCurrentBlockIdRequest :definition-)
      "string block_id
---
bool result

")

(setf (get probot_blockly::SetCurrentBlockIdResponse :md5sum-) "4df111d1d4ad61c42177e2b8cae23a38")
(setf (get probot_blockly::SetCurrentBlockIdResponse :datatype-) "probot_blockly/SetCurrentBlockIdResponse")
(setf (get probot_blockly::SetCurrentBlockIdResponse :definition-)
      "string block_id
---
bool result

")



(provide :probot_blockly/SetCurrentBlockId "4df111d1d4ad61c42177e2b8cae23a38")


