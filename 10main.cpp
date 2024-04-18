#include <iostream>
#include "conio.h"
#include "windows.h"
#include "audiere.h"
//#pragma comment (lib, "audiere.lib")//библиотека audiere

using namespace std;
using namespace audiere;


int main()
{
    setlocale(0, "Russian");

    cout << "Играйте клавишами Q W E R T Y U I O . X - для выхода" << endl;
    AudioDevicePtr device = OpenDevice();

    OutputStreamPtr do1 = OpenSound(device , "do.wav" , false); //здесь мы начинаем создание потоков со звуками определённой высоты
    OutputStreamPtr re = OpenSound(device , "re.wav" , false);
    OutputStreamPtr mi = OpenSound(device , "mi.wav" , false);
    OutputStreamPtr fa = OpenSound(device , "fa.wav" , false);
    OutputStreamPtr sol = OpenSound(device , "sol.wav" , false);
    OutputStreamPtr la = OpenSound(device , "la.wav" , false);
    OutputStreamPtr si = OpenSound(device , "si.wav" , false);
    OutputStreamPtr do2 = OpenSound(device , "do2.wav" , false); //заканчиваем октавой - вновь нота до, но уже следующей октавы

    char notePlay = '1'; //инициализируем символьную переменную с произвольным значением

    while(notePlay!='x') //цикл выполняется, пока не нажата клавиша "x"
    {
        notePlay=getch();

        if(notePlay=='q') do1->play();
        else if(notePlay=='w') re->play();
        else if(notePlay=='e') mi->play();
        else if(notePlay=='r') fa->play();
        else if(notePlay=='t') sol->play();
        else if(notePlay=='y') la->play();
        else if(notePlay=='u') si->play();
        else if(notePlay=='i') do2->play();

    }

    return 0;
}
