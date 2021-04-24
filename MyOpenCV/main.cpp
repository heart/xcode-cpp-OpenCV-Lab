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
#include "Chapter7.hpp"
#include "Chapter8.hpp"


#define CHAPTER 8

int main() {
    ChapterBase *app;
    
    if(CHAPTER == -1){
        app = new TestShowImage();
    }else if(CHAPTER == -2){
        app = new TestShowWebcam();
    }else if(CHAPTER == 1){
        app = new Chapter1();
    }else if(CHAPTER == 1.1){
        app = new VideoFileCapture();
    }else if(CHAPTER == 2){
        app = new Chapter2();
    }else if(CHAPTER == 3){
        app = new Chapter3();
    }else if(CHAPTER == 4){
        app = new Chapter4();
    }else if(CHAPTER == 5){
        app = new Chapter5();
    }else if(CHAPTER == 6){
        app = new Chapter6();
    }else if(CHAPTER == 7){
        app = new Chapter7();
    }else if(CHAPTER == 8){
        app = new Chapter8();
    }
    
    app->init();
    
    while(!app->isExit){
        app->loop();
        app->checkKeyToExit();
    }
    
    return 0;
}
