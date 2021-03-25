
//Evitar multiplas definições de classe 
#ifndef TIME_H
#define TIME_H

class Time
{
     private://Seção Privada
          //membros privados
          int hour;      //0 - 23
          int minute;    //0 - 59
          int second;    //0 - 59
     public://Seção Pública
          //Construtor da classe, com valores default   
          Time(int hour = 0, int minute = 0, int second = 0);
          int getHour() const;
          void setHour(int hour);
          int getMinute() const;
          void setMinute(int minute);
          int getSecond() const;
          void setSecond(int second);
          void print() const;
          void nextSecond();
     
};

#endif