#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // additive
    
    float x = ofMap(sin(ofGetElapsedTimef())+
                    sin(ofGetElapsedTimef()*4.72), -2, 2, 0, ofGetWidth());
    ofDrawCircle(x, 400, 10);
    
    
    // amplitude
    
//    float mod = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 1);
//    float x = ofMap(mod*sin(ofGetElapsedTimef()*5), -1, 1, 0, ofGetWidth());
//    ofDrawCircle(x, 400, 10);
    
    
    // frequency
    
//    float adder = ofMap(sin(ofGetElapsedTimef()), -1,1, 0.01, 0.15);
//    time += adder;
//    float x = ofMap( sin(time), -1, 1, 0, ofGetWidth());
//    ofDrawCircle(x, 400, 10);
    
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
