#ifndef MOVIEBST_H
#define MOVIEBST_H

#include "Movies.h"
#include "MovieOrder.h"
#include "MovieTNode.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

template <class Movies>
class BST {
private:
  TreeNode<Movies> *root;

public:
  BST();
  bool empty() const;
  void add(Movies, int);
  vector<Movies> find(int,int) const;
  void remove(const string&);
};

#endif