#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

class Movies {
public:
  string nombre;
  int release;
  int rate;
  void addMovie(vector<Movies> &);
  void printVector(vector<Movies>);
  void writeToFile(const vector<Movies> &);
  bool deleteMovie(vector<Movies> &, const string&);

};

#endif