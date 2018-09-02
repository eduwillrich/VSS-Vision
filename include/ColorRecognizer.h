#ifndef VSS_VISION_COLORRECOGNIZER_H
#define VSS_VISION_COLORRECOGNIZER_H

#include <Domain/ColorSpace.h>
#include <Helpers/FrameHelper.h>
#include <Interfaces/IColorRecognizer.h>
#include <opencv2/imgproc/imgproc.hpp>


class ColorRecognizer : public IColorRecognizer{
public:
    void processImage(cv::Mat) override;
    void setColorRange(ColorRange) override;
    void deleteOutsidePoint(cv::RotatedRect) override;

    ColorType getColor() override;
    ColorRange getColorRange() override;
    std::vector<cv::Point2f> getCenters() override;
    std::vector<cv::Rect> getRectangles() override;
    std::vector<cv::RotatedRect> getRotatedRectangles() override;
    cv::Mat getBinaryImage() override;

    void binarizesImage();
    void recognizesRectangles();
    void calculateCenter();

private:
    cv::Mat frame;
    cv::Mat binaryFrame;
    ColorRange colorRange;
    std::vector<cv::Point2f> centers;
    std::vector<cv::Rect> rectangles;
    std::vector<cv::RotatedRect> rotatedRectangles;
};
#endif // VSS_VISION_COLORRECOGNIZER_H
