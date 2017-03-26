//
// Created by tolyas on 3/26/17.
//

#ifndef MVMS_2017_ANATOLIY_KOROVKIN_201755322_TASK1_H
#define MVMS_2017_ANATOLIY_KOROVKIN_201755322_TASK1_H


#include "task1.h"
#include <memory>

namespace mvms_2017 {
    class Anatoliy_Korovkin_201755322_Task1: public Task1 {
    public:
        Anatoliy_Korovkin_201755322_Task1(bool verbose);
        virtual cv::Mat drawParallelepiped(std::string filename,float x,float y,float w,float h,float alfa);
    private:
        void drawLine(cv::Mat img, cv::Point start, cv::Point end );
    };
}


#endif //MVMS_2017_ANATOLIY_KOROVKIN_201755322_TASK1_H
