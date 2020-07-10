#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setDeviceID(0);
    grabber.setup(640, 480);
    
    img.allocate(640, 480, OF_IMAGE_COLOR);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();

    for (int z = 0; z < 1; z++){
        for (int i = 0; i < grabber.getHeight(); i++){
            ofColor color = grabber.getPixels().getColor(position, i);
            img.setColor(position, i, color);
        }
        img.update();
        
        position++;
        if (position >= grabber.getWidth()){
            position = 0;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    grabber.draw(0,0);
    img.draw(grabber.getWidth(), 0);

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
