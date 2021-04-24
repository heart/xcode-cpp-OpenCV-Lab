//
//  Chapter6.hpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#ifndef Chapter6_hpp
#define Chapter6_hpp

#include "ChapterBase.hpp"

class Chapter6: public ChapterBase{
    Mat imgHSV;
    Mat mask;
    Mat img;

    int hmin = 0, smin = 110, vmin = 153;
    int hmax = 19, smax = 240, vmax = 255;
public:
    void init();
    void loop();
};
#endif /* Chapter6_hpp */
