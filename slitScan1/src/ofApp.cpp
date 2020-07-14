#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

  #ifdef _USE_LIVE_VIDEO
  grabber.setDeviceID(0);
  grabber.setup(640, 480);
  img.allocate(grabber.getWidth(), grabber.getHeight(), OF_IMAGE_COLOR);
  #else
  video.setPixelFormat(OF_PIXELS_RGB);
  video.load("input.mov");
  video.setLoopState(OF_LOOP_NORMAL);
  video.play();
  img.allocate(video.getWidth(), video.getHeight(), OF_IMAGE_COLOR);
  #endif
  
}

//--------------------------------------------------------------
void ofApp::update(){

  #ifdef _USE_LIVE_VIDEO
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
  #else
  video.update();

  for (int z = 0; z < 1; z++){
    for (int i = 0; i < video.getHeight(); i++){
      ofColor color = video.getPixels().getColor(position, i);
      img.setColor(position, i, color);
    }
    img.update();
   
    position++;
    if (position >= video.getWidth()){
      position = 0;
    }
  }
  #endif
}

//--------------------------------------------------------------
void ofApp::draw(){
  #ifdef _USE_LIVE_VIDEO
  grabber.draw(0,0);
  img.draw(grabber.getWidth()+10, 0);
  #else
  video.draw(0,0);
  img.draw(video.getWidth()+10, 0);
  #endif
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
