//
//  ChapterBase.hpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 23/4/2564 BE.
//

#ifndef Tester_hpp
#define Tester_hpp

#include <stdio.h>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

class ChapterBase{
public:
    bool isExit = false;
    int delay = 20;
    virtual void init() = 0;
    virtual void loop() = 0;
    void checkKeyToExit(){
        int key = waitKey(delay);
        if(key == 27){//Press ESC to exit
            exitApp();
        }
    }
    void exitApp(){
        isExit = true;
    }
    void setLoopInterval(int interval){
        delay = interval;
    }
};
#endif /* Tester_hpp */
