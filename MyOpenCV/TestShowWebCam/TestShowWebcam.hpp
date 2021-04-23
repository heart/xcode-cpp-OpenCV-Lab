//
//  TestShowWebcam.hpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#ifndef TestShowWebcam_hpp
#define TestShowWebcam_hpp

#include "ChapterBase.hpp"

class TestShowWebcam: public ChapterBase{
    VideoCapture cap;
    Mat img;
public:
    void init();
    void loop();
};
#endif /* TestShowWebcam_hpp */
