//
//  VideoFileCapture.hpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#ifndef VideoFileCapture_hpp
#define VideoFileCapture_hpp

#include "ChapterBase.hpp"

class VideoFileCapture: public ChapterBase {
public:
    void init();
    void loop();
    VideoCapture cap;
    Mat img;
};
#endif /* VideoFileCapture_hpp */
