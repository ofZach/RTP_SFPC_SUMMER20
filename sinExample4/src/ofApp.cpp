#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // circle formula
    
    // x = xorig + radius * cos(angle);
    // y = yorig + radius * sin(angle);
    
    float radius = ofMap(sin(ofGetElapsedTimef()*10), -1, 1, 0, 200);
    float x = mouseX + radius * cos(ofGetElapsedTimef()*1);
    float y = mouseY + radius * sin(ofGetElapsedTimef()*1);
    
    ofDrawCircle(x,y, 10);
    
    myLine.addVertex(ofPoint(x,y));
    
    if (myLine.size() > 200){
        myLine.getVertices().erase(myLine.getVertices().begin());
    }
    
    myLine.draw();
    
    
    
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
