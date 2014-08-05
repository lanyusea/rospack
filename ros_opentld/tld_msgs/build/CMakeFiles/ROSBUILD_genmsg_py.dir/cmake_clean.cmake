FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/tld_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/tld_msgs/msg/__init__.py"
  "../src/tld_msgs/msg/_Target.py"
  "../src/tld_msgs/msg/_BoundingBox.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
