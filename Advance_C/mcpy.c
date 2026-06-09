#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[9][9];
    int temp[9][9]; // Example test puzzles
    // Prevoius Method of loading test puzzles
    for(int i = 0; i < 9; i++)
    {
    for(int j = 0; j < 9; j++)
    {
        arr[i][j] = temp[i][j];
    }
    }

    // New Method of loading test puzzles using memcpy
    memcpy(arr, temp, sizeof(arr));
    return 0;
}