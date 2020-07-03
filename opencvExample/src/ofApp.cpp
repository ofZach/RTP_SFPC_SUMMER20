#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //grabber.listDevices();
    //grabber.setDeviceID(1);
    grabber.initGrabber(640, 480);
    
    camGray.allocate(grabber.getWidth(),
                     grabber.getHeight(),
                     OF_IMAGE_GRAYSCALE);
    
    bgGray.allocate(grabber.getWidth(),
                    grabber.getHeight(),
                    OF_IMAGE_GRAYSCALE);
    
    diffImg.allocate(grabber.getWidth(),
                    grabber.getHeight(),
                    OF_IMAGE_GRAYSCALE);
    
    
    threshImg.allocate(grabber.getWidth(),
                      grabber.getHeight(),
                      OF_IMAGE_GRAYSCALE);
    
    bRecordBg = true;
}

//--------------------------------------------------------------
void ofApp::update(){

    
    grabber.update();
    if (grabber.isFrameNew()){
        convertColor(grabber,camGray, CV_RGB2GRAY );
        camGray.update();
        
        if (bRecordBg){
            bgGray.setFromPixels(camGray.getPixels());
            bgGray.update();
            bRecordBg = false;
        }
        
        absdiff(camGray, bgGray, diffImg);
        diffImg.update();
        
        threshImg.setFromPixels(diffImg.getPixels());
        threshold(threshImg, mouseX);
        threshImg.update();
        
        finder.setSortBySize(true);
        //finder.setMinArea(10);
        
        finder.findContours(threshImg);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofScale(0.5, 0.5);
    ofSetColor(80);
    grabber.draw(0,0);
    ofSetColor(255);
    camGray.draw(grabber.getWidth(), 0);
    bgGray.draw(0, grabber.getHeight());
    diffImg.draw(grabber.getWidth(), grabber.getHeight());
    threshImg.draw(grabber.getWidth()*2, 0);
    
    if (finder.size() > 0){
        finder.getPolyline(0).draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' ' ){
        bRecordBg = true;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
