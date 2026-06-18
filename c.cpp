#include <windows.h>

int main(void) {  
    int msgboxID = MessageBoxW(      
        NULL,
        L"Deseja cancelar o processo",   
        L"Alerta",                         
        MB_OKCANCEL | MB_ICONEXCLAMATION | MB_DEFBUTTON2          
    );           

    switch (msgboxID) { 
        case IDCANCEL: 
            break;
        case IDOK:
            break;
    }
    return msgboxID;
}
