
(cl:in-package :asdf)

(defsystem "probot_g602_demo-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "leader_control" :depends-on ("_package_leader_control"))
    (:file "_package_leader_control" :depends-on ("_package"))
  ))