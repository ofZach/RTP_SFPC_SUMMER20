#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    original.load("test.png");
    original.setImageType(OF_IMAGE_COLOR);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // resize the output so the jpeg blocks change from frame to frame:
    
    original.resize(original.getWidth()+ofRandom(-200,200),
                    original.getHeight()+ofRandom(-200,200));
    original.resize(original.getWidth()+ofRandom(-200,200),
                    original.getHeight()+ofRandom(-200,200));
    
    // save out:
    
    original.save("test.jpg", OF_IMAGE_QUALITY_BEST);
    
    // load :
    
    original.load("test.jpg");
    
    // resize back to original size:
    
    original.resize(800, 480);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    original.draw(0,0);
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    original.load("test.png");
    original.setImageType(OF_IMAGE_COLOR);
    
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
