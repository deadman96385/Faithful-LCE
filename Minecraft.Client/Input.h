#pragma once
class Player;

class Input
{
public:
	float xa;
    float ya;
	float sprintForward;

    bool wasJumping;
    bool jumping;
    bool sneaking;
	bool usingKeyboardMovement;
    
	Input();	// 4J - added

    virtual void tick(LocalPlayer *player);

private:

    bool lReset;
    bool rReset;
	bool m_gamepadSneaking;
};
