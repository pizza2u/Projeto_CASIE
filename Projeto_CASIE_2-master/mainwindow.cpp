#include "mainwindow.h"
#include "ui_mainwindow.h"

const QString AUTOMATICO = "Automatico";
const QString MANUAL = "Manual";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    for(auto& item : QSerialPortInfo::availablePorts()){
        ui->box_serial->addItem(item.portName());
    }

    for(auto& item : QSerialPortInfo::standardBaudRates()){
        ui->box_velocidade->addItem(QString::number(item));
        serial.setBaudRate(115200);
    }

    connect(&serial,
            SIGNAL(readyRead()),
            this,
            SLOT(dadosRecebidos()));

//    for(auto& item : QSerialPortInfo::availablePorts())
//        ui->box_serial->addItem(item.portName());

//    for(auto& item : QSerialPortInfo::standardBaudRates())
//        ui->box_velocidade->addItem(QString::number(item) );


//    connect(&serial,
//            SIGNAL(readyRead()),
//            this,
//            SLOT(dadosRecebidos()));
   }

MainWindow::~MainWindow()
{
    serial.close();
    delete ui;
}

void MainWindow::dadosRecebidos() //json que esta reccebendo sdo arduino
{
    auto data = serial.readAll();
    auto dados = QJsonDocument::fromJson(data).object().toVariantMap();

    if(dados.contains("LUMINOSIDADE")){
        Luminosidade = dados["LUMINOSIDADE"].toString();
        ui->lbl_LDR->setText(Luminosidade);
        }

    if(dados.contains("UMIDADE_SOLO")){
        Umidade_Solo = dados["UMIDADE_SOLO"].toString();
        ui->lbl_umidade_solo->setText(Umidade_Solo);
        }

 /*   if(dados.contains("TEMPERATURA_AR")){
        Temperatura_ar = dados["TEMPERATURA_AR"].toString();
        ui->lbl_temperatura_ar->setText(Temperatura_ar);
        }

    if(dados.contains("UMIDADE_AR")){
        Umidade_ar = dados["UMIDADE_AR"].toString();
        ui->lbl_umidade_ar->setText(Umidade_ar);
        }*/
}

void MainWindow::on_btnPlug_clicked() //
{
    plugStatus = !plugStatus;

    if(plugStatus){
        serial.setPortName(ui->box_serial->currentText());
        serial.setBaudRate(115200);

        if(serial.open(QIODevice::ReadWrite)){
            ui->status_conexao->setText("Status: Conectado");
            ui->btnPlug ->setText("Desconectar");
        }
    }
}


void MainWindow::on_btnModo_Activated(const QString &arg1) //manda  o json para o arduino
{
    //if(ui->combo_Sistema->setCurrentText("Automatico")) {
       if (arg1 == AUTOMATICO){
           serial.write("{\"MODO\": 1}");
       }

       if (arg1 == MANUAL){
           serial.write("{\"MODO\": 2}");
       }
} //falta dizer ao json que é para desligar ou ligar a valvula

void MainWindow::on_btnLigaDesliga_clicked()
{
    if(ui->combo_Sistema->currentText() == MANUAL){
        if(status_valvula == true)
            status_valvula = false;

        if(status_valvula == false)
            status_valvula = true;
    }
    else{
        QMessageBox::warning(this,"AVISO!","O Modulo Manual não está ativado, você não pode ligar/desligar.");
    }

}

//LEMBRAR DE COLOCAR UM BOTAO BOOL DE DESLIGA E LIGA VALVULA, SERIA BOM UM BOTÃO DE VALVULA, EM VEZ DAQUELE QUE TEM DESLIGAR
