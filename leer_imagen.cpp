#include<iostream>
#include "CImg\CImg.h"
using namespace std;
using namespace cimg_library;

int main() {
  CImg<unsigned char> image("lena.jpg");
  CImgDisplay main_disp(image,"Imagen");
  getchar();
  return 0;
}
