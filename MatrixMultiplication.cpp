#include <iostream>

int main(){
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];
    int character = 0;
    
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &character);
            matrix1[i][j] = character;
        }
    }

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &character);
            matrix2[i][j] = character;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for(int i=0; i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ", matrix3[i][j]);
        }
    }

    return 0;

}