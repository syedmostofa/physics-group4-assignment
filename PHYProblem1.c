/******************************************************************************

Physics Group Assignment: Group #4 

*******************************************************************************/

//Problem 1 

#include <stdio.h>
#include <math.h>

double lambda; //globally declared wavelength variable

//function for calculating wavelenght when bright spot is identified
double maximaLambda(int m, int theta, int d) {
    
    lambda = ((d * sin(theta))/m) * 1000; //to get answer in nanometer
    return lambda;
}

//function for calculating wavelength when dark spot is identified
double minimaLambda(int m, int theta, int d) {
    
    lambda = ((d * sin(theta))/(m + 0.5)) * 1000; //to get answer in nanometer
    return lambda;
}


int main() {
    
    int bright_or_dark; //variable used to ascertain minima or maxima calculation
    
    int m, d; 
    double theta; //locally declared variables used in calculation
    
    printf("Have you seen bright spot? Enter 1 for yes, 2 for no: ");
    scanf("%d", &bright_or_dark);
    
    if (bright_or_dark == 1) { //maxima spotted:
        
        //Take variable inputs for calculation:
        printf("Please enter m value: ");
        scanf("%d", &m);
        
        printf("Enter angle of deviation (in radian): ");
        scanf("%lf", &theta);
        
        printf("Enter distance between slits (in round micrometer value): ");
        scanf("%d", &d);
        
        lambda = maximaLambda(m, theta, d);
    }
    else { //minima spotted
        
        //Take variable inputs for calculation:
        printf("Please enter m value: ");
        scanf("%d", &m);
        
        printf("Enter angle of deviation (in radian): ");
        scanf("%lf", &theta);
        
        printf("Enter distance between slits (in round micrometer value): ");
        scanf("%d", &d);
        
        lambda = minimaLambda(m, theta, d);
    }
    
    printf("Wavelength of light value: %lf\n", lambda);
    
    if (lambda >= 380.0 && lambda < 450.0) {
        
        printf("Light of this wavelength is violet in color!");
    }
    else if (lambda >= 450.0 && lambda < 485.0) {
        
        printf("Light of this wavelength is blue in color!");
    }
    else if (lambda >= 485.0 && lambda < 500.0) {
        
        printf("Light of this wavelength is cyan in color!");
    }
    else if (lambda >= 500.0 && lambda < 565.0) {
        
        printf("Light of this wavelength is green in color!");
    }
    else if(lambda >= 565.0 && lambda < 590.0) {
        
        printf("Light of this wavelength is yellow in color!");
    }
    else if (lambda >= 590.0 && lambda < 625.0) {
        
        printf("Light of this wavelength is orange in color!");
    }
    else if (lambda >= 625.0 && lambda <= 750.0) {
        
        printf("Light of this wavelength is red in color!");
    }
    
    
    return 0;
}
