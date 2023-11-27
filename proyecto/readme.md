# MovieMania 
  Este proyecto se enfoca en la gestión y organización de datos de películas mediante estructuras de datos como árboles binarios de búsqueda y algoritmos de ordenamiento. Utiliza clases como `Movies` para representar películas y proporciona capacidades de ordenamiento por año de lanzamiento o calificación, a través de la clase `MovieOrder`. Los árboles binarios de búsqueda, implementados en la clase `TreeNode` y utilizados en el BST, permiten agregar,quitar y buscar películas con eficiencia. El programa principal (`main.cpp`) lee datos de películas desde un archivo CSV, ofrece una interfaz interactiva para consultar, ordenar, buscar y gestionar películas, brindando a los usuarios un medio eficaz de administrar su colección de películas favoritas.


## Descripción del avance 1
Este avance contiene:

  - Una estructura inicial para la gestión de películas
  - Lectura de archivos CSV. Lee datos de un archivo CSV que contiene información sobre películas, como nombre, año de lanzamiento y calificación
  - Una interfaz de usuario de línea de comandos que permite al usuario realizar varias acciones
  - Análisis de complejidad
  - Algoritmos de ordenamiento de selección


## Descripción del avance 2
Este avance 2 contiene:

  - Selección de una estructura de datos de árbol binario de búsqueda
  - Implementación de estructuras de datos de árbol binario de búsqueda (BST) para almacenar, gestionar y consultar información de las estructuras con películas de manera eficiente
  - Actualización de la interfaz de usuario de línea de comandos para incluir nuevas opciones
  - Lectura y carga de datos al BST (Binary search tree)
  - Funcionalidad para buscar películas por año de lanzamiento y calificación
  - Reemplazo del algoritmo de ordenamiento de selection por el algoritmo de ordenamiento por merge sort para mejorar la eficiencia
  - Correccion de análisis de complejidad para el algoritmo de merge sort
  - Análisis de complejidad de las estructura de datos y cada usos en el programa
  - Mecanismos de consulta de información de las estructuras


### Cambios sobre el primer avance
  1. Reemplazo del algoritmo de ordenamiento: Este cambio se realizó debido a que el algoritmo seleccionado en el avance anterior era "selection sort", el cual no era el más eficiente ni óptimo para la implementación de mi proyecto. Se decidió cambiar de "selection sort" al algoritmo de ordenamiento "merge sort" con el fin de mejorar la eficiencia, ya que se adapta mejor a las necesidades de mi proyecto en términos de la cantidad de datos.

  2. Corrección del análisis de complejidad: Esto se hizo debido al cambio en el algoritmo de ordenamiento y a la adición de una estructura de datos BST, lo que conlleva a un cambio correspondiente en su complejidad.

  3. Cambios en la interfaz del programa principal (`main.cpp`): Esto fue necesario debido a la incorporación de nuevas funcionalidades de búsqueda en mi código. Esto generó la necesidad de incluir estas nuevas funcionalidades en la interfaz para que el usuario pueda seleccionarlas.

  4. Implementación del nuevo avance: Este cambio implicó agregar las nuevas características requeridas en esta entrega al código existente (estructura de datos BST, lectura y carga de datos en el BST, etc.)


## Descripción del avance 3
Este avance 3 contiene:

  -  Mecanismo de escritura de archivos. Guarda y elimina los datos directamente en el archivo CSV (nombre, año de lanzamiento y calificación).
  -  Actualización de la interfaz de usuario de línea de comandos que permite al usuario realizar varias acciones y presenta una interfaz más amigable
  -  Análisis de complejidad de cada componente y la final del programa
  -  Se han añadido y modificado funciones que posibilitan la modificación directa del archivo para agregar o eliminar películas, específicamente a través de la función `writeToFile`.
  -  Corrección de análisis de complejidad de las estructuras de datos


### Cambios sobre el segundo avance
  1. Correción del análisis de complejidad: Esto se realizó debido a que en el avance anterior no se llevó a cabo adecuadamente el análisis en el árbol de búsqueda binaria (BST).
 
  2. Cambios en la interfaz del programa principal (main): Este cambio se llevó a cabo con el objetivo de hacer que la interfaz de línea de comandos sea más amigable para el usuario. Además, fue necesario para implementar las nuevas funcionalidades de agregar y eliminar películas en el archivo CSV `DataMovies.csv`.
  
  3. Implementación del nuevo avance: Este cambio involucró la adición y eliminación directa de películas en el archivo CSV `DataMovies.csv`. Además, se llevó a cabo un análisis detallado de cada una de las funciones con el fin de determinar la complejidad final del programa.
  
  4. Creación y cambio de varias funciones: Se realizaron distintos cambios a varias funciones con el fin de que se pudiera agregar y retirar películas del archivo CSV.


