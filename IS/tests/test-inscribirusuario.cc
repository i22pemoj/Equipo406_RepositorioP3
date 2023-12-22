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

// Prueba para verificar si la función de inscribirUsuarioEnActividad inscribe al usuario correctamente
TEST_F(ActividadTest, InscribirUsuarioEnActividad) {
    // Se asume que la actividad "TestActivity" existe y está registrada en el archivo
    testActivity.agregarActividadAlArchivo(Actividad("TestActivity", "Descripción" /*...otros parámetros...*/));

    testActivity.inscribirUsuarioEnActividad("UsuarioInscrito", "TestActivity");

    std::vector<std::string> actividadesUsuario = testActivity.obtenerActividadesUsuario("UsuarioInscrito");

    ASSERT_TRUE(std::find(actividadesUsuario.begin(), actividadesUsuario.end(), "TestActivity") != actividadesUsuario.end());
}