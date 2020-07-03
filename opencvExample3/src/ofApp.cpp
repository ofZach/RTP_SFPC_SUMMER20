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
    if (finder.size() > 0){
        ofPolyline line = finder.getPolyline(0);
        //line = line.getSmoothed(mouseX);
        line.draw();
        
        ofPoint top;
        for (int i = 0; i < line.size(); i++){
            if (i == 0){
                top = line[i];
            } else if (line[i].y < top.y){
                top = line[i];
            }
        }
        
        topSmoothed = 0.85 * topSmoothed + 0.15 * top;
        
        history.addVertex(topSmoothed);
        if (history.size() > 50){
            history.getVertices().erase(history.getVertices().begin());
        }
        history.draw();
        
        ofSetColor(255,0,0);
        ofDrawCircle(topSmoothed, 3);
        ofSetColor(255);
        
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
