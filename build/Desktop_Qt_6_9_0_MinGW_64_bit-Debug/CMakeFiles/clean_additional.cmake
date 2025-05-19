# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ScenicAreaManagerServer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ScenicAreaManagerServer_autogen.dir\\ParseCache.txt"
  "ScenicAreaManagerServer_autogen"
  )
endif()
