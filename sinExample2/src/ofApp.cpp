#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

   
    // freq:
//    for (int i = 0; i < 100; i++){
//        ofDrawCircle( ofMap(sin(ofGetElapsedTimef()*(1+i/50.0)), -1,1,0, ofGetWidth()),
//                      i*8, 5);
//    }
    
    // phase
//    for (int i = 0; i < 100; i++){
//        ofDrawCircle( ofMap(sin(ofGetElapsedTimef() + mouseX), -1,1,0, ofGetWidth()),
//                     i*8, 5);
//    }
    
    // amplitude
    for (int i = 0; i < 100; i++){
        ofDrawCircle( ofMap( (i/100.0) * sin(ofGetElapsedTimef()), -1,1,0, ofGetWidth()),
                     i*8, 5);
    }
    
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
