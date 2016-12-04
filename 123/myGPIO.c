

/***************************** Include Files *******************************/
#include "myGPIO.h"
#include "xparameters.h"

/************************** Function Definitions ***************************/
#define XPAR_MYGPIO_0_S00_AXI_BASEADDR 0x43C00000
#define XPAR_MYGPIO_0_S00_AXI_HIGHADDR 0x43C00FFF



u32 myGpio_read(void){
	//implement your driver
	return MYGPIO_mReadReg(XPAR_MYGPIO_0_S00_AXI_BASEADDR, MYGPIO_S00_AXI_SLV_REG0_OFFSET);
}
u32 myGpio_read2(void){
	//implement your driver
	return MYGPIO_mReadReg(XPAR_MYGPIO_0_S00_AXI_BASEADDR, MYGPIO_S00_AXI_SLV_REG1_OFFSET);
}
void myGpio_write(u32 data){
	//implement your driver
	MYGPIO_mWriteReg(XPAR_MYGPIO_0_S00_AXI_BASEADDR, MYGPIO_S00_AXI_SLV_REG0_OFFSET, data);
}
