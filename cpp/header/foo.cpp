#include "foo.h"
#include <math.h>
complex mysqrt(complex x){
    complex y;
    float abs,theta;
    abs=sqrt(x.re*x.re + x.im*x.im);
    theta=atan2f(x.im,x.re);
    y.re=abs*cos(theta);
    y.im=abs*sin(theta);
    return y;
}
