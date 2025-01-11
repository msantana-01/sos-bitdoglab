#include "pico/stdlib.h"

// Definições de macros
#define PINO_LED 12              // Pino conectado ao LED
#define TEMPO_PONTO 200          // Duração de um ponto (em milissegundos)
#define TEMPO_TRACO 800          // Duração de um traço (em milissegundos)
#define TEMPO_GAP 125            // Intervalo entre pontos e traços (em milissegundos)
#define TEMPO_ENTRE_LETRAS 250   // Intervalo entre letras (em milissegundos)
#define TEMPO_ENTRE_CICLOS 3000  // Intervalo entre ciclos completos (em milissegundos)

// Função para ligar o LED por um tempo especificado
void piscar_led(int duracao) {
    gpio_put(PINO_LED, 1);  // Liga o LED
    sleep_ms(duracao);      // Aguarda o tempo especificado
    gpio_put(PINO_LED, 0);  // Desliga o LED
}

// Função para transmitir uma letra em código Morse
void transmitir_letra(const char *padrao) {
    while (*padrao) {
        if (*padrao == '.') {
            piscar_led(TEMPO_PONTO);  // Transmite um ponto
        } else if (*padrao == '-') {
            piscar_led(TEMPO_TRACO);  // Transmite um traço
        }
        padrao++;
        if (*padrao) sleep_ms(TEMPO_GAP);  // Intervalo entre sinais na mesma letra
    }
}

int main() {
    gpio_init(PINO_LED);
    gpio_set_dir(PINO_LED, GPIO_OUT);

    while (true) {
        // Transmite SOS
        transmitir_letra("...");  // S: três pontos
        sleep_ms(TEMPO_ENTRE_LETRAS);
        transmitir_letra("---");  // O: três traços
        sleep_ms(TEMPO_ENTRE_LETRAS);
        transmitir_letra("...");  // S: três pontos

        // Intervalo entre ciclos
        sleep_ms(TEMPO_ENTRE_CICLOS);
    }

    return 0;
}
