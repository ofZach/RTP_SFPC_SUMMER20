

#pragma once


#include "ofMain.h"




class data{

public:
    
    ofPoint frames[30][24];         // 30 frames, 24 points per frame
    ofPoint frames2d[30][24];         // 30 frames, 24 points per frame
    
    int nFrames;
    
    void setup();

    vector < ofPoint > get3dDataForFrame(int frame);
    vector < ofPoint > get2dDataForFrame(int frame);
    

};

