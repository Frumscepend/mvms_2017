#include "Anatoliy_Korovkin_201755322_Task3.h"

using namespace std;
using namespace cv;
using namespace mvms_2017;

mvms_2017::Anatoliy_Korovkin_201755322_Task3::Anatoliy_Korovkin_201755322_Task3(bool verbose) : Task3(verbose) {}

cv::Mat mvms_2017::Anatoliy_Korovkin_201755322_Task3::distanceTransform(cv::Mat image) {
    if (_verbose) {
        cv::imshow("Source Image", image);
    }
    cv::Mat kernel = (cv::Mat_<float>(3,3) << 1,  1, 1, 1, -8, 1, 1,  1, 1);
    cv::Mat imgLaplacian;
    cv::Mat sharp = image;
    cv::filter2D(sharp, imgLaplacian, CV_32F, kernel);
    image.convertTo(sharp, CV_32F);
    cv::Mat imgResult = sharp - imgLaplacian;
    imgResult.convertTo(imgResult, CV_8UC3);
    imgLaplacian.convertTo(imgLaplacian, CV_8UC3);
    if (_verbose) {
        cv::imshow("New Sharped Image", imgResult);
    }
    image = imgResult;
    cv::Mat bw;
    bw = image.clone();
    cv::threshold(bw, bw, 40, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
    if (_verbose) {
        cv::imshow("Binary Image", bw);
    }
    cv::Mat dist;
    cv::distanceTransform(bw, dist, CV_DIST_L2, 3);
    cv::normalize(dist, dist, 0, 1., NORM_MINMAX);
    if (_verbose) {
        cv::imshow("Distance Transform Image", dist);
        cv::waitKey(0);
    }
    return image;
}