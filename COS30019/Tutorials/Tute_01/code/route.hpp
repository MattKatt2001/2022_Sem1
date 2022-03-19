#ifndef ROUTE_H
#define ROUTE_H

class route
{
private:

protected:
	std::string _from;
	std::string _to;
	int _distance;
	int _sDistance;

public:
	route(std::string from, std::string to, int distance, int sDistance);
};

#endif
