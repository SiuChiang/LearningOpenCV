#include <opencv2/opencv.hpp> //include file for every supported opencv function
int main(int argc, char** argv) {
	cv::Mat img = cv::imread(argv[1], -1);
	if (img.empty()) return -1;
	cv::namedWindow("example1", cv::WINDOW_AUTOSIZE);
	cv::imshow("example1", img);
	cv::waitKey(0);
	cv::destroyWindow("example1");
}