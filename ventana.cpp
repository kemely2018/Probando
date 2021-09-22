#include<iostream>
#include "CImg\CImg.h"
using namespace std;
using namespace cimg_library;
int main(){
    unsigned int w = 300;
    unsigned int h = 400;
    const unsigned char bluegreen[]={0,170,255};
    
    CImg<unsigned char > bg(w,h,1,3,255); 

    bg.draw_circle(w/2,h/2,100,bluegreen);

    CImgDisplay dsp(w,h,"Hola",0);
    dsp.display(bg);
    getchar();
    return 0;
}
