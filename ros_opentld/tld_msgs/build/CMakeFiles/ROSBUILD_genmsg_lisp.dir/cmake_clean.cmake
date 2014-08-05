FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/tld_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/Target.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Target.lisp"
  "../msg_gen/lisp/BoundingBox.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_BoundingBox.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
