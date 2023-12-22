#include <gtest/gtest.h>
#include "Actividad.h"

class ActividadTest : public ::testing::Test {
protected:
    Actividad testActivity;

    void SetUp() override {
        // Configuración común para cada prueba, si es necesario
    }

    void TearDown() override {
        // Liberación de recursos, si es necesario
    }
};

// Prueba para verificar si la función existeActividad devuelve verdadero para una actividad existente
TEST_F(ActividadTest, ExisteActividad_ActividadExiste) {
    // Se asume que la función agregarActividadAlArchivo funciona correctamente y agrega una actividad llamada "TestActivity"
    testActivity.agregarActividadAlArchivo(Actividad("TestActivity", "Descripción"));

    bool exists = testActivity.existeActividad("TestActivity");

    ASSERT_TRUE(exists);
}

// Prueba para verificar si la función existeActividad devuelve falso para una actividad inexistente
TEST_F(ActividadTest, ExisteActividad_ActividadNoExiste) {
    bool exists = testActivity.existeActividad("ActividadInexistente");

    ASSERT_FALSE(exists);
}