#include <stdio.h>
#include "../src/carrito.h"
#include "minunit/minunit.h"

/*
 * Tests de integracion: verifican que las funciones trabajan bien
 * en combinacion, no de forma aislada.
 */

/* ═══════════════════════════════════════════════════════════════════════════
 *  PARTE D — Escribir el test guiado (ver README.md, Parte 8)
 * ═══════════════════════════════════════════════════════════════════════════ */
void test_compra_con_descuento() {
    Carrito carrito;
    Producto pan = {"Pan", 200, 3};
    Producto leche = {"Leche", 350, 2};

    carrito_init(&carrito);

    carrito_agregar(&carrito, pan);
    carrito_agregar(&carrito, leche);

    ASSERT_IGUAL(1300, carrito_total(&carrito));
    ASSERT_IGUAL(1170, carrito_descuento(carrito_total(&carrito), 10));
}

/* TODO: escribir test_compra_con_descuento() siguiendo la guia del .md */

/* ═══════════════════════════════════════════════════════════════════════════
 *  PARTE E — Disenar un test propio (ver README.md, Parte 9)
 * ═══════════════════════════════════════════════════════════════════════════ */
void test_agregar_hasta_llenar() {
    Carrito carrito;
    Producto producto = {"Pan", 200, 1};

    carrito_init(&carrito);

    carrito_agregar(&carrito, producto);
    carrito_agregar(&carrito, producto);
    carrito_agregar(&carrito, producto);
    carrito_agregar(&carrito, producto);

    ASSERT_IGUAL(MAX_ITEMS, carrito_contar(&carrito));

    ASSERT_IGUAL(0, carrito_agregar(&carrito, producto));

    ASSERT_IGUAL(MAX_ITEMS, carrito_contar(&carrito));
}

/* TODO: escribir test_agregar_hasta_llenar() */

int main(void) {
    printf("=== Tests de integracion ===");
    /* Descomentar a medida que agregues las funciones: */
     test_compra_con_descuento(); 
     test_agregar_hasta_llenar();  
    RESUMEN();
    return EXIT_CODE();
}
