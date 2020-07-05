#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.listDevices();
    //grabber.setDeviceID(1);
    grabber.setup(640,480);
    
    threshold.allocate(grabber.getWidth(), grabber.getHeight(), OF_IMAGE_COLOR);
    
    for (int i = 0; i < 100; i++){
        float x = ofMap(i, 0, 100, 0, grabber.getWidth());
        float y = 0;
        ofPoint pt;
        pt.set(x,y);
        pts.push_back(pt);
    }
    
    bFlip = false;
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    if (grabber.isFrameNew()){
        
        for (int i = 0; i < grabber.getWidth(); i++){
            for (int j = 0; j < grabber.getHeight(); j++){
                ofColor color = grabber.getPixels().getColor(i, j);
                
                int newj = j;
                if (bFlip == true) newj = grabber.getHeight()-j-1;
                if (color.getBrightness() > mouseX){
                    threshold.setColor(i, newj, ofColor(0));
                } else {
                    threshold.setColor(i, newj, ofColor(255));
                }
            }
        }
        
    }
    threshold.update();
    
    
    for (int i = 0; i < 100; i++){
        
        ofColor color = threshold.getColor(pts[i].x, pts[i].y);
        
        if (color.getBrightness() < 127){
            pts[i].y += 1;
        } else {
            for (int j = pts[i].y; j >= 0; j--){
                ofColor check = threshold.getColor(pts[i].x, j);
                if (check.getBrightness() < 127){
                    pts[i].y = j;
                    break;
                }
            }
            
        }
        if (pts[i].y >= grabber.getHeight()){
            pts[i].y = 0;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    if (bFlip){
        grabber.draw(0,grabber.getHeight(), grabber.getWidth(), -grabber.getHeight());
    } else {
        grabber.draw(0,0);
        
    }
    threshold.draw(grabber.getWidth(), 0);
    
    ofSetColor(255,0,0);
    for (int i = 0; i < 100; i++){
        ofDrawCircle(pts[i].x, pts[i].y, 3);
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
