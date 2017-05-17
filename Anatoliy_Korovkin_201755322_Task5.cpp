#include "Anatoliy_Korovkin_201755322_Task5.h"

using namespace mvms_2017;

mvms_2017::Anatoliy_Korovkin_201755322_Task5::Anatoliy_Korovkin_201755322_Task5(bool verbose) : Task5(verbose) {}

cv::Point3f mvms_2017::Anatoliy_Korovkin_201755322_Task5::raysIntersection(cv::Point3f pt1,cv::Point3f ray1,cv::Point3f pt2,cv::Point3f ray2) {
    cv::Point3f result;
    float p = ray1.x - pt1.x;
    float q = ray1.y - pt1.y;
    float r = ray1.z - pt1.z;
    float p1 = ray2.x - pt2.x;
    float q1 = ray2.y - pt2.y;
    float r1 = ray2.z - pt2.z;
    result.x=(pt1.x*q*p1-pt2.x*q1*p-pt1.y*p*p1+pt2.y*p*p1)/(q*p1-q1*p);
    result.y=(pt1.y*p*q1-pt2.y*p1*q-pt1.x*q*q1+pt2.x*q*q1)/(p*q1-p1*q);
    result.z=(pt1.z*q*r1-pt2.z*q1*r-pt1.y*r*r1+pt2.y*r*r1)/(q*r1-q1*r);
    if (pt1.x == ray1.x && pt2.x == ray2.x && pt1.x == pt2.x){
        result.x = pt1.x;
    }
    if (pt1.y == ray1.y && pt2.y == ray2.y && pt1.y == pt2.y){
        result.y = pt1.y;
    }
    if (pt1.z == ray1.z && pt2.z == ray2.z && pt1.z == pt2.z){
        result.z = pt1.z;
    }
    if (isPointBelongToRay(pt1, ray1, result) && isPointBelongToRay(pt2, ray2, result)){
        return result;
    } else{
        throw std::exception();
    }
}

bool mvms_2017::Anatoliy_Korovkin_201755322_Task5::isPointBelongToRay(cv::Point3f pt1,cv::Point3f ray1,cv::Point3f target){
    return (((ray1.x - pt1.x) == 0 && target.x == pt1.x || (ray1.y - pt1.y) == 0 && target.y == pt1.y ||
            (target.x - pt1.x) / (ray1.x - pt1.x) == (target.y - pt1.y) / (ray1.y - pt1.y) &&
            ((target.x - pt1.x) / (ray1.x - pt1.x) > 0)) &&

            ((ray1.x - pt1.x) == 0 && target.x == pt1.x  || (ray1.z - pt1.z) == 0 && target.z == pt1.z ||
            (target.x - pt1.x) / (ray1.x - pt1.x) == (target.z - pt1.z) / (ray1.z - pt1.z) &&
            ((target.x - pt1.x) / (ray1.x - pt1.x) > 0)) &&

            ((ray1.y - pt1.y) == 0  && target.y == pt1.y || (ray1.z - pt1.z) == 0 && target.z == pt1.z ||
            (target.y - pt1.y) / (ray1.y - pt1.y) == (target.z - pt1.z) / (ray1.z - pt1.z) &&
            ((target.y - pt1.y) / (ray1.y - pt1.y) > 0)) ||

            (pt1 == target)) && (((target.x - pt1.x) / (ray1.x - pt1.x) > 0) || ((target.y - pt1.y) / (ray1.y - pt1.y) > 0) || ((target.z - pt1.z) / (ray1.z - pt1.z) > 0));
}


