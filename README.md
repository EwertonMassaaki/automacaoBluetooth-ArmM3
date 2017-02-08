# automacaoBluetooth-ArmM3
Acionamento de cargas por meio de um aplicativo mobile e protocolo Bluetooth.

#Objetivo
Documento descritivo do projeto intitulado "Acionamento de cargas por meio de um aplicativo _mobile_ e protocolo _Bluetooth_", apresentado à disciplina 2ELE036 - Microprocessadores. Turma 1011 do curso de Engenharia Elétrica da Universidade Estadual de Londrina.

Londrina, 2017.

#Colaboradores:

* André de Santa Gabriel
* Everton Jose Santana
* Felipe Haruo Murakami
* Ewerton Massaaki Saito Loures
* Germano Gabriel Gobbo
* Gustavo Ribas Roesler

#Instruções:

Serão apresentadas a seguir de maneira simplificada as informações básicas necessárias para o uso do aplicativo, a fim de se realizar os acionamentos de cargas.

Primeiramente, é preciso instalar o aplicativo em seu smartphone com sistema operacional _Android_. A instalação é feita por meio do arquivo em extensão _.apk_, o qual deve estar armazenado no celular a ser utilizado. Não há a possibilidade de baixar o aplicativo e instalá-lo por meio da _Play Store_ (loja de alicativos do _Android_), visto que o mesmo não se encontra na loja.

Na confecção do projeto, foi utilizado para testes um smartphone com _Android_ versão 6.0, sendo que há a possibilidade de o aplicativo não funcionar corretamente em celulares com versões diferentes do sistema operacional. O próximo passo é energizar o acionador de cargas (6V no pino jack), conectando o microcontrolador à PCB desenvolvida, para que o seu módulo _Bluetooth_ esteja operante, e, nas configurações de _Bluetooth_ do smartphone, realizar o pareamento com o módulo _Bluetooth_.

Em seguida, é preciso iniciar o aplicativo instalado, ligar o _Bluetooth_ do smartphone e tocar no botão "Procurar". Ao realizá-lo, será aberta uma tela com os dispositivos _Bluetooth_ pareados com o smartphone, e neste momento seleciona-se o módulo _Bluetooth_ respectivo.

De volta à tela inicial, é necessário tocar no botão "Conectar". Como aplicativo possui uma memória para os dispositivos _Bluetooth_ previamente pesquisados e selecionados, depois do primeiro uso a tela se mostrará como a tela inicial do aplicativo.

Neste momento, o smartphone se conectará ao módulo _Bluetooth_, e os botões referentes aos relés serão mostrados na tela.

De forma bastante intuitiva, ao tocar em um dos botões dos relés, é aberta uma tela onde será possível encontrar um botão "Liga/Desliga", este apresentando o comando de ligar e desligar o relé. É possível voltar à tela inicial tocando o botão de voltar do celular (triângulo apontado para a esquerda situado na região inferior esquerda), e selecionar outro relé para ser acionado.
