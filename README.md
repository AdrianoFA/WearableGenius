# WearableGenius

https://user-images.githubusercontent.com/66809367/208134003-32535726-3c44-4858-9110-4e01f6ef53c2.mp4

## Sobre o projeto

Este projeto foi desenvolvido para a disciplina ACH2808 – INTRODUÇÃO AOS TÊXTEIS ELETRÔNICOS E DISPOSITIVOS VESTÍVEIS (E-TEXTILES E WEARABLES)

O objetivo do projeto é auxiliar no desenvolvimento infantil com o uso de jogos eletrônicos. Atualmente, muitas crianças ficam no celular para passar o tempo. Porém, o uso excessivo do celular traz diversos problemas, como: 

#### **- Segurança:**
Se a criança não estiver sendo supervisionada, ela pode ter acesso a pessoas mal-intencionadas ou conteúdo sensível.

#### **- Tempo de tela:**
Muito tempo de tela pode prejudicar a visão da criança e causar diversos problemas, como falta de sono e postura ruim.

#### **- Fragilidade:**
O celular é um aparelho consideravelmente caro e frágil, que se quebra facilmente, trazendo prejuízo ao responsável.

Portanto, tivemos a ideia de criar uma roupa com jogos. Ela seria muito mais barata do que um celular, e ainda distrairia a criança do celular. Por ser uma roupa, seria portátil e lavável (eficiência depois da lavagem ainda em teste), além de mais resistente nas mãos de uma criança.

## Responsáveis pelo projeto:

Adriano Favareto Abromovick - NUSP 11796062

Julia Lima Teodorak Vieira - NUSP 11369600

Júlio Silva Ladeira - NUSP 10872350

Sabrina Ribeiro de Souza - NUSP 11207290

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

Estas são as conexões do circuito, feitas com linha condutiva.

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/lilypad2.jpg" width="150" height="150">

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

*Os botões de pressão dos LEDs ficam entre o positivo de cada LED e os LEDs em si.*

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

*Imagem do projeto no Tinkercad, mostrando as conexões (OBS: Os jumpers brancos estão marrons para facilitar a visualização)*

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

### Posição dos componentes na protoboard:

| Componente | Positivo | Negativo |
| --- | --- | --- |
| LED verde | e-27 | e-29 |
| LED vermelho | e-23 | e-25 |
| LED amarelo | e-19 | e-21 |
| LED azul | e-15 | e-17 |
| Resistor do LED verde¹ | Negativo | a-29 |
| Resistor do LED vermelho¹ | Negativo | a-25 |
| Resistor do LED amarelo¹ | Negativo | a-21 |
| Resistor do LED azul¹ | Negativo | a-17 |
| Botão do LED verde¹ | g-29 e j-29 | g-27 e j-27 |
| Botão do LED vermelho¹ | g-25 e j-25 | g-23 e j-23 |
| Botão do LED amarelo¹ | g-21 e j-21 | g-19 e j-19 |
| Botão do LED azul¹ | g-17 e j-17 | g-15 e j-15 |
| Botão de reset¹  | g-5 e j-5 | g-3 e j-3 |
| Buzzer | a-3 | a-6 |

¹Os resistores e botões não possuem "positivo" ou "negativo", então para esses componentes o posicionamento não importa.

## Executando o Genius na IDE do Arduino

