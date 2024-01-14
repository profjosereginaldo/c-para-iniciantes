# Modificadores de Tipos do C

Os modificadores de tipos no C permitem ajustar o intervalo de valores que um tipo básico pode representar.

Existem quatro modificadores de tipos em C:

### signed e unsigned

Os modificadores `signed` e `unsigned` são utilizados com os tipos `char` e `int` para indicar se eles podem armazenar valores negativos (com sinal) ou apenas valores positivos (sem sinal). 

O modificador `signed` é opcional e não altera o intervalo de valores dos tipos. Por outro lado, o modificador `unsigned` expande o intervalo do tipo `char` para **0** a **255** e do tipo `int` para **0** a **4.294.967.295**.

### short e long

Os modificadores `short` e `long` são utilizados com tipo `int` para alterar o intervalo de valores que podem ser armazenados. 

O modificador `short` reduz o intervalo para **-32.768** a **32.767** com sinal e para **0** a **65.535** sem sinal. Por sua vez, o modificador `long` amplia o intervalo para **-9.223.372.036.854.775.808** a **9.223.372.036.854.775.807** com sinal e para **0** a **18.446.744.073.709.551.615** sem sinal.

Além disso, o modificador `long` pode ser aplicado ao tipo `double`, expandindo o intervalo de valores para aproximadamente **-1.2x10^4932** a **1.2x10^4932**.
