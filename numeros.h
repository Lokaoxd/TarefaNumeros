#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "hardware/pwm.h"

#define ACESSO {0, 0, 180}
#define APAGADO {0, 0, 0}

void number_0();
void number_1();
void number_2();
void number_3();
void number_4();
void number_5();
void number_6();
void number_7();
void number_8();
void number_9();
void off();

void drawNumber(int number){
        switch (number)
        {
                case 0: number_0(); break;
                case 1: number_1(); break;
                case 2: number_2(); break;
                case 3: number_3(); break;
                case 4: number_4(); break;
                case 5: number_5(); break;
                case 6: number_6(); break;
                case 7: number_7(); break;
                case 8: number_8(); break;
                case 9: number_9(); break;
                default: off(); break;
        }
}

void number_0(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_1(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
                {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
                {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
                {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO},
                {APAGADO, APAGADO, ACESSO, APAGADO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_2(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_3(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_4(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_5(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_6(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
                {APAGADO, ACESSO, APAGADO, APAGADO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_7(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_8(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void number_9(){
        npClear();
        int frame[5][5][3]={
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, ACESSO, APAGADO, ACESSO, APAGADO},
                {APAGADO, ACESSO, ACESSO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO},
                {APAGADO, APAGADO, APAGADO, ACESSO, APAGADO}
        };
        desenho_sprite(frame);
        npWrite();
}

void off(){
        npClear();
        int frame12[5][5][3]={
                {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
                {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
                {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
                {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO},
                {APAGADO, APAGADO, APAGADO, APAGADO, APAGADO}
        };
        desenho_sprite(frame12);
        npWrite();
}