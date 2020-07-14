#pragma once

#include "ofMain.h"

// comment out (//) line 8
// to use a video file input
// instead of a live camera input (default)
#define _USE_LIVE_VIDEO

class ofApp : public ofBaseApp{

  public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    #ifdef _USE_LIVE_VIDEO
    ofVideoGrabber grabber;
    #else
    ofVideoPlayer video;
    #endif
};
