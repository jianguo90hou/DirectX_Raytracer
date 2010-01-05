#include "StdAfx.h"
#include "Light.h"

Light::Light(void)
{
	this->position = D3DXVECTOR3(-20.0f, 50.0f, 30.0f);
	this->ambientColor = D3DXCOLOR(128.0f, 128.0f, 128.0f, 128.0f);
	this->ambientIntensity = 0.3f;
	this->diffuseColor = D3DXCOLOR(255.0f, 255.0f, 255.0f, 255.0f);
	this->diffuseIntensity = 1.0f;
}

Light::Light(D3DXVECTOR3 &position, D3DXCOLOR &diffuseColor, D3DXCOLOR &ambientColor, float diffuseIntensity, float ambientIntensity)
{
	this->position = position;
	this->diffuseColor = diffuseColor;
	this->ambientColor = ambientColor;
	this->diffuseIntensity = diffuseIntensity;
	this->ambientIntensity = ambientIntensity;
}

Light::~Light(void)
{
}