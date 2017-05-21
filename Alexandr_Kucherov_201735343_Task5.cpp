#include "Alexandr_Kucherov_201735343_Task5.h"
#include <string>

using namespace mvms_2017;

mvms_2017::Alexandr_Kucherov_201735343_Task5::Alexandr_Kucherov_201735343_Task5(bool verbose) : Task5(verbose) {}

cv::Mat mvms_2017::Alexandr_Kucherov_201735343_Task5::correctLensDistorsions(cv::Mat image,double r2,double r4,double k1,double k2){

    std::string image_path = "/home/zink/Pictures/";
    std::string image_name = "unDist";
    std::string image_format = ".jpg";

    cv::Mat distortMat = (cv::Mat_<double>(1, 5) <<
            k1,
            k2,
            r2, //dist_p1
            r4, //dist_p2
            -0.11567938093172066 //dist_k3
    );
    cv::Mat cameraMatrix=cv::Mat::eye(3,3,CV_32FC1);

    /*cv::Mat cameraMatrix = (cv::Mat_<double>(3, 3) <<
            528.53618582196384, 0.0, 314.01736116032430,
            0, 532.01912214324500, 231.43930864205211,
            0, 0, 1
    );*/

    image = cv::imread(image_path+image_name+image_format, 1);
    if(! image.data )
    {
        std::cout <<  "Could not open or find the image" << std::endl ;
        throw std::exception();
    }

    cv::cvtColor(image, image, CV_BGR2GRAY);
    image.convertTo(image, CV_8UC1);
    cv::Mat uPhoto = image.clone();


    double dist_k1 = distortMat.at<double>(0, 0);
    double dist_k2 = distortMat.at<double>(0, 1);
    double dist_p1 = distortMat.at<double>(0, 2);
    double dist_p2 = distortMat.at<double>(0, 3);
    double dist_k3 = distortMat.at<double>(0, 4);

    /*double fx = cameraMatrix.at<double>(0, 0);
    double cx = cameraMatrix.at<double>(0, 2);
    double fy = cameraMatrix.at<double>(1, 1);
    double cy = cameraMatrix.at<double>(1, 2);*/

    double fx = cameraMatrix.at<float>(0,0)=image.cols;
    double cx = cameraMatrix.at<float>(1,1)=image.rows;
    double fy = cameraMatrix.at<float>(0,2)=image.cols/2;
    double cy = cameraMatrix.at<float>(1,2)=image.rows/2;
    double z  = 1.;

    for (int i = 0; i < image.cols; i++)
    {
        for (int j = 0; j < image.rows; j++)
        {
            double x = (i - cx) / fx;
            double y = (j - cy) / fy;
            double r2 = x*x + y*y;

            double dx = 2 * dist_p1*x*y + dist_p2*(r2 + 2 * x*x);
            double dy = dist_p1*(r2 + 2 * y*y) + 2 * dist_p2*x*y;
            double scale = (1 + dist_k1*r2 + dist_k2*r2*r2 + dist_k3*r2*r2*r2);

            double xBis = x*scale + dx;
            double yBis = y*scale + dy;

            double xCorr = xBis*fx + cx;
            double yCorr = yBis*fy + cy;

            if (xCorr >= 0 && xCorr < uPhoto.cols && yCorr >= 0 && yCorr < uPhoto.rows)
            {
                uPhoto.at<uchar>(yCorr, xCorr) = image.at<uchar>(j, i);
            }
        }
    }

    cv::imwrite(image_path+image_name+"Manual"+image_format, uPhoto);

    cv::Mat uPhotoAuto;
    cv::undistort(image, uPhotoAuto, cameraMatrix, distortMat);
    cv::imwrite(image_path+image_name+"Auto"+image_format, uPhotoAuto);


    if (_verbose) {
        cv::namedWindow(image_name+image_format, cv::WINDOW_AUTOSIZE);
        imshow(image_name+image_format, image);

        cv::namedWindow(image_name+"Manual"+image_format, cv::WINDOW_AUTOSIZE);
        imshow(image_name+"Manual"+image_format, uPhoto);

        cv::namedWindow(image_name+"Auto"+image_format, cv::WINDOW_AUTOSIZE);
        imshow(image_name+"Auto"+image_format, uPhotoAuto);

        cv::waitKey(0);
    } else throw std::exception();

    return cv::Mat();
}

bool mvms_2017::Alexandr_Kucherov_201735343_Task5::Undistort(Alexandr_Kucherov_201735343_Task5* f){
    std::string fname = "/home/zink/Pictures/unDist.jpg";
    cv::Mat image = cv::imread(fname);
    cv::Mat image_clean;
    cv::Mat k =cv::Mat::eye(3,3,CV_32FC1);
    k.at<float>(0,0)=image.cols;
    k.at<float>(1,1)=image.rows;
    k.at<float>(0,2)=image.cols/2;
    k.at<float>(1,2)=image.rows/2;
    cv::Mat d = (cv::Mat_<float>(5,1) << -0.11839989180635836, 0.25425420873955445, 0.0013269901775205413, 0.0015787467748277866, -0.11567938093172066);
    cv::undistort(image,image_clean,k,d);
    cv::Mat diff;

    //Ламается CV!!!!
    cv::absdiff(image_clean,f->correctLensDistorsions(image, -0.11839989180635836, 0.25425420873955445, 0.0013269901775205413, 0.0015787467748277866), diff);

    if(cv::sum(diff)[0] < 100.0){
        return true;
    }

    return false;
}