Após montar todo o circuito na protoboard, é preciso baixar a [IDE do Arduino](https://www.arduino.cc/en/software) em um computador. Depois, conectar o Arduino UNO no computador, utilizando o cabo USB AB. 
Em seguida, baixar e executar o arquivo [jogo_da_memoria.ino](https://github.com/AdrianoFA/WearableGenius/blob/main/src/jogo_da_memoria.ino), que é o código do Genius. o executável irá abrir uma janela da IDE do Arduino. 
Agora, é preciso escolher o tipo do Arduino (Arduino UNO) e a porta USB onde ele está conectado. Se ele estiver conectado, provavelmente a única opção de porta que vai aparecer é a correta. Essas duas seleções podem ser feitas facilmente pela aba "Tools" da IDE do Arduino:

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/tools2.png" width="400" height="300">

E por último, basta carregar o programa no Arduino UNO (pela opção de Upload na IDE), e ele será executado automaticamente.

### Genius funcionando com o Arduino UNO

https://user-images.githubusercontent.com/66809367/208124224-004a1787-a410-491f-b5c9-deac0b439930.mp4

*(O circuito no vídeo está sem o buzzer, pois foi gravado de madrugada)*

## Genius no Tinkercad

Também foi feita uma versão do Genius na plataforma Tinkercad, que possibilita a criação de projetos de Arduino em um ambiente virtual. O projeto no Tinkercad está disponível [aqui](https://www.tinkercad.com/things/9m7VmTHhiji?sharecode=O-7YtgHijSpsN8RPUlN66C5vpIvGVpg-idtfEUm_Wy0). CUIDADO: O som do buzzer é bem alto, recomendo abaixar um pouco o volume :) .

## Criando a roupa

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/prototipo.jpg" width="300" height="300">

*Conceito inicial da roupa*

A roupa criada para o projeto é uma blusa feita de moletom, com aproximadamente 70% algodão e 30% poliéster. A ideia é que a roupa seja confortável e fácil de vestir.

A blusa possui um bolso estilo "canguru" para comportar o Arduino Lilypad e o PowerBank. 

Também foram recortadas formas, com suas respectivas cores, para indicar a posição de cada botão de pressão. As formas também deixam o jogo mais didático e divertido.

<img src="https://github.com/AdrianoFA/WearableGenius/blob/main/midia/criacaoRoupa.jpg" width="500" height="700">

https://user-images.githubusercontent.com/66809367/208124351-14f1b6d8-89d5-47ca-9a26-529151e4d466.mp4

https://user-images.githubusercontent.com/66809367/208124056-c7bbd84f-9af6-42f6-b17a-6722bb8be439.mp4

## Como usar a roupa

Depois de carregar o [código do Genius](https://github.com/AdrianoFA/WearableGenius/blob/main/src/Genius2.ino) no Arduino Lilypad, conectar o Lilypad no PowerBank. 
O jogo deve começar automaticamente, exibindo a primeira forma escolhida na matriz de led, com a cor correspondente à forma. 

O jogador deve então selecionar a forma que ele acredita que foi exibida pela tela e apertar o botão de pressão costurado na roupa correspondente à forma. 

Caso correto, o jogo incluirá mais uma forma na sequência, e o jogador deve sempre repetir a sequência exibida na roupa.
Caso erre, a matriz exibira uma sequência de cores bem rápida e emitirá um barulho diferente, sinalizando que o jogador errou a sequência. Então, o jogo recomeça.

O jogo continua até exibir uma sequência de 20 formas. Caso o jogador acerte a sequência, ele "venceu" e o jogo recomeça.

https://user-images.githubusercontent.com/66809367/208134089-423ecac3-2c4b-4703-b8af-f1a3b267a692.mp4

## Considerações futuras:

#### - Às vezes o circuito bagunça e o jogo para de funcionar direito, fazendo com que um dos botões seja apertado constantemente, quando na verdade nenhum botão está sendo apertado.

#### - O visor deixa meio difícil de perceber as formas, pois fica meio embaçado.

#### - É um pouco difícil de jogar olhando para baixo, para ver o visor.

## Referências

Tivemos como inspiração o canal [Bit a Bit](https://www.youtube.com/@BitaBit) no Youtube, que é o responsável pelo código jogo_da_memória.ino, utilizado para testar o circuito do projeto no Arduino UNO.

### Outras referências

https://www.centroclinicoacras.com.br/blog/blog/maleficios-da-exposicao-excessiva-as-telas/

