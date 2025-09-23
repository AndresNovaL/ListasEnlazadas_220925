# ListasEnlazadas_220925
Clase de Estructura de Datos sobre la temática de Listas Enlazadas en programación.

## Descripción
Este repositorio contiene la implementación de dos ejemplos de listas enlazadas en lenguaje C:
1. **Ejemplo 1:** Lista simplemente enlazada enfocada a lista de productos alimenticios (`Ejercicio1/ejercicio1_Lista.c`).
2. **Ejemplo 2:** Lista simplemente enlazada (`Ejercicio2/ejercicio2_Lista.c`).

El objetivo es aplicar buenas prácticas de documentación y flujo de trabajo con ramas en Git/GitHub, siguiendo la estructura vista en clase.

## Compilación y Ejecución

### Ejemplo 1: Lista simplemente enlazada
```bash

# Compilar el archivo
gcc Ejercicio1/ejercicio1_Lista.c -o Ejercicio1/ejercicio1_Lista

# Ejecutar el programa
./Ejercicio1/ejercicio1_Lista

```

## Estructura del repositorio
```
.
├── Ejercicio1/          # Implementación del primer ejemplo (lista simplemente enlazada)
│   └── ejercicio1_Lista.c
├── Ejercicio2/          # Implementación del segundo ejemplo (lista simplemente enlazada)
│   └── ejercicio2_Lista.c
└── README.md            # Documentación del proyecto
```

---

## Complejidad de operaciones (Lista simplemente enlazada)

|       Operación       | Complejidad | Justificación                                                                |
|-----------------------|-------------|------------------------------------------------------------------------------|
| Inserción al inicio   | O(1)        | Se enlaza el nuevo nodo directamente al `head` sin recorrer la lista.        |
| Recorrido             | O(n)        | La función `imprimirLista()` visita cada nodo una vez hasta llegar a `NULL`. |
| Liberación de memoria | O(n)        | El bucle `while` recorre y libera cada nodo de la lista.                     |

### Significado de O(1) y O(n)
- **O(1)** (*tiempo constante*): La operación tarda lo mismo sin importar cuántos elementos tenga la lista.  
- **O(n)** (*tiempo lineal*): El tiempo de ejecución crece proporcionalmente al número de elementos `n` en la lista.  

## Pruebas realizadas

- Creación de 4 nodos con nombres de productos: "Aceite", "Leche", "Arroz", "Arroz".
- Enlace secuencial de nodos (`head -> first -> second -> third`).
- Recorrido completo con impresión de cada elemento mediante `imprimirLista()`.
- Liberación correcta de memoria con bucle `while` para evitar fugas.