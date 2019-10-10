typedef struct{

    int codigo;
    char nombre[31];
    char apellido[31];
    int codigoDeEquipo;
    char sexo[2];
    int isEmpty;

} eJugadores;

/** \brief Inicializa la estructura de "eJugadores" con sus campos "isEmpty" en "1"
 * \param listaDeJugadores es la estructura a inicializar
 * \param lenght es el tamañano de la previamente mencionada
 * \return Retorna (-1) si no logro inicializarla o (0) en caso de exito
 */
int inicJugadores(eJugadores* listaDeJugadores, int lenght);

/** \brief Agrega en una estructura de tipo "eJugadores" existente, los valores recibidos como parámetros, en la primer posición libre que encuentre la funcion en dicha estructura.
 * \param Jugadores es la estructura a utilizar
 * \param lenght es el tamañano de la previamente mencionada
 * \param codigo int
 * \param nombre[] char
 * \param apellido[] char
 * \param codigoDeEquipo int
 * \param sexo char
 * \return retorna (-1) si no tuvo exito o ( un entero >= 0 ) si tuvo exito
 */
int aniadirJugadores(eJugadores* jugadores, int lenght, int codigo, char nombre[], char apellido[],int codigoDeEquipo,char sexo);

/** \brief Imprime en pantalla cada elemento de la estructura
 * \param Jugadores es la estructura a imprimir
 * \param lenght es el tamañano de la previamente mencionada
 * \return Retorna (-1) si no tuvo exito o (0) si tuvo exito
 */
int printJugadores(eJugadores* jugadores, int length);

/** \brief Ordena los elementos de la estructura de tipo "eJugadores" de manera ascendente si el parametro "order" es 1, y descendente si es 0
 * \param Jugadores es la estructura a ordenar
 * \param lenght es el tamañano de la previamente mencionada
 * \param Order [1] indica ordenamiento ascendente - [0] indica ordenamiento decendente
 * \return Retorna (-1) si no tuvo exito o (0) si tuvo exito
 */
int ordenarJugadores(eJugadores* jugadores, int lenght, int order);

/** \brief muestra en pantalla un menu de opciones y al mismo tiempo, pregunta que opcion desea ejecutar de dicho menu
 * \return retorna una opcion ingresada por el usuario correspondiente a las que se muestran en pantalla,
 */
int menuPrincipal ();

/** \brief carga los campos de una estructura
 * \param employee es la estructura a utilizar para calcular y listar
 * \param lenght es el tamañano de la previamente mencionada
 * \return retorna (-1) si no tuvo exito o (0) si logro cargarlos correctamente
 */
int inicEstruct(eJugadores* jugador, int tam);
