#pragma once
class Status
{

	Status()
	{
		status = false;
	}

public:
	bool	returnStatus();
	int		setStatus(bool cStatus);
private:

	bool status;

};

bool Status::returnStatus()
{
	return status;
}
int  Status::setStatus(bool cStatus)
{
	status = cStatus;
	return 0;
}