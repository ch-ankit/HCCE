#include <iostream>
#include "variables.h"
#include "hcce.h"
#include "secondstorey.h"
#include "thirdstorey.h"

//variables
double brick_vol,cem_vol,sand_vol,grav_vol,rod_dens,stn_dens,bvcs;
double b1p,b2p,opc,ppc,snd,grav,rods,stn;
double dpc();
double wall();

double dpc(){
        double hdpc=0.2;
        double wdpc = wwo_1+.05*wwo_1;
        double vdpc=hdpc*wdpc*(dlo+dli);
        double vrdpc=0.04*vdpc;
        double vcdpc=0.137*vdpc;
        double vsndpc=0.274*vdpc;
        double vagdpc=0.548*vdpc;
        double costdpc = (vrdpc*rod_dens*rods)+((vcdpc/cem_vol)*opc)+(vsndpc/sand_vol*snd)+(vagdpc/grav_vol*snd);
        return costdpc;
}

    double wall(){
        double vwall_1=0,vwall_2=0,vwall_3=0;
        int nbrick=0;
        vwall_1=(wwo_1*wh_1*dlo)+(wwi_1*wh_1*dli);
        vwall_2=(wwo_2*wh_2*dlo)+(wwi_2*wh_2*dli);
        vwall_3=(wwo_3*wh_3*dlo)+(wwi_3*wh_3*dli);
        nbrick=(vwall_1/bvcs)+(vwall_2/bvcs)+(vwall_3/bvcs);
        double brick=0;
        if(bt==0)  brick=nbrick*b1p;
        else       brick=nbrick*b2p;
        double vcs=nbrick*(bvcs-brick_vol);
        double vcem=vcs/7;
        double vsnd=(6*vcs)/7;
        double costwall=brick+((vcem/cem_vol)*ppc)+((vsnd/sand_vol)*snd);
        return costwall;
    }


