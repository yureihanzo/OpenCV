#include <opencv2/imgcodecs.hpp> // openCV codexes for images
#include <opencv2/highgui.hpp>  // openCV gui header 
#include <opencv2/imgproc.hpp> // openCV image procccessing
#include <iostream>


using namespace cv; // use this to save time and not have to add cv:: to open CV comands. ex cv::imread or imshow
using namespace std; // use this to save time and not have to add std:: . ex std::string 

// Importing Images
/*
void main() { // C++ can only have one main file active at a time all others must be commented out

	string path = "Resources/test.png"; // img loaction or path
	Mat img = imread(path); // openCV comand to read the img located in the path. Mat is the matrix data type used by openCV for any image type
	imshow("Image", img); // openCV command to output. the image name and pointer(img) in ()
	waitKey(0); // this is used to give a delay for imshow. the number is time in milisec. 0=infinity

}
*/


// Importing Videos
/*
void main() {

	string path = "Resources/test_video.mp4"; // video file location or path
	VideoCapture cap(path); // openCV command to read video file from the path stated
	Mat img;

	while (true) { // to display a video you must fisrt capture and display the video one frame at a time. thus a while loop is used

		cap.read(img); // openCV command to read capture and read the img from the video and store it in the img variable
		
		imshow("Image", img);
		waitKey(20); // numbers are in miliseconds of delay. ex. 1= really fas video, 20= more normal speed video
	}
}
*/

//Importing Webcam

void main() {

	
	VideoCapture cap(0); // ID number of the camera. put camera number into the (). 0 is for when there is only one camera
	Mat img;

	while (true) {

		cap.read(img);

		imshow("Image", img);
		waitKey(1); // cannor be 0 as it would be to slow to capture the webcam. 1 is ideal as more delay or 0 would make the output display to slow
	}
}