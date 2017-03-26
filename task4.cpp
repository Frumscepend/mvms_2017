#include "task4.h"
using namespace mvms_2017;
Task4::Task4(bool verbose):Commun_Task(){
    _verbose = verbose;
}

cv::Mat Task4::Harris(cv::Mat grayimage,int window_size){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task4::LoG(cv::Mat grayimage,int minscale,int maxscale){
    throw std::exception();
    return cv::Mat();
}

std::vector<float> Task4::HoG(cv::Mat grayimage,int nbins,bool orientation){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task4::Surf(cv::Mat grayimage){
    throw std::exception();
    return cv::Mat();
}

cv::Mat Task4::brief(cv::Mat grayimage,std::vector<cv::Point2i> pts,std::vector<std::pair<cv::Point2i,cv::Point2i>> pattern){
    throw std::exception();
    return cv::Mat();
}

std::vector<cv::DMatch> Task4::bruteForceL2(cv::Mat query,cv::Mat train){
    throw std::exception();
    return std::vector<cv::DMatch>();
}

std::vector<cv::DMatch> Task4::bruteForceHamming(cv::Mat query,cv::Mat train){
    throw std::exception();
    return std::vector<cv::DMatch>();
}
