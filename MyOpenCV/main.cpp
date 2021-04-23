#include <iostream>
#include <opencv2/highgui.hpp>
#include "ChapterBase.hpp"
#include "TestShowImage.hpp"
#include "TestShowWebcam.hpp"
#include "VideoFileCapture.hpp"

#include "Chapter1.hpp"
#include "Chapter2.hpp"
#include "Chapter3.hpp"
#include "Chapter4.hpp"
#include "Chapter5.hpp"
#include "Chapter6.hpp"

#define RUN 6

int main() {
    ChapterBase *app;
    
    if(RUN == -1){
        app = new TestShowImage();
    }else if(RUN == -2){
        app = new TestShowWebcam();
    }else if(RUN == 1){
        app = new Chapter1();
    }else if(RUN == 1.1){
        app = new VideoFileCapture();
    }else if(RUN == 2){
        app = new Chapter2();
    }else if(RUN == 3){
        app = new Chapter3();
    }else if(RUN == 4){
        app = new Chapter4();
    }else if(RUN == 5){
        app = new Chapter5();
    }else if(RUN == 6){
        app = new Chapter6();
    }
    
    app->init();
    
    while(!app->isExit){
        app->loop();
        app->checkKeyToExit();
    }
    
    return 0;
}
