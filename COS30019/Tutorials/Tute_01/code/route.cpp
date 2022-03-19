#include <iostream>
#include "route.hpp"

	route::route(std::string from, std::string to, int distance, int sDistance)
	{
		_from = from;
		_to = to;
		_distance = distance;
		_sDistance = sDistance;
	};
