#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetWindowShape(800,800);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 30; j++){
            
            float x = ofMap(i, 0, 29, 50, 750);
            float y = ofMap(j, 0, 29, 50, 750);
            
            float distance = ofDist(x,y,mouseX, mouseY);
            float pct = ofMap(distance, 0, 200, 1,0, true);
            
            ofPoint circle(x,y);
            ofPoint mouse(mouseX, mouseY);
            ofPoint diff = circle - mouse;
            diff.normalize();
            circle = circle + diff * pct * 50;
            
            
            ofDrawCircle(circle.x,circle.y,5 + 8 * pct);
            
        }
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
