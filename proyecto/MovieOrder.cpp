#include "MovieOrder.h"
#define RELEASE 1  
#define RATE 2  

using namespace std;

/*
Complejidad:
  - Mejor caso: O(n)
  - Peor caso: O(n log n)
*/
void MovieOrder::mergeArray(vector<Movies> &v, int low, int mid, int high, int sortBy) {
  int pos_1a_parte = low;
  int fin_1a_parte = mid;
  int pos_2da_parte = mid + 1;
  int fin_2da_parte = high;

  vector<Movies> B(high - low + 1);

  for (int i = 0; i < B.size(); i++) {
    if ((sortBy == RELEASE && v[pos_1a_parte].release < v[pos_2da_parte].release && pos_1a_parte <= fin_1a_parte) ||
        (sortBy == RATE && v[pos_1a_parte].rate < v[pos_2da_parte].rate && pos_1a_parte <= fin_1a_parte) ||
        pos_2da_parte > fin_2da_parte) {
      B[i] = v[pos_1a_parte];
      pos_1a_parte++;
    } else {
      B[i] = v[pos_2da_parte];
      pos_2da_parte++;
    }
  }

  for (int i = low; i <= high; i++) {
    v[i] = B[i - low];
  }
}

/*
Complejidad:
  - Mejor caso: O(n log n)
  - Peor caso: O(n log n)
*/
void MovieOrder::mergeSort(vector<Movies> &v, int low, int high, int sortBy) {
  if (low < high) {
    int mid = low + (high - low) / 2;
    mergeSort(v, low, mid, sortBy);
    mergeSort(v, mid + 1, high, sortBy);
    mergeArray(v, low, mid, high, sortBy);
  }
}

/*
Complejidad:
  - Mejor caso: O(n)
  - Peor caso: O(n log n)
*/
void MovieOrder::sortRelease(vector<Movies> &v) {
  mergeSort(v, 0, v.size() - 1, 1);
}

/*
Complejidad:
  - Mejor caso: O(n)
  - Peor caso: O(n log n)
*/
void MovieOrder::sortRate(vector<Movies> &v) {
  mergeSort(v, 0, v.size() - 1, 2);
}
