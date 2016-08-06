project(test)
set(LIBSUFFIX ".so")
if(APPLE)
   message("this is apple system")
   set(LIBSUFFIX ".dylib")
endif()

include_directories(${PROJECT_SOURCE_DIR}/../opencvlib/include)
link_directories(${PROJECT_SOURCE_DIR}/../opencvlib/lib)

add_executable(loadImgTest src/loadImgTest/main.cpp)
target_link_libraries(loadImgTest "libopencv_core${LIBSUFFIX}" "libopencv_imgcodecs${LIBSUFFIX}" "libopencv_highgui${LIBSUFFIX}")

add_executable(videoTest src/videoTest/main.cpp)
target_link_libraries(videoTest "libopencv_videoio${LIBSUFFIX}" "libopencv_core${LIBSUFFIX}" "libopencv_imgcodecs${LIBSUFFIX}" "libopencv_highgui${LIBSUFFIX}")
