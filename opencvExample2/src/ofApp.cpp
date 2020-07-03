#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //grabber.listDevices();
    //grabber.setDeviceID(1);
    grabber.initGrabber(640, 480);
    
    camGray.allocate(grabber.getWidth(),
                     grabber.getHeight(),
                     OF_IMAGE_GRAYSCALE);
    
    prevGray.allocate(grabber.getWidth(),
                    grabber.getHeight(),
                    OF_IMAGE_GRAYSCALE);
    
    diffImg.allocate(grabber.getWidth(),
                    grabber.getHeight(),
                    OF_IMAGE_GRAYSCALE);
    
    
    threshImg.allocate(grabber.getWidth(),
                      grabber.getHeight(),
                      OF_IMAGE_GRAYSCALE);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    grabber.update();
    if (grabber.isFrameNew()){
        convertColor(grabber,camGray, CV_RGB2GRAY );
        camGray.update();
        
        
            
        
        absdiff(camGray, prevGray, diffImg);
        diffImg.update();
        
        threshImg.setFromPixels(diffImg.getPixels());
        threshold(threshImg, mouseX);
        threshImg.update();
        
        prevGray.setFromPixels(camGray.getPixels());
        prevGray.update();
        
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    
    
    int nWhitePixels = 0;
       for (int i = 0; i < threshImg.getWidth(); i++){
           for (int j = 0; j < threshImg.getHeight(); j++){
               if (threshImg.getColor(i,j).getBrightness() > 127){
                   nWhitePixels++;
               }
           }
       }
    cout << nWhitePixels << endl;
       
    nWhiteSmoothed = 0.95 * nWhiteSmoothed + 0.05 *nWhitePixels;
    
    ofBackground( ofMap(nWhiteSmoothed, 0, 60000, 0, 255, true));
    
    
    
    ofScale(0.5, 0.5);
    ofSetColor(80);
    grabber.draw(0,0);
    ofSetColor(255);
    camGray.draw(grabber.getWidth(), 0);
    diffImg.draw(grabber.getWidth(), grabber.getHeight());
    threshImg.draw(grabber.getWidth()*2, 0);
    
   
    
    
    
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
