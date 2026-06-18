#include <windows.h> //api windows
#include <tlhelp32.h>  //usar process32
#include <iostream> //escreve algo com cout
#include <fstream> //
#include <cstdlib>
#include <thread>

using namespace std; // usar std apenas uma 

int main () { //funçao padrão do c++
  
     bool vivo = false;
 PROCESSENTRY32 pe32; // cria váriavel chamada pe32 
 pe32.dwSize = sizeof( PROCESSENTRY32 ); //mede os bytes e avisa o windows
   

while (!vivo) {  //Estrutura de repetição que sempre repetirá esse código quando qualque processo for aberto
  HANDLE hProcessSnap = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 ); //Irá tirar uma foto do meu processo
  if( hProcessSnap == INVALID_HANDLE_VALUE ); { // caso o processo de erro
    return 1;
  }


   
if (Process32First(hProcessSnap,&pe32)) { //nome dos programas, pega o primeiro programa
  
bool vivo = true;
  }
 VirtualAllocEx(
    hProcessSnap,
    NULL,
    pe32.dwSize,
    MEM_COMMIT | MEM_RESERVE,
    PAGE_READWRITE



 );  
 
           
  MessageBoxA(NULL, "AMONG US", "Aviso do Sistema", MB_OK | MB_ICONEXCLAMATION);
STARTUPINFOA si = {0};
 PROCESS_INFORMATION pi = {0};
                si.cb = sizeof(si); 

                ofstream arquivo("arte.bat");
                arquivo << "@echo off\n";
                arquivo << "chcp 65001 > nul\n"; 
                arquivo << R"(echo I GOT YOU ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
echo ⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠛⠛⢻⡻⠿⣿⣿⣿⣿⣿⣿⣿⣿
echo ⣿⣿⣿⣿⣿⣿⣟⣫⡾⠛⠛⠛⠛⠛⠛⠿⣾⣽⡻⣿⣿⣿⣿⣿
echo ⣿⣿⣿⣿⣿⡟⣼⠏⠄⠄⠄⠄⠄⠄⣀⣀⡀⣙⣿⣎⢿⣿⣿⣿
echo ⣿⣿⣿⣿⣿⢹⡟⠄⠄⣰⡾⠟⠛⠛⠛⠛⠛⠛⠿⣮⡻⣿⣿
echo ⣿⡿⢟⣻⣟⣽⠇⠄⠄⠄⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⢿⡹⣿
echo ⡟⣼⡟⠉⠉⣿⠄⠄⠄⠄⢿⡄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣼⢟⣿
echo ⣇⣿⠁⠄⠄⣿⠄⠄⠄⠄⠘⢿⣦⣄⣀⣀⣀⣀⣤⡴⣾⣏⣾⣿
echo ⡇⣿⠄⠄⠄⣿⠄⠄⠄⠄⠄⠄⠈⠉⠛⠋⠉⠉⠄⠄⢻⣿⣿⣿
echo ⢃⣿⠄⠄⠄⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢸⣧⣿⣿
echo ⡻⣿⠄⠄⠄⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣸⣧⣿⣿
echo ⡇⣿⠄⠄⠄⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣿⢹⣿⣿
echo ⣿⡸⢷⣤⣤⣿⡀⠄⠄⠄⠄⢠⣤⣄⣀⣀⣀⠄⠄⢠⣿⣿⣿⣿
echo ⣿⣿⣷⣿⣷⣿⡇⠄⠄⠄⠄⢸⡏⡍⣿⡏⠄⠄⠄⢸⡏⣿⣿⣿
echo ⣿⣿⣿⣿⣿⢼⡇⠄⠄⠄⠄⣸⡇⣷⣻⣆⣀⣀⣀⣼⣻⣿⣿⣿
echo ⣿⣿⣿⣿⣿⣜⠿⢦⣤⣤⡾⢟⣰⣿⣷⣭⣯⣭⣯⣥⣿⣿⣿⣿
echo ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
pause
)";
  arquivo.close(); 

  char cmd[] = "cmd.exe /c arte.bat";
                
   BOOL sucesso = CreateProcessA(
                    NULL, 
                    cmd,  
                    NULL, 
                    NULL, 
                    FALSE, 
                    CREATE_NEW_CONSOLE | BELOW_NORMAL_PRIORITY_CLASS,
                    NULL, 
                    NULL, 
                    &si, 
                    &pi
                );
                  
                if (sucesso) {
                    CloseHandle(pi.hProcess);
                    CloseHandle(pi.hThread);
                    
                  
                } 

                vivo = true;
                    return 0;
                }
           
             HANDLE hProcess = OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_WRITE, FALSE, processID);

    if (hProcess != NULL) {

        const char* hello.cpp = "C://windows//hello.cpp"
    SIZE_M tamanhoGrandao = strlen(hello.cpp) + 1

        LPVOID enderecoRemoto = VirtualAllocEx(
            hProcess,                 
            NULL,                   
            SIZE_M,               
            MEM_COMMIT | MEM_RESERVE, 
            PAGE_READWRITE           
        );
       if (hProcess != NULL) {
        BOOL alocarEndereco WriteProcessMemory(
            hProcess,
            enderecoRemoto
            caminhoArquivo
            tamanhoGrandao,
            NULL
);
       if (alocarEndereco) {


       }

       }
        CloseHandle(hProcess);
    }
               
                