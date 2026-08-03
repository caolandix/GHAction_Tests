# GHAction_Tests
Used for testing GitHub Actions with C++ and CMake

Notes on what I found in developing a CI for a simple QT/OpenCV project:
- Windows is a special snowflake when it compared to Linux. Where Linux version for QT was 6.11, Windows needed the path version explicitly defined to be 6.11.2
- Windows needed to be told where to find OpenCV
- Windows needed OpenCV_DIR to be explicitly defined on the cmake run line because setting it up under
  name: Install Windows Dependencies and OpenCV Paths wasn't enough. :p
- Windows needed aqtsource's github repo to be explicitly defined
