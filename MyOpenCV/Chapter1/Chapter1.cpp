//
//  Chapter1.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "Chapter1.hpp"

void Chapter1::init(){
    string path = "Resources/test.png";
    Mat img = imread(path);
    
    imshow("Image", img);
}

void Chapter1::loop(){
   
}
