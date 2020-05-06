#ifndef H_EXTENSIONS_TEMPLATES_CPPPLUGINSKELETON_0_INCLUDE_TEMPLATES_CPPPLUGINSKELETON_INIT_HPP
#define H_EXTENSIONS_TEMPLATES_CPPPLUGINSKELETON_0_INCLUDE_TEMPLATES_CPPPLUGINSKELETON_INIT_HPP

// This file has been initially autogenerated by 'cutehmi.skeleton.cpp' Qbs module.

#include "internal/platform.hpp"
#include <cutehmi/Initializer.hpp>

namespace templates {
namespace cpppluginskeleton {

/**
 * %Init. This class performs initialization of the extension.
 *
 * Normally it is not advisable to create custom instances of this class as extension provides an instance on its own. This can be
 * invalidated particulary by static builds in which case a global variable may not get into resulting binary.
 */
class TEMPLATES_CPPPLUGINSKELETON_API Init final:
	public ::cutehmi::Initializer<Init>
{
	public:
		/**
		 * Default constructor.
		 */
		Init();
};

}
}

#endif

//(c)ANYONE: Copyright © 2020, Anyone. All rights reserved.
//(c)ANYONE: This file is a part of CuteHMI.
//(c)ANYONE: CuteHMI is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//(c)ANYONE: CuteHMI is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
//(c)ANYONE: You should have received a copy of the GNU Lesser General Public License along with CuteHMI.  If not, see <https://www.gnu.org/licenses/>.