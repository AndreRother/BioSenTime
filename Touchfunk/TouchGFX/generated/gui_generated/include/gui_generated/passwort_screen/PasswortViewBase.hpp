/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PASSWORTVIEWBASE_HPP
#define PASSWORTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/passwort_screen/PasswortPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class PasswortViewBase : public touchgfx::View<PasswortPresenter>
{
public:
    PasswortViewBase();
    virtual ~PasswortViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void ButtonClicked1()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button2clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button3Clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button4cklicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button5Clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button6Clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button7Clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button8Clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button9Clicked()
    {
        // Override and implement this function in Passwort
    }

    virtual void Button0Clicked()
    {
        // Override and implement this function in Passwort
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image Cover;
    touchgfx::Button SettingsButton;
    touchgfx::ButtonWithLabel buttonWithLabel1;
    touchgfx::ButtonWithLabel buttonWithLabel2;
    touchgfx::ButtonWithLabel buttonWithLabel3;
    touchgfx::ButtonWithLabel buttonWithLabel4;
    touchgfx::ButtonWithLabel buttonWithLabel5;
    touchgfx::ButtonWithLabel buttonWithLabel6;
    touchgfx::ButtonWithLabel buttonWithLabel7;
    touchgfx::ButtonWithLabel buttonWithLabel8;
    touchgfx::ButtonWithLabel buttonWithLabel9;
    touchgfx::ButtonWithLabel buttonWithLabel0;
    touchgfx::ButtonWithLabel buttonWithLabel10;
    touchgfx::Button button10;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<PasswortViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // PASSWORTVIEWBASE_HPP
