#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "Anatoliy_Korovkin_201755322_Task1.h"
#include "Anatoliy_Korovkin_201755322_Task2.h"
#include "Anatoliy_Korovkin_201755322_Task3.h"
#include "Anatoliy_Korovkin_201755322_Task4.h"
#include "Anatoliy_Korovkin_201755322_Task5.h"

int main(int argc, char *argv[])
{
    mvms_2017::Anatoliy_Korovkin_201755322_Task1 x(true);
    mvms_2017::Anatoliy_Korovkin_201755322_Task2 x1(true);
    mvms_2017::Anatoliy_Korovkin_201755322_Task3 x2(true);
    mvms_2017::Anatoliy_Korovkin_201755322_Task4 x3(true);
    mvms_2017::Anatoliy_Korovkin_201755322_Task5 x4(true);

    cv::Point3f pointS1;
    pointS1.x = 1;
    pointS1.y = 0;
    pointS1.z = 0;
    cv::Point3f pointE1;
    pointE1.x = 2;
    pointE1.y = 0;
    pointE1.z = 0;
    cv::Point3f pointS2;
    pointS2.x = 3;
    pointS2.y = 1;
    pointS2.z = 0;
    cv::Point3f pointE2;
    pointE2.x = 7;
    pointE2.y = 0;
    pointE2.z = 0;
    std::cout<<x4.raysIntersection(pointS1, pointE1, pointS2, pointE2);
    return 0;
}
