//
//  TestShowImage.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "TestShowImage.hpp"
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void TestShowImage::init(){
    cout << "TestShowImage RUN" << endl;
    string path = "Resources/test.png";
    Mat img = imread(path);
    imshow("Image", img);
};


void TestShowImage::loop(){
  
};
