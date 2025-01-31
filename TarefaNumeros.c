#include <stdio.h>
#include "pico/stdlib.h"
#include "matriz_rgb.h"
#include "hardware/pwm.h"
#include "numeros.h"

const uint led_pin_red = 13;

#define BUTTON_A 5  // Altere para o pino correto da sua placa
#define BUTTON_B 6  // Altere para o pino correto da sua placa
#define LED_PIN 7

int number = 0, numberRef = 0;

int main()
{
    stdio_init_all();
    npInit(LED_PIN);

    gpio_init(led_pin_red);
    gpio_set_dir(led_pin_red, GPIO_OUT);

    gpio_init(BUTTON_A);
    gpio_set_dir(BUTTON_A, GPIO_IN);
    gpio_pull_up(BUTTON_A);

    gpio_init(BUTTON_B);
    gpio_set_dir(BUTTON_B, GPIO_IN);
    gpio_pull_up(BUTTON_B);

    drawNumber(number);

    while (true) {
        gpio_put(led_pin_red, true);
        sleep_ms(100);
        gpio_put(led_pin_red, false);

        if (gpio_get(BUTTON_A) == 0) {
            printf("Botão A pressionado!\n");
            if (numberRef < 9) numberRef++;
        }

        if (gpio_get(BUTTON_B) == 0) {
            printf("Botão B pressionado!\n");
            if (numberRef >= 0) numberRef--;
        }

        if (number != numberRef){
            number = numberRef;
            drawNumber(number);
        }
        else printf("Aguardando o incremento/decremento...\n");

        sleep_ms(100);
    }
}
