#ifndef MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task3_H
#define MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task3_H


#include <string>
#include <opencv2/opencv.hpp>
#include <iostream>
#include "task3.h"
#include <memory>

namespace mvms_2017 {
    class Anatoliy_Korovkin_201755322_Task3: public Task3 {
    public:
        Anatoliy_Korovkin_201755322_Task3(bool verbose);

        cv::Mat distanceTransform(cv::Mat image);

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


#endif //MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task3_H
