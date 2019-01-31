#include "ofApp.h" // Includes the ofApp.h file.

//--------------------------------------------------------------
void ofApp::setup(){
	myImg.load("twitterlogo.png"); // Load the twitter logo image from the bin data folder.

	myFont.load("Twitterfont.ttf", 80); // Load the font style from the bin data folder.
}




void ofApp::update() {

}


//--------------------------------------------------------------
void ofApp::draw(){
	myImg.draw(5, 5, 250, 180); // Scale the image.
	myFont.drawString("Twitter app", 260, 100); // The words Twitter app are diplayed. Numbers equal the size and positioning.
	myFont.drawString("Latest tweets", 260, 500); // The words latest tweets are displayed. Move it down near the white rectangle.
	
	
	ofDrawRectangle(10, 500, 1100, 400); // Draw rectangle shape. Position and width and height values. The rectangle resembles where the tweets would be displayed. 
	
	
}




