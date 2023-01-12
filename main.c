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

int main(int argc, char *argv[]) {

    int seed = argv[1] ? atoi(argv[1]) : 0; // get the seed from command line

    int row = 3, col = 3;
    float **mat = returnMatrix(row, col);
    // fillMatrix(mat, row, col, seed);

    mat[0][0] = 3;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;


    float *vec = returnVector(4);
    // fillVector(vec, row, seed);
    float *vec2 = returnVector(4);

    // fill with 1,2,3
    vec[0] = 4;
    vec[1] = 3;
    vec[2] = 2;
    vec[3] = 9;
    // fill with 1,2,3
    vec2[0] = 5;
    vec2[1] = 5;
    vec2[2] = 8;
    vec2[3] = 3;

    // printMatrix(mat2, row2, col2);
    printMatrix(mat, row, col);
    printf("------------------------\n");

    float det = determinant(mat, row);
    printf("Determinant: %f\n", det);


    float **transpose = matrixTranspose(mat, row, col);
    printf("Transpose: \n");
    printMatrix(transpose, col, row);

    float **mat3 = matrixMultiplication(mat, transpose, row, col, col, row);
    printf("Matrix multiplication: \n");
    printMatrix(mat3, row, col);

    float *rMeans = rowMeans(mat, row, col);
    float *cMeans = columnMeans(mat, row, col);
    printf("Row means: \n");
    printVector(rMeans, row);
    printf("Column means: \n");
    printVector(cMeans, col);

    float cov = covariance(vec, vec2, row);
    printf("Covariance: %f\n", cov);

    float corr = correlation(vec, vec2, row);
    printf("Correlation: %f\n", corr);

    float **covMat = covarianceMatrix(mat, row, col);
    printf("Covariance matrix: \n");
    printMatrix(covMat, row, row);

    freeMatrix(mat, row);
    free(vec);
    free(vec2);

    return 0;
}