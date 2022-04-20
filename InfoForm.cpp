#include "InfoForm.h"

void CourseWork::InfoForm::GetLvlinfo()
{
	int arr[11][5] = { 0 };
	if (SetingsForm::flagEng == 1)
	{
		FILE* file = fopen("Files\\LevelsResEng.txt", "rt");
		int value; int i = 1;
		while (fscanf(file, "%d ", &value) != EOF) //заполнение массива из файла
		{
			arr[i][1] = value;
			fscanf(file, "%d ", &value);
			arr[i][2] = value;
			fscanf(file, "%d ", &value);
			arr[i][3] = value;
			fscanf(file, "%d ", &value);
			arr[i][4] = value;
			i++;
		}

		fclose(file);

		int MinMin = 0, MinSec = 0, MaxSpeed = 0, MinErr = 0, LvlTime = 0, LvlErr = 0, LvlSpeed = 0;

		for (int i = 1; i <= 10; i++)
		{
			for (int j = 2; j <= 4; j++)
			{
				switch (j)
				{
				case 2:
				{
					if (arr[i][j - 1] * 60 + arr[i][j] < MinMin * 60 + MinSec)
					{
						MinMin = arr[i][j - 1];
						MinSec = arr[i][j];
						LvlTime = i;
					}
					break;
				}
				case 3:
				{
					if (arr[i][j] > MaxSpeed)
					{
						MaxSpeed = arr[i][j];
						LvlSpeed = i;
					}
					break;
				}
				case 4:
				{
					if (arr[11 - i][j] >= MinErr)
					{
						MinErr = arr[11 - i][j];
						LvlErr = 11 - i;
					}
					break;
				}

				default:
					break;
				}
			}
		}

		if ((LvlTime == 0) || ((MinMin == 0) && (MinSec == 0)))
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Лучшее время отсутствует.";
		}
		else
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Время: " + MinMin.ToString() + " мин. " + MinSec.ToString() + " с." + " (Уровень: " + LvlTime + " )";
		}

		if ((LvlSpeed == 0) || (MaxSpeed == 0))
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Лучшая скорость ввода отсутствует.";
		}
		else
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Скорость: " + MaxSpeed.ToString() + " зн./мин." + " (Уровень: " + LvlTime + " )";
		}

		if ((LvlErr == 0) || ((MinMin == 0) && (MinSec == 0) && (MaxSpeed == 0)))
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Наименьшее количество ошибок отсутствует.";
		}
		else
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "количество ошибок: " + MinErr.ToString() + " (Уровень: " + LvlErr + " )";
		}
	}
	else if (SetingsForm::flagRus == 1)
	{
		FILE* file = fopen("Files\\LevelsResRus.txt", "rt");
		int value; int i = 1;
		while (fscanf(file, "%d ", &value) != EOF) //заполнение массива из файла
		{
			arr[i][1] = value;
			fscanf(file, "%d ", &value);
			arr[i][2] = value;
			fscanf(file, "%d ", &value);
			arr[i][3] = value;
			fscanf(file, "%d ", &value);
			arr[i][4] = value;
			i++;
		}

		fclose(file);

		int MinMin = 0, MinSec = 0, MaxSpeed = 0, MinErr = 0, LvlTime = 0, LvlErr = 0, LvlSpeed = 0;

		for (int i = 1; i <= 10; i++)
		{
			for (int j = 2; j <= 4; j++)
			{
				switch (j)
				{
				case 2:
				{
					if (arr[i][j - 1] * 60 + arr[i][j] < MinMin * 60 + MinSec)
					{
						MinMin = arr[i][j - 1];
						MinSec = arr[i][j];
						LvlTime = i;
					}
					break;
				}
				case 3:
				{
					if (arr[i][j] > MaxSpeed)
					{
						MaxSpeed = arr[i][j];
						LvlSpeed = i;
					}
					break;
				}
				case 4:
				{
					if (arr[11 - i][j] >= MinErr)
					{
						MinErr = arr[11 - i][j];
						LvlErr = 11 - i;
					}
					break;
				}

				default:
					break;
				}
			}
		}

		if ((LvlTime == 0) || ((MinMin == 0) && (MinSec == 0)))
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Лучшее время отсутствует.";
		}
		else
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Время: " + MinMin.ToString() + " мин. " + MinSec.ToString() + " с." + " (Уровень: " + LvlTime + " )";
		}

		if ((LvlSpeed == 0) || (MaxSpeed == 0))
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Лучшая скорость ввода отсутствует.";
		}
		else
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Скорость: " + MaxSpeed.ToString() + " зн./мин." + " (Уровень: " + LvlTime + " )";
		}

		if ((LvlErr == 0) || ((MinMin == 0) && (MinSec == 0) && (MaxSpeed == 0)))
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "Наименьшее количество ошибок отсутствует.";
		}
		else
		{
			labelLvlinfo->Text = labelLvlinfo->Text + "\n" + "количество ошибок: " + MinErr.ToString() + " (Уровень: " + LvlErr + " )";
		}


	}
}
