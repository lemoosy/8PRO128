#include "Dashboard.h"
#include "Settings.h"

int main()
{
    /// Cr�ation du tableau de bord (permet de stocker et de g�rer les professeurs).

    Dashboard dashboard;

    /// Importation des professeurs � partir du fichier FP.txt.

    bool res = dashboard.ImportProfessors("../Data/FP.txt");

    if (!res)
    {
        cout << "ERROR - ImportProfessors()" << endl;
        goto LABEL_ERROR;
    }

    /// Ex�cution des commandes � partir du fichier FT.txt.

    res = dashboard.LoadInputs("../Data/FT.txt");

    if (!res)
    {
        cout << "ERROR - LoadInputs()" << endl;
        goto LABEL_ERROR;
    }

    return EXIT_SUCCESS;

LABEL_ERROR:

    return EXIT_FAILURE;
}
