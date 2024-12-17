
enum unicode_names {
    AE_MIN,
    AE_MAJ,
    OE_MIN,
    OE_MAJ,
    C_CED_MIN,
    C_CED_MAJ,
    A_GRAV_MIN,
    A_GRAV_MAJ,
    A_CIRC_MIN,
    A_CIRC_MAJ,
    E_GRAV_MIN,
    E_GRAV_MAJ,
    E_AIGU_MIN,
    E_AIGU_MAJ,
    E_CIRC_MIN,
    E_CIRC_MAJ,
    E_TREM_MIN,
    E_TREM_MAJ,
    I_CIRC_MIN,
    I_CIRC_MAJ,
    I_TREM_MIN,
    I_TREM_MAJ,
    O_CIRC_MIN,
    O_CIRC_MAJ,
    U_GRAV_MIN,
    U_GRAV_MAJ,
    U_CIRC_MIN,
    U_CIRC_MAJ,
    U_TREM_MIN,
    U_TREM_MAJ,
    Y_TREM_MIN,
    Y_TREM_MAJ,
    EURO_SYMB
};

const uint32_t PROGMEM unicode_map[] = {
    [AE_MIN] = 0x00E6,
    [AE_MAJ] = 0x00C6,
    [OE_MIN] = 0x0153,
    [OE_MAJ] = 0x0152,
    [C_CED_MIN] = 0x00E7,
    [C_CED_MAJ] = 0x00C7,
    [A_GRAV_MIN] = 0x00E0,
    [A_GRAV_MAJ] = 0x00C0,
    [A_CIRC_MIN] = 0x00E2,
    [A_CIRC_MAJ] = 0x00C2,
    [E_GRAV_MIN] = 0x00E8,
    [E_GRAV_MAJ] = 0x00C8,
    [E_AIGU_MIN] = 0x00E9,
    [E_AIGU_MAJ] = 0x00C9,
    [E_CIRC_MIN] = 0x00EA,
    [E_CIRC_MAJ] = 0x00CA,
    [E_TREM_MIN] = 0x00EB,
    [E_TREM_MAJ] = 0x00CB,
    [I_CIRC_MIN] = 0x00EE,
    [I_CIRC_MAJ] = 0x00CE,
    [I_TREM_MIN] = 0x00EF,
    [I_TREM_MAJ] = 0x00CF,
    [O_CIRC_MIN] = 0x00F4,
    [O_CIRC_MAJ] = 0x00D4,
    [U_GRAV_MIN] = 0x00F9,
    [U_GRAV_MAJ] = 0x00D9,
    [U_CIRC_MIN] = 0x00FB,
    [U_CIRC_MAJ] = 0x00DC,
    [U_TREM_MIN] = 0x00FC,
    [U_TREM_MAJ] = 0x00DB,
    [Y_TREM_MIN] = 0x00FF,
    [Y_TREM_MAJ] = 0x0178,
    [EURO_SYMB] = 0x20AC
};

#define ACC_AE UP(AE_MIN, AE_MAJ) // æ/Æ
#define ACC_OE UP(OE_MIN, OE_MAJ) // œ/Œ
#define ACC_C_CED UP(C_CED_MIN, C_CED_MAJ) // ç/Ç
#define ACC_A_GRAV UP(A_GRAV_MIN,A_GRAV_MAJ) // à/À
#define ACC_A_CIRC UP(A_CIRC_MIN,A_CIRC_MIN) // â/Â
#define ACC_E_GRAV UP(E_GRAV_MIN, E_GRAV_MAJ) // è/È
#define ACC_E_AIGU UP(E_AIGU_MIN, E_AIGU_MAJ) // é/É
#define ACC_E_CIRC UP(E_CIRC_MIN, E_CIRC_MAJ) // ê/Ê
#define ACC_E_TREM UP(E_TREM_MIN, E_TREM_MAJ) // ë/Ë
#define ACC_I_CIRC UP(I_CIRC_MIN, I_CIRC_MAJ) // î/Î
#define ACC_I_TREM UP(I_TREM_MIN, I_TREM_MAJ) // ï/Ï
#define ACC_O_CIRC UP(O_CIRC_MIN, O_CIRC_MAJ) // ô/Ô
#define ACC_U_GRAV UP(U_GRAV_MIN, U_GRAV_MAJ) // ù/Ù
#define ACC_U_CIRC UP(U_CIRC_MIN, U_CIRC_MAJ) // û/Û
#define ACC_U_TREM UP(U_TREM_MIN, U_TREM_MAJ) // ü/Ü
#define ACC_Y_TREM UP(Y_TREM_MIN, Y_TREM_MAJ) // ÿ/Ÿ
#define SYMB_EURO UM(EURO_SYMB) // €
