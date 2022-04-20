#include "LevelsForm.h"
#include <fstream>
#include <limits>

std::string CourseWork::LevelsForm::LvlLine(int flagEng, int flagRus, short LvlNum)
{
	std::string line;

	if (flagEng == 1)
	{
		std::ifstream file("Files\\LevelsEng.txt");

		for (int i = 0; i < LvlNum; i++)
		{
			std::getline(file, line);
		}
	}
	else if (flagRus == 1)
	{
		std::ifstream file("Files\\LevelsRus.txt");

		for (int i = 0; i < LvlNum; i++)
		{
			std::getline(file, line);
		}
	}

	return line;
}

void CourseWork::LevelsForm::ReadResFile()
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

		label1->Text = "Время: " + arr[1][1].ToString() + " мин. " + arr[1][2].ToString() + " с." + "\n" + "Скорость: " + arr[1][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[1][4].ToString();
		label2->Text = "Время: " + arr[2][1].ToString() + " мин. " + arr[2][2].ToString() + " с." + "\n" + "Скорость: " + arr[2][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[2][4].ToString();
		label3->Text = "Время: " + arr[3][1].ToString() + " мин. " + arr[3][2].ToString() + " с." + "\n" + "Скорость: " + arr[3][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[3][4].ToString();
		label4->Text = "Время: " + arr[4][1].ToString() + " мин. " + arr[4][2].ToString() + " с." + "\n" + "Скорость: " + arr[4][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[4][4].ToString();
		label5->Text = "Время: " + arr[5][1].ToString() + " мин. " + arr[5][2].ToString() + " с." + "\n" + "Скорость: " + arr[5][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[5][4].ToString();
		label6->Text = "Время: " + arr[6][1].ToString() + " мин. " + arr[6][2].ToString() + " с." + "\n" + "Скорость: " + arr[6][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[6][4].ToString();
		label7->Text = "Время: " + arr[7][1].ToString() + " мин. " + arr[7][2].ToString() + " с." + "\n" + "Скорость: " + arr[7][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[7][4].ToString();
		label8->Text = "Время: " + arr[8][1].ToString() + " мин. " + arr[8][2].ToString() + " с." + "\n" + "Скорость: " + arr[8][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[8][4].ToString();
		label9->Text = "Время: " + arr[9][1].ToString() + " мин. " + arr[9][2].ToString() + " с." + "\n" + "Скорость: " + arr[9][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[9][4].ToString();
		label10->Text = "Время: " + arr[10][1].ToString() + " мин. " + arr[10][2].ToString() + " с." + "\n" + "Скорость: " + arr[10][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[10][4].ToString();

		fclose(file);
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

		label1->Text = "Время: " + arr[1][1].ToString() + " мин. " + arr[1][2].ToString() + " с." + "\n" + "Скорость: " + arr[1][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[1][4].ToString();
		label2->Text = "Время: " + arr[2][1].ToString() + " мин. " + arr[2][2].ToString() + " с." + "\n" + "Скорость: " + arr[2][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[2][4].ToString();
		label3->Text = "Время: " + arr[3][1].ToString() + " мин. " + arr[3][2].ToString() + " с." + "\n" + "Скорость: " + arr[3][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[3][4].ToString();
		label4->Text = "Время: " + arr[4][1].ToString() + " мин. " + arr[4][2].ToString() + " с." + "\n" + "Скорость: " + arr[4][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[4][4].ToString();
		label5->Text = "Время: " + arr[5][1].ToString() + " мин. " + arr[5][2].ToString() + " с." + "\n" + "Скорость: " + arr[5][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[5][4].ToString();
		label6->Text = "Время: " + arr[6][1].ToString() + " мин. " + arr[6][2].ToString() + " с." + "\n" + "Скорость: " + arr[6][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[6][4].ToString();
		label7->Text = "Время: " + arr[7][1].ToString() + " мин. " + arr[7][2].ToString() + " с." + "\n" + "Скорость: " + arr[7][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[7][4].ToString();
		label8->Text = "Время: " + arr[8][1].ToString() + " мин. " + arr[8][2].ToString() + " с." + "\n" + "Скорость: " + arr[8][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[8][4].ToString();
		label9->Text = "Время: " + arr[9][1].ToString() + " мин. " + arr[9][2].ToString() + " с." + "\n" + "Скорость: " + arr[9][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[9][4].ToString();
		label10->Text = "Время: " + arr[10][1].ToString() + " мин. " + arr[10][2].ToString() + " с." + "\n" + "Скорость: " + arr[10][3].ToString() + " зн./мин." + "\n"
			+ "Ошибки: " + arr[10][4].ToString();

		fclose(file);
	}
	
}
