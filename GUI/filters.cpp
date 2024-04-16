#include<iostream>
using namespace std;

#include "filters.h"

#include<string>

#include <QImage>
filters::filters() {
    flag=1;
}
void filters::greyscale(QImage& img) {

    for (int i = 0; i < img.width(); ++i) {
        for (int j = 0; j < img.height(); ++j) {
            // Get the RGB values of the current pixel
            QRgb pixel = img.pixel(i, j);
            int r = qRed(pixel);
            int g = qGreen(pixel);
            int b = qBlue(pixel);

            // Calculate the average of the RGB values for the current pixel
            int avg = (r + g + b) / 3;

            // Set each color channel (R, G, B) to the average value to achieve greyscale
            img.setPixel(i, j, qRgb(avg, avg, avg));
        }
    }
}
void filters::Black_and_White(QImage& image) {
    // Iterate over each pixel in the image
    for (int i = 0; i < image.width(); ++i) {
        for (int j = 0; j < image.height(); ++j) {
            // Get the RGB color of the current pixel
            QRgb pixel = image.pixel(i, j);

            // Extract the individual RGB components
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Calculate the average of the RGB values for the current pixel
            int avg = (red + green + blue) / 3;

            // Set each color channel (R, G, B) to either 0 (black) or 255 (white) based on the average value
            if (avg < 128)
                image.setPixel(i, j, qRgb(0, 0, 0)); // Set the pixel to black
            else
                image.setPixel(i, j, qRgb(255, 255, 255)); // Set the pixel to white
        }
    }
}

