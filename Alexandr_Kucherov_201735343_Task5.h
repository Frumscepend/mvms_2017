#ifndef MVMS_2017_ALEXANDR_KUCHEROV_201735343_Task5_H
#define MVMS_2017_ALEXANDR_KUCHEROV_201735343_Task5_H


#include <string>
#include <opencv2/opencv.hpp>
#include <iostream>
#include "task5.h"
#include <memory>

namespace mvms_2017 {
    class Alexandr_Kucherov_201735343_Task5: public Task5 {
    public:
        Alexandr_Kucherov_201735343_Task5(bool verbose);

        cv::Mat correctLensDistorsions(cv::Mat image,double r2,double r4,double k1,double k2);

        bool Undistort(Alexandr_Kucherov_201735343_Task5* f);

        int variant(){
            return 201735343;
        }

        std::string getFirstName(){
            return "Alexandr";
        }

        std::string getSecondName(){
            return "Kucherov";
        }
    };
}


#endif //MVMS_2017_ALEXANDR_KUCHEROV_201735343_Task5_H
