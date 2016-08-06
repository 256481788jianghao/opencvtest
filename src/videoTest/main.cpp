#include "opencv2/opencv.hpp"
using namespace cv;

int main(){
    VideoCapture capture(0);
    while(1){
        Mat frame,out;
        capture >> frame;
        boxFilter(frame, out, -1, Size(5,5));
        imshow("xxxx", out);
        waitKey(30);
    }
    return 0;
}
