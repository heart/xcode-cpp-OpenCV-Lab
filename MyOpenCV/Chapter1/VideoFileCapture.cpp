//
//  VideoFileCapture.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#include "VideoFileCapture.hpp"

void VideoFileCapture::init(){
    string path = "Resources/test_video.mp4";
    cap.open(path);
}

void VideoFileCapture::loop(){
    cap.read(img);
    if(img.size().width < 1){
        isExit = true;
        return;
    }
    imshow("Image", img);
}
