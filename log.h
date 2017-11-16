#pragma once

class Log
{
public:
	int open(std::string name);									// openLogFile
	int close();
	int writeError(int id, std::string comm);
	int writeText(int id, std::string comm);
	int writeBoot();
	int writeDown();
	int writeSave();

	Log()
	{
	
	}
	~Log()
	{
		//delete logFile.get();
	}

private:
	std::ofstream logFile;							// pointer to logFile
	//std::string name;
		

};
int Log::open(std::string name)
{
	if (logFile.is_open())
	{
		std::cout << "\n log file is open already!";
	}
	logFile.open(name, std::ios::app);

	return 1;
}
int Log::close()
{
	if (logFile.is_open())
	{
		logFile.close();
		return 1;
	}
	else
	{
		std::cout << "\n log file is already closed!";
		return -1;
	}
}
int Log::writeError(int id, std::string comm)
{
	logFile
		<< "\n[ERR] code:"
		<< id << " "
		<< comm.c_str();
	return 0;
}
int Log::writeText(int id, std::string comm)
{
	logFile
		<< "\n[TEXT] ";
	
	if (id >= 0)
	{
		logFile
			<< "code:"
			<< id
			<< " ";
	}

	logFile
		<< comm.c_str();
	return 0;
}
int Log::writeBoot()
{
	logFile
		<< "\n[BOOT] program is start";
	return 0;
}
int Log::writeDown()
{
	logFile
		<< "\n[DOWN] program is quiting";
	return 0;
}
int Log::writeSave()
{
	logFile
		<< "\n[SAVE] saving...";
	return 0;
}