void filters::invert(QImage& image) {
    // Iterate over each pixel in the image
    for (int i = 0; i < image.width(); ++i) {
        for (int j = 0; j < image.height(); ++j) {
            // Get the RGB color of the current pixel
            QRgb pixel = image.pixel(i, j);

            // Extract the individual RGB components
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Invert each color channel by subtracting its value from 255
            red = 255 - red;
            green = 255 - green;
            blue = 255 - blue;

            // Set the inverted RGB values back to the pixel
            image.setPixel(i, j, qRgb(red, green, blue));
        }
    }
}
void filters::lighten_and_darken(QImage& image) {

    // Lighten the image by 50%
    for (int i = 0; i < image.width(); i++) {
        for (int j = 0; j < image.height(); j++) {
            // Get the RGB color of the current pixel
            QRgb pixel = image.pixel(i, j);

            // Extract the individual RGB components
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);
            if(flag){
            // Lighten each color channel by multiplying by 1.5 (50%)
            red = qMin(int(red * 1.5), 255);
            green = qMin(int(green * 1.5), 255);
            blue = qMin(int(blue * 1.5), 255);
            }
            else{
                red = max(int(red * 0.5), 0);
                green = max(int(green * 0.5), 0);
                blue = max(int(blue * 0.5), 0);
            }
            // Set the new RGB values back to the pixel
            image.setPixel(i, j, qRgb(red, green, blue));
        }
    }

    flag=!flag;
}
void filters:: Detect_Image_Edges(QImage& image) {
    // Convert the image to grayscale
    for (int i = 0; i < image.width(); ++i) {
        for (int j = 0; j < image.height(); ++j) {
            // Get the RGB color of the current pixel
            QRgb pixel = image.pixel(i, j);

            // Extract the individual RGB components
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Calculate the average of the RGB values for the current pixel
            int avg = (red + green + blue) / 3;

            // Set each color channel (R, G, B) to the average value to achieve grayscale
            image.setPixel(i, j, qRgb(avg, avg, avg));
        }
    }

    // Apply edge detection
    QImage newImage(image.width(), image.height(), QImage::Format_RGB888);

    int threshold = 50; // Adjust threshold as needed

    for (int i = 1; i < image.width() - 1; i++) {
        for (int j = 1; j < image.height() - 1; j++) {
            int current = qRed(image.pixel(i, j)); // Grayscale value of the current pixel

            // Calculate differences with neighboring pixels
            int top = qRed(image.pixel(i + 1, j)) - current;
            int bottom = qRed(image.pixel(i - 1, j)) - current;
            int right = qRed(image.pixel(i, j + 1)) - current;
            int left = qRed(image.pixel(i, j - 1)) - current;
            int top_right = qRed(image.pixel(i + 1, j + 1)) - current;
            int bottom_left = qRed(image.pixel(i - 1, j - 1)) - current;
            int top_left = qRed(image.pixel(i + 1, j - 1)) - current;
            int bottom_right = qRed(image.pixel(i - 1, j + 1)) - current;

            // Check if any difference is above threshold
            if (top > threshold || bottom > threshold || right > threshold || left > threshold ||
                top_right > threshold || bottom_left > threshold || top_left > threshold || bottom_right > threshold) {
                newImage.setPixel(i, j, qRgb(0, 0, 0)); // Set pixel to black (edge)
            } else {
                newImage.setPixel(i, j, qRgb(255, 255, 255)); // Set pixel to white (background)
            }
        }
    }

    image = newImage; // Update the input image with the edge-detected image
}
void filters::blur(QImage& s) {
    QImage tmp_image = s;
    int sum_r,sum_g,sum_b, pixels_num;
    for (int i = 0; i < s.width(); i++) {
        for (int j = 0; j < s.height(); j++) {

                sum_r=0,sum_g=0,sum_b=0, pixels_num = 1;

                // Top left (4 units away)
                if (i > 3 && j > 3) {
                    QRgb pixel = tmp_image.pixel(i - 4, j - 4);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Top (4 units away)
                if (i > 3) {
                    QRgb pixel = tmp_image.pixel(i - 4, j);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Top right (4 units away)
                if (i > 3 && j < s.height() - 4) {
                    QRgb pixel = tmp_image.pixel(i - 4, j + 4);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Left (4 units away)
                if (j > 3) {
                    QRgb pixel = tmp_image.pixel(i, j - 4);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Right (4 units away)
                if (j < s.height() - 4) {
                    QRgb pixel = tmp_image.pixel(i, j + 4);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Bottom left (4 units away)
                if (i < s.width() - 4 &&( j > 3)) {
                    QRgb pixel = tmp_image.pixel(i + 4, j - 4);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Bottom (4 units away)
                if (i < s.width() - 4) {
                    QRgb pixel = tmp_image.pixel(i + 4, j);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Bottom right (4 units away)
                if (i < s.width() - 4 && j < s.height() - 4) {
                    QRgb pixel = tmp_image.pixel(i + 4, j + 4);
                    sum_r += qRed(pixel);
                    sum_g += qGreen(pixel);
                    sum_b += qBlue(pixel);
                    pixels_num++;
                }

                // Calculate average and assign to the pixel in the original image
                s.setPixel(i, j, qRgb(sum_r / pixels_num, sum_g / pixels_num, sum_b / pixels_num));

        }
    }
}
void filters::wano(QImage& s) {
    // Iterate over each pixel in the image
    for (int i = 0; i < s.width(); ++i) {
        for (int j = 0; j < s.height(); ++j) {
            QRgb pixel = s.pixel(i, j);
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Apply the land of Wano filter transformation to each color channel
            red = static_cast<int>(red * 0.825 + 0.175 * 255.0 * (0 == 0 || 0 == 1));
            green = static_cast<int>(green * 0.825 + 0.175 * 255.0 * (1 == 0 || 1 == 1));
            blue = static_cast<int>(blue * 0.825 + 0.175 * 255.0 * (2 == 0 || 2 == 1));

            // Clamp values to [0, 255]
            red = (red < 0) ? 0 : ((red > 255) ? 255 : red);
            green = (green < 0) ? 0 : ((green > 255) ? 255 : green);
            blue = (blue < 0) ? 0 : ((blue > 255) ? 255 : blue);

            // Set the transformed pixel values back to the image
            s.setPixel(i, j, qRgb(red, green, blue));
        }
    }

}

void filters::old_tv(QImage& image) {
    // Load the noise image
    QImage noiseImage("noise.jpg");

    // Create an output image with the same dimensions as the original image
    QImage outputImage(image.width(), image.height(), QImage::Format_RGB888);

    // Resize the noise image to match the dimensions of the original image
    noiseImage = noiseImage.scaled(image.width(), image.height(), Qt::KeepAspectRatio);

    // Iterate over each pixel in the original image
    for (int i = 0; i < image.width(); ++i) {
        for (int j = 0; j < image.height(); ++j) {
            QRgb originalPixel = image.pixel(i, j);
            QRgb noisePixel = noiseImage.pixel(i, j);

            // Decompose original pixel into RGB components
            int red = qRed(originalPixel);
            int green = qGreen(originalPixel);
            int blue = qBlue(originalPixel);

            // Decompose noise pixel into RGB components
            int noiseRed = qRed(noisePixel);
            int noiseGreen = qGreen(noisePixel);
            int noiseBlue = qBlue(noisePixel);

            // Apply the noise filter by combining original image and noise image
            red = static_cast<int>(0.9 * red + 0.1 * noiseRed);
            green = static_cast<int>(0.9 * green + 0.1 * noiseGreen);
            blue = static_cast<int>(0.9 * blue + 0.1 * noiseBlue);

            // Clamp values to [0, 255]
            red = (red < 0) ? 0 : ((red > 255) ? 255 : red);
            green = (green < 0) ? 0 : ((green > 255) ? 255 : green);
            blue = (blue < 0) ? 0 : ((blue > 255) ? 255 : blue);

            // Set the transformed pixel values to the output image
            outputImage.setPixel(i, j, qRgb(red, green, blue));
        }
    }

    // Update the original image with the filtered output
    image = outputImage;

}
void filters ::purple(QImage& s) {
    // Iterate over each pixel in the image
    for (int i = 0; i < s.width(); ++i) {
        for (int j = 0; j < s.height(); ++j) {
            QRgb pixel = s.pixel(i, j);
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Decrease the green channel intensity by 25%
            green = static_cast<int>(green * 0.75);

            // Increase the intensity of each channel by 20%, clamping to 255
            red = static_cast<int>(min(red * 1.2, 255.0));
            green = static_cast<int>(min(green * 1.2, 255.0));
            blue = static_cast<int>(min(blue * 1.2, 255.0));

            // Set the transformed pixel values back to the image
            s.setPixel(i, j, qRgb(red, green, blue));
        }
    }
}
void filters ::infrared(QImage& s) {
    // Iterate over each pixel in the image
    for (int i = 0; i < s.width(); ++i) {
        for (int j = 0; j < s.height(); ++j) {
            QRgb pixel = s.pixel(i, j);
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Reduce the intensity of the red channel by 90%
            red = static_cast<int>(red * 0.1);

            // Invert each color channel by subtracting its value from 255
            red = static_cast<int>(255 - red);
            green = static_cast<int>(255 - green);
            blue = static_cast<int>(255 - blue);

            // Set the transformed pixel values back to the image
            s.setPixel(i, j, qRgb(red, green, blue));
        }
    }
}

