#include "PCH.h"
#include "Image.h"
#include "IRenderer.h"
#include "ISkin.h"

MY_UI_Too::Controls::Image::Image(IWidget* parent): Widget(parent), _Texture(nullptr) {

}
MY_UI_Too::Controls::Image::~Image(){
	SAFE_DELETE(_Texture);
}
bool MY_UI_Too::Controls::Image::Set_Texture(std::string file){
	if(_Texture != nullptr) _Texture->clear();
	_Texture = Internal::Renderer->LoadTexture(file);
	Utilities::Point p = _Texture->Get_Dimensions();
	Set_Bounds(Utilities::Rect(0, 0, p.left, p.top));
	return _Texture != nullptr;
}

void MY_UI_Too::Controls::Image::Draw(){
	Utilities::Rect rect = Get_Bounds();
	rect.left = _Internals.Absolute_TL.x;
	rect.top = _Internals.Absolute_TL.y;
	Internal::Renderer->DrawTexturedRect_NoClip(_Texture, _UVs, rect);
}