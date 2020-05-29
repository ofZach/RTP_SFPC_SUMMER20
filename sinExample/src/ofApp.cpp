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

    // -> sin(...);
    // sin(...)
    // Math.sin(...);
    
    //float screenW = ofGetWidth();
    //ofDrawRectangle( screenW/2.0 + sin(ofGetElapsedTimef()) * (screenW/2.0) , 100, 50, 50);
    
    
    //ofMap(val, inputLow, inputHight, outputLow, outputHigh);
    
    ofDrawRectangle( ofMap(sin(ofGetElapsedTimef()*1), -1,1,0, ofGetWidth()),
                    100,50,50);
    
    
    
    
    
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
