//
//  Chapter8.cpp
//  MyOpenCV
//
//  Created by narongrit kanhanoi on 24/4/2564 BE.
//

#include "Chapter8.hpp"


void Chapter8::init(){
    setLoopInterval(1);
    faceCascade.load("Resources/haarcascade_frontalface_default.xml");
    
    if(faceCascade.empty()){
        cout << "XML file is not loaded" << endl;
        exitApp();
        return;
    }

    cap.open(0);
}

void Chapter8::loop(){
    cap.read(img);
    vector<Rect> faces;
    
    faceCascade.detectMultiScale(img, faces, 1.1, 10);

    for(int i=0; i< faces.size(); i++){
        rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0,0,255),2);
    }
    imshow("Image", img);
}
