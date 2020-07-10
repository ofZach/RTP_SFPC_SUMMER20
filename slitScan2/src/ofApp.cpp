#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.listDevices();
    grabber.setDeviceID(0);
    
    grabber.setup(640, 480);
    
    img.allocate(grabber.getWidth(), grabber.getHeight(), OF_IMAGE_COLOR);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    grabber.update();
    if (grabber.isFrameNew()){
        
        ofImage imgTemp;
        images.push_back(imgTemp);
        images.back().setUseTexture(false);
        images.back().setFromPixels(grabber.getPixels());
        
        if (images.size() > 80){
            images.erase(images.begin());
        }
    }
    
    if (images.size() > 0){
        for (int y = 0; y < grabber.getHeight(); y++){
            int whichImage = ofMap(y, 0, grabber.getHeight(), 0, images.size());
            for (int x = 0; x < grabber.getWidth(); x++){
                ofColor color = images[whichImage].getColor(x,y);
                img.setColor(x, y, color);
            }
        }
    }
    img.update();
    
    
    // noise version
    
//    float time = ofGetElapsedTimef();
//
//    if (images.size() > 1){
//        for (int y = 0; y < grabber.getHeight(); y++){
//            //ofMap(y, 0, grabber.getHeight(), 0, images.size());
//            for (int x = 0; x < grabber.getWidth(); x++){
//
//                int whichImage = ofMap(ofNoise(x*0.01,
//                                               y*0.01, time), 0, 1, 0, images.size()-1);
//
//
//                ofColor color = images[whichImage].getColor(x,y);
//                img.setColor(x, y, color);
//            }
//        }
//    }
//    img.update();
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    grabber.draw(0,0);
    img.draw(grabber.getWidth(), 0);
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
