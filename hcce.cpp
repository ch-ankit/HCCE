#include "hcce.h"
#include "ui_hcce.h"
#include "variables.h"
#include "secondstorey.h"
#include "thirdstorey.h"
  double ha;                         //ha=house area
  int ft,cd;                         // ft=foundation type || dc=dimension of columns
  double fd,fa;                      //depth of foundation || area of foundation
  int sn,bt;                            //ns=no. of stories ||
  double dlo,dli;                    //lod=length of outer dpc || lid=length of inner dpc
  double costdpc;
  double ctcp,bkcp,rdcp,sncp,stcp;   //cost price of: cement per unit vol.,brick per piece,rod per kg,sand per unit volume,stone per unit kg
  double wh[3],wwo[3],wwi[3];                 //wall height ,wall width outer & inner
  int dno[3],dni[3],wno[3],wni[3];               //door no. outer & inner, windows number outer & inner
  double who[3],whi[3],wnwo[3],wnwi[3];          // windows height & width inner &outer
  double dho[3],dhi[3],dwo[3],dwi[3];            // doors height & width inner &out
  double st[3],sa[3];                      //slab thickness & area
  double ws[3];                         //width of inner staircase
  int wti[3],wto[3],bd[3];                     //window type inner/outer beam dimension
//database variables
  double b1p,b2p,opc,ppc,snd,grav,rods,stn;
  double marble,tile,granite,al,wood,upvc;
  double brick_vol,cem_vol,sand_vol,grav_vol,rod_dens,stn_dens;
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
    st[0]=arg1;
}


void HCCE::on_DSWH_valueChanged(double arg1)
{
    wh[0]=arg1;
}

void HCCE::on_DSWW_valueChanged(double arg1)
{
    wwo[0] = arg1;
}

void HCCE::on_DSWWI_valueChanged(double arg1)
{
    wwi[0]=arg1;
}

void HCCE::on_DSDB_currentIndexChanged(int index)
{
    bd[0]=index;
}

void HCCE::on_DSWIS_valueChanged(double arg1)
{
    ws[0]=arg1;
}

void HCCE::on_DSNOD_valueChanged(int arg1)
{
    dno[0]=arg1;
}

void HCCE::on_DSNOW_valueChanged(int arg1)
{
    wno[0]=arg1;
}

void HCCE::on_DSODW_valueChanged(double arg1)
{
    dwo[0]=arg1;
}

void HCCE::on_DSODH_valueChanged(double arg1)
{
    dho[0]=arg1;
}

void HCCE::on_CBTWI_currentIndexChanged(int index)
{
    wto[0]=index;
}

void HCCE::on_DSOWNW_valueChanged(double arg1)
{
    wnwo[0]=arg1;
}

void HCCE::on_DSOWNH_valueChanged(double arg1)
{
    who[0]=arg1;
}

void HCCE::on_DSNDI_valueChanged(int arg1)
{
    dni[0]=arg1;
}

void HCCE::on_DSNWI_valueChanged(int arg1)
{
    wni[0]=arg1;
}

void HCCE::on_DSIDW_valueChanged(double arg1)
{
    dwi[0]=arg1;
}

void HCCE::on_DSIDH_valueChanged(double arg1)
{
    dhi[0]=arg1;
}

void HCCE::on_CBTWO_currentIndexChanged(int index)
{
    wti[0]=index;
}

void HCCE::on_DSIWNW_valueChanged(double arg1)
{
    wnwi[0]=arg1;
}

void HCCE::on_DSIWNH_valueChanged(double arg1)
{
    whi[0]=arg1;
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
