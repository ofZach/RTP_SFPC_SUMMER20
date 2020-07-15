#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

  #ifdef _USE_LIVE_VIDEO
  grabber.listDevices();
  grabber.setDeviceID(0);
  grabber.setup(640, 480);
  #else
  video.setPixelFormat(OF_PIXELS_RGB);
  video.load("input.mov");
  video.setLoopState(OF_LOOP_NORMAL);
  video.play();
  #endif
}

//--------------------------------------------------------------
void ofApp::update(){

  #ifdef _USE_LIVE_VIDEO
  grabber.update();
  #else
  video.update();
  #endif
}

//--------------------------------------------------------------
void ofApp::draw(){

  #ifdef _USE_LIVE_VIDEO
  grabber.draw(grabber.getWidth(),0);
  
  for (int y = 0; y < grabber.getHeight(); y+=5){
    ofPolyline line;
    for (int x = 0; x < grabber.getWidth(); x++){
      float brightness = grabber.getPixels().getColor(x,y).getBrightness();
      line.addVertex(x,y + ofMap(brightness, 0, 255, 0, mouseX));
    }
    line = line.getSmoothed(10);
    line.draw();
  }
  #else
  video.draw(video.getWidth(),0);

  for (int y = 0; y < video.getHeight(); y+=5){
    ofPolyline line;
    for (int x = 0; x < video.getWidth(); x++){
      float brightness = video.getPixels().getColor(x,y).getBrightness();
      line.addVertex(x,y + ofMap(brightness, 0, 255, 0, mouseX));
    }
    line = line.getSmoothed(10);
    line.draw();
  }
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
