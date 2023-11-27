#include "Movies.h"
#include <algorithm>

using namespace std;

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(n)
*/
void Movies::addMovie(vector<Movies> &movies) {
  Movies newMovie;
  string datoEntrada;

  cin.clear();
  cin.ignore(1);

  cout << "Ingresa los datos de la nueva película que quieres agregar" << endl;
  cout << "Nombre: ";
  getline(cin, newMovie.nombre);

  cout << "Año de lanzamiento: ";
  cin >> datoEntrada;
  newMovie.release = stoi(datoEntrada);

  cout << "Recuerda que la calificación es 100/100" << endl;
  cout << "Calificación: ";
  cin >> datoEntrada;
  cout << "--------------" << endl;
  newMovie.rate = stoi(datoEntrada);

  movies.push_back(newMovie);

  writeToFile(movies);
}

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(n)
*/
void Movies::writeToFile(const 
 vector<Movies> &movies) {
  ofstream file;
  file.open("DataMovies.csv");
  if (!file.is_open()) {
    cerr << "No se pudo abrir el archivo" << endl;
    return;
  }

  for (const auto &movie : movies) {
    file << movie.nombre << "," << movie.release << "," << movie.rate << "\n";
  }

  file.close();
}

/*
Complejidad:
  - Mejor caso: O(n)
  - Peor caso: O(n)
*/
bool Movies::deleteMovie(vector<Movies> &movies, const string& movieName) {
  auto it = remove_if(movies.begin(), movies.end(), [&movieName](const Movies& movie) {
    return movie.nombre == movieName;
  });
 
  if (it != movies.end()) {
    movies.erase(it, movies.end());
    writeToFile(movies);  // Actualizar el archivo después de eliminar la película
    return true;          // Película encontrada y eliminada
  } else {
    return false;         // Película no encontrada
  }
}

/*
Complejidad:
  - Mejor caso: O(n)
  - Peor caso: O(n)
*/
void Movies::printVector(vector<Movies> movies) {
  for (const auto &movie : movies) {
    cout << movie.nombre << " ";
    cout << movie.release << " ";
    cout << movie.rate << endl;
  }
}

