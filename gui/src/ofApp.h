#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw(); // Main functions to use. 

		ofImage myImg; //Declare image object.
		ofTrueTypeFont myFont; // Declare font.
};


