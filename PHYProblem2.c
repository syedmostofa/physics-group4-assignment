/******************************************************************************

Physics Group Assignment: Group #4 

*******************************************************************************/
//Problem 2 


#include <stdio.h>
#include <math.h>

int main() {
    //65 degrees = 1.134 radians
    
    int m;
    double d, lambda, theta; //variables declared
    
    //From diffraction grating equation dsin(theta) = m*lambda,
    //we will calculate d first:
    
    d = (3 * 530) / sin(1.134); //in nanometer
    
    //Now calculating new angular deviation for calculated d, second-order maxima
    //for red light (wavelength: 700nm)
    
    m = 2;
    lambda = 700.0;
    
    theta = asin(m * lambda / d);
    printf("Angle of deviation for red light (in degrees): %f", ((180*theta)/3.14));

    return 0;
}
