# ListasEnlazadas_220925
Clase de Estructura de Datos sobre la temática de Listas Enlazadas en programación.

# Listas Enlazadas en C

##  Descripción
Este repositorio contiene la implementación de dos ejemplos de listas enlazadas en lenguaje C:
1. **Ejemplo 1: Lista simplemente enlazada** (`Ejercicio1_Lista`).
2. **Ejemplo 2: Lista simplemente enlazada** (`Ejercicio2_lista`).

El objetivo es aplicar buenas prácticas de documentación y flujo de trabajo con ramas en Git/GitHub, siguiendo la estructura vista en clase.

## Compilación y ejecución
```bash
## Compilar el archivo
gcc lista_Simple/lista_Simple.c -o lista_Simple/lista_Simple

## Ejecutar el programa
./lista_Simple/lista_Simple
```

---

## 📂 Estructura del repositorio
.
├── lista_Simple/        # Implementación de lista simplemente enlazada
│   └── lista_Simple.c
├── lista_Doble/         # Implementación de lista doblemente enlazada
│   └── lista_Doble.c
└── README.md            # Documentación del proyecto


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
