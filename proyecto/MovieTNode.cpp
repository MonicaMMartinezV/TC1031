#include "MovieTNode.h"
#include "MovieOrder.h"
#include "Movies.h"
#define RELEASE 1  
#define RATE 2 

using namespace std;

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(n)
*/
template <class Movies>
TreeNode<Movies>::TreeNode(Movies val) {
  value.push_back(val);
  left = NULL;
  right = NULL;
}

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(n)
*/
template <class Movies>
TreeNode<Movies>::TreeNode(Movies val, TreeNode<Movies> *le, TreeNode<Movies> *ri) {
  value.push_back(val);
  left = le;
  right = ri;
}

/*
Complejidad:
  - Mejor caso: O(log n)
  - Peor caso: O(n)
*/
template <class Movies>
void TreeNode<Movies>::add(Movies val, int addBy) {
  if (addBy == RELEASE) {
    if (val.release < value.front().release) {
      if (left == NULL) {
        TreeNode<Movies> *nuevo_nodo = new TreeNode<Movies>(val);
        if (nuevo_nodo == NULL) {
          cout << "OutOfMemory";
        }
        left = nuevo_nodo;
      } else {
        left->add(val, addBy);
      }
    } else if(val.release > value.front().release) {
      if (right == NULL) {
        TreeNode<Movies> *nuevo_nodo = new TreeNode<Movies>(val);
        if (nuevo_nodo == NULL) {
          cout << "OutOfMemory";
        }
        right = nuevo_nodo;
      } else {
        right->add(val, addBy);
      }
    } else {
      value.push_back(val);
    }
  } else if (addBy == RATE) {
    if (val.rate < value.front().rate) {
      if (left == NULL) {
        TreeNode<Movies> *nuevo_nodo = new TreeNode<Movies>(val);
        if (nuevo_nodo == NULL) {
          cout << "OutOfMemory";
        }
        left = nuevo_nodo;
      } else {
        left->add(val, addBy);
      }
    } else if (val.rate > value.front().rate) {
      if (right == NULL) {
        TreeNode<Movies> *nuevo_nodo = new TreeNode<Movies>(val);
        if (nuevo_nodo == NULL) {
          cout << "OutOfMemory";
        }
        right = nuevo_nodo;
      } else {
        right->add(val, addBy);
      }
    } else {
      value.push_back(val);
    }
  }
}

/*
Complejidad:
  - Mejor caso: O(log n)
  - Peor caso: O(n)
*/
template <class Movies>
vector<Movies> TreeNode<Movies>::find(int val, int searchBy) {
  vector<Movies> movies;
  Movies movie;
  movie.nombre = "";
  movies.push_back(movie);

  if (searchBy == RELEASE) {
    // Búsqueda por año de lanzamiento
    if (val < value.front().release) {
      // El valor buscado es menor que el valor actual (por año)
      if (left != nullptr) {
        return left->find(val, RELEASE);
      } else {
        return movies; // No se encontró el valor
      }
    } else if (val > value.front().release) {
      // El valor buscado es mayor que el valor actual (por año)
      if (right != nullptr) {
        return right->find(val, RELEASE);
      } else {
        return movies; // No se encontró el valor
      }
    } else {
      // El valor buscado es igual al valor actual (por año)
      return value; // Se encontró el valor
    }
  } else if (searchBy == RATE) {
    // Búsqueda por calificación
    if (val < value.front().rate) {
    // El valor buscado es menor que el valor actual (por calificación)
      if (left != nullptr) {
        return left->find(val, RATE);
      } else {
        return movies; // No se encontró el valor
      }
    } else if (val > value.front().rate) {
      // El valor buscado es mayor que el valor actual (por calificación)
      if (right != nullptr) {
        return right->find(val, RATE);
      } else {
        return movies; // No se encontró el valor
      }
    } else {
      // El valor buscado es igual al valor actual (por calificación)
      return value; // Se encontró el valor
    }
  } else {
    // Valor de búsqueda no válido
    return movies;
  }
}

/*
Complejidad:
  - Mejor caso: O(log n)
  - Peor caso: O(n)
*/
template <class Movies>
void TreeNode<Movies>::remove(const string& movieName) {
  if (movieName == value.front().nombre) {
    // Se encontró la película a eliminar en este nodo
    value.clear();
  } else if (movieName < value.front().nombre && left != NULL) {
    // Buscar en el subárbol izquierdo
    left->remove(movieName);
  } else if (movieName > value.front().nombre && right != NULL) {
    // Buscar en el subárbol derecho
    right->remove(movieName);
  }
}