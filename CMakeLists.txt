cmake_minimum_required(VERSION 4.4.3)
project(competitive)

file(GLOB_RECURSE SOLUTIONS CONFIGURE_DEPENDS "*.cpp")
foreach(input ${SOLUTIONS})
  if (${input} MATCHES "/build/")
   continue()
  endif()
  
  get_filename_component(exe "${input}" NAME_WE)
  add_executable(${exe} ${input})
endforeach()
