#include "motor/motor.h"
#include "Vectors_y_punts/vectors.h"
#include "gameplay/holamon.h"

using namespace motoret;
// Main code
int main(int, char**)
{

    //-------------------------------------------------
    // Motoret: Inicialització dels paràmetres del motor
    //-------------------------------------------------
    if (Motoret::GetInstance().Init() > 0)
        return 1;

    //-------------------------------------------------
    // Motoret: Inicialització de l'estat de joc
    //-------------------------------------------------
    exemple::GOHolaMon holaMon("hola món");
    Motoret::GetInstance().AddGameObject(&holaMon);



    //-------------------------------------------------
    // Motoret: Execució del joc
    //-------------------------------------------------
    Motoret::GetInstance().Run();


    //-------------------------------------------------
    // Motoret: Tancament del motor
    //-------------------------------------------------
    Motoret::GetInstance().Close();

    return 0;
}