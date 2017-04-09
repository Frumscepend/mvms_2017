#include "Anatoliy_Korovkin_201755322_Task2.h"
#include "task2.h"

using namespace mvms_2017;

mvms_2017::Anatoliy_Korovkin_201755322_Task2::Anatoliy_Korovkin_201755322_Task2(bool verbose) : Task2(verbose) {}

cv::Mat
mvms_2017::Anatoliy_Korovkin_201755322_Task2::addnoises(cv::Mat image,float sigma,int solt_prob,int papper_prob) {
    solt_prob = 100 - solt_prob;
    papper_prob = 100 - papper_prob;
    CvRNG rng = cvRNG(0xffffffff);
    IplImage ipl_img = image;

    for (int y = 0; y < (&ipl_img)->height; y++) {
        uchar *ptr = (uchar *) ((&ipl_img)->imageData + y * (&ipl_img)->widthStep);
        for (int x = 0; x < (&ipl_img)->width; x++) {
            if (cvRandInt(&rng) % 100 >= 50) {
                ptr[3 * x] = (uchar) (cvRandInt(&rng) % 255 - (int)sigma);
            }
        }
    }
    for (int y = 0; y < (&ipl_img)->height; y++) {
        uchar *ptr = (uchar *) ((&ipl_img)->imageData + y * (&ipl_img)->widthStep);
        for (int x = 0; x < (&ipl_img)->width; x++) {
            if (cvRandInt(&rng) % 100 >= solt_prob) {
                int rand = cvRandInt(&rng) % 255;
                if (rand >= 128) {
                    ptr[3 * x] = 255;
                }
            }
            if (cvRandInt(&rng) % 100 >= papper_prob) {
                int rand = cvRandInt(&rng) % 255;
                if (rand < 128) {
                    ptr[3 * x] = 0;
                }
            }
        }
    }

    image = cv::cvarrToMat(&ipl_img);

    if (_verbose) {
        cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);// Create a window for display.
        imshow("Display window", image);                   // Show our image inside it.

        cv::waitKey(0);
    }

    return image;
}