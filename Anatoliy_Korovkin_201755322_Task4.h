#ifndef MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task4_H
#define MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task4_H


#include <string>
#include <opencv2/opencv.hpp>
#include <iostream>
#include "task4.h"
#include <memory>

namespace mvms_2017 {
    class Anatoliy_Korovkin_201755322_Task4: public Task4 {
    public:
        Anatoliy_Korovkin_201755322_Task4(bool verbose);

        std::vector<float> HoG(cv::Mat grayimage,int nbins,bool orientation);

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


#endif //MVMS_2017_ANATOLIY_KOROVKIN_201755322_Task4_H
