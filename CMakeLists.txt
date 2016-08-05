project(test)
#message(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/../opencvlib/include)
link_directories(${PROJECT_SOURCE_DIR}/../opencvlib/lib)

add_executable(loadImgTest src/loadImgTest/main.cpp)
target_link_libraries(loadImgTest "libopencv_core.so" "libopencv_imgcodecs.so" "libopencv_highgui.so")

add_executable(videoTest src/videoTest/main.cpp)
target_link_libraries(videoTest "libopencv_videoio.so" "libopencv_core.so" "libopencv_imgcodecs.so" "libopencv_highgui.so")
