#include <stdio.h>
#define RATIO 5.0 / 9.0
#define STEP 20
/* print Fahrenheit-Celsius table
   for fahr = 0, 20,...,300*/
int main() {
    
  int fahr;
  
  for(fahr=300;fahr>=0;fahr=fahr-STEP) {
  
      printf("%3d\t%6.5f\n", fahr, RATIO*(fahr-32));
    
  }
  return 0;
}
