#include "variables.h"
#include "secondstorey.h"
#include "ui_secondstorey.h"
//variables
 double wh_2=0,wwo_2=0,wwi_2=0;                 //wall height ,wall width outer & inner
 int dno_2=0,dni_2=0,wno_2=0,wni_2=0;               //door no. outer & inner, windows number outer & inner
 double who_2=0,whi_2=0,wnwo_2=0,wnwi_2=0;          // windows height & width inner &outer
 double dho_2=0,dhi_2=0,dwo_2=0,dwi_2=0;            // doors height & width inner &out
 double st_2=0,sa_2=0;                      //slab thickness & area
 double ws_2=0;                         //width of inner staircase
 int wti_2=0,wto_2=0,bd_2=0;                     //window type inner/outer beam dimension
SecondStorey::SecondStorey(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondStorey)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

SecondStorey::~SecondStorey()
{
    delete ui;
}



void SecondStorey::on_DSWH_valueChanged(double arg1)
{
    wh_2=arg1;
}

void SecondStorey::on_DSWW_valueChanged(double arg1)
{
    wwo_2=arg1;
}

void SecondStorey::on_DSWWI_valueChanged(double arg1)
{
    wwi_2=arg1;
}

void SecondStorey::on_DSDB_currentIndexChanged(int index)
{
    bd_2=index;
}

void SecondStorey::on_DSWIS_valueChanged(double arg1)
{
    ws_2=arg1;
}

void SecondStorey::on_DSNOD_valueChanged(int arg1)
{
    dno_2=arg1;
}

void SecondStorey::on_DSNOW_valueChanged(int arg1)
{
    wno_2=arg1;
}

void SecondStorey::on_DSODW_valueChanged(double arg1)
{
    dwo_2=arg1;
}

void SecondStorey::on_DSODH_valueChanged(double arg1)
{
    dho_2=arg1;
}

void SecondStorey::on_CBTWI_currentIndexChanged(int index)
{
    wto_2=index;
}

void SecondStorey::on_DSOWNW_valueChanged(double arg1)
{
    wnwo_2=arg1;
}

void SecondStorey::on_DSOWNH_valueChanged(double arg1)
{
    who_2=arg1;
}

void SecondStorey::on_DSNDI_valueChanged(int arg1)
{
    dni_2=arg1;
}

void SecondStorey::on_DSNWI_valueChanged(int arg1)
{
    wni_2=arg1;
}

void SecondStorey::on_DSIDW_valueChanged(double arg1)
{
    dwi_2=arg1;
}

void SecondStorey::on_DSIDH_valueChanged(double arg1)
{
    dhi_2=arg1;
}

void SecondStorey::on_CBTWO_activated(int index)
{
    wti_2=index;
}

void SecondStorey::on_DSIWNW_valueChanged(double arg1)
{
    wnwi_2=arg1;
}

void SecondStorey::on_DSIWNH_valueChanged(double arg1)
{
    whi_2=arg1;
}


void SecondStorey::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void SecondStorey::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

