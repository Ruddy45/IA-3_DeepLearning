#include "./CData.h"
#include <fstream>
#include <Debug/DebugConsole.h>


//------------------------- AddData -------------------------------------
//
//  adds a new pattern to data
//-----------------------------------------------------------------------
void CData::AddData(std::vector<double> &data, std::vector<double> &targets)
{
	if (data.size() == nb_input && targets.size() == nb_target) {
		m_vecInputs.push_back(data);
		m_vecTargets.push_back(targets);
	}
	else {
		throw std::exception("Please check Input & Target Data !");
	}

}

double CData::GetNbShooting()
{

	double temp = 0;

	if (m_vecTargets.size() > 0) {

		for (size_t i = 0; i < nb_target; i++)
		{
			if (m_vecTargets[i][0] == 1)
				temp++;
		}
		return temp / m_vecTargets.size();

	}

	return temp;
}

void CData::WriteData() {

	for (int i = 0; i < m_vecInputs.size(); i++) {
		for (int j = 0; j < m_vecInputs.at(i).size(); j++) {
			ostringstream strs;
			strs << m_vecInputs.at(i).at(j) << "||";
			data += strs.str();
		}
		for (int j = 0; j < m_vecTargets.at(i).size(); j++) {
			ostringstream strs;
			strs << m_vecTargets.at(i).at(j) << "||";
			data += strs.str();
		}
		data += "\n";
	}
}



void CData::SaveData() {
	ofstream monData("Data.txt");
	if (monData.is_open()) {
		monData << data;
	}
}
