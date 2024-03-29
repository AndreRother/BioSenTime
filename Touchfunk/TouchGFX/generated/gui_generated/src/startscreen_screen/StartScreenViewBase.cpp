/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/startscreen_screen/StartScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

StartScreenViewBase::StartScreenViewBase() :
    devInEndedCallback(this, &StartScreenViewBase::devInEndedCallbackHandler),
    wSTECHNIKEndedCallback(this, &StartScreenViewBase::wSTECHNIKEndedCallbackHandler),
    blackEndedCallback(this, &StartScreenViewBase::blackEndedCallbackHandler),
    touchGFXINEndedCallback(this, &StartScreenViewBase::touchGFXINEndedCallbackHandler),
    touchGFOUTEndedCallback(this, &StartScreenViewBase::touchGFOUTEndedCallbackHandler),
    backgroundEndedCallback(this, &StartScreenViewBase::backgroundEndedCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    Background1.setPosition(0, 0, 480, 272);
    Background1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    Devby.setXY(170, 122);
    Devby.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    Devby.setLinespacing(0);
    Devby.setAlpha(0);
    Devby.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_LOGO_CONSULTING_480X272_ID));
    image1.setAlpha(0);

    Background2.setPosition(0, 0, 480, 272);
    Background2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    Background2.setAlpha(0);

    TouchGFX.setXY(30, 76);
    TouchGFX.setBitmap(touchgfx::Bitmap(BITMAP_HERUNTERLADEN_ID));
    TouchGFX.setAlpha(0);

    Cover.setXY(0, 0);
    Cover.setBitmap(touchgfx::Bitmap(BITMAP_REALISTISCHE_ART_DES_LEITERPLATTE_HINTERGRUNDES_23_2148212060_ID));
    Cover.setAlpha(0);

    add(__background);
    add(Background1);
    add(Devby);
    add(image1);
    add(Background2);
    add(TouchGFX);
    add(Cover);
}

void StartScreenViewBase::setupScreen()
{

    //DevIn
    //When screen transition begins fade Devby
    //Fade Devby to alpha:255 with LinearIn easing in 2000 ms (120 Ticks)
    Devby.clearFadeAnimationEndedAction();
    Devby.startFadeAnimation(255, 120, touchgfx::EasingEquations::linearEaseIn);
    Devby.setFadeAnimationEndedAction(devInEndedCallback);

}

void StartScreenViewBase::devInEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::TextArea>& comp)
{
    //WSTECHNIK
    //When DevIn completed fade image1
    //Fade image1 to alpha:255 with LinearIn easing in 2000 ms (120 Ticks)
    image1.clearFadeAnimationEndedAction();
    image1.startFadeAnimation(255, 120, touchgfx::EasingEquations::linearEaseIn);
    image1.setFadeAnimationEndedAction(wSTECHNIKEndedCallback);

    //DevOut
    //When DevIn completed fade Devby
    //Fade Devby to alpha:0 with LinearOut easing in 2000 ms (120 Ticks)
    Devby.clearFadeAnimationEndedAction();
    Devby.startFadeAnimation(0, 120, touchgfx::EasingEquations::linearEaseOut);
}

void StartScreenViewBase::wSTECHNIKEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp)
{
    //Black
    //When WSTECHNIK completed fade Background2
    //Fade Background2 to alpha:255 with LinearIn easing in 2000 ms (120 Ticks)
    Background2.clearFadeAnimationEndedAction();
    Background2.startFadeAnimation(255, 120, touchgfx::EasingEquations::linearEaseIn);
    Background2.setFadeAnimationEndedAction(blackEndedCallback);
}

void StartScreenViewBase::blackEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Box>& comp)
{
    //TouchGFXIN
    //When Black completed fade TouchGFX
    //Fade TouchGFX to alpha:255 with LinearIn easing in 2000 ms (120 Ticks)
    TouchGFX.clearFadeAnimationEndedAction();
    TouchGFX.startFadeAnimation(255, 120, touchgfx::EasingEquations::linearEaseIn);
    TouchGFX.setFadeAnimationEndedAction(touchGFXINEndedCallback);
}

void StartScreenViewBase::touchGFXINEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp)
{
    //TouchGFOUT
    //When TouchGFXIN completed fade TouchGFX
    //Fade TouchGFX to alpha:0 with LinearOut easing in 2000 ms (120 Ticks)
    TouchGFX.clearFadeAnimationEndedAction();
    TouchGFX.startFadeAnimation(0, 120, touchgfx::EasingEquations::linearEaseOut);
    TouchGFX.setFadeAnimationEndedAction(touchGFOUTEndedCallback);
}

void StartScreenViewBase::touchGFOUTEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp)
{
    //Background
    //When TouchGFOUT completed fade Cover
    //Fade Cover to alpha:255 with LinearIn easing in 2000 ms (120 Ticks)
    Cover.clearFadeAnimationEndedAction();
    Cover.startFadeAnimation(255, 120, touchgfx::EasingEquations::linearEaseIn);
    Cover.setFadeAnimationEndedAction(backgroundEndedCallback);
}

void StartScreenViewBase::backgroundEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp)
{
    //ChangeScreen
    //When Background completed change screen to StandartScreen
    //Go to StandartScreen with no screen transition
    application().gotoStandartScreenScreenNoTransition();
}
