#include "task1.h"

using namespace mvms_2017;

Task1::Task1(bool verbose):Commun_Task(){
    _verbose = verbose;
}

cv::Mat Task1::drawCircle(std::string filename,float x,float y,float r){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task1::drawRectangle(std::string filename,float x,float y,float w,float h){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task1::drawEllipse(std::string filename,float x,float y,float r1,float r2){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task1::drawTriangle(std::string filename,float x1,float y1,float x2,float y2,float x3,float y3){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task1::drawTrapeze(std::string filename,float x,float y,float w,float h,float l){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task1::drawParallelepiped(std::string filename,float x,float y,float w,float h,float alfa){
    throw std::exception();
    return cv::Mat();
}

std::vector<std::vector<float> > Task1::calcHistogramm(std::string filename,int binsize){
    throw std::exception();
    return std::vector<std::vector<float> >();
}