## Instrucciones para compilar el avance de proyecto
Haga clic en el botón "Run" para compilar y ejecutar el avance.

O también, puede ejecutar el siguiente comando en la terminal:
`g++ main.cpp -o segundo_avance` 

*Además, recuerde siempre tener en el mismo directorio el archivo*
**DataMovies.csv**


## Instrucciones para ejecutar el avance de proyecto
Haga clic en el botón "Run" para compilar y ejecutar el avance.

O también, puede ejecutar el siguiente comando en la terminal:
`./segundo_avance` 

*Además, recuerda siempre tener en el mismo directorio el archivo* **DataMovies.csv**


## Descripción de las entradas del avance de proyecto
Este proyecto requiere principalmente de la entrada de un archivo CSV que contiene información sobre películas; como el nombre de la película, año de lanzamiento y calificación proporcionada por la crítica. A continuación, describiré las entradas del proyecto:

**Archivo CSV de Datos de Películas:**

  - *Formato:* El archivo de entrada debe estar en formato CSV (Comma-Separated Values) donde los campos de datos están separados por comas, y cada fila representa una película con sus atributos

  - *Ejemplo:*

    ```
    Nombre de la Película, Año de Lanzamiento, Calificación
    Titanic, 1997, 90
    Avatar, 2009, 85
    Inception, 2010, 92
    The Shawshank Redemption, 1994, 95
    ...
    ```

  - *Descripción:* Cada fila del archivo debe contener tres campos:

    - El nombre de la película (cadena de caracteres)
    - El año de lanzamiento de la película (entero)
    - La calificación de la película (entero)

  Este archivo CSV de datos de películas es la entrada principal del proyecto y se utiliza para cargar la colección inicial de películas en el programa.

**Número de opción elegida del menú:**

  - *Formato:* Este número tiene que ser uno de los mostrados en el menú y tendrá que ser de tipo entero

  - *Ejemplo:*

    ```
    -> 3
    ...
    ```

  - *Descripción:* Este número te permitirá acceder a las diferentes funciones que tiene el programa:
    - Consulta de listado original
    - Consulta de listado actual
    - Lanzamientos de pelicula ordenadas
    - Calificación de peliculas ordenadas
    - Agrega peliculas
    - Quita peliculas
    - Busca película por año de lanzamiento
    - Busca película por calificación
    - Salir del programa

**Año de lanzamiento que quieres encontrar:**

  - *Formato:* Este tiene que ser un numero de tipo entero y no debera tener espacios al ingresar dicho número

  - *Ejemplo:*

    ```
    ------------------------------
    Ingresa el año de lanzamiento: 2020 
    ...
    ```

  - *Descripción:* Dependiendo del año que ingreses te dira si existe o no una pelicula con dicho lanzamiento. En el caso que sí, entonces te despliega la o las peliculas que cumplan con este requisito.

**Calificación por la crítica que quieres encontrar:**

  - *Formato:* Este tiene que ser un numero de tipo entero y no debera tener espacios al ingresar dicho número. Esta calificación debera ser de 100/100

  - *Ejemplo:*

    ```
    ------------------------------
    Ingresa la calificación: 55
    ...
    ```

  - *Descripción:* Dependiendo de la calificación que ingreses te dira si existe o no una pelicula con dicha  calificación. En el caso que sí, entonces te despliega la o las peliculas que cumplan con este requisito.

**Datos para agregar una película:**

  - *Formato:* El formato de los datos será dependiendo de lo que te esté pidiendo el programa. Se desplazarán instrucciones. El nombre tendrá que ser un string, el año de lanzamiento y la calificación tendrán que ser enteros.

  - *Ejemplo:*

    ```
    Ingresa los datos de la nueva película que quieres agregar
    Nombre: Titanic
    Año de lanzamiento: 1998
    Recuerda que la calificación es 100/100
    Calificación: 85
    ...
    ```

  - *Descripción:* Se te pedirá esta información para luego incorporarla en el listado de películas. Una vez que el cambio se guarde, podrás solicitar otra función con la nueva película. Puedes agregar la cantidad de películas que desees, y estos cambios quedarán registrados, de manera que incluso después de finalizar la ejecución, quedarán reflejados en el archivo.

