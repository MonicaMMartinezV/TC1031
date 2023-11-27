#ifndef MOVIETNODE_H
#define MOVIETNODE_H

#include "Movies.h"
#include "MovieOrder.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

template <class Movies>
class TreeNode {
private:
  vector<Movies> value;
  TreeNode *left, *right;
  TreeNode<Movies> *succesor();

public:
  TreeNode(Movies);
  TreeNode(Movies, TreeNode<Movies> *, TreeNode<Movies> *);
  void add(Movies, int);
  vector<Movies> find(int, int);
  void remove(const string&);
};


#endif

