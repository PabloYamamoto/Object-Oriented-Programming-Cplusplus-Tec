
/*

            REFERENCIAS CIRCULARES

    La clase A incluye a la clase B y viceversa

    #pragma once se pone pegada a la clase


    Para corregir es necesario
        Utilizar declaración anticipada - Solo funciona con apuntadores
        Cambiar la posición de los Includes 

        PONER LOS INCLUDES DE LAS DEMAS CLASES EN LOS CPPs, no en los HEADERS

        
    


                VECTORES


       Memoria continua, pueden crecer de manera dinámica
       Fáciles de usar

 
        función find: 

                find(v.begin(), v.end(), i)  - En caso de que sea en un for








                RELACIONES ENTRE CLASES 

        Agregación : La clase A forma parte de la clase B. La creación y destrucción de la clase B es independiente de A.
        Asosiación : La clase A usa un miembro de la clase B. En esta relación la clase A no está compuesta por la clase B, sólo utiliza un elemento B.
        Composición : A está compuesta por B. La responsabilidad de crear y destruir B recae en A. La clase B no puede existir fuera de A
        Herencia : Es una relación del tipo "es un". Hay varios niveles


        Modificadores de acceos
                Ahora agregamos un modificador de acceso PORTECTED
                protected si se hereda

                Los miembros PRIVATE no se heredan - los miembros PUBLIC si se heredan

                A la herencia también se le pueden aplicar modificadores de acceso. 


                LOS CONSTRUCTORES NO SE HEREDAN




*/

