#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // for this approach, we will store "energy" values and then
    // distribute accordingly
    
    float energy[100];
    for (int i = 0; i < 100; i++){
        energy[i] = ofMap(sin(i*0.1 + ofGetElapsedTimef()), -1, 1, 0.01, 1.0);  // all positive!
    }
    // now, calculate the total energy
    float total = 0;
    for (int i = 0; i < 100; i++){
        total = total + energy[i];
    }
    
    // now each energy cell can be a pct, ie energy[0] / total;
    float w = 500;
    float h = 500;
    
    ofTranslate(100,100);
    
    float x = 0;
    for (int i = 0; i < 100; i++){
        float widthMe = 500 * (energy[i] / total);
       
        for (int j = 0; j < 100; j++){
            float y = ofMap(j, 0, 100, 0, 500);
            if ( (i+j) % 2 == 0) ofSetColor(0);
            else ofSetColor(255);
            ofRect(x, y, widthMe, 5 );
        }
        
         x += widthMe;
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
