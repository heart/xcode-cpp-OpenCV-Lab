//
//  Chapter4.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "Chapter4.hpp"

void Chapter4::init(){
    img = Mat(512,512, CV_8UC3, Scalar(255,255,255));
    
    circle(img, Point(256,256), 155, Scalar(0, 69,255), FILLED);
    rectangle(img, Point(130,226), Point(382,286), Scalar(255,255,255), FILLED);
    line(img, Point(130,296), Point(382,296),Scalar(255,255,255), 2);
    putText(img, "HEART NARONGRIT", Point(137,262), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69,255), 2);
    
    imshow("img", img);
}

void Chapter4::loop(){
    
}
