/* DO NOT EDIT - Generated automatically by build.py */

static struct single_row_lut Sunwoda_2300_fcc_temp = {
    .x      = {-20, -10, 0, 25, 40, 60},
    .y      = {2330, 2328, 2360, 2301, 2313, 2309},
    .cols   = 6
};

static struct single_row_lut Sunwoda_2300_fcc_sf = {
    .x      = {0, 100, 200, 300, 400, 500},
    .y      = {100, 96, 94, 92, 90, 88},
    .cols   = 6
};

static struct sf_lut Sunwoda_2300_pc_sf = {
    .rows = 1,
    .cols = 1,
    .row_entries = {0},
    .percent = {100},
    .sf = {
       {100}
    }
};


static struct sf_lut Sunwoda_2300_rbatt_sf = {
    .rows = 28,
    .cols = 6,
    .row_entries = {-20, -10, 0, 25, 40, 60},
    .percent = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
    .sf = {
        {1695, 823, 429, 168, 132, 127},
        {1695, 824, 430, 168, 132, 127},
        {1718, 843, 446, 168, 132, 126},
        {1719, 851, 465, 172, 133, 125},
        {1753, 862, 476, 180, 137, 123},
        {1674, 876, 489, 189, 141, 124},
        {1643, 825, 464, 202, 149, 128},
        {1659, 820, 457, 210, 160, 133},
        {1660, 815, 440, 187, 149, 127},
        {1676, 817, 434, 175, 139, 122},
        {1744, 817, 440, 170, 135, 122},
        {1845, 822, 445, 172, 136, 122},
        {1974, 855, 446, 176, 140, 124},
        {2128, 912, 465, 182, 144, 126},
        {2314, 993, 502, 178, 142, 123},
        {2539, 1107, 557, 173, 135, 120},
        {2830, 1275, 616, 174, 135, 119},
        {3200, 1533, 726, 181, 137, 120},
        {5181, 1869, 803, 190, 138, 123},
        {5622, 1950, 833, 188, 141, 123},
        {6038, 2122, 871, 185, 139, 124},
        {6536, 2316, 895, 185, 141, 122},
        {7163, 2559, 981, 185, 140, 130},
        {7868, 2816, 1090, 189, 141, 125},
        {8703, 3165, 1249, 201, 146, 126},
        {9914, 3662, 1536, 210, 147, 125},
        {11620, 4337, 1823, 235, 154, 131},
        {17978, 6323, 2110, 824, 606, 218},
    }
};

static struct pc_temp_ocv_lut Sunwoda_2300_pc_temp_ocv = {
    .rows = 29,
    .cols = 6,
    .temp = {-20, -10, 0, 25, 40, 60},
    .percent = {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
    .ocv = {
        {4326, 4325, 4322, 4310, 4310, 4304},
        {4235, 4247, 4251, 4249, 4250, 4246},
        {4168, 4186, 4191, 4192, 4194, 4190},
        {4106, 4129, 4136, 4139, 4140, 4136},
        {4056, 4075, 4082, 4087, 4089, 4085},
        {3988, 4020, 4028, 4039, 4041, 4037},
        {3934, 3961, 3971, 3994, 3995, 3993},
        {3893, 3919, 3929, 3949, 3953, 3950},
        {3853, 3881, 3888, 3901, 3903, 3901},
        {3819, 3847, 3853, 3865, 3865, 3863},
        {3799, 3818, 3825, 3837, 3837, 3836},
        {3784, 3793, 3802, 3815, 3816, 3814},
        {3772, 3777, 3783, 3797, 3798, 3795},
        {3758, 3764, 3769, 3781, 3782, 3779},
        {3744, 3749, 3758, 3765, 3763, 3756},
        {3728, 3733, 3744, 3748, 3740, 3729},
        {3709, 3718, 3722, 3729, 3721, 3709},
        {3682, 3700, 3698, 3706, 3699, 3687},
        {3643, 3677, 3679, 3683, 3676, 3665},
        {3632, 3667, 3671, 3680, 3674, 3662},
        {3619, 3657, 3659, 3676, 3671, 3659},
        {3602, 3644, 3639, 3667, 3664, 3650},
        {3583, 3627, 3612, 3650, 3648, 3633},
        {3561, 3602, 3573, 3626, 3626, 3611},
        {3528, 3569, 3515, 3595, 3595, 3579},
        {3487, 3524, 3436, 3551, 3549, 3531},
        {3425, 3457, 3358, 3483, 3483, 3466},
        {3315, 3334, 3279, 3355, 3375, 3364},
        {3200, 3200, 3200, 3200, 3200, 3200},
    }
};


struct hisi_smartstar_coul_battery_data Sunwoda_2300_battery_data = {
    .id_voltage_min = 550,
    .id_voltage_max = 750,
    .fcc = 2300,
    .fcc_temp_lut  = &Sunwoda_2300_fcc_temp,
    .fcc_sf_lut = &Sunwoda_2300_fcc_sf,
    .pc_temp_ocv_lut = &Sunwoda_2300_pc_temp_ocv,
    .pc_sf_lut = &Sunwoda_2300_pc_sf,
    .rbatt_sf_lut = &Sunwoda_2300_rbatt_sf,
    .default_rbatt_mohm = 100,
    .max_currentmA = 1200,
    .max_voltagemV = 4352,
    .max_cin_currentmA = 1200,
    .terminal_currentmA = 100,
    .charge_in_temp_5 = 3,
    .charge_in_temp_10 = 3,
    .batt_brand = "Sunwoda0410",
};
