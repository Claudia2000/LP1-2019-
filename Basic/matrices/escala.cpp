#include "CImg.h"
#include  <iostream>
 
// Use the library namespace to ease the declarations afterward.
using namespace cimg_library;
using namespace std;
 
int main() {
 
  CImg<unsigned char> image("lena400.jpg"),
          gray(image.width(), image.height(), 1, 1, 0),
          grayWeight(image.width(), image.height(), 1, 1, 0),
          imgR(image.width(), image.height(), 1, 3, 0),
          imgG(image.width(), image.height(), 1, 3, 0),
          imgB(image.width(), image.height(), 1, 3, 0);
 
  // para todos los pixeles x, y de la imagen
  cimg_forXY(image,x,y) {
    imgR(x,y,0,0) = image(x,y,0,0),    
    imgG(x,y,0,1) = image(x,y,0,1),    
    imgB(x,y,0,2) = image(x,y,0,2);   
 
    /*
    * cout << image.width() << "x" << image.height() << endl;
    * cout << "(" << x << "," << y << ") ="
    *             << " R:" << (int)image(x,y,0,0)
    *             << " G:" << (int)image(x,y,0,1)
    *             << " B:" << (int)image(x,y,0,2) << endl;
    */
 
    // Separacion de canales
    int R = (int)image(x,y,0,0);
    int G = (int)image(x,y,0,1);
    int B = (int)image(x,y,0,2);
    // Formula 
    int grayValue = (int)(0.33*R + 0.33*G + 0.33*B);
    // A gris
    gray(x,y,0,0) = grayValue;
   
}
 
  CImgDisplay main_disp(image,"Original"),
      draw_dispGr(gray,"Gray");

 
  // wait until main window is closed
  /*
  while (!main_disp.is_closed()){
      main_disp.wait();
  }*/
 
  return 0;
}