**Nombre de película que desea quitar:**

  - *Formato:* El formato del nombre tendrá que ser un string. Se deberá tener cuidado con las mayúsculas, espacios o comas. Se desplazarán instrucciones.

  - *Ejemplo:*

    ```
    ¡Ten cuidado con mayusculas, comas y espacios!
    Ingresa el nombre de la pelicula que deseas eliminar: Shazam
    ...
    ```

  - *Descripción:* El sistema solicitará el nombre para luego informarte si el nombre que ingresaste se encontró o no en el listado. En caso afirmativo, recibirás un mensaje indicando que se eliminó correctamente, y si no, también te lo indicará. Después de guardar el cambio, podrás solicitar otras funciones sin la película que se eliminó previamente. Este cambio es permanente y quedará registrado en el archivo CSV incluso después de finalizar la ejecución.

## Descripción de las salidas del avance de proyecto
El programa proporciona varios resultados durante su ejecución, dependiendo de las acciones que el usuario elija realizar a través del menú de opciones. Las descripciones de los resultados clave que se obtienen al ejecutar el programa son:

**Visualización de la lista original y actual de películas:**

  - Cuando el usuario elige una de las dos opciones, ya sea "Consulta de listado original" o "Consulta de listado actual" desde el menú, el programa presenta en pantalla la lista original (tal como se encuentra en el archivo CSV antes de cualquier modificación futura en esa ejecución) y la actual (donde se reflejan los cambios en tiempo real realizados en el CSV). El listado original se actualiza con cada ejecución, en caso de que se haya implementado algún cambio y terminado la ejecución.

**Ordenamiento por fecha de lanzamiento o calificación:**

  - El usuario puede optar por ordenar la lista de películas por fecha de lanzamiento o por calificación seleccionando las opciones correspondientes en el menú. Cuando se elige la opción de ordenamiento, el programa realiza la ejecución y muestra la lista de películas ordenada en orden descendente (de mayor a menor). Los resultados incluyen el nombre de la película y el año de lanzamiento o calificación de cada película en el nuevo orden. Esto dependerá cuál de las dos opciones se escogió

**Adición de nuevas películas:**

  - Si el usuario selecciona la opción "Agrega películas" en el menú, el programa permite al usuario ingresar los datos de una nueva película, incluyendo el nombre, el año de lanzamiento y la calificación. Después, el programa muestra la lista actualizada de películas, incluida la película recién agregada. Además, se actualizará los cambios en el archivo CSV directamente.

**Eliminar películas del listado:**

  - Si el usuario selecciona la opción "Quita peliculas" en el menú, el programa permite al usuario ingresar el nombre de la película que desea  eliminar. Después, el programa indica con un mensaje si se encontró la película o no. Además, se actualizará los cambios en el archivo CSV permanentemente.

**Busqueda por fecha de lanzamiento o calificación:**
  
  - Elusuario puede optar por buscar la lista de películas por fecha de lanzamiento o por calificación,  seleccionando las opciones correspondientes en el menú. Cuando se elige la opción de busqueda e ingresa el año o calificación que desea encontrar, el programa realiza la ejecución y muestra la lista de películas que cumplen el requisito establecido por el usuario. Los resultados incluyen el nombre de la película, el año de lanzamiento y calificación de cada película. En el caso de que no exista una pelicula que cumpla con el año o calificacion, entonces mostrara "No hay peliculas con esa calificación/fecha."

**Salida del Programa:**

  - Cuando el usuario elige la opción "Salir" en el menú, el programa muestra un mensaje de despedida y se cierra

Estos son los resultados clave que el usuario puede obtener al ejecutar el programa. Los resultados son presentados en la pantalla de la terminal para que el usuario los pueda ver y gestionar.


## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
  - En este proyecto, se implementó el algoritmo de Merge Sort para ordenar una extensa lista de películas según su año de lanzamiento o calificación. Este algoritmo presenta una complejidad de O(n log(n)) en el peor de los escenarios, lo que lo convierte en una elección sólida y eficiente en términos de rendimiento para nuestra aplicación, a pesar de que pueda ser un poco más desafiante de implementar.
