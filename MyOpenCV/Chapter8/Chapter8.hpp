//
//  Chapter8.hpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 24/4/2564 BE.
//

#ifndef Chapter8_hpp
#define Chapter8_hpp

#include <stdio.h>
#include "ChapterBase.hpp"
#include <opencv2/objdetect.hpp>

class Chapter8: public ChapterBase{
    VideoCapture cap;
    Mat img;
    CascadeClassifier faceCascade;
public:
    void init();
    void loop();
};
#endif /* Chapter8_hpp */
