#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//Prints a arrow of specified height and length of shaft equal to twice the height
void print_arrow(int left, int size, int sizeTwo)
{
  for(int row = 0; row <= size; row++) {
    int minCol = left + size - row;
    int maxCol = left + size + row;

    for (int col = 0; col < minCol; col++) putchar(' ');
    for (           ; col <= maxCol; col++) putchar('*');
    putchar('\n')
  }

  int middle = size;
  int endCol = size + 1;

  for (int row = 0; row < sizeTwo; row++) {

    for(int col = 0; col < middle-1; col++) putchar(' ');
    for(           ; col <= endCol; col++) putchar('*');
    putchar('\n');

  }

}
