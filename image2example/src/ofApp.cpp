#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.allocate(500,500, OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < 500; i++){
        for (int j = 0; j < 500; j++){
            
            
            float red = ofMap(i, 0, 500, 0, 255);
            float green = ofMap(j, 0, 500, 0, 255);
            float blue = ofMap(mouseX, 0, ofGetWidth(), 0, 255, true);
            img.setColor(i,j, ofColor(red,green, blue));
            
//            float distance = ofDist(mouseX, mouseY, i, j);
//            if (distance < 100){
//                float pct = ofMap(distance, 0, 100, 1,0);
//                img.setColor(i,j, ofColor(255*pct));
//
//            } else {
//                img.setColor(i,j, ofColor(0));
//
//            }
            
//            img.setColor(i,j, ofColor(sin(i*0.1)*sin(j*0.1)*127 + 127));
            
            //img.setColor(i,j, ofColor(ofRandom(0,255)));
        }
    }
    img.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    img.draw(0,0);
    
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
