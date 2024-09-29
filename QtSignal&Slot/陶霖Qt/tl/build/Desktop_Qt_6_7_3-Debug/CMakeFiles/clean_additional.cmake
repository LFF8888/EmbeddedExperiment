# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/tl_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/tl_autogen.dir/ParseCache.txt"
  "tl_autogen"
  )
endif()
