#include "ofApp.h"


int main() {
    ofSetupOpenGL(800, 800, OF_WINDOW);
    return ofRunApp(std::make_shared<ofApp>());
}
