#include "variables.h"
#include "thirdstorey.h"
#include "ui_thirdstorey.h"
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
    wh[1]=arg1;
}

void thirdstorey::on_DSWW_valueChanged(double arg1)
{
    wwo[1]=arg1;
}

void thirdstorey::on_DSWWI_valueChanged(double arg1)
{
    wwi[1]=arg1;
}

void thirdstorey::on_DSDB_currentIndexChanged(int index)
{
    bd[1]=index;
}

void thirdstorey::on_DSWIS_valueChanged(double arg1)
{
    ws[1]=arg1;
}

void thirdstorey::on_DSNOD_valueChanged(int arg1)
{
    dno[1]=arg1;
}

void thirdstorey::on_DSNOW_valueChanged(int arg1)
{
    wno[1]=arg1;
}

void thirdstorey::on_DSODW_valueChanged(double arg1)
{
    dwo[1]=arg1;
}

void thirdstorey::on_DSODH_valueChanged(double arg1)
{
    dho[1]=arg1;
}

void thirdstorey::on_CBTWI_currentIndexChanged(int index)
{
    wto[1]=index;
}

void thirdstorey::on_DSOWNW_valueChanged(double arg1)
{
    wnwo[1]=arg1;
}

void thirdstorey::on_DSOWNH_valueChanged(double arg1)
{
    who[1]=arg1;
}

void thirdstorey::on_DSNDI_valueChanged(int arg1)
{
    dni[1]=arg1;
}

void thirdstorey::on_DSNWI_valueChanged(int arg1)
{
    wni[1]=arg1;
}

void thirdstorey::on_DSIDW_valueChanged(double arg1)
{
    dwi[1]=arg1;
}

void thirdstorey::on_DSIDH_valueChanged(double arg1)
{
    dhi[1]=arg1;
}

void thirdstorey::on_CBTWO_activated(int index)
{
    wti[1]=index;
}

void thirdstorey::on_DSIWNW_valueChanged(double arg1)
{
    wnwi[1]=arg1;
}

void thirdstorey::on_DSIWNH_valueChanged(double arg1)
{
    whi[1]=arg1;
}


void thirdstorey::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void thirdstorey::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


