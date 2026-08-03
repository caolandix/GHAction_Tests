#include <QApplication>
#include <QPushButton>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[]) {

    /*
    // 1. Initialize the application framework
    QApplication app(argc, argv); 

    // 2. Create a visual push button widget
    QPushButton helloButton("Hello world!"); 
    
    // 3. Resize and show the widget on screen
    helloButton.resize(200, 100);
    helloButton.show(); 

    // 4. Enter the main event loop and wait for user interaction
    return app.exec(); 
*/
    // Read the image file (Replace with your actual image path)
    // IMREAD_COLOR loads the image in BGR format
    cv::Mat image = cv::imread("sample.jpg", cv::IMREAD_COLOR);

    // Check if the image was successfully loaded
    if (image.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }

    // Create a window called "Basic OpenCV App"
    cv::namedWindow("Basic OpenCV App", cv::WINDOW_AUTOSIZE);

    // Display the image inside the created window
    cv::imshow("Basic OpenCV App", image);

    // Wait for any keystroke in the window before closing (0 means infinite wait)
    cv::waitKey(0);

    return 0;    
}
