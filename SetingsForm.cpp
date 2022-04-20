#include "SetingsForm.h"


int CourseWork::SetingsForm::ReturnSelect()
{
	if (radioButtonEng->Checked == true)
	{
		flagEng = 1;
	}
	else if (radioButtonRus->Checked == true)
	{
		flagRus = 1;
	}
	return 0;
}
