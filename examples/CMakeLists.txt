option(LIBICSNEO_BUILD_C_INTERACTIVE_EXAMPLE "Build the command-line interactive C example." ON)
option(LIBICSNEO_BUILD_CPP_SIMPLE_EXAMPLE "Build the simple C++ example." ON)
option(LIBICSNEO_BUILD_CPP_INTERACTIVE_EXAMPLE "Build the command-line interactive C++ example." ON)

# Disabled until we properly build these in-tree
# option(LIBICSNEO_BUILD_CSHARP_INTERACTIVE_EXAMPLE "Build the command-line interactive C# example." OFF)
# option(LIBICSNEO_BUILD_JAVA_INTERACTIVE_EXAMPLE "Build the command-line interactive Java example." OFF)

if(LIBICSNEO_BUILD_C_INTERACTIVE_EXAMPLE)
	add_subdirectory(c/interactive)
endif()

if(LIBICSNEO_BUILD_CPP_SIMPLE_EXAMPLE)
	add_subdirectory(cpp/simple)
endif()

if(LIBICSNEO_BUILD_CPP_INTERACTIVE_EXAMPLE)
	add_subdirectory(cpp/interactive)
endif()

# if(LIBICSNEO_BUILD_CSHARP_INTERACTIVE_EXAMPLE)
# 	add_subdirectory(csharp)
# endif()

# if(LIBICSNEO_BUILD_JAVA_INTERACTIVE_EXAMPLE)
# 	add_subdirectory(java)
# endif()