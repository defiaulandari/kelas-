#include <stdio.h> 

int main(){
    
    int matriks1[3][3];
    int matriks2[3][3];
    int hasil [3][3];
    int pilih;
    
        printf("=== Operasi Matriks ===\n");
        printf("1. Penjumlahan \n");
        printf("2. Pengurangan \n");
        printf("3. Perkalian \n");
        printf("pilih salah satu (1/2/3) : ");
        scanf("%d", &pilih);
        
        if(pilih== 1){
            printf("masukan elemen pada matriks pertama : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    scanf("%d", &matriks1[i][j]);
                }
            }
            printf("masukan elemen pada matriks kedua : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    scanf("%d", &matriks2[i][j]);
                }
            }
            printf ("Matriks Pertama : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriks1[i][j]);
                }
                printf("\n");
              
            }
            printf ("Matriks kedua : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriks2[i][j]);
                }
                printf("\n");
            }    
            for(int i = 0; i <= 2; i++){
                for(int j = 0; j <= 2; j++){
                     hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                }
            }
            printf("Hasil Penjumlahan : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", hasil[i][j]);
                    
                }
                printf("\n");
                
            }   
        }else if(pilih == 2){
             printf("masukan elemen pada matriks pertama : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    scanf("%d", &matriks1[i][j]);
                }
            }
            printf("masukan elemen pada matriks kedua : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    scanf("%d", &matriks2[i][j]);
                }
            }
            printf ("Matriks Pertama : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriks1[i][j]);
                }
                printf("\n");
              
            }
            printf ("Matriks kedua : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriks2[i][j]);
                }
                printf("\n");
            }    
            for(int i = 0; i <= 2; i++){
                for(int j = 0; j <= 2; j++){
                     hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                }
            }
            printf("Hasil Penjumlahan : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", hasil[i][j]);
                    
                }
                printf("\n");
                
            }
            
        }else if(pilih == 3) {
             printf("masukan elemen pada matriks pertama : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    scanf("%d", &matriks1[i][j]);
                }
            }
            printf("masukan elemen pada matriks kedua : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    scanf("%d", &matriks2[i][j]);
                }
            }
            printf ("Matriks Pertama : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriks1[i][j]);
                }
                printf("\n");
              
            }
            printf ("Matriks kedua : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", matriks2[i][j]);
                }
                printf("\n");
            }    
            for(int i = 0; i <= 2; i++){
                for(int j = 0; j <= 2; j++){
                     hasil[i][j] = matriks1[i][j] * matriks2[i][j];
                }
            }
            printf("Hasil Penjumlahan : \n");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    printf("%d ", hasil[i][j]);
                    
                }
                printf("\n");
                
            }
             
        }else{
           printf("invalid"); 
        } 
       return 0; 
}
