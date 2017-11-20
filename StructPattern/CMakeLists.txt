
set(sp_SRCS
        Adapter/Adapter.cpp
        Adapter/ObjAdapter.cpp
        Bridged/Abstraction.cpp
        Bridged/AbstractionImp.cpp
        )
add_library(sp ${sp_SRCS})



add_executable(StructPattern StructPattern.cpp)
target_link_libraries(StructPattern sp)