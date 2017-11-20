set(cp_SRCS
        AbstractFactory/AbstractFactory.cpp
        AbstractFactory/AbstractProduct.cpp
        Builder/Builder.cpp
        Builder/Director.cpp
        Builder/Prod.cpp
        Factory/Factory.cpp
        Factory/Product.cpp
        Prototype/Prototype.cpp
        Singleton/Singleton.cpp
        )
add_library(cp ${cp_SRCS})



add_executable(CreatePattern CreatePattern.cpp)
target_link_libraries(CreatePattern cp)