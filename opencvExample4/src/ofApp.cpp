#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    player.load("input.mov");
    player.play();
    player.setLoopState(OF_LOOP_NORMAL);
}

//--------------------------------------------------------------
void ofApp::update(){

    player.update();
    if (player.isFrameNew()){
        
        finder.findContours(player);
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    player.draw(0,0);
    
    ofTranslate(player.getWidth(),0);
    ofScale(2,2);
    
    if (finder.size() > 0){
        ofPolyline line = finder.getPolyline(0);
        line = line.getResampledBySpacing(0.5);
        line = line.getSmoothed(3);
        line.draw();
        
        lines.push_back(line);
        if (lines.size() > 100){
            lines.erase(lines.begin());
        }
        for (int i = 0; i < lines.size(); i++){
            lines[i].draw();
        }
        
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
