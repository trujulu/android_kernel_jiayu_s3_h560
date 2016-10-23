#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0
#define BAT_NTC_68 1

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif

#if (BAT_NTC_68 == 1)
#define RBAT_PULL_UP_R             63400	
#define RBAT_PULL_DOWN_R	91000
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,67790},
        {-15,53460},
        {-10,42450},
        { -5,33930},
        {  0,27280},
        {  5,22070},
        { 10,17960},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8312},
        { 35,6942},
        { 40,5826},
        { 45,4911},
        { 50,4158},
        { 55,3536},
        { 60,3019}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

#if (BAT_NTC_68 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
{ -20 ,738978  }, 
{ -19 ,694417  }, 
{ -18 ,652861  }, 
{ -17 ,614088  }, 
{ -16 ,577893  }, 
{ -15 ,547456  }, 
{ -14 ,515579  }, 
{ -13 ,485782  }, 
{ -12 ,457916  }, 
{ -11 ,431842  }, 
{ -10 ,409600  }, 
{ -9  ,386554  }, 
{ -8  ,364965  }, 
{ -7  ,344730  }, 
{ -6  ,325756  }, 
{ -5  ,309217  }, 
{ -4  ,292399  }, 
{ -3  ,276610  }, 
{ -2  ,261781  }, 
{ -1  ,247847  }, 
{ 0   ,235606  }, 
{ 1   ,223208  }, 
{ 2   ,211546  }, 
{ 3   ,200570  }, 
{ 4   ,190237  }, 
{ 5   ,180980  }, 
{ 6   ,171762  }, 
{ 7   ,163075  }, 
{ 8   ,154884  }, 
{ 9   ,147158  }, 
{ 10  ,140139  }, 
{ 11  ,133227  }, 
{ 12  ,126700  }, 
{ 13  ,120536  }, 
{ 14  ,114711  }, 
{ 15  ,109344  }, 
{ 16  ,104117  }, 
{ 17  ,99174   }, 
{ 18  ,94498   }, 
{ 19  ,90071   }, 
{ 20  ,85929   }, 
{ 21  ,81948   }, 
{ 22  ,78176   }, 
{ 23  ,74602   }, 
{ 24  ,71213   }, 
{ 25  ,68000   }, 
{ 26  ,64944   }, 
{ 27  ,62045   }, 
{ 28  ,59293   }, 
{ 29  ,56680   }, 
{ 30  ,54167   }, 
{ 31  ,51805   }, 
{ 32  ,49560   }, 
{ 33  ,47426   }, 
{ 34  ,45397   }, 
{ 35  ,43421   }, 
{ 36  ,41582   }, 
{ 37  ,39833   }, 
{ 38  ,38167   }, 
{ 39  ,36582   }, 
{ 40  ,35016   }, 
{ 41  ,33576   }, 
{ 42  ,32204   }, 
{ 43  ,30896   }, 
{ 44  ,29648   }, 
{ 45  ,28406   }, 
{ 46  ,27271   }, 
{ 47  ,26188   }, 
{ 48  ,25154   }, 
{ 49  ,24168   }, 
{ 50  ,23166   }, 
{ 51  ,22266   }, 
{ 52  ,21406   }, 
{ 53  ,20585   }, 
{ 54  ,19799   }, 
{ 55  ,18997   }, 
{ 56  ,18279   }, 
{ 57  ,17593   }, 
{ 58  ,16936   }, 
{ 59  ,16308   }, 
{ 60  ,15657   }, 
{ 61  ,15082   }, 
{ 62  ,14531   }, 
{ 63  ,14003   }, 
{ 64  ,13497   }, 
{ 65  ,12967   }
};
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
{0  ,4366},
{2  ,4337},
{5  ,4311},
{7  ,4286},
{9  ,4263},
{12 ,4241},
{14 ,4219},
{17 ,4197},
{19 ,4175},
{21 ,4156},
{24 ,4134},
{26 ,4112},
{29 ,4087},
{31 ,4060},
{33 ,4035},
{36 ,4012},
{38 ,3990},
{40 ,3969},
{43 ,3948},
{45 ,3927},
{47 ,3906},
{50 ,3885},
{52 ,3867},
{55 ,3854},
{57 ,3841},
{59 ,3832},
{62 ,3824},
{64 ,3815},
{67 ,3808},
{69 ,3802},
{71 ,3797},
{74 ,3791},
{76 ,3785},
{78 ,3780},
{81 ,3773},
{83 ,3765},
{86 ,3756},
{87 ,3749},
{89 ,3745},
{90 ,3739},
{91 ,3735},
{91 ,3731},
{92 ,3728},
{93 ,3724},
{93 ,3720},
{94 ,3717},
{94 ,3715},
{95 ,3712},
{95 ,3710},
{95 ,3708},
{96 ,3707},
{96 ,3706},
{96 ,3704},
{97 ,3703},
{97 ,3702},
{97 ,3701},
{97 ,3701},
{98 ,3700},
{98 ,3699},
{98 ,3698},
{99 ,3698},
{99 ,3698},
{99 ,3698},
{99 ,3697},
{99 ,3697},
{100,3696},
{100,3696},
{100,3696},
{100,3400}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
{0  ,4383},
{2  ,4358},
{4  ,4331},
{6  ,4298},
{8  ,4262},
{10 ,4231},
{12 ,4203},
{14 ,4177},
{16 ,4154},
{18 ,4132},
{20 ,4110},
{22 ,4090},
{24 ,4069},
{26 ,4051},
{28 ,4032},
{30 ,4015},
{32 ,3996},
{36 ,3955},
{38 ,3934},
{40 ,3916},
{42 ,3900},
{44 ,3885},
{46 ,3872},
{48 ,3861},
{50 ,3851},
{52 ,3842},
{54 ,3834},
{56 ,3826},
{58 ,3818},
{60 ,3811},
{62 ,3805},
{64 ,3799},
{66 ,3792},
{68 ,3787},
{70 ,3782},
{72 ,3777},
{74 ,3771},
{76 ,3765},
{78 ,3758},
{80 ,3750},
{81 ,3739},
{83 ,3727},
{85 ,3714},
{87 ,3703},
{89 ,3696},
{91 ,3688},
{93 ,3682},
{95 ,3673},
{96 ,3666},
{97 ,3660},
{98 ,3655},
{98 ,3650},
{98 ,3643},
{99 ,3638},
{99 ,3631},
{99 ,3625},
{100,3620},
{100,3613},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400}
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
{0  ,4384},
{2  ,4358},
{3  ,4338},
{5  ,4317},
{7  ,4298},
{8  ,4278},
{10 ,4258},
{12 ,4237},
{13 ,4218},
{15 ,4198},
{17 ,4179},
{18 ,4160},
{20 ,4141},
{22 ,4122},
{23 ,4104},
{25 ,4087},
{27 ,4069},
{28 ,4053},
{30 ,4036},
{32 ,4021},
{33 ,4006},
{35 ,3991},
{37 ,3976},
{38 ,3960},
{40 ,3944},
{42 ,3926},
{43 ,3909},
{45 ,3892},
{47 ,3878},
{48 ,3865},
{50 ,3855},
{52 ,3845},
{53 ,3837},
{55 ,3830},
{57 ,3823},
{58 ,3816},
{60 ,3809},
{62 ,3804},
{63 ,3798},
{65 ,3793},
{67 ,3789},
{68 ,3785},
{70 ,3780},
{72 ,3777},
{73 ,3773},
{75 ,3769},
{77 ,3763},
{78 ,3757},
{80 ,3749},
{82 ,3742},
{83 ,3730},
{85 ,3717},
{87 ,3701},
{88 ,3691},
{90 ,3686},
{92 ,3683},
{93 ,3678},
{95 ,3669},
{97 ,3632},
{98 ,3543},
{100,3415},
{100,3372},
{100,3346},
{100,3328},
{100,3318},
{100,3311},
{100,3306},
{100,3302},
{100,3302}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
{0  ,4391},
{2  ,4370},
{3  ,4351},
{5  ,4332},
{7  ,4313},
{8  ,4293},
{10 ,4274},
{12 ,4254},
{13 ,4234},
{15 ,4214},
{17 ,4195},
{18 ,4176},
{20 ,4157},
{22 ,4137},
{23 ,4119},
{25 ,4101},
{26 ,4083},
{28 ,4067},
{30 ,4049},
{31 ,4033},
{33 ,4017},
{35 ,4002},
{36 ,3988},
{38 ,3974},
{40 ,3960},
{41 ,3947},
{43 ,3933},
{45 ,3914},
{46 ,3893},
{48 ,3878},
{50 ,3865},
{51 ,3854},
{53 ,3845},
{55 ,3837},
{56 ,3829},
{58 ,3822},
{60 ,3814},
{61 ,3808},
{63 ,3802},
{64 ,3796},
{66 ,3791},
{68 ,3786},
{69 ,3781},
{71 ,3776},
{73 ,3767},
{74 ,3756},
{76 ,3750},
{78 ,3744},
{79 ,3736},
{81 ,3729},
{83 ,3722},
{84 ,3711},
{86 ,3697},
{88 ,3680},
{89 ,3673},
{91 ,3671},
{93 ,3668},
{94 ,3663},
{96 ,3650},
{98 ,3590},
{99 ,3488},
{100,3308},
{100,3266},
{100,3257},
{100,3252},
{100,3251},
{100,3250},
{100,3249},
{100,3249}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
{593 ,4366}, 
{593 ,4337}, 
{615 ,4311}, 
{623 ,4286}, 
{638 ,4263}, 
{645 ,4241}, 
{648 ,4219}, 
{653 ,4197}, 
{653 ,4175}, 
{665 ,4156}, 
{675 ,4134}, 
{695 ,4112}, 
{723 ,4087}, 
{780 ,4060}, 
{838 ,4035}, 
{903 ,4012}, 
{960 ,3990}, 
{1020,3969}, 
{1063,3948}, 
{1110,3927}, 
{1153,3906}, 
{1178,3885}, 
{1193,3867}, 
{1210,3854}, 
{1210,3841}, 
{1215,3832}, 
{1220,3824}, 
{1225,3815}, 
{1245,3808}, 
{1243,3802}, 
{1263,3797}, 
{1273,3791}, 
{1285,3785}, 
{1315,3780}, 
{1328,3773}, 
{1353,3765}, 
{1378,3756}, 
{1373,3749}, 
{1363,3745}, 
{1350,3739}, 
{1340,3735}, 
{1330,3731}, 
{1320,3728}, 
{1310,3724}, 
{1303,3720}, 
{1295,3717}, 
{1288,3715}, 
{1280,3712}, 
{1275,3710}, 
{1273,3708}, 
{1270,3707}, 
{1265,3706}, 
{1263,3704}, 
{1258,3703}, 
{1258,3702}, 
{1255,3701}, 
{1255,3701}, 
{1253,3700}, 
{1248,3699}, 
{1248,3698}, 
{1245,3698}, 
{1248,3698}, 
{1248,3698}, 
{1245,3697}, 
{1245,3697}, 
{1243,3696}, 
{1240,3696}, 
{1240,3696}, 
{500 ,3400}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
{308 ,4383},
{308 ,4358},
{320 ,4331},
{330 ,4298},
{363 ,4262},
{400 ,4231},
{428 ,4203},
{450 ,4177},
{473 ,4154},
{493 ,4132},
{513 ,4110},
{525 ,4090},
{545 ,4069},
{558 ,4051},
{568 ,4032},
{578 ,4015},
{578 ,3996},
{578 ,3955},
{568 ,3934},
{560 ,3916},
{563 ,3900},
{560 ,3885},
{563 ,3872},
{568 ,3861},
{565 ,3851},
{575 ,3842},
{578 ,3834},
{588 ,3826},
{595 ,3818},
{605 ,3811},
{613 ,3805},
{620 ,3799},
{625 ,3792},
{633 ,3787},
{640 ,3782},
{650 ,3777},
{658 ,3771},
{668 ,3765},
{680 ,3758},
{695 ,3750},
{710 ,3739},
{733 ,3727},
{750 ,3714},
{778 ,3703},
{825 ,3696},
{888 ,3688},
{993 ,3682},
{1138,3673},
{1168,3666},
{1150,3660},
{1140,3655},
{1125,3650},
{1110,3643},
{1098,3638},
{1078,3631},
{1068,3625},
{1050,3620},
{1035,3613},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400},
{503 ,3400}
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
{175,4384},
{175,4358},
{180,4338},
{180,4317},
{183,4298},
{188,4278},
{193,4258},
{195,4237},
{200,4218},
{200,4198},
{210,4179},
{215,4160},
{218,4141},
{223,4122},
{228,4104},
{235,4087},
{238,4069},
{245,4053},
{248,4036},
{255,4021},
{260,4006},
{260,3991},
{263,3976},
{260,3960},
{255,3944},
{240,3926},
{225,3909},
{213,3892},
{205,3878},
{195,3865},
{195,3855},
{195,3845},
{198,3837},
{203,3830},
{205,3823},
{208,3816},
{205,3809},
{205,3804},
{205,3798},
{205,3793},
{208,3789},
{210,3785},
{210,3780},
{213,3777},
{213,3773},
{213,3769},
{210,3763},
{210,3757},
{208,3749},
{213,3742},
{210,3730},
{215,3717},
{215,3701},
{213,3691},
{215,3686},
{230,3683},
{255,3678},
{288,3669},
{325,3632},
{393,3543},
{538,3415},
{433,3372},
{370,3346},
{325,3328},
{295,3318},
{280,3311},
{273,3306},
{258,3302},
{260,3302}
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
{128,4391},
{128,4370},
{128,4351},
{128,4332},
{128,4313},
{128,4293},
{133,4274},
{133,4254},
{133,4234},
{133,4214},
{135,4195},
{138,4176},
{140,4157},
{138,4137},
{143,4119},
{143,4101},
{143,4083},
{150,4067},
{148,4049},
{150,4033},
{153,4017},
{153,4002},
{158,3988},
{163,3974},
{168,3960},
{173,3947},
{175,3933},
{163,3914},
{145,3893},
{138,3878},
{133,3865},
{133,3854},
{133,3845},
{135,3837},
{135,3829},
{140,3822},
{138,3814},
{145,3808},
{145,3802},
{148,3796},
{148,3791},
{150,3786},
{150,3781},
{150,3776},
{145,3767},
{135,3756},
{138,3750},
{140,3744},
{138,3736},
{138,3729},
{140,3722},
{140,3711},
{138,3697},
{135,3680},
{135,3673},
{143,3671},
{148,3668},
{155,3663},
{160,3650},
{158,3590},
{173,3488},
{203,3308},
{165,3266},
{145,3257},
{135,3252},
{130,3251},
{125,3250},
{125,3249},
{125,3249}      
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
