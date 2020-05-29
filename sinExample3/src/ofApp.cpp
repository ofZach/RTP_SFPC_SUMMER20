#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetRectMode(OF_RECTMODE_CENTER);

    counter = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // amplitude modulation
//    float signal = ofMap(sin(ofGetElapsedTimef() * 0.5), -1, 1, 0, 1);
//    ofDrawCircle( ofMap( signal * sin(ofGetElapsedTimef()*3), -1, 1, 0, ofGetWidth()),
//                 100, 10);
    
    // freq modulation
    
    counter = counter + ofMap(sin(ofGetElapsedTimef()*100), -1, 1, 0.03, 0.05);
    ofDrawCircle( ofMap( sin(counter), -1, 1, 0, ofGetWidth()),
         100, 10);
    
    
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
