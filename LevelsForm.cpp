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
		while (fscanf(file, "%d ", &value) != EOF) //���������� ������� �� �����
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

		label1->Text = "�����: " + arr[1][1].ToString() + " ���. " + arr[1][2].ToString() + " �." + "\n" + "��������: " + arr[1][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[1][4].ToString();
		label2->Text = "�����: " + arr[2][1].ToString() + " ���. " + arr[2][2].ToString() + " �." + "\n" + "��������: " + arr[2][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[2][4].ToString();
		label3->Text = "�����: " + arr[3][1].ToString() + " ���. " + arr[3][2].ToString() + " �." + "\n" + "��������: " + arr[3][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[3][4].ToString();
		label4->Text = "�����: " + arr[4][1].ToString() + " ���. " + arr[4][2].ToString() + " �." + "\n" + "��������: " + arr[4][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[4][4].ToString();
		label5->Text = "�����: " + arr[5][1].ToString() + " ���. " + arr[5][2].ToString() + " �." + "\n" + "��������: " + arr[5][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[5][4].ToString();
		label6->Text = "�����: " + arr[6][1].ToString() + " ���. " + arr[6][2].ToString() + " �." + "\n" + "��������: " + arr[6][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[6][4].ToString();
		label7->Text = "�����: " + arr[7][1].ToString() + " ���. " + arr[7][2].ToString() + " �." + "\n" + "��������: " + arr[7][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[7][4].ToString();
		label8->Text = "�����: " + arr[8][1].ToString() + " ���. " + arr[8][2].ToString() + " �." + "\n" + "��������: " + arr[8][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[8][4].ToString();
		label9->Text = "�����: " + arr[9][1].ToString() + " ���. " + arr[9][2].ToString() + " �." + "\n" + "��������: " + arr[9][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[9][4].ToString();
		label10->Text = "�����: " + arr[10][1].ToString() + " ���. " + arr[10][2].ToString() + " �." + "\n" + "��������: " + arr[10][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[10][4].ToString();

		fclose(file);
	}
	else if (SetingsForm::flagRus == 1)
	{
		FILE* file = fopen("Files\\LevelsResRus.txt", "rt");
		int value; int i = 1;
		while (fscanf(file, "%d ", &value) != EOF) //���������� ������� �� �����
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

		label1->Text = "�����: " + arr[1][1].ToString() + " ���. " + arr[1][2].ToString() + " �." + "\n" + "��������: " + arr[1][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[1][4].ToString();
		label2->Text = "�����: " + arr[2][1].ToString() + " ���. " + arr[2][2].ToString() + " �." + "\n" + "��������: " + arr[2][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[2][4].ToString();
		label3->Text = "�����: " + arr[3][1].ToString() + " ���. " + arr[3][2].ToString() + " �." + "\n" + "��������: " + arr[3][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[3][4].ToString();
		label4->Text = "�����: " + arr[4][1].ToString() + " ���. " + arr[4][2].ToString() + " �." + "\n" + "��������: " + arr[4][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[4][4].ToString();
		label5->Text = "�����: " + arr[5][1].ToString() + " ���. " + arr[5][2].ToString() + " �." + "\n" + "��������: " + arr[5][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[5][4].ToString();
		label6->Text = "�����: " + arr[6][1].ToString() + " ���. " + arr[6][2].ToString() + " �." + "\n" + "��������: " + arr[6][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[6][4].ToString();
		label7->Text = "�����: " + arr[7][1].ToString() + " ���. " + arr[7][2].ToString() + " �." + "\n" + "��������: " + arr[7][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[7][4].ToString();
		label8->Text = "�����: " + arr[8][1].ToString() + " ���. " + arr[8][2].ToString() + " �." + "\n" + "��������: " + arr[8][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[8][4].ToString();
		label9->Text = "�����: " + arr[9][1].ToString() + " ���. " + arr[9][2].ToString() + " �." + "\n" + "��������: " + arr[9][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[9][4].ToString();
		label10->Text = "�����: " + arr[10][1].ToString() + " ���. " + arr[10][2].ToString() + " �." + "\n" + "��������: " + arr[10][3].ToString() + " ��./���." + "\n"
			+ "������: " + arr[10][4].ToString();

		fclose(file);
	}
	
}
