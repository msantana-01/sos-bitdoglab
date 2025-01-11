# Projeto SOS com LED - BitDogLab

Este projeto implementa a transmissão do sinal **SOS** em código Morse utilizando um LED conectado à placa de desenvolvimento **BitDogLab**. O comportamento do LED segue padrões definidos para pontos e traços, proporcionando uma sinalização precisa e contínua. O firmware foi desenvolvido em **C** e é compatível com simulações no **Wokwi** e execução direta no hardware.

---

## 🛠️ Funcionalidades

- **Transmissão do sinal SOS**:
  - **Ponto (.)**: LED aceso por 0,2 segundos.
  - **Traço (-)**: LED aceso por 0,8 segundos.
  - Intervalos entre sinais:
    - 0,125 segundos entre pontos e traços na mesma letra.
    - 0,25 segundos entre letras.
    - 3 segundos entre ciclos completos.
- **Modularização do Código**:
  - Funções específicas para ligar/desligar o LED e transmitir padrões Morse.
- Compatibilidade com:
  - **Hardware BitDogLab**
  - Simulador **Wokwi** integrado ao Visual Studio Code.

---

## 🚀 Como Executar

1. **Pré-requisitos**:
   - Placa **BitDogLab**.
   - Ambiente configurado com o **Raspberry Pi Pico SDK**.
   - Simulador **Wokwi** (opcional para testes).

2. **Execução no Wokwi**:
   - Abra o projeto no Wokwi utilizando o arquivo de configuração fornecido (`diagram.json`).
   - Inicie a simulação e observe o LED transmitindo o código SOS.

3. **Execução no Hardware**:
   - Compile o código e envie o firmware para a placa.
   - Ligue a placa e veja a transmissão do SOS pelo LED.

---

## 📂 Estrutura do Projeto

- `main.c`: Código fonte principal.
- `diagram.json`: Arquivo de configuração para simulação no Wokwi.

---

## 📈 Possíveis Expansões

- Escolha de mensagens personalizadas para transmissão.
- Controle do LED via comunicação serial.
- Uso de interrupções para maior eficiência.
- Utilização do display OLED para mostrar o código Morse transmitido.

---

## 📜 Licença

Este projeto é de código aberto e está disponível sob a licença MIT. Sinta-se à vontade para usá-lo, modificá-lo e distribuí-lo.

---


