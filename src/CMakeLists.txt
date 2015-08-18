set(SOURCES main_class.cpp main_class.h)

add_library(src STATIC ${SOURCES})
target_include_directories(src PUBLIC ${PROJECT_SOURCE_DIR})
target_compile_features(src PUBLIC cxx_constexpr)
