# CASIE - Controle Automatizado do Sistema de Irrigação

![CASIE](https://github.com/pizza2u/Projeto_CASIE/blob/master/Imagens/CASIE_Easy-Resize.com%20(1).jpg)

Projeto da 3ª avaliação da disciplina de Técnicas de Programação 2019.2

Aplicação do CASIE com a framework Qt e o microcontrolador NodeMCU ESP32 e Arduino Uno.

--------------------------------------------------------------------------------------------

## Sumário
* [Sobre CASIE](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#sobre-casie)
   * [Para quê serve o CASIE](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#para-qu%C3%AA-serve-o-casie)
* [Manual do Usuário](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#manual)
   * [Como funciona o CASIE](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#como-funcionar-o-casie)
   * [Software do CASIE](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#software-do-casie)
       * [Conexão e Acionamento da válvula](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#acionamento-da-v%C3%A1lvula)
       * [ Informações geradas](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#informa%C3%A7%C3%B5es-geradas)
       * [Formas para acionar](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#formas)
       
   * [Utilização do site](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#utiliza%C3%A7%C3%A3o-do-site)
       * [Estatísticas](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#estast%C3%ADsticas)
* [Informações técnicas](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#informa%C3%A7%C3%B5es-t%C3%A9cnicas)
    * [Materiais](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#materiais)
    * [Página Web]
* [Para mais informações](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#para-mais-informa%C3%A7%C3%B5es)
    * [Contato](https://github.com/pizza2u/Projeto_CASIE/blob/master/README.md#contato)


 ## Sobre CASIE 
CASIE (Controle automatizado do sistema de irrigação), é um projeto desenvolvido para disciplina de Técnicas de Programação, por alunos do curso bacharelado de Engenharia Elétrica, do Instituto Federal da Paraiba (IFPB), do campus de João Pessoa. Que tem como principal função, ser um sistema de irrigação controlada de forma automática, que visa regar as plantas de acordo com o estado em que essas se encontram, tal como a umidade do solo e a luminosidade. 

 * ####  `` Para quê serve o CASIE ``
  `` O CASIE é uma ferramenta que busca verificar as melhores condições de irrigação para planta, além de realizar o manejo em relação a aguagem. Mas também oferece a opção manual, caso o usuário queira realizar a prática. Além disso, enquanto os animais obtêm alimento comendo outros seres vivos, as plantas fabricam elas mesmas a matéria orgânica que lhes servem de alimento. Para isso utilizam gás carbônico proveniente do ar e água e sais minerais (nutrição inorgânica) retirados do solo.``
  
  ## Manual
  A finalidade do projeto é levar informações sobre o estado de características que influenciam na vida da planta. Além de obter opções para cuidar da umidade e alimentação da vegetação. As informações podem ser acessadas apenas ao entrar no [site]().
  
  ### Como funcionar o CASIE
  A priori, o funcionamento é definido a partir da interface QT Creator. Com botões que facilitam a ação da irrigação,e dados que serão mostrados de acordo com os sensores utilizados.
  
  
  
  ### Software do CASIE
   O software do programa foi projetado na interface QT Creator como forma para comandar a válvula e mostrar dados recolhidos pelos sensores.
  
  
  ##### Conexão e Acionamento da Válvula
   ![interface](https://github.com/pizza2u/Projeto_CASIE/blob/master/Imagens/interface.1.png)
   
   Utilizando a porta serial e a velocidade para realizar a conexão, definido pelo usuário. Abaixo, é definido os **status**, se está conectado ou desconectado.
   
   É importante salienta, que o acionamento da válvula é realizada com a utilização de um botão, que somente é ativado no modo manual.
   
  ![valvula](https://github.com/pizza2u/Projeto_CASIE/blob/master/Imagens/valvula.png)
  
  Os dados obtido com os sensores de luminosidade(LDR), e umidade do solo, são mostrados em uma caixa abaixo da conexão serial.
  ![dados](https://github.com/pizza2u/Projeto_CASIE/blob/master/Imagens/dados.png)
  
  Ao modo automático, a válvula é ligada de forma direta com a relação dos dados obtidos.
  ##### Informações Geradas
  
  As principais informações que serão geradas são: Umidade do solo e luminosidade.
  
  A umidade do solo ou teor em água é definida como a massa da água contida em uma amostra de solo dividido pela massa de solo seco.
  
  A luminosidade é um dos aspectos mais importantes na hora de escolhermos uma planta para um determinado local. 
  
  ##### Formas
  O CASIE disponibiliza duas formas para o manuseamento da irrigação, sendo elas: automática e manual.
   *  Automática: A forma automática possui toda estrutura que oferece o acionamento da válvula de acordo com os estados que os sensores detectarem,ou seja, será ligada se as condições da planta forem inadequadas para sua vida.
   *  Manual: O modo manual, serve para que independente da condição em que a umidade do solo e a luminosadade se encontra, delimitar a irrigação. Opção definida pelo usuário.
  
  ## Utilização do Site
  
  ### Estastísticas 
  
  
  ## Informações Técnicas
  
  ### Materiais
   * ESP - WROOM32
   * Resistor 1k
   * Jumpers
   * Protoboard
   * Sensor de umidade do solo
   * LDR
  

  
  ### Página Web
  
  
  
  
 -------------------------------------------------------------------------------------------------------------------------
  **Feito por [Sara Victória](https://github.com/pizza2u), [Victor Emanuel](https://github.com/vicgomes) e [Ildja Vivianne](https://github.com/ildja)**
  
  
  ## Para mais informações
 #### Contato
  
  * Ildja : `` ildjaviviane1@gmail.com       ``
  * Victor : ``gomes.victor@academico.ifpb.edu.br ``
  * Sara: ``email: sara.nobrega@academico.ifpb.edu.br ``
