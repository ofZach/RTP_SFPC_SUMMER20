#include "ofApp.h"


void ofApp::dilate( ofImage & imgSrc, ofImage & imgDest){
    
    // assumptions!
    // img1 / img2 same w/h
    // both grayscale / binary images
    
    for (int i = 0; i < imgSrc.getWidth(); i++){
        for (int j = 0; j < imgSrc.getHeight(); j++){
            
            // neighbors
            // edges
            
            int i_m_1 = ofClamp(i-1, 0, imgSrc.getWidth()-1);
            int i_p_1 = ofClamp(i+1, 0, imgSrc.getWidth()-1);
            int j_m_1 = ofClamp(j-1, 0, imgSrc.getHeight()-1);
            int j_p_1 = ofClamp(j+1, 0, imgSrc.getHeight()-1);
            
            // neighbor values
            
            ofColor n_ = imgSrc.getColor(i,j_p_1);
            ofColor ne = imgSrc.getColor(i_p_1,j_p_1);
            ofColor e_ = imgSrc.getColor(i_p_1,j);
            ofColor se = imgSrc.getColor(i_p_1,j_m_1);
            ofColor s_ = imgSrc.getColor(i,j_m_1);
            ofColor sw = imgSrc.getColor(i_m_1,j_m_1);
            ofColor w_ = imgSrc.getColor(i_m_1,j);
            ofColor nw = imgSrc.getColor(i_m_1,j_p_1);
            
            if (  n_.getBrightness() > 127 ||
                  ne.getBrightness() > 127 ||
                e_.getBrightness() > 127 ||
                se.getBrightness() > 127 ||
                s_.getBrightness() > 127 ||
                sw.getBrightness() > 127 ||
                w_.getBrightness() > 127 ||
                nw.getBrightness() > 127 ){
                imgDest.setColor(i,j, ofColor(255));
            } else {
                imgDest.setColor(i,j, ofColor(0));
            }
            
            
            
        }
    }
    
    imgDest.update();
    
    
}


//--------------------------------------------------------------
void ofApp::setup(){

    lillian.load("lillian.png");
    lillian.setImageType(OF_IMAGE_GRAYSCALE);
    
    lillian2.allocate(lillian.getWidth(),
                      lillian.getHeight(),
                      OF_IMAGE_GRAYSCALE);
    
    lillian3.allocate(lillian.getWidth(),
                      lillian.getHeight(),
                      OF_IMAGE_GRAYSCALE);
    
    
    for (int i = 0; i < lillian.getWidth(); i++){
        for (int j = 0; j < lillian.getHeight(); j++){
            ofColor c = lillian.getColor(i, j);
            if (c.getBrightness() > 127){
                lillian2.setColor(i,j, ofColor(255));
            } else {
                lillian2.setColor(i,j, ofColor(0));
            }
        }
    }
    lillian2.update();
    
    dilate(lillian2, lillian3);
    
}

//--------------------------------------------------------------
void ofApp::update(){

     dilate(lillian3, lillian2);
     dilate(lillian2, lillian3);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofScale(0.7,0.7);
    
    lillian.draw(0,0);
    //lillian2.draw(lillian.getWidth(), 0);
    lillian3.draw(0, lillian.getHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    for (int i = 0; i < lillian.getWidth(); i++){
        for (int j = 0; j < lillian.getHeight(); j++){
            ofColor c = lillian.getColor(i, j);
            if (c.getBrightness() > 127){
                lillian2.setColor(i,j, ofColor(255));
            } else {
                lillian2.setColor(i,j, ofColor(0));
            }
        }
    }
    lillian2.update();
    dilate(lillian2, lillian3);
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
