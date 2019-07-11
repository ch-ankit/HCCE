#include "hcce.h"
#include "ui_hcce.h"
#include "variables.h"
#include "secondstorey.h"
#include "thirdstorey.h"
//variables
double ha=0;                         //ha=house area
int ft=0,cd=0;                         // ft=foundation type || dc=dimension of columns
double fd=0,fa=0;                      //depth of foundation || area of foundation
int sn=0,bt=0;                            //ns=no. of stories ||brick type
double dlo=0,dli=0;                    //lod=length of outer dpc || lid=length of inner dpc
double wh_1=0,wwo_1=0,wwi_1=0;                 //wall height ,wall width outer & inner
int dno_1=0,dni_1=0,wno_1=0,wni_1=0;               //door no. outer & inner, windows number outer & inner
double who_1=0,whi_1=0,wnwo_1=0,wnwi_1=0;          // windows height & width inner &outer
double dho_1=0,dhi_1=0,dwo_1=0,dwi_1=0;            // doors height & width inner &out
double st_1=0,sa_1=0;                      //slab thickness & area
double ws_1=0;                         //width of inner staircase
int wti_1=0,wto_1=0,bd_1=0;                     //window type inner/outer beam dimension
int sf,tf;

HCCE::HCCE(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HCCE)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

HCCE::~HCCE()
{
    delete ui;
}

void HCCE::on_DSA_valueChanged(double arg1)
{
   ha=arg1;
}

void HCCE::on_SBNS_valueChanged(int arg1)
{
   sn=arg1;
}



void HCCE::on_CBFT_3_currentIndexChanged(int index)
{
    bt=index;
}

void HCCE::on_CBFT_currentIndexChanged(int index)
{
    ft=index;
}

void HCCE::on_CBDC_currentIndexChanged(int index)
{
    cd=index;
}

void HCCE::on_DSLOD_valueChanged(double arg1)
{
    dlo=arg1;
}

void HCCE::on_DSLID_valueChanged(double arg1)
{
    dli=arg1;
}

void HCCE::on_DSTS_valueChanged(double arg1)
{
    st_1=arg1;
}


void HCCE::on_DSWH_valueChanged(double arg1)
{
    wh_1=arg1;
}

void HCCE::on_DSWW_valueChanged(double arg1)
{
    wwo_1 = arg1;
}

void HCCE::on_DSWWI_valueChanged(double arg1)
{
    wwi_1=arg1;
}

void HCCE::on_DSDB_currentIndexChanged(int index)
{
    bd_1=index;
}

void HCCE::on_DSWIS_valueChanged(double arg1)
{
    ws_1=arg1;
}

void HCCE::on_DSNOD_valueChanged(int arg1)
{
    dno_1=arg1;
}

void HCCE::on_DSNOW_valueChanged(int arg1)
{
    wno_1=arg1;
}

void HCCE::on_DSODW_valueChanged(double arg1)
{
    dwo_1=arg1;
}

void HCCE::on_DSODH_valueChanged(double arg1)
{
    dho_1=arg1;
}

void HCCE::on_CBTWI_currentIndexChanged(int index)
{
    wto_1=index;
}

void HCCE::on_DSOWNW_valueChanged(double arg1)
{
    wnwo_1=arg1;
}

void HCCE::on_DSOWNH_valueChanged(double arg1)
{
    who_1=arg1;
}

void HCCE::on_DSNDI_valueChanged(int arg1)
{
    dni_1=arg1;
}

void HCCE::on_DSNWI_valueChanged(int arg1)
{
    wni_1=arg1;
}

void HCCE::on_DSIDW_valueChanged(double arg1)
{
    dwi_1=arg1;
}

void HCCE::on_DSIDH_valueChanged(double arg1)
{
    dhi_1=arg1;
}

void HCCE::on_CBTWO_currentIndexChanged(int index)
{
    wti_1=index;
}

void HCCE::on_DSIWNW_valueChanged(double arg1)
{
    wnwi_1=arg1;
}

void HCCE::on_DSIWNH_valueChanged(double arg1)
{
    whi_1=arg1;
}








void HCCE::on_PBHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void HCCE::on_PBStruct_clicked()
{
  ui->stackedWidget->setCurrentIndex(1);
}

void HCCE::on_PBWall_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void HCCE::on_PBFrn_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
}

void HCCE::on_PBSt_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void HCCE::on_PBSt_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void HCCE::on_PB21_clicked()
{
    SecondStorey secstorey;
    secstorey.setModal(true);
    secstorey.exec();
}


void HCCE::on_PB21_2_clicked()
{
    thirdstorey thistorey;
    thistorey.setModal(true);
    thistorey.exec();
}


void HCCE::on_PB20_clicked()
{
    sf=1;
}

void HCCE::on_PB20_2_clicked()
{
    tf=1;
}

void HCCE::on_pushButton_3_clicked()
{

}
