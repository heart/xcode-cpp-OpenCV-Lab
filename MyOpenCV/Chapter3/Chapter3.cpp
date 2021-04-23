//
//  Chapter3.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "Chapter3.hpp"

void Chapter3::init(){
    string path = "Resources/test.png";
    Mat img = imread(path);

    Mat imgResize;
    resize(img, imgResize, Size(), 0.5, 0.5);
    
    Rect roi(200,100,300,300);
    Mat imgCrop = img(roi);
    
    imshow("Image", img);
    imshow("imgResize", imgResize);
    imshow("imgCrop", imgCrop);
}

void Chapter3::loop(){
    checkKeyToExit();
}
