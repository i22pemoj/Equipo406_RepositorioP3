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

// Prueba para eliminar un usuario y verificar si se elimina correctamente
TEST_F(ActividadTest, EliminarUsuario_Y_VerificarEliminacion) {
    // Se asume que el usuario "UsuarioEliminar" ya está registrado
    testActivity.registrarUsuario("UsuarioEliminar", "Contraseña");

    testActivity.eliminarUsuario("UsuarioEliminar");

    bool isRegistered = testActivity.estaRegistrado("UsuarioEliminar", "Contraseña");

    ASSERT_FALSE(isRegistered);
}