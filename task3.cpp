#include "task3.h"
using namespace mvms_2017;
Task3::Task3(bool verbose):Commun_Task(){
    _verbose = verbose;
}

cv::Mat Task3::Otsu(cv::Mat grayimage,float &threshold){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task3::adaptiveBinary(cv::Mat grayimage,int filter_size,int c){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task3::labelImage(cv::Mat binimage){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task3::distanceTransform(cv::Mat binimage){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task3::Canny(cv::Mat grayimage,int low_th,int high_th){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task3::watershed(cv::Mat grayimage){
    throw std::exception();
    return cv::Mat();
}
