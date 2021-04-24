//
//  TestShowWebcam.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "TestShowWebcam.hpp"

void TestShowWebcam::init(){
    cap.open(0);
}

void TestShowWebcam::loop(){
    cap.read(img);
    imshow("Image", img);
}
