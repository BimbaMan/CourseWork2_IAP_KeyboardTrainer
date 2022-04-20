#include "MainForm.h"
#include "SetingsForm.h"
#include <Windows.h>
#include <iostream>
#include <utilapiset.h>
#include <fstream>
#include <limits>
#include <string.h>

using namespace CourseWork; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew SetingsForm);
	Application::Run(gcnew MainForm);
	return 0;
}

void MainForm::SelectLabelColorRedEng(char letter)
{
	switch (letter)
	{
	case '`': { labelWave->ForeColor = ForeColor.Red; break; }
	case '1': { label1->ForeColor = ForeColor.Red; break; }
	case '2': { label2->ForeColor = ForeColor.Red; break; }
	case '3': { label3->ForeColor = ForeColor.Red; break; }
	case '4': { label4->ForeColor = ForeColor.Red; break; }
	case '5': { label5->ForeColor = ForeColor.Red; break; }
	case '6': { label6->ForeColor = ForeColor.Red; break; }
	case '7': { label7->ForeColor = ForeColor.Red; break; }
	case '8': { label8->ForeColor = ForeColor.Red; break; }
	case '9': { label9->ForeColor = ForeColor.Red; break; }
	case '0': { label0->ForeColor = ForeColor.Red; break; }
	case '-': { labelMinus->ForeColor = ForeColor.Red; break; }
	case '=': { labelEQ->ForeColor = ForeColor.Red; break; }

	case 'q': { labelq->ForeColor = ForeColor.Red; break; }
	case 'w': { labelw->ForeColor = ForeColor.Red; break; }
	case 'e': { labele->ForeColor = ForeColor.Red; break; }
	case 'r': { labelr->ForeColor = ForeColor.Red; break; }
	case 't': { labelt->ForeColor = ForeColor.Red; break; }
	case 'y': { labely->ForeColor = ForeColor.Red; break; }
	case 'u': { labelu->ForeColor = ForeColor.Red; break; }
	case 'i': { labeli->ForeColor = ForeColor.Red; break; }
	case 'o': { labelo->ForeColor = ForeColor.Red; break; }
	case 'p': { labelp->ForeColor = ForeColor.Red; break; }
	case 'Q': { labelq->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'W': { labelw->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'E': { labele->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'R': { labelr->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'T': { labelt->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Y': { labely->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'U': { labelu->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'I': { labeli->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'O': { labelo->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'P': { labelp->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '[': { labelSQBracket1->ForeColor = ForeColor.Red; break; }
	case ']': { labelSQBracket2->ForeColor = ForeColor.Red; break; }
	case '\\': { labelBackSlash->ForeColor = ForeColor.Red; break; }

	case 'a': { labela->ForeColor = ForeColor.Red; break; }
	case 's': { labels->ForeColor = ForeColor.Red; break; }
	case 'd': { labeld->ForeColor = ForeColor.Red; break; }
	case 'f': { labelf->ForeColor = ForeColor.Red; break; }
	case 'g': { labelg->ForeColor = ForeColor.Red; break; }
	case 'h': { labelh->ForeColor = ForeColor.Red; break; }
	case 'j': { labelj->ForeColor = ForeColor.Red; break; }
	case 'k': { labelk->ForeColor = ForeColor.Red; break; }
	case 'l': { labell->ForeColor = ForeColor.Red; break; }
	case 'A': { labela->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'S': { labels->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'D': { labeld->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'F': { labelf->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'G': { labelg->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'H': { labelh->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'J': { labelj->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'K': { labelk->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'L': { labell->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ';': { labelSemicolon ->ForeColor = ForeColor.Red; break; }
	case '\'': { labelSingleQuote->ForeColor = ForeColor.Red; break; }

	case 'z': { labelz->ForeColor = ForeColor.Red; break; }
	case 'x': { labelx->ForeColor = ForeColor.Red; break; }
	case 'c': { labelc->ForeColor = ForeColor.Red; break; }
	case 'v': { labelv->ForeColor = ForeColor.Red; break; }
	case 'b': { labelb->ForeColor = ForeColor.Red; break; }
	case 'n': { labeln->ForeColor = ForeColor.Red; break; }
	case 'm': { labelm->ForeColor = ForeColor.Red; break; }
	case 'Z': { labelz->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'X': { labelx->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'C': { labelc->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'V': { labelv->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'B': { labelb->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'N': { labeln->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'M': { labelm->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ',': { labelComma->ForeColor = ForeColor.Red; break; }
	case '.': { labelDot->ForeColor = ForeColor.Red; break; }
	case '/': { labelSlash->ForeColor = ForeColor.Red; break; }

	case '~': {labelWave->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '!': {label1->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '@': {label2->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '#': {label3->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '$': {label4->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '%': {label5->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '^': {label6->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '&': {label7->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '*': {label8->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '(': {label9->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ')': {label0->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '_': {labelMinus->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '+': {labelEQ->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }

	case '{': {labelSQBracket1->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '}': {labelSQBracket2->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '|': {labelBackSlash->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ':': {labelSemicolon->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '"': {labelSingleQuote->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '<': {labelComma->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '>': {labelDot->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '?': {labelSlash->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }

	case ' ': { labelSpace->ForeColor = ForeColor.Red; break; }

	default:
		break;
	}
}

void MainForm::SelectLabelColorRedRus(char letter)
{
	switch (letter)
	{
	case 'ё': { labelWave->ForeColor = ForeColor.Red; break; }
	case 'Ё': { labelWave->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '1': { label1->ForeColor = ForeColor.Red; break; }
	case '2': { label2->ForeColor = ForeColor.Red; break; }
	case '3': { label3->ForeColor = ForeColor.Red; break; }
	case '4': { label4->ForeColor = ForeColor.Red; break; }
	case '5': { label5->ForeColor = ForeColor.Red; break; }
	case '6': { label6->ForeColor = ForeColor.Red; break; }
	case '7': { label7->ForeColor = ForeColor.Red; break; }
	case '8': { label8->ForeColor = ForeColor.Red; break; }
	case '9': { label9->ForeColor = ForeColor.Red; break; }
	case '0': { label0->ForeColor = ForeColor.Red; break; }
	case '-': { labelMinus->ForeColor = ForeColor.Red; break; }
	case '=': { labelEQ->ForeColor = ForeColor.Red; break; }

	case 'й': { labelq->ForeColor = ForeColor.Red; break; }
	case 'ц': { labelw->ForeColor = ForeColor.Red; break; }
	case 'у': { labele->ForeColor = ForeColor.Red; break; }
	case 'к': { labelr->ForeColor = ForeColor.Red; break; }
	case 'е': { labelt->ForeColor = ForeColor.Red; break; }
	case 'н': { labely->ForeColor = ForeColor.Red; break; }
	case 'г': { labelu->ForeColor = ForeColor.Red; break; }
	case 'ш': { labeli->ForeColor = ForeColor.Red; break; }
	case 'щ': { labelo->ForeColor = ForeColor.Red; break; }
	case 'з': { labelp->ForeColor = ForeColor.Red; break; }
	case 'Й': { labelq->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ц': { labelw->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'У': { labele->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'К': { labelr->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Е': { labelt->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Н': { labely->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Г': { labelu->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ш': { labeli->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Щ': { labelo->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'З': { labelp->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Х': { labelSQBracket1->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ъ': { labelSQBracket2->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'х': { labelSQBracket1->ForeColor = ForeColor.Red; break; }
	case 'ъ': { labelSQBracket2->ForeColor = ForeColor.Red; break; }
	case '\\': { labelBackSlash->ForeColor = ForeColor.Red; break; }

	case 'ф': { labela->ForeColor = ForeColor.Red; break; }
	case 'ы': { labels->ForeColor = ForeColor.Red; break; }
	case 'в': { labeld->ForeColor = ForeColor.Red; break; }
	case 'а': { labelf->ForeColor = ForeColor.Red; break; }
	case 'п': { labelg->ForeColor = ForeColor.Red; break; }
	case 'р': { labelh->ForeColor = ForeColor.Red; break; }
	case 'о': { labelj->ForeColor = ForeColor.Red; break; }
	case 'л': { labelk->ForeColor = ForeColor.Red; break; }
	case 'д': { labell->ForeColor = ForeColor.Red; break; }
	case 'Ф': { labela->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ы': { labels->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'В': { labeld->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'А': { labelf->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'П': { labelg->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Р': { labelh->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'О': { labelj->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Л': { labelk->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Д': { labell->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'ж': { labelSemicolon->ForeColor = ForeColor.Red; break; }
	case 'э': { labelSingleQuote->ForeColor = ForeColor.Red; break; }
	case 'Ж': { labelSemicolon->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Э': { labelSingleQuote->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }

	case 'я': { labelz->ForeColor = ForeColor.Red; break; }
	case 'ч': { labelx->ForeColor = ForeColor.Red; break; }
	case 'с': { labelc->ForeColor = ForeColor.Red; break; }
	case 'м': { labelv->ForeColor = ForeColor.Red; break; }
	case 'и': { labelb->ForeColor = ForeColor.Red; break; }
	case 'т': { labeln->ForeColor = ForeColor.Red; break; }
	case 'ь': { labelm->ForeColor = ForeColor.Red; break; }
	case 'Я': { labelz->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ч': { labelx->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'С': { labelc->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'М': { labelv->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'И': { labelb->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Т': { labeln->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ь': { labelm->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'б': { labelComma->ForeColor = ForeColor.Red; break; }
	case 'ю': { labelDot->ForeColor = ForeColor.Red; break; }
	case '.': { labelSlash->ForeColor = ForeColor.Red; break; }
	case 'Б': { labelComma->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case 'Ю': { labelDot->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ',': { labelSlash->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }

	case '!': {label1->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '"': {label2->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '№': {label3->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ';': {label4->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '%': {label5->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ':': {label6->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '?': {label7->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '*': {label8->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '(': {label9->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case ')': {label0->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '_': {labelMinus->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }
	case '+': {labelEQ->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }

	case '/': {labelBackSlash->ForeColor = ForeColor.Red; labelShiftL->ForeColor = ForeColor.Red; break; }

	case ' ': { labelSpace->ForeColor = ForeColor.Red; break; }

	default:
		break;
	}
}

void MainForm::LabelsColorBlack()
{
	labelWave->ForeColor = ForeColor.Black;
	label1->ForeColor = ForeColor.Black;
	label2->ForeColor = ForeColor.Black;
	label3->ForeColor = ForeColor.Black;
	label4->ForeColor = ForeColor.Black;
	label5->ForeColor = ForeColor.Black;
	label6->ForeColor = ForeColor.Black;
	label7->ForeColor = ForeColor.Black; 
	label8->ForeColor = ForeColor.Black; 
	label9->ForeColor = ForeColor.Black;
	label0->ForeColor = ForeColor.Black; 
	labelMinus->ForeColor = ForeColor.Black; 
	labelEQ->ForeColor = ForeColor.Black; 

	labelq->ForeColor = ForeColor.Black; 
	labelw->ForeColor = ForeColor.Black; 
	labele->ForeColor = ForeColor.Black; 
	labelr->ForeColor = ForeColor.Black; 
	labelt->ForeColor = ForeColor.Black;
	labely->ForeColor = ForeColor.Black; 
	labelu->ForeColor = ForeColor.Black; 
	labeli->ForeColor = ForeColor.Black; 
	labelo->ForeColor = ForeColor.Black; 
	labelp->ForeColor = ForeColor.Black; 
	labelShiftL->ForeColor = ForeColor.Black; 
	labelSQBracket1->ForeColor = ForeColor.Black;
	labelSQBracket2->ForeColor = ForeColor.Black;
	labelBackSlash->ForeColor = ForeColor.Black;

	labela->ForeColor = ForeColor.Black; 
	labels->ForeColor = ForeColor.Black; 
	labeld->ForeColor = ForeColor.Black; 
	labelf->ForeColor = ForeColor.Black; 
	labelg->ForeColor = ForeColor.Black; 
	labelh->ForeColor = ForeColor.Black; 
	labelj->ForeColor = ForeColor.Black;
	labelk->ForeColor = ForeColor.Black; 
	labell->ForeColor = ForeColor.Black; 
	labelSemicolon->ForeColor = ForeColor.Black; 
	labelSingleQuote->ForeColor = ForeColor.Black; 

	labelz->ForeColor = ForeColor.Black;
	labelx->ForeColor = ForeColor.Black; 
	labelc->ForeColor = ForeColor.Black; 
	labelv->ForeColor = ForeColor.Black; 
	labelb->ForeColor = ForeColor.Black; 
	labeln->ForeColor = ForeColor.Black; 
	labelm->ForeColor = ForeColor.Black; 
	labelComma->ForeColor = ForeColor.Black; 
	labelDot->ForeColor = ForeColor.Black; 
	labelSlash->ForeColor = ForeColor.Black; 

	labelSpace->ForeColor = ForeColor.Black;

}

void MainForm::KeyboardLanguageRus() 
{
	labelWave->Text = "Ё";
	
	labelq->Text = "Й";
	labelw->Text = "Ц";
	labele->Text = "У";
	labelr->Text = "К";
	labelt->Text = "Е";
	labely->Text = "Н";
	labelu->Text = "Г";
	labeli->Text = "Ш";
	labelo->Text = "Щ";
	labelp->Text = "З";
	labelSQBracket1->Text = "Х";
	labelSQBracket2->Text = "Ъ";
	labelBackSlash->Text = "\\";

	labela->Text = "Ф";
	labels->Text = "Ы";
	labeld->Text = "В";
	labelf->Text = "А";
	labelg->Text = "П";
	labelh->Text = "Р";
	labelj->Text = "О";
	labelk->Text = "Л";
	labell->Text = "Д";
	labelSemicolon->Text = "Ж";
	labelSingleQuote->Text = "Э";

	labelz->Text = "Я";
	labelx->Text = "Ч";
	labelc->Text = "С";
	labelv->Text = "М";
	labelb->Text = "И";
	labeln->Text = "Т";
	labelm->Text = "Ь";
	labelComma->Text = "Б";
	labelDot->Text = "Ю";
	labelSlash->Text = ".";

	labelSpace->Text = "Пробел";

}

void MainForm::KeyboardLanguageEng()
{
	labelWave->Text = "`";

	labelq->Text = "Q";
	labelw->Text = "W";
	labele->Text = "E";
	labelr->Text = "R";
	labelt->Text = "T";
	labely->Text = "Y";
	labelu->Text = "U";
	labeli->Text = "I";
	labelo->Text = "O";
	labelp->Text = "P";
	labelSQBracket1->Text = "[";
	labelSQBracket2->Text = "]";
	labelBackSlash->Text = "\\";

	labela->Text = "A";
	labels->Text = "S";
	labeld->Text = "D";
	labelf->Text = "F";
	labelg->Text = "G";
	labelh->Text = "H";
	labelj->Text = "J";
	labelk->Text = "K";
	labell->Text = "L";
	labelSemicolon->Text = ";";
	labelSingleQuote->Text = "'";

	labelz->Text = "Z";
	labelx->Text = "X";
	labelc->Text = "C";
	labelv->Text = "V";
	labelb->Text = "B";
	labeln->Text = "N";
	labelm->Text = "M";
	labelComma->Text = ",";
	labelDot->Text = ".";
	labelSlash->Text = "/";

	labelSpace->Text = "Space";

}

int MainForm::KeyClickHandlerRus(KeyPressEventArgs^ e, int i)
{
	unsigned char* str = (unsigned char*)malloc(sizeof(unsigned char) * LevelsForm::LvlStrLen);
	str = LevelsForm::LvlStr;
	if (i == 0)
	{
		timerCounterSec = 0;
		timer->Enabled = true;
		toolStrip1->Enabled = false;
	}
	else if (i >= strlen((char*)str) - 1)
	{
		timer->Enabled = false;
		toolStrip1->Enabled = true;
	}

	LabelsColorBlack();
	if ((e->KeyChar - 848 == str[i])/*для русского*/ || (e->KeyChar - 921 == str[i])/*ё*/ || (e->KeyChar - 857 == str[i])/*Ё*/)
	{
		if (i < strlen((char*)str))
		{
			i += 1;
		}

		return i;
	}
	else
	{
		if (i < strlen((char*)str))
		{
			Beep(880, 100);    //880, 100
			std::cin.get();
			SelectLabelColorRedRus(str[i]);
			err++;
		}
		e->Handled = true;
		return i;
	}
}

int MainForm::KeyClickHandlerEng(KeyPressEventArgs^ e, int i)
{
	unsigned char* str = (unsigned char*)malloc(sizeof(unsigned char) * LevelsForm::LvlStrLen);
	str = LevelsForm::LvlStr;

	if (i == 0)
	{
		timerCounterSec = 0;
		timer->Enabled = true;
		toolStrip1->Enabled = false;
	}
	else if (i >= strlen((char*)str) - 1)
	{
		timer->Enabled = false;
		toolStrip1->Enabled = true;
	}

	LabelsColorBlack();
	if (e->KeyChar.Equals(str[i]))
	{
		if (i < strlen((char*)str))
		{
			i += 1;
		}

		return i;
	}
	else
	{
		if (i < strlen((char*)str))
		{
			Beep(880, 100);    //880, 100
			std::cin.get();
			SelectLabelColorRedEng(str[i]);
			err++;
		}
		e->Handled = true;
		return i;
	}

}

void MainForm::EditResFile(unsigned int Min, unsigned int Sec, unsigned int Speed, unsigned int Errors)
{
	int arr[11][5] = { 0 };
	if (SetingsForm::flagEng == 1)
	{
		FILE* file = fopen("Files\\LevelsResEng.txt", "w+t");
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

		arr[LevelsForm::LvlChoice][1] = Min;
		arr[LevelsForm::LvlChoice][2] = Sec;
		arr[LevelsForm::LvlChoice][3] = Errors;
		arr[LevelsForm::LvlChoice][4] = Speed;

		for (int i = 1; i <=10 ; i++)     //заполнение файла из массива
		{
			for (int j = 1; j <=4; j++)
			{
				fprintf(file, "%d ", arr[i][j]);
			}
		}

		fclose(file);
	}
	else if (SetingsForm::flagRus == 1)
	{
		FILE* file = fopen("Files\\LevelsResRus.txt", "w+t");
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

		arr[LevelsForm::LvlChoice][1] = Min;
		arr[LevelsForm::LvlChoice][2] = Sec;
		arr[LevelsForm::LvlChoice][3] = Errors;
		arr[LevelsForm::LvlChoice][4] = Speed;

		for (int i = 1; i <= 10; i++)   //заполнение файла из массива
		{
			for (int j = 1; j <= 4; j++)
			{
				fprintf(file, "%d ", arr[i][j]);
			}
		}

		fclose(file);
	}

}