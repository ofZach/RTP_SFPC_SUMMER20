#include "ofApp.h"
#include "data.h"

//--------------------------------------------------------------
void ofApp::setup(){


    walkData.setup();
    ofSetFrameRate(30);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);

    
    
    vector < ofPoint > pts = walkData.get3dDataForFrame( (int)(ofGetFrameNum()) % walkData.nFrames);
    
    
    
//    //----------------------------- 3d
    cam.begin();
    //cam.enableOrtho();
    ofSetColor(255);

    float time = ofGetElapsedTimef();

    for (int i = 0; i < pts.size(); i++){

        
        //ofDrawLine(pts[i],
        //           pts[0]);
        ofDrawSphere(pts[i], 10 );
        
//        float x = pts[i].x;
//        float y = pts[i].y;
//        float z = pts[i].z;
//        z += ofSignedNoise(x*0.01, y*0.01, time*1.1 ) * 300 * (sin(time)*0.5 + 0.5);
//        ofDrawSphere( x,y,z, 10 );
        
        
    }

    cam.end();
    
    

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
