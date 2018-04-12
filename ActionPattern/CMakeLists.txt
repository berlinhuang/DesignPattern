set(ap_SRCS
        Observer/Observer.cpp
        Observer/Subject.cpp
        )
add_library(ap ${ap_SRCS})



add_executable(ActionPattern ActionPattern.cpp)
target_link_libraries(ActionPattern ap)
