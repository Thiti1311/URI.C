#include <stdio.h>
#include <math.h>
 
int main() {
 
    int D, VF, VG;
    double tempoFugitivo, tempoGuarda,distanciaFugitivo, distanciaGuarda;
    
    while(scanf("%d %d %d", &D, &VF ,&VG) != EOF)
    {
        
        distanciaFugitivo = 12.0;
        distanciaGuarda = sqrt((distanciaFugitivo*distanciaFugitivo)+(D*D));


        tempoFugitivo = (distanciaFugitivo / VF);
        tempoGuarda   = (distanciaGuarda / VG);

        //printf("tempoFugitivo:  %.20f\n" , tempoFugitivo);
        //printf("tempoGuarda:  %.20f\n" , tempoGuarda);

        if (tempoGuarda <= tempoFugitivo){
            printf("S\n");
        } else {
            printf("N\n");
        }
  
    }
    return 0;
}