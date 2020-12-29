#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QPixmap"


int visitados[11],pai[11];
int i,j,v,custo;
int matriz[11][11];
QList<int> fila,avisitar;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("E:/Documents/8 Sem/IA/1 Unidad/Projeto/grafo.png");
    ui->label_pic->setPixmap(pix);

    matriz[1][2]=10;
    matriz[1][7]=15;
    matriz[1][6]=5;
    matriz[1][4]=20;
    matriz[1][5]=20;
    matriz[2][3]=5;
    matriz[2][4]=10;
    matriz[3][2]=15;
    matriz[3][4]=5;
    matriz[4][5]=10;
    matriz[5][6]=5;
    matriz[7][6]=10;
    matriz[8][7]=5;
    matriz[8][2]=20;
    matriz[8][1]=5;
    matriz[9][8]=20;
    matriz[9][2]=15;
    matriz[9][10]=10;
    matriz[10][2]=5;
    matriz[10][3]=15;

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
    i= ui->lineEdit->text().toInt();
    j= ui->lineEdit_2->text().toInt();

    if(i>10 or j>10){
        QMessageBox msgB1;
        msgB1.setText("Um dos nós não existe");
        msgB1.exec();
    }
    else{
    v=0;
    avisitar.push_front(i);
    while(avisitar.empty()!=1){
        i = avisitar.front();
        avisitar.pop_front();
        visitados[i]= 1;
            if(i==j){
                v=1;
                for(int k =1; k<11; k++){
                visitados[k]=0;
                }
              break;
             }
             for(int k=1;k<11; k++ ){
                    if(matriz[i][k] != 0 and visitados[k]==0 ){
                           avisitar.push_back(k);
                           visitados[k]= 1;
                           pai[k]=i;
                                            }

                                        }
                                        }
                                        if(v==1){

                                            ui->label_6->setText("Custo:");
                                            int y =j;
                                            QString caminho = QString::number(y);
                                            ui->listWidget->addItem("Caminho: " );
                                            ui->listWidget->addItem(caminho);
                                            custo = 0;
                                            while(pai[y]!=0){
                                               QString caminho = QString::number(pai[y]);
                                               ui->listWidget->addItem(caminho);
                                               custo= matriz[pai[y]][y]+ custo;
                                               y=pai[y];
                                            }
                                            ui->label_7->setNum(custo);


                                        }else{
                                            QMessageBox msgB;
                                            msgB.setText("Os nó não estão conectados");
                                            msgB.exec();
                                                for(int k =0; k<11; k++){
                                                visitados[k]=0;
                                            }
                                            }
    }
}
