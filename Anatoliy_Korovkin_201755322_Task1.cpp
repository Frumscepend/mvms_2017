//
// Created by tolyas on 3/26/17.
//

#include "Anatoliy_Korovkin_201755322_Task1.h"

mvms_2017::Anatoliy_Korovkin_201755322_Task1::Anatoliy_Korovkin_201755322_Task1(bool verbose) : Task1(verbose) {}

cv::Mat
mvms_2017::Anatoliy_Korovkin_201755322_Task1::drawParallelepiped(std::string filename, float x, float y, float w,
                                                                 float h, float alfa) {
    cv::Mat image;
    image = cv::imread(filename, CV_LOAD_IMAGE_COLOR);   // Read the file

    if(! image.data )                              // Check for invalid input
    {
        std::cout <<  "Could not open or find the image" << std::endl ;
        throw std::exception();
    }

    alfa = (float) (alfa * (M_PI / 180));                                       // Calculating radians from degrees

    float x2 = (float) (x + h * cos(alfa));                                     // Calculating parallelepiped points
    float y2 = (float) (y + h * sin(alfa));
    float x3 = x2 + w;
    float y3 = y2;
    float x4 = x + w;
    float y4 = y;
    drawLine(image, cv::Point((int) x, (int) y), cv::Point((int) x2, (int) y2));    // Drawing parallelepiped
    drawLine(image, cv::Point((int) x2, (int) y2), cv::Point((int) x3, (int) y3));
    drawLine(image, cv::Point((int) x3, (int) y3), cv::Point((int) x4, (int) y4));
    drawLine(image, cv::Point((int) x4, (int) y4), cv::Point((int) x, (int) y));

    if (_verbose) {
        cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);// Create a window for display.
        imshow("Display window", image);                   // Show our image inside it.

        cv::waitKey(0);
    }

    return image;
}

void mvms_2017::Anatoliy_Korovkin_201755322_Task1::drawLine(cv::Mat img, cv::Point start, cv::Point end) {
    int thickness = 1;
    int lineType = 1;
    line( img,
          start,
          end,
          cv::Scalar( 255, 255, 255 ),
          thickness,
          lineType );
}
