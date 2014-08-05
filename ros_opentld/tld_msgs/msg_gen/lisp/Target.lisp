; Auto-generated. Do not edit!


(cl:in-package tld_msgs-msg)


;//! \htmlinclude Target.msg.html

(cl:defclass <Target> (roslisp-msg-protocol:ros-message)
  ((bb
    :reader bb
    :initarg :bb
    :type tld_msgs-msg:BoundingBox
    :initform (cl:make-instance 'tld_msgs-msg:BoundingBox))
   (img
    :reader img
    :initarg :img
    :type sensor_msgs-msg:Image
    :initform (cl:make-instance 'sensor_msgs-msg:Image)))
)

(cl:defclass Target (<Target>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Target>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Target)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tld_msgs-msg:<Target> is deprecated: use tld_msgs-msg:Target instead.")))

(cl:ensure-generic-function 'bb-val :lambda-list '(m))
(cl:defmethod bb-val ((m <Target>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tld_msgs-msg:bb-val is deprecated.  Use tld_msgs-msg:bb instead.")
  (bb m))

(cl:ensure-generic-function 'img-val :lambda-list '(m))
(cl:defmethod img-val ((m <Target>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tld_msgs-msg:img-val is deprecated.  Use tld_msgs-msg:img instead.")
  (img m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Target>) ostream)
  "Serializes a message object of type '<Target>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'bb) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'img) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Target>) istream)
  "Deserializes a message object of type '<Target>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'bb) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'img) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Target>)))
  "Returns string type for a message object of type '<Target>"
  "tld_msgs/Target")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Target)))
  "Returns string type for a message object of type 'Target"
  "tld_msgs/Target")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Target>)))
  "Returns md5sum for a message object of type '<Target>"
  "af750259f2bd9aed12064a11baa3c3c2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Target)))
  "Returns md5sum for a message object of type 'Target"
  "af750259f2bd9aed12064a11baa3c3c2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Target>)))
  "Returns full string definition for message of type '<Target>"
  (cl:format cl:nil "BoundingBox bb~%sensor_msgs/Image img~%~%================================================================================~%MSG: tld_msgs/BoundingBox~%Header header~%int32 x~%int32 y~%int32 width~%int32 height~%float32 confidence~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Target)))
  "Returns full string definition for message of type 'Target"
  (cl:format cl:nil "BoundingBox bb~%sensor_msgs/Image img~%~%================================================================================~%MSG: tld_msgs/BoundingBox~%Header header~%int32 x~%int32 y~%int32 width~%int32 height~%float32 confidence~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Target>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'bb))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'img))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Target>))
  "Converts a ROS message object to a list"
  (cl:list 'Target
    (cl:cons ':bb (bb msg))
    (cl:cons ':img (img msg))
))
