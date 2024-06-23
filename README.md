# DisplayLCD_Without_I2C
Código para testar um display LCD sem o módulo I2C em um arduino. Além disso, há um desenho e esquemático para ajudar na montagem e conexão.
 - Lista de materiais
     - 1 Resistor 220Ohm
     - 1 Potenciômetro 10KOhm
     - 1 Arduino (Eu usei o Arduino UNO, mas você pode usar outro. Talvez seja necessário fazer algum ajuste de portas utilizadas)
     - 1 Display LCD (Eu usei o de 16x2, mas você pode usar um 16x4 por exemplo. Apenas ajuste isso no código)
     - 1 Protoboard
     - Fios e jumpers para conexão
 - Informações importantes
     - Eu utilizei as portas 2 a 7 do Arduino. Se você alterar, apenas ajuste no código.
     - O código está pronto para a versão 16x2 do display LCD. Se você utilizar outro, ajuste no código.
     - Esse código e biblioteca do Arduino utilizada, é apenas para display LCD que não possui módulo I2C. Usar sem o módulo I2C embora seja simples, utiliza mais conexões e portas do Arduino, o que pode ser um inconveniente.
     - Faça todas as conexões com o Arduino desconectado, para evitar queima do Arduino ou do display, enquanto você faz as conexões.
     - Utilize a Arduino IDE para facilitar e ter mais chances de sucesso de primeira.
     - Se ao executar o código para o Arduino, nada for exibido no display, ajuste o contraste do display com o potenciômetro, e se mesmo assim não funcionar, verifique as conexões. E em último caso, se estiver desconfiado que o problema possa ser o display, teste com um outro.

- Conexões entre o display e o Arduino
    | Arduino | Display LCD |
    | :-----: | :---------: |
    |    2    |      RS     |
    |    3    |      EN     |
    |    4    |      D4     |
    |    5    |      D5     |
    |    6    |      D6     |
    |    7    |      D7     |
