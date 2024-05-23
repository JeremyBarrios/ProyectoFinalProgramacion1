# Manual de Usuario

## Descripción del Programa
Este programa permite dibujar diversas figuras geométricas en la consola. Las figuras se pueden controlar y dibujar usando el teclado. El programa también permite cambiar el carácter utilizado para dibujar, seleccionar el color del carácter y limpiar la pantalla.

## Requisitos del Sistema
- **Sistema Operativo**: Windows
- **IDE**: CodeBlocks
- **Compilador**: Compatible con C++

## Instalación
1. Clona el repositorio del proyecto desde GitHub a tu máquina local.
2. Abre CodeBlocks y selecciona `File -> Open`.
3. Navega hasta la carpeta del proyecto clonado y abre el archivo del proyecto.
4. Compila el proyecto seleccionando `Build -> Build`.

## Instrucciones de Uso

### Control del Cursor
- Utiliza las teclas de flecha para mover el cursor:
  - `w`: Mover el cursor hacia arriba
  - `s`: Mover el cursor hacia abajo
  - `a`: Mover el cursor hacia la izquierda
  - `d`: Mover el cursor hacia la derecha

### Menú de Selección
- Presiona `m` para mostrar el menú de selección de figuras.

### Figuras Geométricas
1. **Triángulo**:
   - Presiona `t`.
   - Ingresa la base del triángulo y presiona `Enter`.
   - Selecciona la orientación del triángulo:
     - `w`: Arriba
     - `s`: Abajo
     - `d`: Derecha
     - `a`: Izquierda

2. **Cuadrado**:
   - Presiona `q`.
   - Ingresa el tamaño del cuadrado y presiona `Enter`.
   - Selecciona la orientación del cuadrado:
     - `w`: Arriba
     - `s`: Abajo
     - `d`: Derecha
     - `a`: Izquierda

3. **Rectángulo**:
   - Presiona `r`.
   - Ingresa las dimensiones del rectángulo (ancho y alto) y presiona `Enter`.
   - Selecciona la orientación del rectángulo:
     - `w`: Arriba
     - `s`: Abajo

4. **Círculo**:
   - Presiona `c`.
   - Ingresa el radio del círculo y presiona `Enter`.

5. **Línea**:
   - Presiona `l`.
   - Ingresa la longitud de la línea y presiona `Enter`.
   - Selecciona la orientación de la línea:
     - `w`: Arriba
     - `s`: Abajo
     - `d`: Derecha
     - `a`: Izquierda
     - `e`: Diagonal Derecha Arriba
     - `x`: Diagonal Derecha Abajo
     - `q`: Diagonal Izquierda Arriba
     - `z`: Diagonal Izquierda Abajo

6. **Rombo**:
   - Presiona `o`.
   - Ingresa la longitud del lado del rombo y presiona `Enter`.
   - Selecciona la orientación del rombo:
     - `w`: Arriba
     - `s`: Abajo

7. **Hexágono**:
   - Presiona `h`.
   - Ingresa la longitud del lado del hexágono y presiona `Enter`.
   - Selecciona la orientación del hexágono:
     - `w`: Vertical
     - `d`: Horizontal

### Otras Funciones
1. **Nuevo Carácter**:
   - Presiona `n`.
   - Ingresa el nuevo carácter para dibujar las figuras y presiona `Enter`.

2. **Limpiar Pantalla**:
   - Presiona `p` para limpiar la pantalla.

3. **Color de Carácter**:
   - Presiona `k`.
   - Ingresa el código del color para el carácter y presiona `Enter`.

4. **Grabar Pantalla**:
   - Presiona `g`.
   - Ingresa el nombre y la ruta del archivo para guardar la pantalla y presiona `Enter`.

5. **Abrir Archivo y Mostrar en Pantalla**:
   - Presiona `A Mayuscula`.
   - Ingresa la ruta del archivo que deseas abrir y presiona `Enter`.

### Atajos del Teclado
- `w`: Mover cursor hacia arriba
- `s`: Mover cursor hacia abajo
- `a`: Mover cursor hacia la izquierda
- `d`: Mover cursor hacia la derecha
- `m`: Mostrar menú de selección de figuras
- `t`: Seleccionar Triángulo
- `q`: Seleccionar Cuadrado
- `r`: Seleccionar Rectángulo
- `c`: Seleccionar Círculo
- `l`: Seleccionar Línea
- `o`: Seleccionar Rombo
- `h`: Seleccionar Hexágono
- `n`: Cambiar Carácter
- `p`: Limpiar Pantalla
- `k`: Cambiar Color del Carácter
- `g`: Grabar Pantalla
- `A Mayuscula`: Abrir archivo y mostrar en pantalla

