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

// Prueba para verificar si la función de pedirDatosAct asigna correctamente los datos de la actividad
TEST_F(ActividadTest, PedirDatosAct_AsignacionCorrecta) {
    Actividad nuevaActividad;
    testActivity.pedirDatosAct(nuevaActividad);

    // Aquí podrías hacer aserciones más detalladas para verificar si los datos ingresados se asignaron correctamente a la nueva actividad
    ASSERT_NE(nuevaActividad.GetnombreAct(), "");
    ASSERT_NE(nuevaActividad.GetdescripAct(), "");
    // ... Asegúrate de agregar aserciones para los demás atributos
}