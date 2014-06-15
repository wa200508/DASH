#include <opencv\highgui.h>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	//A change has occurred
	Mat im = imread("C:/opencv/samples/cpp/lena.jpg");
	if (im.empty())
	{
		cout << "Cannot load image!" << endl;
		return -1;
	}
	cout << "Can Load Image!" << endl;
	imshow("Image", im);
	waitKey(0);
	cout << "Changed on comp 1" << endl;
}