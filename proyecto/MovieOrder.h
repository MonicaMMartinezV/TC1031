#ifndef MOVIEORDER_H
#define MOVIEORDER_H

#include "Movies.h"
#include <iostream>
#include <vector>

using namespace std;

class MovieOrder {
public:
  void swap(vector<Movies> &, int, int);
  void mergeArray(vector<Movies> &, int, int, int, int);
  void mergeSort(vector<Movies> &, int, int, int);
  void sortRelease(vector<Movies> &);
  void sortRate(vector<Movies> &);
};

#endif