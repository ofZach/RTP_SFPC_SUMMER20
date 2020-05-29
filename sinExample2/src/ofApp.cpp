#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // --------- amplitude ---------
    //    for (int i = 0; i < 80; i++){
    //        float amt = ofMap(i, 0, 80, 0, 400);
    //        float x = 400 + ofMap(sin(ofGetElapsedTimef()), -1, 1, -amt, amt);
    //        ofDrawCircle(x, i*10, 5);
    //    }
    
    // --------- frequency ---------
//    for (int i = 0; i < 80; i++){
//        float scale = ofMap(i, 0, 80, 0, 10);
//        float x = ofMap(sin(ofGetElapsedTimef()*scale), -1, 1, 0, ofGetWidth());
//        ofDrawCircle(x, i*10, 5);
//    }
    
    // --------- phase ---------
    //float phaseShift = mouseX * 0.001;
       for (int i = 0; i < 80; i++){
           float x = ofMap(sin(ofGetElapsedTimef() + i*0.01), -1, 1, 0, ofGetWidth());
           ofDrawCircle(x,i*10, 5);
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
