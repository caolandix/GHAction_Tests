#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    // 1. Initialize the application framework
    QApplication app(argc, argv); 

    // 2. Create a visual push button widget
    QPushButton helloButton("Hello world!"); 
    
    // 3. Resize and show the widget on screen
    helloButton.resize(200, 100);
    helloButton.show(); 

    // 4. Enter the main event loop and wait for user interaction
    return app.exec(); 
}
