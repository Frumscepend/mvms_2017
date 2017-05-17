#include "Anatoliy_Korovkin_201755322_Task4.h"

using namespace std;
using namespace cv;
using namespace mvms_2017;

mvms_2017::Anatoliy_Korovkin_201755322_Task4::Anatoliy_Korovkin_201755322_Task4(bool verbose) : Task4(verbose) {}

std::vector<float> mvms_2017::Anatoliy_Korovkin_201755322_Task4::HoG(cv::Mat grayimage,int nbins,bool orientation) {
    grayimage.convertTo(grayimage, CV_32F, 1/255.0);

    // Calculate gradients gx, gy
    Mat gx, gy;
    Sobel(grayimage, gx, CV_32F, 1, 0, 1);
    Sobel(grayimage, gy, CV_32F, 0, 1, 1);
    return grayimage;
}