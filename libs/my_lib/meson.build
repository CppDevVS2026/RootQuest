# Library build definition
my_lib_lib = library('my_lib',
  'my_lib.c',
  include_directories: libs_includes
)

# Declare dependency to make linking in apps and tests extremely simple
my_lib_dep = declare_dependency(
  link_with: my_lib_lib,
  include_directories: libs_includes
)
