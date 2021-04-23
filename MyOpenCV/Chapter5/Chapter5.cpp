//
//  Chapter5.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "Chapter5.hpp"

#define W 250.0f
#define H 350.0f

void Chapter5::init(){
    string path = "Resources/cards.jpg";
    Mat img = imread(path);
    
    Point2f src[4] {
        {525, 142}, {771,190}, {405,395}, {674,457}
    };
    
    Point2f dst[4] {
        {0.0f, 0.0f}, { W,0.0f}, {0.0f,H}, {W,H}
    };
    
    Mat imgWarp;
    Mat matrix = getPerspectiveTransform(src, dst);
    warpPerspective(img, imgWarp, matrix, Point(W,H));
    
    for(int i=0; i< 4; i++){
        circle(img, src[i], 10, Scalar(0,0,255), FILLED);
    }
    
    imshow("Image", img);
    imshow("imgWarp", imgWarp);
}

void Chapter5::loop(){
    
}
