#ifndef MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task5_H
#define MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task5_H


#include <string>
#include <opencv2/opencv.hpp>
#include <iostream>
#include "task5.h"
#include <memory>

namespace mvms_2017 {
    class Anatoliy_Korovkin_201755322_Task5: public Task5 {
    public:
        Anatoliy_Korovkin_201755322_Task5(bool verbose);

        cv::Point3f raysIntersection(cv::Point3f pt1,cv::Point3f ray1,cv::Point3f pt2,cv::Point3f ray2);

        bool isPointBelongToRay(cv::Point3f pt1,cv::Point3f ray1,cv::Point3f target);

        int variant(){
            return 201755322;
        }

        std::string getFirstName(){
            return "Anatoliy";
        }

        std::string getSecondName(){
            return "Korovkin";
        }
    };
}


#endif //MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task5_H
