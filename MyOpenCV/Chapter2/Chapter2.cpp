//
//  Chapter2.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "Chapter2.hpp"

void Chapter2::init(){
    string path = "Resources/test.png";
    Mat img = imread(path);
    
    Mat imgGray;
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    
    Mat imgBlur;
    GaussianBlur(img, imgBlur, Size(3,3), 3, 0);
    
    Mat imgCanny;
    Canny(imgBlur, imgCanny, 25, 75);
    
    Mat imgDilate;
    Mat kernal = getStructuringElement(MORPH_RECT, Size(3,3));
    dilate(imgCanny,  imgDilate, kernal);
    
    Mat imgErode;
    erode(imgDilate, imgErode, kernal);
    
    imshow("Image", img);
    imshow("Image Gray", imgGray);
    imshow("Image Blur", imgBlur);
    imshow("Image Canny", imgCanny);
    
    imshow("Image imgDilate", imgDilate);
    imshow("Image imgErode", imgErode);
}

void Chapter2::loop(){
    
}
