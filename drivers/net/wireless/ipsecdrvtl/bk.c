/*
   'src_ipsec_pgpIPsecComp.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Mon Oct 29 11:54:27 2012
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb353) || ! defined( bb344)
#define bb335 1
#define bb337 1
#else
#define bb329 bb343
#define bb346 1
#define bb355 1
#endif
#define bb332 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbs bbl bbf, *bb1;bba bbs bbe bbq, *bb94;bba bb135 bb124, *bb356;
bba bbs bbl bb39, *bb72;bba bbs bb135 bbk, *bb59;bba bbe bbu, *bb134;
bba bbh bbf*bb89;
#ifdef bb308
bba bbd bb60, *bb122;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb116
#define bb116
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb118
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
bba bb114 bb239;
#else
bba bbe bbu, *bb134, *bb205;
#define bb201 1
#define bb202 0
bba bb260 bb209, *bb247, *bb262;bba bbe bb221, *bb267, *bb282;bba bbs
bbq, *bb94, *bb207;bba bb6 bb283, *bb279;bba bbs bb6 bb245, *bb286;
bba bb6 bb119, *bb233;bba bbs bb6 bb64, *bb217;bba bb64 bb265, *bb258
;bba bb64 bb238, *bb252;bba bb119 bb114, *bb211;bba bb242 bb257;bba
bb280 bb124;bba bb229 bb83;bba bb112 bb120;bba bb112 bb249;
#ifdef bb276
bba bb269 bb39, *bb72;bba bb225 bbk, *bb59;bba bb236 bbd, *bb29;bba
bb281 bb56, *bb111;
#else
bba bb273 bb39, *bb72;bba bb227 bbk, *bb59;bba bb224 bbd, *bb29;bba
bb244 bb56, *bb111;
#endif
bba bb39 bbf, *bb1, *bb214;bba bbk bb292, *bb291, *bb285;bba bbk bb223
, *bb246, *bb284;bba bbd bb60, *bb122, *bb220;bba bb83 bb37, *bb259, *
bb234;bba bbd bb231, *bb288, *bb208;bba bb120 bb219, *bb263, *bb277;
bba bb56 bb222, *bb240, *bb256;
#define bb140 bbb
bba bbb*bb230, *bb77;bba bbh bbb*bb274;bba bbl bb213;bba bbl*bb218;
bba bbh bbl*bb82;
#if defined( bb118)
bba bbe bb113;
#endif
bba bb113 bb20;bba bb20*bb237;bba bbh bb20*bb191;
#if defined( bb275) || defined( bb266)
bba bb20 bb36;bba bb20 bb117;
#else
bba bbl bb36;bba bbs bbl bb117;
#endif
bba bbh bb36*bb253;bba bb36*bb255;bba bb60 bb212, *bb264;bba bbb*
bb107;bba bb107*bb250;
#define bb290( bb35) bbi bb35##__ { bbe bb268; }; bba bbi bb35##__  * \
 bb35
bba bbi{bb37 bb189,bb261,bb270,bb228;}bb272, *bb289, *bb243;bba bbi{
bb37 bb8,bb193;}bb232, *bb278, *bb287;bba bbi{bb37 bb235,bb215;}bb251
, *bb216, *bb271;
#endif
bba bbh bbf*bb89;
#endif
bba bbf bb103;
#define IN
#define OUT
#ifdef _DEBUG
#define bb145( bbc) bb32( bbc)
#else
#define bb145( bbc) ( bbb)( bbc)
#endif
bba bbe bb160, *bb173;
#define bb241 0
#define bb318 1
#define bb298 2
#define bb324 3
#define bb331 4
bba bbe bb357;bba bbb*bb121;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb31 bb334
#define bb43 bb336
bba bbs bb6 bb31;bba bb6 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb128(bb31 bb47);bbb bb108(bbb* );bbb*bb137(bb31 bb159,bb31 bb47);
#else
#define bb128( bbc) bb147(1, bbc, bb141)
#define bb108( bbc) bb342( bbc)
#define bb137( bbc, bbn) bb147( bbc, bbn, bb141)
#endif
#ifdef _WIN32
#define bb32( bbc) bb340( bbc)
#else
#ifdef _DEBUG
bbe bb144(bbh bbl*bb97,bbh bbl*bb25,bbs bb206);
#define bb32( bbc) ( bbb)(( bbc) || ( bb144(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb32( bbc) (( bbb)0)
#endif
#endif
bb43 bb301(bb43*bb323);
#ifndef _WIN32
bbe bb327(bbh bbl*bbg);bbe bb321(bbh bbl*bb19,...);
#endif
#ifdef _WIN32
bba bb347 bb96;
#define bb139( bbc) bb352( bbc)
#define bb142( bbc) bb345( bbc)
#define bb133( bbc) bb339( bbc)
#define bb132( bbc) bb330( bbc)
#else
bba bb349 bb96;
#define bb139( bbc) ( bbb)(  *  bbc = bb358( bbc))
#define bb142( bbc) (( bbb)0)
#define bb133( bbc) bb348( bbc)
#define bb132( bbc) bb354( bbc)
#endif
bba bbi bb1015*bb1022;bba bbi bb1029*bb1013;bba bbi bb995*bb1025;bba
bbi bb1001*bb1014;bba bbi bb1016*bb1026;bba bbi bb992*bb1024;bba bb9{
bb556=0 ,bb582=1 ,bb581=2 ,bb701=3 ,bb588=4 ,bb560=5 ,bb575=6 ,bb564=7 ,bb579
=9 ,}bb422;bba bb9{bb601=0 ,bb993,bb599,bb1012,bb929,bb931,bb926,bb919,
bb927,bb930,bb918,}bb515;bba bb83 bb4;bb9{bb98=0 ,bb363=-12000 ,bb351=-
11999 ,bb377=-11998 ,bb664=-11997 ,bb804=-11996 ,bb714=-11995 ,bb869=-
11994 ,bb894=-11992 ,bb771=-11991 ,bb873=-11990 ,bb723=-11989 ,bb623=-
11988 ,bb646=-11987 ,bb681=-11986 ,bb769=-11985 ,bb692=-11984 ,bb628=-
11983 ,bb648=-11982 ,bb795=-11981 ,bb903=-11980 ,bb673=-11979 ,bb836=-
11978 ,bb829=-11977 ,bb587=-11976 ,bb690=-11975 ,bb748=-11960 ,bb629=-
11959 ,bb683=-11500 ,bb721=-11499 ,bb844=-11498 ,bb785=-11497 ,bb684=-
11496 ,bb750=-11495 ,bb851=-11494 ,bb764=-11493 ,bb712=-11492 ,bb883=-
11491 ,bb635=-11490 ,bb663=-11489 ,bb694=-11488 ,bb881=-11487 ,bb835=-
11486 ,bb888=-11485 ,bb641=-11484 ,bb904=-11483 ,bb822=-11482 ,bb841=-
11481 ,bb831=-11480 ,bb746=-11479 ,bb640=-11478 ,bb707=-11477 ,bb747=-
11476 ,bb751=-11475 ,bb798=-11474 ,bb801=-11473 ,bb697=-11472 ,bb772=-
11460 ,bb636=-11450 ,bb727=-11449 ,bb699=-11448 ,bb722=-11447 ,bb850=-
11446 ,bb760=-11445 ,bb861=-11444 ,bb814=-11443 ,bb830=-11440 ,bb856=-
11439 ,bb781=-11438 ,bb718=-11437 ,bb689=-11436 ,bb667=-11435 ,bb617=-
11420 ,bb532=-11419 ,bb565=-11418 ,bb679=-11417 ,bb857=-11416 ,bb661=-
11415 ,bb768=-11414 ,bb720=-11413 ,bb840=-11412 ,bb738=-11411 ,bb676=-
11410 ,bb627=-11409 ,bb762=-11408 ,bb810=-11407 ,bb906=-11406 ,bb756=-
11405 ,bb886=-11404 ,bb651=-11403 ,bb749=-11402 ,bb630=-11401 ,bb672=-
11400 ,bb879=-11399 ,bb625=-11398 ,bb650=-11397 ,bb675=-11396 ,bb870=-
11395 ,bb794=-11394 ,bb833=-11393 ,bb800=-11392 ,bb685=-11391 ,bb892=-
11390 ,bb716=-11389 ,bb789=-11388 ,bb864=-11387 ,bb726=-11386 ,bb742=-
11385 ,bb693=-11384 ,bb899=-11383 ,bb644=-11382 ,bb638=-11381 ,bb724=-
11380 ,bb776=-11379 ,bb622=-11378 ,bb740=-11377 ,bb793=-11376 ,bb865=-
11375 ,bb784=-11374 ,bb797=-11373 ,bb677=-11372 ,bb758=-11371 ,bb660=-
11370 ,bb766=-11369 ,bb696=-11368 ,bb744=-11367 ,bb878=-11366 ,bb656=-
11365 ,bb843=-11364 ,bb907=-11363 ,bb386=-11350 ,bb691=bb386,bb703=-11349
,bb860=-11348 ,bb890=-11347 ,bb717=-11346 ,bb645=-11345 ,bb682=-11344 ,
bb813=-11343 ,bb658=-11342 ,bb807=-11341 ,bb752=-11340 ,bb732=-11339 ,
bb388=-11338 ,bb852=-11337 ,bb816=bb388,bb786=-11330 ,bb618=-11329 ,bb838
=-11328 ,bb773=-11327 ,bb709=-11326 ,bb639=-11325 ,bb796=-11324 ,bb862=-
11320 ,bb688=-11319 ,bb671=-11318 ,bb711=-11317 ,bb763=-11316 ,bb668=-
11315 ,bb759=-11314 ,bb713=-11313 ,bb782=-11312 ,bb757=-11300 ,bb637=-
11299 ,bb783=-11298 ,bb695=-11297 ,bb863=-11296 ,bb854=-11295 ,bb818=-
11294 ,bb649=-11293 ,bb837=-11292 ,bb891=-11291 ,bb901=-11290 ,bb791=-
11289 ,bb876=-11288 ,bb848=-11287 ,bb761=-11286 ,bb647=-11285 ,bb787=-
11284 ,bb853=-11283 ,bb725=-11282 ,bb670=-11281 ,bb788=-11280 ,bb846=-
11279 ,bb730=-11250 ,bb827=-11249 ,bb659=-11248 ,bb736=-11247 ,bb654=-
11246 ,bb834=-11245 ,bb686=-11244 ,bb743=-11243 ,bb819=-11242 ,bb799=-
11240 ,bb634=-11239 ,bb719=-11238 ,bb779=-11237 ,bb839=-11150 ,bb832=-
11100 ,bb808=-11099 ,bb729=-11098 ,bb858=-11097 ,bb624=-11096 ,bb780=-
11095 ,bb755=-11094 ,bb871=-11093 ,bb823=-11092 ,bb898=-11091 ,bb616=-
11090 ,bb874=-11089 ,bb884=-11088 ,bb842=-11087 ,bb815=-11086 ,bb770=-
11085 ,bb775=-11050 ,bb739=-11049 ,bb875=-10999 ,bb632=-10998 ,bb700=-
10997 ,bb741=-10996 ,bb905=-10995 ,bb674=-10994 ,bb872=-10993 ,bb824=-
10992 ,bb805=-10991 ,bb895=-10990 ,bb619=-10989 ,bb698=-10988 ,bb880=-
10979 ,bb653=-10978 ,bb845=-10977 ,bb877=-10976 ,bb733=-10975 ,bb705=-
10974 ,};bb9{bb552=1 ,};bbb*bb491(bbd bb1201,bbd bb374);bb4 bb457(bbb*
bb973);bba bbi bb1986 bb1972, *bb382;bba bb9{bb1995=0 ,bb1755=1 ,bb1769
=2 }bb774;bb4 bb1814(bb774 bb1871,bb382*bb359);bb4 bb1949(bb382 bb359,
bbf*bb431,bbd bb420,bbf*bb310,bbd bb293,bbd*bb434,bbd*bb304);bb4
bb1942(bb382 bb359,bbf*bb310,bbd bb293,bbd*bb304,bbu*bb976);bb4 bb1950
(bb382 bb359,bbf*bb431,bbd bb420,bbf*bb310,bbd bb293,bbd*bb434,bbd*
bb304,bbu*bb964);bb4 bb1799(bb382 bb359);bba bbi bb450{bb1 bb74;bbd
bb127;bbd bb181;bbi bb450*bb93;}bbx;bb4 bb472(bbx*bb900,bbd bb911,bbx
 *bb825,bbd bb859,bbd bb543);bb4 bb526(bbx*bbj,bbd bb92,bbh bbb*bb97,
bbd bb47);bb4 bb571(bbx*bbj,bbd bb92,bbb*bb129,bbd bb47);bbu bb678(
bbx*bbj,bbd bb92,bbh bbb*bb97,bbd bb47);bb4 bb2185(bbx*bb85,bbu bb177
,bbd bb483,bb774 bb1365,bbx*bb58,bbu*bb2087);bb4 bb2100(bbx*bb85,bbu
bb177,bb774 bb1365,bbx*bb58);
#define bb959 bb53(0x0800)
#define bb1142 bb53(0x0806)
#define bb952 bb53(0x01f4)
#define bb956 bb53(0x1194)
#define bb1137 bb53(0x4000)
#define bb1141 bb53(0x2000)
#define bb1112 bb53(0x1FFF)
#define bb1069( bb8) (( bb8) & bb53(0x2000 | 0x1FFF))
#define bb991( bb8) ((( bb194( bb8)) & 0x1FFF) << 3)
#define bb970( bb8) ((( bb8) & bb53(0x1FFF)) == 0)
#define bb494( bb8) (( bb8) & bb53(0x2000))
#define bb987( bb8) (!( bb494( bb8)))
#pragma pack(push, 1)
bba bbi{bbf bb369[6 ];bbf bb1008[6 ];bbk bb372;}bb365, *bb376;bba bbi{
bbf bb445[6 ];bbk bb372;}bb1083, *bb1093;bba bbi{bbf bb936:4 ;bbf bb1087
:4 ;bbf bb1054;bbk bb370;bbk bb867;bbk bb577;bbf bb1003;bbf bb254;bbk
bb614;bbd bb309;bbd bb203;}bb325, *bb317;bba bbi{bbk bb1035;bbk bb1046
;bbf bb1040;bbf bb1048;bbk bb1064;bbf bb1053[6 ];bbd bb1042;bbf bb1038
[6 ];bbd bb1066;}bb1076, *bb1081;
#pragma pack(pop)
bba bbi{bbk bb226;bbk bb427;bbk bb1007;bbk bb320;}bb412, *bb333;bba
bbi{bbk bb226;bbk bb583;bbd bb547;bbd bb920;bbf bb92;bbf bb172;bbk
bb158;bbk bb320;bbk bb990;}bb490, *bb313;bba bbi{bbf bb1092;bbf bb1071
;bbf bb1086;bbf bb1043;bbd bb1065;bbk bb1077;bbk bb374;bbd bb1061;bbd
bb1075;bbd bb1068;bbd bb1063;bbf bb1089[16 ];bbf bb1052[64 ];bbf bb25[
128 ];bbf bb1034[64 ];}bb1041, *bb1074;bba bbi{bbd bb309;bbd bb203;bbf
bb912;bbf bb254;bbk bb921;}bb612, *bb567;
#if defined( _WIN32)
#define bb53( bbc) (((( bbc) & 0XFF00) >> 8) | ((( bbc) & 0X00FF) <<  \
8))
#define bb194( bbc) ( bb53( bbc))
#define bb444( bbc) (((( bbc) & 0XFF000000) >> 24) | ((( bbc) &  \
0X00FF0000) >> 8) | ((( bbc) & 0X0000FF00) << 8) | ((( bbc) &  \
0X000000FF) << 24))
#define bb493( bbc) ( bb444( bbc))
#endif
bbk bb923(bbh bbb*bb295);bbk bb868(bbh bbb*bb504,bbe bb22);bb4 bb590(
bbx*bb85,bbf bb102,bbx*bb58);bb4 bb893(bbx*bb85,bbu bb177,bbf*bb405);
bb4 bb937(bbx*bb58,bbf*bb396);bb4 bb942(bbh bbf*bb396,bbx*bb58);bb4
bb541(bbx*bb50,bbf bb102,bbd*bb943);bb4 bb924(bbx*bb85,bbf bb102,bbf
bb405,bbx*bb58);bbd bb520(bbx*bb50);bbk bb548(bbx*bb50);bbb bb528(bbk
bb151,bbx*bb50);bbb bb540(bbx*bb50);bbb bb979(bbx*bb50,bbd*bb26);bbb
bb1030(bbx*bb50,bbd*bb26);bbb bb994(bbx*bb50,bbd bb26);bbb bb932(bbx*
bb50,bbd bb26);bbb bb984(bbx*bb50);bbu bb1017(bbf*bb50);bb9{bb1131=-
5000 ,bb1108=-4000 ,bb1000=-4999 ,bb989=-4998 ,bb1028=-4997 ,bb982=-4996 ,
bb1094=-4995 ,bb1085=-4994 ,bb1099=-4993 ,bb1009=-4992 ,bb1032=-4991 };bb4
bb1134(bb4 bb1138,bbd bb1119,bbl*bb1102);bba bb9{bb402,bb1501,}bb297;
bbk bb1208(bb297 bb706,bbh bbf*bb454);bbd bb546(bb297 bb706,bbh bbf*
bb454);bbb bb1174(bbk bb159,bb297 bb553,bbf bb435[2 ]);bbb bb975(bbd
bb159,bb297 bb553,bbf bb435[4 ]);bb4 bb2185(bbx*bb85,bbu bb177,bbd
bb483,bb774 bb1365,bbx*bb58,bbu*bb2087){bb4 bb18=bb98;bbd bb1219;bbd
bb169;bbd bb146;bbd bb1932;bbd bb1597;bbd bb157;bbd bb2105;bbd bb1880
;bbk bb151;bbk bb1992;bbf bb938;bbu bb2110=0 ;bbx*bb73=bb91;bbx*bb46=
bb91;bbx*bb2102=bb91;bb382 bb1627=bb91; *bb2087=0 ;bb151=bb548(bb85);
bbm(bb151<90 )bb2 bb472(bb85,0 ,bb58,0 ,bb151);bb300(bb1365){bb15 bb1755
:bb1992=2 ;bb21;bb15 bb1769:bb1992=3 ;bb21;bb416:bb2 bb363;}bb18=bb1814
(bb1365,&bb1627);bbm(((bb18)!=bb98))bb99 bb164;bb1219=bb520(bb85);
bb169=bb177?0 :bb1219;bb73=bb85;bb46=bb58;bb146=bb1219+4 ;bb2105=bb151-
bb169;bb1880=0 ;bb157=0 ;bb106(bb73&&bb46&&bb157<bb2105){bbm(bb46->
bb181<bb146){bb18=bb377;bb99 bb164;}bb18=bb1949(bb1627,&bb73->bb74[
bb169],bb73->bb127-bb169,&bb46->bb74[bb146],bb46->bb181-bb146,&bb1932
,&bb1597);bbm(((bb18)!=bb98))bb99 bb164;bb169+=bb1932;bb157+=bb1932;
bb146+=bb1597;bb1880+=bb1597;bbm(bb1880>=bb2105&&!bb2102)bb2102=bb46;
bbm(bb169==bb73->bb127){bb73=bb73->bb93;bb169=0 ;}bbm(bb146==bb46->
bb181){bb46->bb127=bb46->bb181;bb46=bb46->bb93;bb146=0 ;}}bb2110=1 ;
bb106(bb2110&&bb46){bb18=bb1942(bb1627,&(bb46->bb74[bb146]),bb46->
bb181-bb146,&bb1597,&bb2110);bbm(((bb18)!=bb98))bb99 bb164;bb146+=
bb1597;bb1880+=bb1597;bbm(bb1880>=bb2105&&!bb2102)bb2102=bb46;bbm(
bb146==bb46->bb181&&bb2110){bb46->bb127=bb46->bb181;bb46=bb46->bb93;
bb146=0 ;}}bbm(bb2110){bb18=bb377;bb99 bb164;}bbm(bb1880>=bb2105){
bb2102->bb127=0 ;bb18=bb472(bb85,0 ,bb58,0 ,bb151);bb99 bb164;}bb18=
bb590(bb85,108 ,bb58);bbm(((bb18)!=bb98))bb99 bb164;bb893(bb85,bb177,&
bb938);bb58->bb74[bb1219+0 ]=bb938;bb58->bb74[bb1219+1 ]=0 ;bb1174(
bb1992,bb402,&bb58->bb74[bb1219+2 ]);bb46->bb127=bb146;bb151=bb1219+4 +
bb1880;bbm(bb177)bb932(bb58,bb483);bb528(bb151,bb58);bb540(bb58); *
bb2087=1 ;bb164:bbm(bb1627)bb1799(bb1627);bb2 bb18;}bb4 bb2100(bbx*
bb85,bbu bb177,bb774 bb1365,bbx*bb58){bb4 bb18=bb98;bbd bb1219;bbd
bb169;bbd bb146;bbd bb1932;bbd bb1597;bbd bb2140;bbk bb151;bbk bb1992
;bbu bb1260=0 ;bbx*bb73=bb91;bbx*bb46=bb91;bb382 bb1627=bb91;bb151=
bb548(bb85);bb300(bb1365){bb15 bb1755:bb1992=2 ;bb21;bb15 bb1769:
bb1992=3 ;bb21;bb416:bb2 bb363;}bb18=bb1814(bb1365,&bb1627);bbm(((bb18
)!=bb98))bb99 bb164;bb18=bb541(bb85,108 ,&bb1219);bbm(bb18==bb982){
bb18=bb472(bb85,0 ,bb58,0 ,bb151);bb99 bb164;}bbm(((bb18)!=bb98))bb99
bb164;{bb146=bb177?0 :bb1219;bb2140=0 ;bb73=bb85;bb169=bb1219+4 ;bb46=
bb58;bb106(bb73&&bb46&&!bb1260){bb18=bb1950(bb1627,&bb73->bb74[bb169]
,bb73->bb127-bb169,&bb46->bb74[bb146],bb46->bb181-bb146,&bb1932,&
bb1597,&bb1260);bbm(bb18==bb377&&bb169==0 &&bb73->bb127==0 ){bb18=bb98;
bb1260=1 ;bb21;}bbm(((bb18)!=bb98))bb99 bb164;bb169+=bb1932;bb146+=
bb1597;bb2140+=bb1597;bbm(bb169==bb73->bb127&&!bb1260&&bb1932!=0 ){
bb73=bb73->bb93;bb169=0 ;bbm(!bb73){bb1260=1 ;bb21;}}bbm(bb146==bb46->
bb181&&!bb1260){bb46->bb127=bb46->bb181;bb46=bb46->bb93;bb146=0 ;}}bbm
(!bb1260){bb18=bb377;bb99 bb164;}}bbm(bb177)bb151=bb2140;bb54{bb151=
bb1219+bb2140;bb18=bb924(bb85,108 ,bb85->bb74[bb1219+0 ],bb58);bbm(((
bb18)!=bb98))bb99 bb164;}bb46->bb127=bb146;bb528(bb151,bb58);bb540(
bb58);bb164:bbm(bb1627)bb1799(bb1627);bb2 bb18;}
