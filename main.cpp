#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>


int main() {
    cv::VideoCapture stream1(0);   //0 is the id of video device.0 if you have only one camera.

    if (!stream1.isOpened()) { //check if video device has been initialised
        std::cout << "cannot open camera";
    }

    //unconditional loop
    while (true) {
        cv::Mat cameraFrame;
        stream1.read(cameraFrame);
        imshow("cam", cameraFrame);
        if (cv::waitKey(30) >= 0)
            break;
    }
    return 0;
}
