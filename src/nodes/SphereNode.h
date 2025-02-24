/*****************************************************
* TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * SphereNode class definition
 *
 *****************************************************/
#pragma once
#include <of3dPrimitives.h>

#include "BaseNode.h"


class SphereNode : public BaseNode {

private:

	ofSpherePrimitive m_primitive;


public:
	explicit SphereNode(const std::string& p_name);
	void draw(bool p_objectPicking) override;
	ofVec3f getBoundingBox() override;
	void setRadius(float p_radius);

};