### Consideraciones Finales
- Asegúrate de guardar tu trabajo frecuentemente para evitar la pérdida de datos.
- Verifica el tamaño de la pantalla de la consola para asegurar que todas las figuras se dibujen correctamente dentro del área visible.

Si encuentras algún problema o tienes preguntas adicionales, no dudes en consultar el manual técnico o contactar al desarrollador del programa.






# Manual Técnico

## Descripción del Programa
Este programa permite dibujar diversas figuras geométricas en la consola utilizando C++. Los usuarios pueden controlar y dibujar figuras geométricas, cambiar el carácter de dibujo, seleccionar el color del carácter, y limpiar la pantalla. También permite guardar y cargar la pantalla desde un archivo.

## Requisitos del Sistema
- **Sistema Operativo**: Windows
- **IDE**: CodeBlocks
- **Compilador**: Compatible con C++

## Estructura del Proyecto
El proyecto está organizado en un único archivo fuente principal (`main.cpp`). El código se estructura en clases para cada figura geométrica y funciones para manejar la entrada del usuario y el dibujo en la consola.

### Archivo Principal (`main.cpp`)
Contiene la implementación del programa principal, las definiciones de las clases de figuras geométricas, y las funciones auxiliares.

## Clases y Funciones

### Clase `Shape`
Clase base abstracta para todas las figuras geométricas. Define los métodos virtuales `draw` y `erase`.

### Clase `Square`
Derivada de `Shape`. Implementa los métodos `draw` y `erase` para dibujar y borrar un cuadrado.

### Clase `Circle`
Derivada de `Shape`. Implementa los métodos `draw` y `erase` para dibujar y borrar un círculo.

### Clase `Triangle`
Derivada de `Shape`. Implementa los métodos `draw` y `erase` para dibujar y borrar un triángulo.

### Clase `Line`
Derivada de `Shape`. Implementa los métodos `draw` y `erase` para dibujar y borrar una línea.

### Clase `Rhombus`
Derivada de `Shape`. Implementa los métodos `draw` y `erase` para dibujar y borrar un rombo.

### Clase `Hexagon`
Derivada de `Shape`. Implementa los métodos `draw` y `erase` para dibujar y borrar un hexágono.

### Función `drawScreen`
Limpia la consola y dibuja el contenido actual de la pantalla.

### Función `moveCursor`
Mueve el cursor a la nueva posición y actualiza la pantalla.

### Función `showMenu`
Muestra el menú de selección de figuras geométricas y otras opciones.

### Función `changeCharacter`
Permite al usuario cambiar el carácter utilizado para dibujar.

### Función `changeColor`
Permite al usuario cambiar el color del carácter.

### Función `clearScreen`
Limpia la pantalla y restablece el contenido.

### Función `saveScreen`
Guarda el contenido actual de la pantalla en un archivo.

### Función `loadScreen`
Carga el contenido de un archivo y lo muestra en la pantalla.

## Control del Cursor y Dibujo
El cursor se controla con las teclas `w`, `s`, `a`, `d`. Las figuras se seleccionan presionando la tecla correspondiente en el menú (`m`). Cada figura requiere datos adicionales, como tamaño, radio o longitud, que se ingresan después de la selección.

### Ejemplo de Dibujo de un Cuadrado
1. Presiona `m` para abrir el menú.
2. Selecciona `q` para elegir cuadrado.
3. Ingresa el tamaño del cuadrado.
4. Selecciona la orientación usando `w`, `s`, `a`, `d`.

## Colores de Carácter
El color del carácter se puede cambiar presionando `k` y seleccionando un código de color. El programa utiliza las funciones de la librería `windows.h` para cambiar el color de la consola.

### Ejemplo de Cambio de Color
1. Presiona `k` para cambiar el color.
2. Ingresa el código del color deseado.

## Guardar y Cargar Pantallas
El programa puede guardar el contenido actual de la pantalla en un archivo y cargar contenido desde un archivo.

### Guardar Pantalla
1. Presiona `g` para guardar la pantalla.
2. Ingresa el nombre y la ruta del archivo.

### Cargar Pantalla
1. Presiona `Ctrl + A` para abrir un archivo.
2. Ingresa la ruta del archivo a abrir.

## Consideraciones Finales
- Verifica que la pantalla de la consola sea lo suficientemente grande para mostrar todas las figuras.
- Guarda tu trabajo frecuentemente para evitar la pérdida de datos.



