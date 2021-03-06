// http://funvision.blogspot.com/2015/12/basic-opencv-mat-tutorial-part-1.html

#include "stdafx.h"
#include <Windows.h>
#include "opencv2\highgui.hpp"
#include "opencv2\imgproc.hpp"
#include "opencv2\video\background_segm.hpp"
#include "opencv2\video\tracking.hpp"

using namespace cv;
using namespace std;

int main(int argc, const char** argv)
{
	//  Load the image from file
	Mat LoadedImage;

	LoadedImage = imread("IMAG0003.JPG", IMREAD_COLOR);
	resize(LoadedImage, LoadedImage, Size(LoadedImage.cols * 512 / LoadedImage.rows, 512));

	// Vizualization
	namedWindow("Step 4 image resize better", WINDOW_AUTOSIZE);
	imshow("Step 4 image resize better", LoadedImage);
	waitKey(1000);

	// Save
	imwrite("IMAG0003_Resized.JPG", LoadedImage);

}