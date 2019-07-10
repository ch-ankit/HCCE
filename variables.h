#ifndef VARIABLES_H
#define VARIABLES_H
extern double ha;                         //ha=house area
extern int ft,cd;                         // ft=foundation type || dc=dimension of columns
extern double fd,fa;                      //depth of foundation || area of foundation
extern int sn,bt;                            //ns=no. of stories ||
extern double dlo,dli;                    //lod=length of outer dpc || lid=length of inner dpc
extern double costdpc;
extern double ctcp,bkcp,rdcp,sncp,stcp;   //cost price of: cement per unit vol.,brick per piece,rod per kg,sand per unit volume,stone per unit kg
extern double wh[3],wwo[3],wwi[3];                 //wall height ,wall width outer & inner
extern int dno[3],dni[3],wno[3],wni[3];               //door no. outer & inner, windows number outer & inner
extern double who[3],whi[3],wnwo[3],wnwi[3];          // windows height & width inner &outer
extern double dho[3],dhi[3],dwo[3],dwi[3];            // doors height & width inner &out
extern double st[3],sa[3];                      //slab thickness & area
extern double ws[3];                         //width of inner staircase
extern int wti[3],wto[3],bd[3];                     //window type inner/outer beam dimension
//database variables
extern double b1p,b2p,opc,ppc,snd,grav,rods,stn;
extern double marble,tile,granite,al,wood,upvc;
extern double brick_vol,cem_vol,sand_vol,grav_vol,rod_dens,stn_dens;
#endif // VARIABLES_H