En particular, se analizaron otros algoritmos, como el Selection Sort con una complejidad de O(n^2) cuya eficacia es baja. Se cambio de Selection Sort a Merge Sort debido a un analisis de complejidad, estabilidad y el contexto de este proyecto.

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
  - En este proyecto, se implementó la estructura de datos **Binary Search Tree** para buscar de una extensa lista de películas según su año de lanzamiento o calificación. Esta estructura de datos proporciona una forma organizada de almacenar y recuperar datos. Al analizar cada individualmente cada una de sus funciones se concluyo que este ofrece una complejidad de O(n) en el peor de los casos. La elección de un BST y su aplicación en las funciones `add` y `find` demuestran un análisis completo de las necesidades del programa en términos de almacenamiento y recuperación de datos.

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
  - Con el propósito de determinar con precisión el nivel de complejidad final del programa, se analizaron detalladamente todas las funciones. Se añadieron comentarios en la parte de arriba de las funciones, indicando el mejor y peor de los casos. Como resultado de este análisis, se llegó a la conclusión de que la complejidad final del programa es de O(n log n). Esta conclusión se fundamenta en la implementación del algoritmo de Merge Sort y otras funciones principales, las cuales exhiben una complejidad de O(n log(n)) en los peores escenarios. Esta complejidad se destaca como la más significativa en el programa.

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
  - Se seleccionó el algoritmo Merge Sort para ordenar todas las películas. Esta elección se basa en su eficiencia y capacidad para manejar grandes conjuntos de datos y su rendimiento constante. El algoritmo "Merge Sort" es apropiado, ya que ofrece una complejidad de tiempo de O(n log n). En el archivo `MovieOrder.cpp`, en las líneas 7 a 47, se puede observar que he aplicado el algoritmo "Merge Sort" de manera correcta y funcional en las funciones `mergeSort`, `mergeArray`, `sortRelease`, y `sortRate`.

  - Es importante destacar que se escogio el "Merge Sort" ya que  es significativamente más eficiente y tiene una complejidad menor en comparación con otros algoritmos. Por ejemplo, aunque QuickSort puede ser ligeramente más rápido en algunos casos, Merge Sort ofrece un rendimiento consistentemente bueno incluso en situaciones desfavorables. 

  - Otro ejemplo es Selection Sort, que, junto con Bubble Sort, tiene una complejidad cuadrática O(n^2), lo que hace que su tiempo de ejecución sea mucho mayor que el de Merge Sort. Shell Sort, por su parte, tiene una complejidad de O(n(log(n))^2) en el caso promedio y en el peor caso, y O(n log(n)) en el mejor caso. A pesar de su aparente adecuación, Merge Sort nos proporciona mayor estabilidad en el rendimiento, adaptabilidad y facilidad de implementación, lo que refuerza la elección de Merge Sort para la implementación de nuestro proyecto. En el avance anterior, habíamos implementado Selection Sort, pero al analizar más detenidamente los algoritmos de ordenamiento, concluimos que Merge Sort es una opción superior en términos de eficiencia y estabilidad.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
  - En el proceso de selección de la estructura de datos más adecuada para este proyecto, se realizó un análisis que involucró la comparación de diversas estructuras de datos vistas en clase. Este análisis permitió identificar las fortalezas y debilidades de cada estructura y su pertinencia en relación con los requisitos específicos de este proyecto.

  - Las "Linked Lists" y "Double Linked lists", a pesar de su versatilidad, no se consideraron la mejor opción debido a la necesidad de llevar a cabo búsquedas eficientes según el año de lanzamiento o la calificación de las películas. El nivel de eficiencia en búsquedas que tienen en comparación con los BST es bajo. Estas estructuras, en el peor de los casos, requerirían un escaneo secuencial de los datos, lo que resultaría en un aumento significativo de la complejidad temporal de las operaciones de búsqueda.

  - Ademas, algunas estructuras de datos (queue, stack) que vimos no se adecuaban al objetivo de búsqueda efectiva. Se llegó a la conclusión de que un Binary Search Tree (BST) era la elección más adecuada. El BST ofrece una complejidad de O(n) en el peor caso para las operaciones de búsqueda, lo que lo convierte en una opción considerablemente más eficiente en comparación con las estructuras mencionadas anteriormente. Además, su capacidad intrínseca para mantener los datos ordenados se alinea perfectamente con la implementación de funciones de búsqueda según el año de lanzamiento o la calificación de las películas. El BST se ha aplicado con éxito en las funciones `add` y `find` en los archivos `MovieTNode.cpp`, `MovieTNode.h`, `MovieBST.cpp`, `MovieBST.h`, lo que demuestra un análisis detallado y una elección fundamentada de la estructura de datos más adecuada para abordar los desafíos de almacenamiento y búsqueda de películas en este proyecto.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
  - Se puede visualizar con mayor claridad como se implementaron los mecanismos para la consulta de información en las estructuras en el archivo `MovieBST.cpp`, `Movie.cpp`, etc. Por ejemplos, para consultar información en la estructura de datos BST, se debe realizar un recorrido en el árbol. En el caso de este proyecto, el recorrido se realiza de manera recursiva. Para buscar una película por año de lanzamiento o calificación, se llama a la función `find` en la raíz del árbol correspondiente. Luego, la función realiza un recorrido del árbol siguiendo las ramas apropiadas según el valor buscado. Esto permite localizar y recuperar la información deseada de manera eficiente. Además, en la función `printTree`, también se realiza un recorrido del árbol, pero en este caso, se imprime la información de todas las películas en orden. Esto facilita la consulta y visualización de todas las películas almacenadas en el árbol de manera organizada, de acuerdo al criterio proporcionado por el usuario, ya sea por año o calificación. 

  - Asi como, tambien se usaron mecanismos como `printVector`, `mergeSort`, `mergeArray`, etc. que permitian consultar la informacion de ya sea el vector ordenado o el original, para poder despues gestionarlo y modificarlo dependiendo de lo que se requiriera. Esta implementación permite consultar información en estructuras de datos BST de diversas maneras, lo que permite a los usuarios buscar y visualizar datos de películas de manera precisa y eficiente.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
  - La lectura de archivos se implementó inicialmente en la función principal (`main.cpp`) del programa, donde se abre el archivo `DataMovies.csv` y se procesan los datos del archivo CSV, almacenándolos en vectores de objetos tipo `Movies` que pueden ser usados por las distintas funcionalidades y estructuras como el algoritmo de ordenamiento Merge Sort y otras. La lectura del archivo y la carga de datos en el ordenamiento nos permite organizar los vectores por año o lanzamiento. 

  - Asi como el arbol, ya que dentro de el bucle "while" de la interfaz del main, se crean objetos de la clase "BST," que invocan la función `add` a través de un bucle "for". La función `add` en la estructura de datos Binary Search Tree (BST) tiene la finalidad de agregar elementos al árbol, en este caso, los datos del archivo CSV. El proceso comienza con una verificación de si el árbol está vacío. En caso afirmativo, se crea un nuevo nodo con el valor proporcionado y se establece como raíz del árbol. Si el árbol ya contiene elementos, la función determina si se debe agregar el nuevo valor al árbol, considerando si se ordena según el año de lanzamiento o la calificación de las películas, según el valor de `addBy`. Luego, la función llama a la función `add` en el nodo raíz correspondiente para insertar el nuevo valor de manera ordenada en el árbol. Este enfoque asegura que los datos se almacenan de manera eficiente, permitiendo búsquedas rápidas y ordenadas. De esta manera, se crean dos árboles separados: uno para los años de lanzamiento y otro para las calificaciones de las películas.

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
  - La escritura de archivos para guardar los datos de las estructuras se implementó en distintas partes del código, específicamente en `Movies.cpp` y `main.cpp`. Esta implementación puede observarse principalmente en la creación de la nueva función `writeToFile`, la cual se encuentra entre las líneas 42 y 56 en el archivo `Movies.cpp`. El propósito de esta función es escribir los datos de las películas directamente en el archivo CSV `DataMovies.csv`. En esta función, en primer lugar, se declara y abre un objeto de tipo ofstream llamado "file" asociado al archivo. Luego, se verifica si el archivo se ha abierto correctamente. Si no se puede abrir, se muestra un mensaje de error en la consola y la función retorna sin realizar ninguna operación adicional.

  - Si el archivo se abre correctamente, la función utiliza un bucle 'for' para recorrer el vector de películas y escribe cada conjunto de datos (nombre, año de lanzamiento y calificación) en una línea del archivo CSV, separando los valores por comas y añadiendo un salto de línea al final de cada registro. Finalmente, se cierra el archivo, almacenando la información de las películas en el archivo para su uso posterior. Además, esta función se llama desde otras funciones, como por ejemplo, en 'deleteMovie' y 'addMovie'. Estas eliminan o agregan películas al listado, llamando a 'writeToFile' para actualizar directamente el archivo CSV en tiempo real (en estas línea se le llama: 34 y 70 en 'Movie.cpp').