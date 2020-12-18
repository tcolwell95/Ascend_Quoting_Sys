#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <QString>
using namespace std;

class Quote
{
private:
    int pitchNumerator = 3;
    int unitSquare = 0;
    int roofHeight = 1;
    string shingleType = "";
    bool PremiumFeature = false;
    int markUp = 0;
    int labor = 200;
    double runningTotal = 0;
public:
	Quote()
	{
		pitchNumerator = 0;
		unitSquare = 0;
		roofHeight = 0;
		shingleType = "";
		PremiumFeature = false;
	}

	int getPitchNumerator()
	{
		return pitchNumerator;
	}

    QString getAll(int i){
        QString extra_pay;
        if(PremiumFeature==true){
           extra_pay = "20";
        }
        else extra_pay = "0";


        if (i == 0)
        return ("Materials: $100" );
         if (i == 1)
       return ("Labor: $" + QString::number(labor));
          if (i == 2)
      return "Pitch Factor: $" + QString::number(getPitchFactor());
           if (i == 3)
      return "Premium Materials: $" + extra_pay;
            if (i == 4)
      return "Section total: " + QString::number(calculateQuoteSections());;

    }

	void setPitchNumerator(int pitchNumerator)
	{
		this->pitchNumerator = pitchNumerator;
	}

    double getRunningTotal(){return runningTotal;}
	int getUnitSquare()
	{
		return unitSquare;
	}

	void setUnitSquare(int unitSquare)
	{
		this->unitSquare = unitSquare;
	}

	int getRoofHeight()
	{
		return roofHeight;
	}

	void setRoofHeight(int roofHeight)
	{
		this->roofHeight = roofHeight;
	}

	string getShingleType()
	{
		return shingleType;
	}

    void setShingleType(string shingleType)
	{
		this->shingleType = shingleType;
	}

	bool isPremiumFeature()
	{
		return PremiumFeature;
	}

    double getMarkUp()
    {
        return markUp;
    }

    void setMarkUp(int markUp)
    {
        this->markUp = markUp;
    }

	bool setPremiumFeature(bool isPremiumFeature)
	{
		this->PremiumFeature = isPremiumFeature;
	}

	double calculateQuoteSections()
	{

        double total = 0;

        double markup_factor = 1.0 + (double)markUp /100.0;

        double pricePerSquare = 100 + labor;

        if (PremiumFeature == true) {
            pricePerSquare += 20;
        }

        if (roofHeight == 2)
        {
                  pricePerSquare += 10;
        }
        else if (roofHeight >= 3)
        {
                  pricePerSquare += 20;
        }

        total = unitSquare * pricePerSquare;

        total = total * getPitchFactor();

        total = total * markup_factor;

        runningTotal += total;

        int type = (int)(total * 100);

        total = (double)type/100;


        return total;
	}

	double getPitchFactor()
	{
		switch (pitchNumerator) {

		case 3: return 1.031;
			break;
		case 4: return 1.054;
			break;
		case 5: return 1.083;
			break;
		case 6: return 1.118;
			break;
		case 7: return 1.158;
			break;
		case 8: return 1.202;
			break;
		case 9: return 1.25;
			break;
		case 10: return 1.302;
			break;
		case 11: return 1.357;
			break;
		case 12: return 1.414;
			break;
		case 16: return 1.667;
			break;
		case 18: return 1.803;
			break;
		case 24: return 2.236;
			break;
		}
    }

};




