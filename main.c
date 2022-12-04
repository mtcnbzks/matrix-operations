/**
 * @file main.c
 * @description Testing my functions
 * @assignment Project 1
 * @date 28.11.2022
 * @author Mehmetcan Bozkuş - mehmetcan.bozkus@stu.fsm.edu.tr
 */

#include <stdio.h> // for printf
#include <stdlib.h> // for malloc and free

#include "matrixLib.h" // for function prototypes

int main() {
    int row = 3, col = 3;
    float **mat = returnMatrix(row, col);

    mat[0][0] = 3;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 2;

    mat[2][0] = 2;
    mat[2][1] = 4;
    mat[2][2] = 3;

    float *vec = returnVector(row);
    float *vec2 = returnVector(col);

    // fill with 1,2,3
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;

    // fill with 1,2,3
    vec2[0] = 1;
    vec2[1] = 2;
    vec2[2] = 3;

    // printMatrix(mat2, row2, col2);
    printMatrix(mat, row, col);
    printf("------------------------\n");



//    float *rMeans = rowMeans(mat, row, col);
//    float *cMeans = columnMeans(mat, row, col);
//    printf("Row means: \n");
//    printVector(rMeans, row);
//    printf("Column means: \n");
//    printVector(cMeans, col);

//    float **transpose = matrixTranspose(mat, row, col);
//    printf("Transpose: \n");
//    printMatrix(transpose, col, row);

//    float corr = correlation(vec, vec2, row);
//    printf("Correlation: %f\n", corr);

//    float **covMat = covarianceMatrix(mat, row, col);
//    printf("Covariance matrix: \n");
//    printMatrix(covMat, col, col);

//    float cov = covariance(vec, vec2, row);
//    printf("Covariance: %f\n", cov);


//    float **mat3 = matrixMultiplication(mat, transpose, row, col, col, row);
//    printf("Matrix multiplication: \n");
//    printMatrix(mat3, row, col);

    float det = determinant(mat, row);
    printf("Determinant: %f\n", det);

    freeMatrix(mat, row);
    free(vec);
    free(vec2);

    return 0;
}