#include "task2.h"
using namespace mvms_2017;
Task2::Task2(bool verbose):Commun_Task(){
    _verbose = verbose;
}

cv::Mat Task2::mean(cv::Mat image,int filter_size){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task2::gauss(cv::Mat image,int filter_size,float sigma){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task2::sobel(cv::Mat image,int dir){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task2::median(cv::Mat image,int filter_size){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task2::histeq(cv::Mat image,int nbins){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task2::addnoises(cv::Mat image,float sigma,int solt_prob,int papper_prob){
    throw std::exception();
    return cv::Mat();
}
