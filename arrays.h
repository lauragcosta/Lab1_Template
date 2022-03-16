#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

int sum(int arr[], int arrLength)
{
    int soma = 0;
    for(int i=0; i<arrLength; i++)
    {
        soma += arr[i];
    }
    return soma;
}

double mean(int arr[], int arrLength)
{
    double soma = sum(arr, arrLength);
    return soma/arrLength;
}

double variance(int arr[], int arrLength)
{
    double med = mean(arr, arrLength);
    double sumDif = 0;
    for(int i=0; i<arrLength; i++)
    {
        sumDif += pow(arr[i]-med,2);
    }
    return sumDif/(arrLength-1);
}

double standardDeviation(int arr[], int arrLength)
{
    return sqrt(variance(arr, arrLength));
}
