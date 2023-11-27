#include "MovieBST.h"
#include "MovieOrder.h"
#include "Movies.h"
#define RELEASE 1
#define RATE 2

using namespace std;

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(1)
*/
template <class Movies>
BST<Movies>::BST() : root(0) {}

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(1)
*/
template <class Movies>
bool BST<Movies>::empty() const {
  if (root == NULL) {
    return true;
  }
  return false;
}

/*
Complejidad:
  - Mejor caso: O(log n)
  - Peor caso: O(n)
*/
template <class Movies>
void BST<Movies>::add(Movies val, int addBy) {
  if (empty()) {
    TreeNode<Movies> *nuevo_nodo = new TreeNode<Movies>(val);
    if (nuevo_nodo == NULL) {
      cout << "OutOfMemory";
    }
    root = nuevo_nodo;
  } else {

    if(addBy == RELEASE){
      root->add(val,2);
    }else{
      root->add(val,1);
    }
  }
}

/*
Complejidad:
  - Mejor caso: O(log n)
  - Peor caso: O(n)
*/
template <class Movies>
vector<Movies> BST<Movies>::find(int val, int searchBy) const {
  vector<Movies> movies;
  Movies movie;

  if (empty()) {
    movie.nombre = "";
    movies.push_back(movie);
    return movies;
  }
  
  return root->find(val, searchBy);
}

/*
Complejidad:
  - Mejor caso: O(log n)
  - Peor caso: O(n)
*/
template <class Movies>
void BST<Movies>::remove(const string& movieName) {
  if (!empty()) {
    root->remove(movieName);
  }
}