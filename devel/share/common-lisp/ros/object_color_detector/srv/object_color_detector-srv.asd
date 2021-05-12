
(cl:in-package :asdf)

(defsystem "object_color_detector-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "DetectObjectSrv" :depends-on ("_package_DetectObjectSrv"))
    (:file "_package_DetectObjectSrv" :depends-on ("_package"))
  ))