//
//  Chapter7.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 24/4/2564 BE.
//

#include "Chapter7.hpp"

void getContours(Mat imgDilate, Mat img){
    
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    
    findContours(imgDilate,
                 contours,
                 hierarchy,
                 RETR_EXTERNAL,
                 CHAIN_APPROX_SIMPLE);
    
    
    
    vector<vector<Point>> contourPoly(contours.size());
    vector<Rect> boundRect(contours.size());
    
    for(int i=0; i< contours.size(); i++){
        double area = contourArea(contours[i]);
        if(area > 1000){
            
            double peri = arcLength(contours[i], true);
            
            //Find corner of the shape
            approxPolyDP(contours[i],
                         contourPoly[i],
                         0.02*peri,
                         true);
            
            
            drawContours(img,
                         contourPoly,
                         i,
                         Scalar(255,0,255),
                         2);
            
            //print a corner count of the shape
            cout << contourPoly[i].size() << endl;
            
            //find rectangle bouding of the shape
            boundRect[i] = boundingRect(contourPoly[i]);
            rectangle(img,
                      boundRect[i].tl(),
                      boundRect[i].br(),
                      Scalar(0,255,0), 1);
            
            string objectiveType;
            
            int objCor = (int) contourPoly[i].size();
            if(objCor == 3){
                objectiveType = "Triangle";
            }else if(objCor == 4){
                float aspectRatio;
                float w = boundRect[i].width;
                float h = boundRect[i].height;
                if(w>h){
                    aspectRatio = h/w;
                }else{
                    aspectRatio = w/h;
                }
                
                if(aspectRatio >= 0.9 && aspectRatio <= 1.1){
                    objectiveType = "Square";
                }else{
                    objectiveType = "Rectangle";
                }
            }else{
                objectiveType = "Circle";
            }
            
            putText(img,
                    objectiveType,
                    {boundRect[i].x, boundRect[i].y-5} ,
                    FONT_HERSHEY_DUPLEX,
                    0.4,
                    Scalar(0,0,255));
        }
    }
}

void Chapter7::init(){
    string path = "Resources/shapes.png";
    Mat img = imread(path);
    
    Mat imgGray;
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    
    Mat imgBlur;
    GaussianBlur(imgGray, imgBlur, Size(3,3), 3, 0);
    
    Mat imgCanny;
    Canny(imgBlur, imgCanny, 25, 75);
    
    Mat imgDilate;
    Mat kernal = getStructuringElement(MORPH_RECT, Size(3,3));
    dilate(imgCanny,  imgDilate, kernal);
    
    getContours(imgDilate, img);
    
    imshow("Image", img);
//    imshow("imgGray", imgGray);
//    imshow("imgBlur", imgBlur);
//    imshow("imgCanny", imgCanny);
//    imshow("imgDilate", imgDilate);
    
    
}

void Chapter7::loop(){
    
}
