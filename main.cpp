#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "Alexandr_Kucherov_201735343_Task5.h"

int main(int argc, char *argv[])
{
    mvms_2017::Alexandr_Kucherov_201735343_Task5 x5(true);

    cv::Mat image;

    double k1 = -0.11839989180635836;
    double k2 = 0.25425420873955445;

    double r2 = 0.0013269901775205413;
    double r4 = 0.0015787467748277866;


    std::cout<<x5.correctLensDistorsions(image, r2, r4, k1, k2);
    std::cout<<x5.Undistort(&x5);
    return 0;
}
