# Library build definition
character_generator = static_library('character_generator',
  'character_generator.c',
  'stat_generator.c',
  include_directories : libs_includes,
  dependencies : [character_dep]
)

# Declare dependency to make linking in apps and tests extremely simple
character_generator_dep = declare_dependency(
  link_with : character_generator,
  include_directories : libs_includes
)
