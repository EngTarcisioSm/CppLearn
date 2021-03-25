/*Implementação da classe*/

//com bibliotecas do c++ utiliza-se <> com bibliotecas criadas ""
#include <iostream>
#include "Time.h"

using namespace std;

/*forma de inicializar os parametros (uma das formas)*/
Time::Time(int h, int m, int s) : hour(h), minute(m), second(s){
}
/*Metodos getters*/

int Time::getHour() const{
     return hour;
}

int Time::getMinute() const{
     return minute;
}

int Time::getSecond() const{
     return second;
}

/*
     Nos métodos "set", a classe esta recebendo como parâmetro uma variável com o mesmo nome do atributo. Esse fato faz com que o atributo seja "escondido". Por exemplo, no método setHour abaixo quando utilizamos a variável "hour, estaremos nos referindo ao parâmetro e não ao atributo da classe. Para contornar esse problema, usamos a palavra reservada "this. Conforme segue: this->hour, this->minute, this-second se referem aos atributos. hour, minute e second se referem aos parâmetros dos métodos abaixo.
*/

/*Métodos Setters*/
void Time::setHour(int hour){
     this->hour = hour;
}

void Time::setMinute(int minute){
     this->minute = minute;
}

void Time::setSecond(int second){
     this->second = second;
}

void Time::print() const{
     cout << hour << ":" << minute << ":" << second << endl;
}

void Time::nextSecond(){
     second += 1;
     if (second >= 60)
     {
          second = 0;
          minute +1;
     }
     if (minute >= 60)
     {
          minute = 0;
          hour = +1;
     }
     if (hour > 24)
     {
          hour = 0;
     }    
}