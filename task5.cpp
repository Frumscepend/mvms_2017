#include "task5.h"
using namespace mvms_2017;
Task5::Task5(bool verbose):Commun_Task(){
    _verbose = verbose;
}

cv::Mat Task5::getProjectionMatrix(std::vector<cv::Point2i> img_pts,std::vector<cv::Point3f> real_pts){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task5::calibrateCamera(std::vector<cv::Mat> images,int w,int h,float step,cv::Mat test){
    throw std::exception();
    return cv::Mat();
}
cv::Point3f Task5::raysIntersection(cv::Point3f pt1,cv::Point3f ray1,cv::Point3f pt2,cv::Point3f ray2){
    throw std::exception();
    return cv::Point3f();
}
cv::Mat Task5::correctLensDistorsions(cv::Mat image,double r2,double r4,double k1,double k2){
    throw std::exception();
    return cv::Mat();
}
cv::Mat Task5::getTransform(cv::Mat R1,cv::Mat t1,cv::Mat R2,cv::Mat t2){
    throw std::exception();
    return cv::Mat();
}
std::vector<std::pair<cv::Point2i,cv::Point2i> > Task5::calcOpticalFlow(cv::Mat image1,cv::Mat image2,float mindistance){
    throw std::exception();
    return std::vector<std::pair<cv::Point2i,cv::Point2i> >();
}
