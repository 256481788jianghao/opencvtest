1.install libgtk2.0-dev before compile opencv
2.cmd compile opencv is like "cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local .."
3.compile ffmpeg
  1---./configure --disable-yasm
  2---make
  3---sudo make install
4.compile opencv
  1---cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=../opencvlib ../opencv
