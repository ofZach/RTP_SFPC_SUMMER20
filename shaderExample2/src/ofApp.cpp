#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

  #ifdef _USE_LIVE_VIDEO
  grabber.setup(640,480);
  #else
  video.setPixelFormat(OF_PIXELS_RGB);
  video.load("input.mp4");
  video.setLoopState(OF_LOOP_NORMAL);
  video.play();
  #endif    

  shader.load("", "shader.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

  #ifdef _USE_LIVE_VIDEO
  grabber.update();
  #else
  video.update();
  #endif    
  
  if (ofGetFrameNum() % 60) shader.load("", "shader.frag");
}

//--------------------------------------------------------------
void ofApp::draw(){

  ofSetColor(255);
  
  shader.begin();
  shader.setUniform1f("time", ofGetElapsedTimef());
  shader.setUniform2f("mouse", mouseX, mouseY);

  #ifdef _USE_LIVE_VIDEO
  shader.setUniformTexture("img", grabber, 0);
  #else
  shader.setUniformTexture("img", video, 0);
  #endif    
    
  ofDrawRectangle(0,0,ofGetWidth(), ofGetHeight());
  //ofDrawCircle(mouseX,mouseY,100);
  shader.end();
  
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
