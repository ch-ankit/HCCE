#include "variables.h"
#include "thirdstorey.h"
#include "ui_thirdstorey.h"
//variables
 double wh_3=0,wwo_3=0,wwi_3=0;                 //wall height ,wall width outer & inner
 int dno_3=0,dni_3=0,wno_3=0,wni_3=0;               //door no. outer & inner, windows number outer & inner
 double who_3=0,whi_3=0,wnwo_3=0,wnwi_3=0;          // windows height & width inner &outer
 double dho_3=0,dhi_3=0,dwo_3=0,dwi_3=0;            // doors height & width inner &out
 double st_3=0,sa_3=0;                      //slab thickness & area
 double ws_3=0;                         //width of inner staircase
 int wti_3=0,wto_3=0,bd_3=0;                     //window type inner/outer beam dimension
thirdstorey::thirdstorey(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdstorey)
{
    ui->setupUi(this);
}

thirdstorey::~thirdstorey()
{
    delete ui;
}




void thirdstorey::on_DSWH_valueChanged(double arg1)
{
    wh_3=arg1;
}

void thirdstorey::on_DSWW_valueChanged(double arg1)
{
    wwo_3=arg1;
}

void thirdstorey::on_DSWWI_valueChanged(double arg1)
{
    wwi_3=arg1;
}

void thirdstorey::on_DSDB_currentIndexChanged(int index)
{
    bd_3=index;
}

void thirdstorey::on_DSWIS_valueChanged(double arg1)
{
    ws_3=arg1;
}

void thirdstorey::on_DSNOD_valueChanged(int arg1)
{
    dno_3=arg1;
}

void thirdstorey::on_DSNOW_valueChanged(int arg1)
{
    wno_3=arg1;
}

void thirdstorey::on_DSODW_valueChanged(double arg1)
{
    dwo_3=arg1;
}

void thirdstorey::on_DSODH_valueChanged(double arg1)
{
    dho_3=arg1;
}

void thirdstorey::on_CBTWI_currentIndexChanged(int index)
{
    wto_3=index;
}

void thirdstorey::on_DSOWNW_valueChanged(double arg1)
{
    wnwo_3=arg1;
}

void thirdstorey::on_DSOWNH_valueChanged(double arg1)
{
    who_3=arg1;
}

void thirdstorey::on_DSNDI_valueChanged(int arg1)
{
    dni_3=arg1;
}

void thirdstorey::on_DSNWI_valueChanged(int arg1)
{
    wni_3=arg1;
}

void thirdstorey::on_DSIDW_valueChanged(double arg1)
{
    dwi_3=arg1;
}

void thirdstorey::on_DSIDH_valueChanged(double arg1)
{
    dhi_3=arg1;
}

void thirdstorey::on_CBTWO_activated(int index)
{
    wti_3=index;
}

void thirdstorey::on_DSIWNW_valueChanged(double arg1)
{
    wnwi_3=arg1;
}

void thirdstorey::on_DSIWNH_valueChanged(double arg1)
{
    whi_3=arg1;
}


void thirdstorey::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void thirdstorey::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


