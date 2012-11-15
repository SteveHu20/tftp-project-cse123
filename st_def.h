#define MAX_FNAME_SIZE  255
#define BLOCK_SIZE      508

struct RWRQ {
    short opcode;
    char filename[MAX_FNAME_SIZE];
    char term1;
    char mode[8];
    char term2;
};

// packet size = 512 bytes
struct ACK_DATA {
    short opcode;
    short block_num;
    char data[BLOCK_SIZE]; // Ignored in ACK case
};

struct ERR {
    short opcode;
    short errcode;
    char errmsg[MAX_FNAME_SIZE];
    char term;
};
