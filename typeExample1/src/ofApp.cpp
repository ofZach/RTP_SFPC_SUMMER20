#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("framd.ttf", 50);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//
//    for (int i = 0; i < 100; i++){
//        ofSetColor(ofMap(i, 0, 100, 0, 255));
//        font.drawString("hello", 200 + i,200+i);
//    }
    
    
    ofSetColor(255);
    //font.drawString("heljo", 300,300);
    ofSetColor(255,0,0);
    ofDrawCircle(300,300, 4);
    ofDrawLine(300,300,600,300);
    
    ofNoFill();
    ofRectangle rect = font.getStringBoundingBox("heljo", 300, 300);
    ofDrawRectangle(rect);
    ofFill();
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
