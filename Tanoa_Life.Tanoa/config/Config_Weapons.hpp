/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 7000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 10000, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 25000, -1 },
			{ "arifle_SDAR_F", "", 25000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
            { "9Rnd_45ACP_Mag", "", 110 },
            { "30Rnd_9x21_Mag", "", 200 },
			{ "20Rnd_556x45_UW_mag", "Dual Purpose Magazine", 300 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 3000 },
			{ "optic_ACO_smg", "", 3000 }			
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 8000, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_Pistol_01_F", "", 4500, -1 },			
            { "hgun_PDW2000_F", "", 22500, -1 },
            { "SMG_05_F", "", 30000, -1 },
            { "arifle_AKS_F", "", 50000, -1 },			
            { "arifle_SPAR_01_blk_F", "", 60000, -1 },
            { "arifle_SPAR_01_khk_F", "", 60000, -1 },
            { "arifle_SPAR_01_snd_F", "", 60000, -1 }			
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
            { "9Rnd_45ACP_Mag", "", 110 },
            { "30Rnd_9x21_Mag", "", 200 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 300 },
			{ "30Rnd_545x39_Mag_F", "", 350 },
			{ "30Rnd_556x45_Stanag", "", 500 }
        };
        accs[] = {
            { "optic_Holosight_blk_F", "", 15000 },
			{ "optic_Holosight_khk_F", "", 15000 },
			{ "optic_ERCO_blk_F", "", 30000 },
			{ "optic_ERCO_khk_F", "", 30000 }
			
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Tanoa Cadet Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "SMG_02_F", "", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles_OPFOR", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Stun Pistol Magazine", 50 },
            { "30Rnd_9x21_Mag", "", 100 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 },
			{ "optic_ACO_smg", "", 2000 },
			{ "optic_ACO__grn_smg", "", 2000 },
        };
    };

    class cop_patrol {
        name = "Tanoa Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_Black_F", "", 25000, 7500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 100 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight_blk_F", "", 2500 },
            { "optic_MRCO", "", 15000 }
        };
    };

    class cop_sergeant {
        name = "Tanoa Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "arifle_ARX_blk_F", "", 30000, 9000 },
            { "srifle_DMR_07_blk_F", "", 50000, 20000 },
			{ "arifle_MXC_Black_F", "", 25000, 10000 },
            { "arifle_MXC_khk_F", "", 25000, 10000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "20Rnd_650x39_Cased_Mag_F", "", 450 },
            { "30Rnd_65x39_caseless_mag", "", 200 }
        };
        accs[] = {
            { "optic_ERCO_blk_F", "", 25000 },
			{ "optic_ERCO_khk_F_F", "", 25000 },
            { "muzzle_snds_H", "", 20000 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
