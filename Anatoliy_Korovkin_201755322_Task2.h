#ifndef MVMS_2017_ANATOLIY_KOROVKIN_201755322_TASk2_H
#define MVMS_2017_ANATOLIY_KOROVKIN_201755322_TASk2_H


#include <string>
#include <opencv2/opencv.hpp>
#include "task2.h"
#include <memory>

namespace mvms_2017 {
    class Anatoliy_Korovkin_201755322_Task2: public Task2 {
    public:
        Anatoliy_Korovkin_201755322_Task2(bool verbose);
        cv::Mat addnoises(cv::Mat image,float sigma,int solt_prob,int papper_prob);

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


#endif //MVMS_2017_ANATOLIY_KOROVKIN_201755322_TASk2_H
