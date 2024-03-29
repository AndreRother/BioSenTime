/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/standartscreen_screen/StandartScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

StandartScreenViewBase::StandartScreenViewBase() :
    buttonCallback(this, &StandartScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    Cover.setXY(0, 0);
    Cover.setBitmap(touchgfx::Bitmap(BITMAP_REALISTISCHE_ART_DES_LEITERPLATTE_HINTERGRUNDES_23_2148212060_ID));

    SettingsButton.setXY(215, 100);
    SettingsButton.setBitmaps(touchgfx::Bitmap(BITMAP_ORIGINAL_ID), touchgfx::Bitmap(BITMAP_ORIGINAL_ID));
    SettingsButton.setAction(buttonCallback);
    SettingsButton.setAlpha(0);

    fail.setXY(215, 100);
    fail.setVisible(false);
    fail.setBitmap(touchgfx::Bitmap(BITMAP_OROGINALRED_ID));

    check.setXY(215, 100);
    check.setVisible(false);
    check.setBitmap(touchgfx::Bitmap(BITMAP_OROGINALGREEN_ID));

    loginButton.setXY(9, 113);
    loginButton.setVisible(false);
    loginButton.setBitmaps(touchgfx::Bitmap(BITMAP_LOGIN_ID), touchgfx::Bitmap(BITMAP_LOGIN_ID));
    loginButton.setAction(buttonCallback);

    logoutButton.setXY(308, 113);
    logoutButton.setVisible(false);
    logoutButton.setBitmaps(touchgfx::Bitmap(BITMAP_LOGOUT_ID), touchgfx::Bitmap(BITMAP_LOGOUT_ID));
    logoutButton.setAction(buttonCallback);

    textlogin.setXY(72, 233);
    textlogin.setVisible(false);
    textlogin.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textlogin.setLinespacing(0);
    textlogin.setTypedText(touchgfx::TypedText(T_SINGLEUSEID25));

    textlogout.setXY(65, 233);
    textlogout.setVisible(false);
    textlogout.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textlogout.setLinespacing(0);
    textlogout.setTypedText(touchgfx::TypedText(T_SINGLEUSEID26));

    texttimeout.setXY(38, 233);
    texttimeout.setVisible(false);
    texttimeout.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    texttimeout.setLinespacing(0);
    texttimeout.setTypedText(touchgfx::TypedText(T_SINGLEUSEID27));

    add(__background);
    add(Cover);
    add(SettingsButton);
    add(fail);
    add(check);
    add(loginButton);
    add(logoutButton);
    add(textlogin);
    add(textlogout);
    add(texttimeout);
}

void StandartScreenViewBase::setupScreen()
{

    //SettingsButton
    //When screen transition begins fade SettingsButton
    //Fade SettingsButton to alpha:255 with LinearIn easing in 1000 ms (60 Ticks)
    SettingsButton.clearFadeAnimationEndedAction();
    SettingsButton.startFadeAnimation(255, 60, touchgfx::EasingEquations::linearEaseIn);

    //settingsIN
    //When screen transition begins fade SettingsButton
    //Fade SettingsButton to alpha:255 with LinearIn easing in 1000 ms (60 Ticks)
    SettingsButton.clearFadeAnimationEndedAction();
    SettingsButton.startFadeAnimation(255, 60, touchgfx::EasingEquations::linearEaseIn);

}

void StandartScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &SettingsButton)
    {
        //ChangeScreen
        //When SettingsButton clicked change screen to Passwort
        //Go to Passwort with no screen transition
        application().gotoPasswortScreenNoTransition();
    }
    else if (&src == &loginButton)
    {
        //logincklicked
        //When loginButton clicked call virtual function
        //Call loginbuttonClicked
        loginbuttonClicked();
    }
    else if (&src == &logoutButton)
    {
        //Logout
        //When logoutButton clicked call virtual function
        //Call logoutButtonClicked
        logoutButtonClicked();
    }
}
