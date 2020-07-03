#include "ofApp.h"

using namespace ofxCv;

//--------------------------------------------------------------
void ofApp::setup() {
  grabber.setup(640, 480);
  tracker.setup();
}

//--------------------------------------------------------------
void ofApp::update() {

  grabber.update();

  if(grabber.isFrameNew()) {
    tracker.update(toCv(grabber));
  }

}

//--------------------------------------------------------------
void ofApp::draw() {

  if(tracker.size() > 0){
    
    ofPolyline leftEyePoly = tracker.getImageFeature(ofxFaceTracker::LEFT_EYE);
    ofPolyline rightEyePoly = tracker.getImageFeature(ofxFaceTracker::RIGHT_EYE);

    leftEye.set(0,0);
    for(int i = 0; i < leftEyePoly.size(); i++){
      leftEye += leftEyePoly[i];
    }
    leftEye /= (float)leftEyePoly.size();

    rightEye.set(0,0);
    for(int i = 0; i < rightEyePoly.size(); i++){
      rightEye += rightEyePoly[i];
    }
    rightEye /= (float)rightEyePoly.size();
  
  }
  

  leftEyeSmoothed = 0.8 * leftEyeSmoothed + 0.2 * leftEye;
  rightEyeSmoothed = 0.8 * rightEyeSmoothed + 0.2 * rightEye;


  grabber.getTexture().setAnchorPoint(leftEyeSmoothed.x,leftEyeSmoothed.y);

  float distance = (leftEyeSmoothed - rightEyeSmoothed).length();
  ofPoint diff = rightEyeSmoothed - leftEyeSmoothed;

  float angle = atan2( diff.y , diff.x );
  float scale = 200.0 / distance;

  ofPushMatrix();
    ofTranslate(ofGetWidth()*0.5,ofGetHeight()*0.5);
    ofScale(scale,scale);
    ofRotateZRad(-angle);
    grabber.draw(0,0);
  ofPopMatrix();

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
