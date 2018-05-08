#pragma once

#include <Windows.h>
#include <objbase.h>

#include <string>


namespace MyModeler {
	GUID CreateGuid();
	std::string GuidToString(GUID guid);

	class Utilities
	{
	private:

	public:
		static std::string Utilities::GenerateId();

	};
}

