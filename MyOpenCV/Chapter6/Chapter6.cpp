//
//  Chapter6.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "Chapter6.hpp"


Mat imgHSV;
Mat mask;
Mat img;

int hmin = 0, smin = 110, vmin = 153;
int hmax = 19, smax = 240, vmax = 255;

void Chapter6::init(){
    delay = 1;
    string path = "Resources/lambo.png";
    img = imread(path);
    cvtColor(img, imgHSV, COLOR_BGR2HSV);
    
    namedWindow("Trackbars", WINDOW_NORMAL);
    resizeWindow("Trackbars", 640,200);
    
    createTrackbar("Hue Min", "Trackbars", &hmin, 255);
    createTrackbar("Sat Min", "Trackbars", &smin, 255);
    createTrackbar("Val Min", "Trackbars", &vmin, 255);
    
    createTrackbar("Hue Max", "Trackbars", &hmax, 255);
    createTrackbar("Sat Max", "Trackbars", &smax, 255);
    createTrackbar("Val Max", "Trackbars", &vmax, 255);
    
    //imshow("Image", img);
    //imshow("imgHSV", imgHSV);
}

void Chapter6::loop(){
    
    Scalar lower(hmin, smin, vmin);
    Scalar upper(hmax, smax, vmax);
    inRange(imgHSV, lower, upper, mask);
    
    imshow("mask", mask);
}
