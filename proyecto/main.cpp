#include "MovieOrder.h"
#include "Movies.h"
#include "MovieTNode.h"
#include "MovieTNode.cpp"
#include "MovieBST.h"
#include "MovieBST.cpp"
#include <cstring>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>

#define RELEASE 1
#define RATE 2

using namespace std;

/*
Complejidad:
  - Mejor caso: O(1)
  - Peor caso: O(n log n)
*/
int main() {
  // Lee el archivo
  ifstream file;

  file.open("DataMovies.csv");
  if (!file.is_open()) {
    cerr << "No se pudo abrir el archivo" << endl;
    return 1;
  }

  // Accede al archivo, crea vector tipo Movie y guarda en sus respectivos
  // atributos
  vector<Movies> dataMovie;
  vector<Movies> dataMovieOrigin;
  string data;
  while (getline(file, data)) {
    vector<string> row;
    stringstream ss(data);
    string value;
    Movies movie0;
    int rowcnt = 0;

    while (getline(ss, value, ',')) {
      if (rowcnt == 0) {
        movie0.nombre = value;
      } else if (rowcnt == 1) {
        movie0.release = stoi(value);
      } else {
        movie0.rate = stoi(value);
      }
      rowcnt++;
    }
    dataMovie.push_back(movie0);
    dataMovieOrigin.push_back(movie0);
  }

  file.close();
  
  int opcion;
  bool flag1 = true;
  Movies printV;
  cout << "\033[1;36m"; //Cyan
  cout << "╔══════════════════════════════════════════════╗" << endl;
  cout << "║           ¡Bienvenido a MovieMania!          ║" << endl;
  cout << "║          Explora, ordena y disfruta de       ║" << endl;
  cout << "║            tus películas favoritas           ║" << endl;
  cout << "╚══════════════════════════════════════════════╝" << endl;
  cout << "\033[0m"; //Predeterminado
  
  while (flag1) {
    BST<Movies> treeMoviesRl;
    BST<Movies> treeMoviesRt;
    for(auto movie: dataMovie){
      treeMoviesRl.add(movie,2);
      treeMoviesRt.add(movie,1);
    }
    cout << "\033[1;35m"; //Morado
    cout << "-------------------- MENU --------------------" << endl;
    cout << "\033[0m";
    cout << " " << endl;
    cout << "\033[1;34m"; //Azul
    cout << "Selecciona una opcion: " << endl;
    cout << "\033[0m";
    cout << " " << endl;
    cout << "  1. Consulta de listado original" << endl;
    cout << "  2. Consulta de listado actual" << endl;
    cout << "  3. Lanzamientos de pelicula ordenadas" << endl;
    cout << "  4. Calificación de peliculas ordenadas" << endl;	
    cout << "  5. Agrega peliculas" << endl;
    cout << "  6. Quita peliculas" << endl;
    cout << "  7. Busca película por año de lanzamiento" << endl;
    cout << "  8. Busca película por calificación" << endl;
    cout << " " << endl;
    cout << "\033[1;31m";
    cout << "9. Salir" << endl;
    cout << "\033[0m";
    cout << "\033[1;34m";
    cout << "-> ";
    cin >> opcion;
    cout << "\033[1;35m";
    cout << "----------------------------------------------" << endl;
    cout << "\033[0m";

    switch (opcion) {
    case 1: {
      printV.printVector(dataMovieOrigin);
      break;
    }
    
    case 2: {
      printV.printVector(dataMovie);
      break;
    }
      
    case 3: {
      MovieOrder sortRel;
      sortRel.sortRelease(dataMovie);
      printV.printVector(dataMovie);
      break;
    }
      
    case 4: {
      MovieOrder sortRa;
      sortRa.sortRate(dataMovie);
      printV.printVector(dataMovie);
      break;
    }
      
    case 5: {
      printV.addMovie(dataMovie);
      printV.printVector(dataMovie);
      printV.writeToFile(dataMovie);
      break;
    }

    case 6: {
      string movieName;
      cout << "\033[1;31m";
      cout << "¡Ten cuidado con mayusculas, comas y espacios!" << endl;
      cout << "\033[0m";
      cout << "Ingresa el nombre de la pelicula que deseas eliminar: ";
      cin.ignore();
      getline(cin, movieName);

      if (printV.deleteMovie(dataMovie, movieName)) {
        cout << " " << endl;
        cout << "La película '" << movieName << "' se eliminó correctamente." << endl;
        } 
      else {
        cout << "\033[1;31m";
        cout << " " << endl;
        cout << "La película '" << movieName << "' no se encontró en la lista." << endl;
        cout << "\033[0m";
      }
      break;
    }

    case 7: {
      int year;
      cout << "Ingresa el año de lanzamiento: ";
      cin >> year;
      cout << " " << endl;

      vector<Movies> moviesRelease = treeMoviesRl.find(year, RELEASE);

      if(moviesRelease.front().nombre != ""){
        printV.printVector(moviesRelease);
      }else{
        cout << "\033[1;31m";
        cout << "No hay peliculas con esa fecha." << endl;
        cout << "\033[0m";
      }
      break;
    }
      
    case 8: {
      int rate;
      cout << "Ingresa la calificación: ";
      cin >> rate;
      cout << " " << endl;

      vector<Movies> moviesRate = treeMoviesRt.find(rate, RATE);

      if(moviesRate.front().nombre != ""){
        printV.printVector(moviesRate);
      }else{
        cout << "\033[1;31m";
        cout << "No hay peliculas con esa calificación." << endl;
        cout << "\033[0m";
      }

      break;
    }
      
    case 9: {
      cout << "\033[1;36m"; //Cyan
      cout << "╔══════════════════════════════════════════════╗" << endl;
      cout << "║       ¡¡¡ A D I O S vuelve pronto !!!        ║"<< endl;
      cout << "║                   Gracias                    ║" << endl;
      cout << "║                     <3                       ║" << endl;
      cout << "╚══════════════════════════════════════════════╝" << endl;
      cout << "\033[0m"; //Predeterminado
      flag1 = false;
      break;
    }
    default: {
      cout << "\033[1;31m";
      cout << "La opcion elegido no es valida" << endl;
      cout << "\033[0m";
      break;
    }
    }
  }
  cout << "\033[1;35m";
  cout << "----------------------------------------------" << endl;
  cout << "\033[0m";

  return 0;
}
