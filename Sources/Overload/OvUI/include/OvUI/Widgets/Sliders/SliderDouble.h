/**
* @project: Overload
* @author: Overload Tech.
* @restrictions: This software may not be resold, redistributed or otherwise conveyed to a third party.
*/

#pragma once

#include "OvUI/Widgets/Sliders/SliderSingleScalar.h"

namespace OvUI::Widgets::Sliders
{
	/**
	* Slider widget of type double
	*/
	class API_OVUI SliderDouble : public SliderSingleScalar<double>
	{
	public:
		/**
		* Constructor
		* @param p_min
		* @param p_max
		* @param p_value
		* @param p_orientation
		* @param p_label
		* @param p_format
		*/
		SliderDouble
		(
			double p_min = 0.0,
			double p_max = 1.0,
			double p_value = 0.5,
			ESliderOrientation p_orientation = ESliderOrientation::HORIZONTAL,
			const std::string& p_label = "",
			const std::string& p_format = "%.6f"
		);
	};
}