
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void main ()
{
	void_SETHSIstate(Enable);
	void_SYSCLKselect(HSI_CLK);
	void_SETPLLstate(disbale);
	void_PLL_mul_factor(PLL_MULby3);
	void_SETPLLstate(Enable);
	void_SYSCLKselect(PLL_CLK);

	while (1);
}
