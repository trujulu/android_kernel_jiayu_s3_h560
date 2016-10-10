#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             24000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          2800



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
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
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

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0,4250},
	{3,4243},
	{7,4238},
	{10,4220},
	{14,4202},
	{18,4186},
	{21,4175},
	{25,4163},
	{29,4138},
	{32,4102},
	{36,4077},
	{40,4059},
	{43,4045},
	{47,4032},
	{51,4011},
	{54,3968},
	{58,3918},
	{62,3882},
	{65,3861},
	{69,3843},
	{73,3824},
	{76,3804},
	{80,3783},
	{84,3765},
	{86,3754},
	{88,3748},
	{89,3742},
	{90,3737},
	{91,3733},
	{92,3729},
	{93,3725},
	{93,3721},
	{94,3718},
	{95,3715},
	{95,3712},
	{95,3709},
	{96,3706},
	{96,3703},
	{96,3700},
	{97,3698},
	{97,3696},
	{97,3693},
	{97,3691},
	{98,3689},
	{98,3688},
	{98,3686},
	{98,3685},
	{98,3684},
	{98,3683},
	{98,3682},
	{99,3681},
	{99,3680},
	{99,3679},
	{99,3678},
	{99,3677},
	{99,3677},
	{99,3676},
	{99,3675},
	{99,3675},
	{99,3674},
	{99,3673},
	{99,3672},
	{99,3671},
	{99,3671},
	{99,3670},
	{99,3669},
	{99,3668},
	{100,3667},
	{100,3667}
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0,4250},
	{2,4248},
	{4,4245},
	{6,4241},
	{8,4239},
	{10,4222},
	{12,4204},
	{14,4187},
	{16,4175},
	{18,4166},
	{20,4149},
	{23,4114},
	{25,4079},
	{27,4054},
	{29,4030},
	{31,3992},
	{33,3959},
	{35,3940},
	{37,3926},
	{39,3913},
	{41,3898},
	{44,3885},
	{46,3872},
	{48,3861},
	{50,3851},
	{52,3842},
	{54,3834},
	{56,3826},
	{58,3819},
	{60,3812},
	{62,3805},
	{65,3798},
	{67,3791},
	{69,3784},
	{71,3776},
	{73,3768},
	{75,3760},
	{77,3752},
	{79,3744},
	{81,3735},
	{83,3726},
	{85,3717},
	{88,3709},
	{90,3701},
	{92,3692},
	{94,3674},
	{96,3637},
	{97,3601},
	{98,3581},
	{98,3566},
	{99,3556},
	{99,3548},
	{99,3542},
	{99,3538},
	{99,3534},
	{99,3530},
	{99,3528},
	{99,3525},
	{99,3524},
	{99,3523},
	{99,3521},
	{99,3520},
	{99,3520},
	{99,3519},
	{99,3518},
	{99,3517},
	{100,3517},
	{100,3516},
	{100,3516}
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0,4250},
	{1,4245},
	{3,4240},
	{4,4235},
	{6,4232},
	{8,4213},
	{9,4195},
	{11,4177},
	{13,4159},
	{14,4143},
	{16,4125},
	{18,4108},
	{19,4091},
	{21,4076},
	{22,4067},
	{24,4050},
	{26,4024},
	{27,4004},
	{29,3991},
	{31,3983},
	{32,3972},
	{34,3960},
	{36,3947},
	{37,3933},
	{39,3916},
	{41,3898},
	{42,3883},
	{44,3871},
	{45,3860},
	{47,3851},
	{49,3842},
	{50,3834},
	{52,3827},
	{54,3821},
	{55,3814},
	{57,3809},
	{59,3803},
	{60,3798},
	{62,3794},
	{64,3789},
	{65,3785},
	{67,3780},
	{68,3775},
	{70,3769},
	{72,3763},
	{73,3757},
	{75,3751},
	{77,3746},
	{78,3741},
	{80,3736},
	{82,3730},
	{83,3722},
	{85,3714},
	{86,3707},
	{88,3695},
	{90,3689},
	{91,3687},
	{93,3684},
	{95,3671},
	{96,3616},
	{98,3530},
	{100,3500},
	{100,3480},
	{100,3460},
	{100,3440},
	{100,3420},
	{100,3415},
	{100,3410},
	{100,3405}
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0,4250},
	{1,4248},
	{3,4244},
	{4,4240},
	{6,4234},
	{8,4229},
	{9,4211},
	{11,4193},
	{12,4175},
	{14,4157},
	{16,4140},
	{17,4122},
	{19,4106},
	{21,4089},
	{22,4073},
	{24,4057},
	{25,4042},
	{27,4027},
	{29,4012},
	{30,3998},
	{32,3985},
	{33,3972},
	{35,3959},
	{37,3946},
	{38,3933},
	{40,3917},
	{42,3898},
	{43,3882},
	{45,3870},
	{46,3859},
	{48,3850},
	{50,3842},
	{51,3833},
	{53,3826},
	{54,3819},
	{56,3813},
	{58,3807},
	{59,3801},
	{61,3796},
	{63,3791},
	{64,3787},
	{66,3782},
	{67,3778},
	{69,3773},
	{71,3763},
	{72,3751},
	{74,3743},
	{75,3736},
	{77,3730},
	{79,3725},
	{80,3720},
	{82,3714},
	{84,3707},
	{85,3699},
	{87,3691},
	{88,3679},
	{90,3675},
	{92,3673},
	{93,3670},
	{95,3654},
	{96,3599},
	{98,3515},
	{100,3380},
	{100,3372},
	{100,3358},
	{100,3353},
	{100,3349},
	{100,3347},
	{100,3347}
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
	{555,4250},
	{555,4243},
	{575,4238},
	{595,4220},
	{600,4202},
	{607,4186},
	{625,4175},
	{650,4163},
	{655,4138},
	{640,4102},
	{647,4077},
	{662,4059},
	{690,4045},
	{740,4032},
	{830,4011},
	{1037,3968},
	{1227,3918},
	{1340,3882},
	{1372,3861},
	{1382,3843},
	{1377,3824},
	{1387,3804},
	{1390,3783},
	{1402,3765},
	{1385,3754},
	{1370,3748},
	{1355,3742},
	{1342,3737},
	{1335,3733},
	{1322,3729},
	{1312,3725},
	{1305,3721},
	{1295,3718},
	{1290,3715},
	{1282,3712},
	{1275,3709},
	{1265,3706},
	{1260,3703},
	{1252,3700},
	{1245,3698},
	{1242,3696},
	{1235,3693},
	{1230,3691},
	{1225,3689},
	{1220,3688},
	{1217,3686},
	{1212,3685},
	{1210,3684},
	{1207,3683},
	{1205,3682},
	{1205,3681},
	{1200,3680},
	{1200,3679},
	{1200,3678},
	{1195,3677},
	{1195,3677},
	{1197,3676},
	{1190,3675},
	{1187,3675},
	{1187,3674},
	{1185,3673},
	{1182,3672},
	{1177,3671},
	{1180,3671},
	{1177,3670},
	{1180,3669},
	{1175,3668},
	{1170,3667},
	{1172,3667}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{263,4250},
	{262,4248},
	{272,4245},
	{277,4242},
	{282,4239},
	{285,4222},
	{287,4204},
	{285,4187},
	{292,4175},
	{310,4166},
	{322,4149},
	{310,4114},
	{307,4079},
	{340,4054},
	{407,4030},
	{525,3992},
	{642,3959},
	{702,3940},
	{712,3926},
	{715,3913},
	{717,3898},
	{720,3885},
	{722,3872},
	{727,3861},
	{730,3851},
	{737,3842},
	{742,3834},
	{747,3826},
	{767,3819},
	{775,3812},
	{782,3805},
	{790,3798},
	{772,3791},
	{777,3784},
	{772,3776},
	{780,3768},
	{790,3760},
	{795,3752},
	{805,3744},
	{815,3735},
	{822,3726},
	{850,3717},
	{872,3709},
	{905,3701},
	{937,3692},
	{975,3674},
	{1010,3637},
	{1002,3601},
	{952,3581},
	{917,3566},
	{892,3556},
	{870,3548},
	{857,3542},
	{845,3538},
	{837,3534},
	{827,3530},
	{822,3528},
	{817,3525},
	{812,3524},
	{810,3523},
	{805,3521},
	{802,3520},
	{800,3520},
	{800,3519},
	{800,3518},
	{795,3517},
	{795,3517},
	{792,3516},
	{797,3516}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{158,4250},
	{157,4248},
	{160,4244},
	{160,4238},
	{162,4232},
	{162,4213},
	{165,4195},
	{165,4177},
	{165,4159},
	{170,4143},
	{170,4125},
	{172,4108},
	{175,4091},
	{177,4076},
	{185,4067},
	{185,4050},
	{180,4024},
	{185,4004},
	{187,3991},
	{195,3983},
	{195,3972},
	{197,3960},
	{197,3947},
	{197,3933},
	{190,3916},
	{177,3898},
	{170,3883},
	{170,3871},
	{165,3860},
	{167,3851},
	{165,3842},
	{165,3834},
	{165,3827},
	{167,3821},
	{167,3814},
	{170,3809},
	{170,3803},
	{172,3798},
	{175,3794},
	{175,3789},
	{177,3785},
	{177,3780},
	{175,3775},
	{172,3769},
	{170,3763},
	{170,3757},
	{167,3751},
	{167,3746},
	{170,3741},
	{170,3736},
	{172,3730},
	{172,3722},
	{172,3714},
	{180,3707},
	{175,3695},
	{175,3689},
	{182,3687},
	{195,3684},
	{207,3671},
	{202,3616},
	{217,3530},
	{262,3500},
	{257,3480},
	{212,3460},
	{190,3440},
	{180,3420},
	{170,3415},
	{165,3410},
	{170,3405}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{110,4250},
	{110,4248},
	{115,4242},
	{115,4238},
	{115,4234},
	{115,4229},
	{115,4211},
	{117,4193},
	{117,4175},
	{117,4157},
	{117,4140},
	{117,4122},
	{120,4106},
	{120,4089},
	{122,4073},
	{122,4057},
	{122,4042},
	{125,4027},
	{125,4012},
	{127,3998},
	{130,3985},
	{135,3972},
	{135,3959},
	{137,3946},
	{140,3933},
	{137,3917},
	{127,3898},
	{120,3882},
	{120,3870},
	{115,3859},
	{117,3850},
	{117,3842},
	{115,3833},
	{115,3826},
	{117,3819},
	{117,3813},
	{120,3807},
	{120,3801},
	{120,3796},
	{122,3791},
	{125,3787},
	{125,3782},
	{127,3778},
	{127,3773},
	{120,3763},
	{115,3751},
	{115,3743},
	{115,3736},
	{115,3730},
	{115,3725},
	{115,3720},
	{115,3714},
	{117,3707},
	{117,3699},
	{120,3691},
	{117,3679},
	{117,3675},
	{120,3673},
	{127,3670},
	{127,3654},
	{130,3599},
	{140,3515},
	{162,3380},
	{180,3272},
	{147,3258},
	{135,3253},
	{122,3249},
	{120,3247},
	{117,3247}
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
