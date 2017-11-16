#pragma once
class Status
{
public:
	bool returnStatus();
	int setStatus(bool set);


private:
	bool status;
};
bool Status::returnStatus()
{
	return status;
}
int Status::setStatus(bool set)
{
	status = set;

	if (status == set)
		return 1;

	return 0;
}
