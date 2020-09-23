/*





Durante la ejecución de un programa es posible que el programa falle. Cuandouna falla
se presenta, entonces el programa se detiene porque no sabe cómo retomar el control del programa.
Todos los lenguajes proveen de mecanismos que permiten retomar el control
del programa en caso de que algo falle. Dicho mecanismos son las EXCEPCIONES. 


Las excepciones permiten trasnferir el control del programa a un "otra parte del programa" de manera
que se pueda retomar el control y no se detenga la ejecucción. 

Las excepciones son CLASES para administrar errores y teromar el control del programa

Para realizar el manejo de excepciones C++ provee de 3 instrucciones

    Try
    Catch
    Throw

TRY-CATCH

La instrucción Try permite: 
    Identifcar un bloque de código que podría fallar(lanzar una excepción)
        Ejemplos: 
                Intentar abrir un archivo que : no existe, esta bloqueado, es corrupto
                Abrir una conexión de datos con : un servidor que no responde, un puerto no disponible
        

La instrucción Catch permite:
    Atrapar alguno de los problemas anteriores (o cualquier otra falla) y permitir retomar el control
    Especificar cuál es la excepción que se quiere "atrapar"
    Puede haber tantos CATCH como queramos para cada bloque TRY. 




std::exception      Es el padre de todas las excepciones
sdt::out_of_ranfe   Lanzada por el operador [] o por el método at de un vector
std::length_error   Cuando se trata de crear un string demasiado grande
std::range_error    Cuando tratas de almacenar un valor fuera de rango
std::bad_alloc      Cuando NEW no puede reservar memoria
std::bad_cast       Cuando dynamic_cast falla


La clase base de todas las excepciones es std::exception


*/


