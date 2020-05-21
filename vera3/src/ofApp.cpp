#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofDrawCircle();
    //ofDrawRectangle();
    
    ofBackground(0);
    ofSetColor(255);
    
    ofSeedRandom(mouseX*1000);
    float offset = mouseY;
    
    ofNoFill();
    ofBeginShape();
    ofVertex(200 + ofRandom(-offset,offset),200);
    ofVertex(600+ ofRandom(-offset,offset),200);
    ofVertex(600+ ofRandom(-offset,offset),600);
    ofVertex(200+ ofRandom(-offset,offset),600);
    ofEndShape(true);
    
    

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
