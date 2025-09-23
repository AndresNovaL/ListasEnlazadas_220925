# ListasEnlazadas_220925
Clase de Estructura de Datos sobre la temática de Listas Enlazadas en programación.

## Descripción
Este repositorio contiene la implementación de dos ejemplos sencillos de listas simplemente enlazadas en lenguaje C:
1. **Ejemplo 1:** Lista de productos de supermercado/alimenticios (`Ejercicio1/ejercicio1_Lista.c`).
2. **Ejemplo 2:** Lista de películas del universo Marvel (`Ejercicio2/ejercicio2_Lista.c`).

El objetivo es aplicar buenas prácticas de documentación y flujo de trabajo con ramas en Git/GitHub, siguiendo la estructura vista en clase.

## Compilación y Ejecución

### Ejemplo 1: Lista de productos supermercado
```bash

# Compilar el archivo
gcc Ejercicio1/ejercicio1_Lista.c -o Ejercicio1/ejercicio1_Lista

# Ejecutar el programa
./Ejercicio1/ejercicio1_Lista

```
### Ejemplo 2: Lisa de películas Marvel
```bash

# Compilar el archivo
gcc Ejercicio2/ejercicio2_Lista.c -o Ejercicio2/ejercicio2_Lista

# Ejecutar el programa
./Ejercicio2/ejercicio2_Lista

```

## Estructura del repositorio
```
.
├── Ejercicio1/          # Carpeta Primer Ejercicio
│   └── ejercicio1_Lista
|   └── ejercicio1_Lista.c # Programa Primer Ejercicio Lista Simplemente Enlazada
├── Ejercicio2/          # Carpeta Segundo Ejercicio
│   └── ejercicio2_Lista
│   └── ejercicio2_Lista.c # Programa Segundo Ejercicio Lista Simplemente Enlazada
├── ejemploClase
├── ejemploClase.c # Programa ejemplo realizado en clase
├── ejemploClase.py # Programa ejercicio realizado en clase.
└── README.md            # Documentación del proyecto
```

---

## Complejidad de operaciones (Lista simplemente enlazada)

|       Operación       | Complejidad | Justificación                                                                |
|-----------------------|-------------|------------------------------------------------------------------------------|
| Inserción al inicio   | O(1)        | Se enlaza el nuevo nodo directamente al `head` sin recorrer la lista.        |
| Recorrido             | O(n)        | La función `imprimirLista()` visita cada nodo una vez hasta llegar a `NULL`. |
| Liberación de memoria | O(1) x nodo | Se libera cada nodo manualmente con `free().`                                |

### Significado de O(1) y O(n)
- **O(1)** (*tiempo constante*): La operación tarda lo mismo sin importar cuántos elementos tenga la lista.  
- **O(n)** (*tiempo lineal*): El tiempo de ejecución crece proporcionalmente al número de elementos `n` en la lista.  

## Pruebas realizadas

### Ejemplo 1: Lista de Productos Supermercado

- Creación de 4 nodos con nombres de productos: "Aceite", "Leche", "Arroz", "Azúcar".
- Enlace secuencial de nodos (`head -> first -> second -> third`).
- Recorrido completo con impresión de cada elemento mediante `imprimirLista()`.
- Liberación correcta de memoria manual por cada nodo para evitar fugas.

### Ejemplo 2: Lista de Películas Marvel

- Creación de 7 nodos con nombres de películas: "Iron Man 1", "Captain America 1", "The Avengers", "Doctor Strange 1", "Black Panther 1", "Avengers: Endgame.
- Enlace secuencial de nodos (`head -> first -> second -> third -> fourth -> fifth`).
- Recorrido completo con impresión de cada elemento mediante `imprimirLista()`.
- Liberación correcta de memoria manual por cada nodo para evitar fugas.