#ifndef DEF_MENU_HPP
#define DEF_MENU_HPP

#include "BaseScene.hpp"
#include "Keyboard.hpp"


class Menu : public BaseScene
{
public:
	Menu(ISceneChanger* changer);
	~Menu();

private:
	void Update() override;
	void Draw() override;

	int gh_title;
};

#endif
// EOF
