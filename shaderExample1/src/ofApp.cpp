#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    shader.load("", "shader.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

    if (ofGetFrameNum() % 60) shader.load("", "shader.frag");
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    
    shader.begin();
    shader.setUniform1f("time", ofGetElapsedTimef());
    shader.setUniform2f("mouse", mouseX, mouseY);
//
    ofDrawRectangle(0,0,ofGetWidth(), ofGetHeight());
    //ofDrawCircle(mouseX,mouseY,100);
    shader.end();
    
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
