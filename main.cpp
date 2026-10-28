#include "motor/motor.h"
#include "Vectors_y_punts/vectors.h"
#include "gameplay/holamon.h"

// Main code
int main(int, char**)
{

    //-------------------------------------------------
    // Motoret: Inicialització dels paràmetres del motor
    //-------------------------------------------------
    motoret::Motoret motoret;
    if (motoret.Init() > 0)
        return 1;

    //-------------------------------------------------
    // Motoret: Inicialització de l'estat de joc
    //-------------------------------------------------
    exemple::GOHolaMon holaMon("hola món");
    motoret.AddGameObject(&holaMon);



    //-------------------------------------------------
    // Motoret: Execució del joc
    //-------------------------------------------------
    motoret.Run();


    //-------------------------------------------------
    // Motoret: Tancament del motor
    //-------------------------------------------------
    motoret.Close();

    return 0;
}