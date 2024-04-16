#include<iostream>
using namespace std;
#ifndef FILTERS_H
#define FILTERS_H
#include <QImage>
#include<string>

using namespace std;
class filters
{
private:
     bool flag;
public:
    filters();
    void greyscale(QImage& image);
    void Black_and_White(QImage& image);
    void invert(QImage& image);
    void lighten_and_darken(QImage& image);
    void Detect_Image_Edges(QImage& image);
    void blur(QImage& image);
    void wano(QImage& s);
    void old_tv(QImage& image);
    void purple(QImage& s);
    void infrared(QImage& s);
};

#endif // FILTERS_H
