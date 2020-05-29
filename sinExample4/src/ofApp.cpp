#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    for (int i = 0; i < 10; i++){
        float xorig = 400;
        float yorig = 400;
        float radius = 100 + i * 20;
        float angle = ofGetElapsedTimef() * ofMap(i, 0, 10, 1, 10);
        float x = xorig + radius * cos(angle);
        float y = yorig + radius * sin(angle);
        ofDrawCircle(x,y, 20);
    }
    
    //ofPolyline
    
    
//    float xorig = 400 + 200 * sin(ofGetElapsedTimef()*0.4);
//    float yorig = 400;
//    float radius = 100 + 100 * sin(ofGetElapsedTimef()*3.0);
//    float angle = ofGetElapsedTimef();
//    float x = xorig + radius * cos(angle);
//    float y = yorig + radius * sin(angle);
//
//    trail.addVertex(x,y);
//    trail.draw();
//
//    if (trail.size() > 200){
//        trail.getVertices().erase(trail.getVertices().begin());
//    }
//
//    ofDrawCircle(x,y, 10);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

//    if (key == ' '){
//        trail.clear();
//    }
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
