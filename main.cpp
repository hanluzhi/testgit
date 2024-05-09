#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(){
    cout<<"hello"<<endl;
    Mat image = imread("./1.png");
    // 检查图像是否成功读取
    if(image.empty()) {
        std::cerr << "Error: Couldn't open or find the image." << std::endl;
        return -1;
    }
    cout<<image;
    // // 创建一个窗口
    // namedWindow("Display Image", WINDOW_NORMAL);

    // // 显示图像
    // imshow("Display Image", image);
    return 0;
}