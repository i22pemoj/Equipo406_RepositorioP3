#include <gtest/gtest.h>
#include "Actividad.h"

// Fixture para pruebas de Actividad
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

// Prueba para registrar un usuario y verificar si está registrado correctamente
TEST_F(ActividadTest, RegistrarUsuario_Y_VerificarRegistro) {
    testActivity.registrarUsuario("UsuarioNuevo", "Contraseña");

    bool isRegistered = testActivity.estaRegistrado("UsuarioNuevo", "Contraseña");

    ASSERT_TRUE(isRegistered);
}