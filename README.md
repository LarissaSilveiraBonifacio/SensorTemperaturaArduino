# Sensor de Temperatura Arduino voltado para Salas de Operação
Projeto da matéria de Objetos Inteligentes Conectados da Universidade Presbiteriana Mackenzie 

O circuito capta a temperatura do ambiente atraves do sensor TM 35,se esta temperatura for maior que 22 graus a cor vermelha do LED RGB ira acender,se a temperatura for menor que 18 graus a cor azul do LED RGB ira acender e se a temperatura nao for nenhuma dessa,ou seja,uma temperatura adequada a cor verde ira acender.

Este projeto foi desenvolvido no [Software do Arduino](https://www.arduino.cc/en/main/software), com o [Protocolo Firmata](http://firmata.org/wiki/Main_Page), o [Protocolo MQTT](http://mqtt.org) e com o [Node-Red](https://nodered.org)

O codigo  com protocolo Firmata esta disponivel na branch master (CodigoComFirmata), o codigo foi baseado no Standard Firmata,exemplo que voce encontra no Arduino e a minha logica de programação, mas tambem há o codigo sem o Protocolo Firamata (CodigoSemFirmata)
E um video bem basico no [Youtube](https://youtu.be/Qr0u77eJuGI)

## PDF com todas as imagens da montagem 
[Imagens .pdf](https://github.com/LarissaSilveiraBonifacio/SensorTemperaturaArduino/files/4840917/Imagens.pdf)



 ## O Hardware detalhado com imagens e o Fluxograma do projeto 
 [Materiais.docx-2.pdf](https://github.com/LarissaSilveiraBonifacio/SensorTemperaturaArduino/files/4839878/Materiais.docx-2.pdf)
 
 
## Esquema Node-Red 
O arquivo .json do Node-Red esta na brand master (flows.json)

![2020-06-27 13_48_21-Node-RED](https://user-images.githubusercontent.com/48017842/85927533-11f65300-b87d-11ea-9252-a888e98ddff2.png)



