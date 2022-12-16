# WearableGenius

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/prototipo.jpg" width="100" height="100">

## Sobre o projeto

Este projeto foi desenvolvido para a disciplina ACH2808 – INTRODUÇÃO AOS TÊXTEIS ELETRÔNICOS E DISPOSITIVOS VESTÍVEIS (E-TEXTILES E WEARABLES)

## Lista de Materiais

| Quantidade | Nome |
| --- | --- |
| 1 | Arduino Lilypad |
| 1 | Matriz de LEDs endereçáveis RGB 8x8 |
| 1 | Buzzer |
| 5 | Botões "push button" costuráveis de tecido condutivo |
| --- | Linha condutiva |
| 1 | PowerBank |

## Conexões

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/lilypad.png" width="150" height="150">

| Buraco do Lilypad | Conectado a |
| --- | --- |
| + | Positivo da matriz de LEDs |
| - | Negativo da matriz de LEDs |
| - | Negativo dos botões de pressão |
| 2 | Receptor de comandos da matriz de LEDs |
| 9 | Positivo do botão de início |
| 10 | Positivo do buzzer |
| A2 | Positivo do LED verde |
| A3 | Positivo do LED vermelho |
| A4 | Positivo do LED amarelo |
| A5 | Positivo do LED azul |

## OBS: Teste do Genius

### Caso deseje apenas criar o jogo do Genius, estes são os materiais utilizados para realizar os testes, antes de fazer a roupa:

| Quantidade | Nome | Detalhes |
| --- | --- | --- |
| 1 | Arduino UNO |  |
| 1 | Protoboard¹ | Aproximadamente 8cm |
| 18 | Jumpers | 2 verdes, 2 vermelhos, 2 amarelos, 2 azuis, 1 preto e 9 brancos |
| 4 | Leds | 1 verde, 1 vermelho, 1 amarelo e 1 azul |
| 4 | Resistores² | 2 de 220Ω, 1 de 39Ω e 1 de 470Ω |
| 5 | Botões "push button" |   |
| 1 | Buzzer ativo |   |
| 1 | Cabo USB AB |   |

¹A protoboard pode ser maior para facilitar o uso dos botões. Entretanto, talvez sejam necessários mais jumpers, para garantir que toda a protoboard esteja energizada.

²Os resistores também podem ser iguais (por exemplo 220Ω), obtendo um resultado semelhante.

### E estas foram as conexões realizadas:

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/GeniusTinkercad.png" width="600" height="500">

*Imagem do projeto no Tinkercad, mostrando as conexões (OBS: Os jumpers brancos estão marrons para facilitar a visualização*

| Pino do Arduino UNO | Cor do jumper | Buraco da protoboard | Descrição |
| --- | --- | --- | --- |
| GND | Preto | Negativo-1 | Qualquer buraco do feixe negativo da protoboard |
| 2 | Verde | f-29 | Positivo do botão do LED verde |
| 3 | Vermelho | f-25 | Positivo do botão do LED vermelho |
| 4 | Amarelo | f-21 | Positivo do botão do LED amarelo |
| 5 | Azul | f-17 | Positivo do botão do LED azul |
| 6 | Branco | f-5 | Positivo do botão de Reset |
| 8 | Verde | a-27 | Positivo do LED verde |
| 9 | Vermelho | a-23 | Positivo do LED vermelho |
| 10 | Amarelo | a-19 | Positivo do LED amarelo |
| 11 | Azul | a-15 | Positivo do LED azul |
| 12 | Branco | a-3 | Positivo do buzzer |

### Conexões entre buracos da protoboard:

| Buraco 1 | Cor do jumper | Buraco 2 | Descrição |
| --- | --- | --- | --- |
| Negativo-1 | Branco | Negativo-2 | Conecta com o outro negativo da protoboard |
| Negativo-2 | Branco | f-27 | Negativo do LED verde |
| Negativo-2 | Branco | f-23 | Negativo do LED vermelho |
| Negativo-2 | Branco | f-19 | Negativo do LED amarelo |
| Negativo-2 | Branco | f-15 | Negativo do LED azul |
| Negativo-2 | Branco | f-3 | Negativo do botão Reset |
| Negativo-1 | Branco | a-6 | Negativo do buzzer |

## Executando o Genius na IDE do Arduino

## Genius no Tinkercad

Também foi feita uma versão do Genius na plataforma Tinkercad, que possibilita a criação de projetos de Arduino em um ambiente virtual. O projeto no Tinkercad está disponível [aqui](https://www.tinkercad.com/things/9m7VmTHhiji?sharecode=O-7YtgHijSpsN8RPUlN66C5vpIvGVpg-idtfEUm_Wy0).

## Criando a roupa

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/prototipo.jpg" width="300" height="300">

*Conceito inicial da roupa*

## Como usar o programa

## Referências
