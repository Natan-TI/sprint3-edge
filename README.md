<h1 align="center">UrbanFlow - Sprint 3 Edge</h1>
<img src="./images/nodered.png" width="450px;" alt="Foto do Projeto Arduino"/><br>
<img src="./images/dashboard.png" width="450px;" alt="Foto do Projeto Arduino"/><br>
<img src="./images/simulide.png" width="450px;" alt="Foto do Projeto Arduino"/><br>
<img src="./images/com0com.png" width="450px;" alt="Foto do Projeto Arduino"/><br>
  
## :link: Links
  <br>
* Youtbe: https://youtu.be/vmT0nWzwzgU


## :memo: Descrição do projeto

* O urban flow é um aplicativo  que mostra para os usuarios, qual a melhor rota de ônibus que  o usuario deve tomar  para que chegue em seu destino com melhor tempo, tambem levando em consideração a lotação do ônibus para que o usuario não tenha que pegar um ônibus lotado, todas essas informações (lotação, localização e tempo de espera) são mostradas no aplicativo assim que você seleciona sua rota, onde você tambem pode salvar essa rota para caso utilize ela mais de uma vez e não queira pesquisar toda hora, e uma ultima funcionalidade é que a cada mês o sistema gera um relatorio com todas as informações coletadas, como lotação media de tal ônibus, horarios com mais e menos movimento etc.
  <br>
* Pensando nisso adequamos essa ideia, utilizando botões nas entradas e saídas dos ônibus, linkadas ao arduino que passa essas informações para o node-red, no node-red transferimos essas informações para um dashboard, facilitando a visualização das informações obtidas. 

## :books: Funcionalidades

* <b>Botão de entrada</b>: Quando pressionadodetecta que uma pessoa acabou de entrar no ônibus.
  <br>
* <b>Botão de saída</b>:  Quando pressionadodetecta que uma pessoa acabou de sair no ônibus.
  <br>
* <b>Dashboard</b>:  A informação de quantidades de pessoas no ônibus é armazenada e exibida em dois gráficos

## :seedling: Instruções de uso

* Clonar repositório
  <br>
* Colocar o código na IDE Arduino
  <br>
* Fazer as devidas conexões dos botões no Arduino Uno R3
  <br>
* Instalar o Node-red
  <br>
* Fazer as devidas conexões no flow do node-red
  <br>
* Abrir o dashboard
  <br>
* Rodar o programa

## :clipboard: Requisitos

* 1 Arduino Uno R3
  <br>
* IDE Arduino
  <br>
* 2 botões
  <br>
* Node-red
  <br>
* Ligação ao computador

## :hammer: Dependências
* Biblioteca ArduinoJson.h no IDE Arduino para o node-red conseguir ler as informações do arduino
  <br>
* Instalação do node-red
  <br>
* Biblioteca node-red-node-serialport no node-red para que ele identifique o arduino numa porta COM
  <br>
* Biblioteca node-red-dashboard no node-red para que ele crie os gráficos 

## :wrench: Tecnologias utilizadas

* Arduino;
  <br>
* C++;
  <br>
* Botões;
  <br>
* Node-red;
  <br>
* SimulIDE;
  <br>
* com0com;


## :handshake: Colaboradores
<table>
  <tr>
    <td align="center">
        <sub>
          <b>Enzo Luiz Goulart - RM99666</b>
          <br>
        </sub>
        <sub>
          <b>Natan Eguchi dos Santos - RM98720</b>
          <br>
        </sub>
        <sub>
          <b>Kayky Paschoal Ribeiro - RM99929</b>
          <br>
        </sub>
        <sub>
          <b>Gustavo Henrique Santos Bonfim - RM98864</b>
          <br>
        </sub>
        <sub>
          <b>Lucas Yuji Farias Umada - RM99757 </b>
          <br>
        </sub>
    </td>
  </tr>
</table>

## :dart: Status do projeto
Em desenvolvimento :hourglass_flowing_sand: