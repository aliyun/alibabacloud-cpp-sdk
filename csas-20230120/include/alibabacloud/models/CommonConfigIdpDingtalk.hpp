// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONCONFIGIDPDINGTALK_HPP_
#define ALIBABACLOUD_MODELS_COMMONCONFIGIDPDINGTALK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CommonConfigIdpDingtalk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonConfigIdpDingtalk& obj) { 
      DARABONBA_PTR_TO_JSON(EventCallbackBase, eventCallbackBase_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(HomePage, homePage_);
      DARABONBA_PTR_TO_JSON(LoginRedirect, loginRedirect_);
    };
    friend void from_json(const Darabonba::Json& j, CommonConfigIdpDingtalk& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCallbackBase, eventCallbackBase_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(HomePage, homePage_);
      DARABONBA_PTR_FROM_JSON(LoginRedirect, loginRedirect_);
    };
    CommonConfigIdpDingtalk() = default ;
    CommonConfigIdpDingtalk(const CommonConfigIdpDingtalk &) = default ;
    CommonConfigIdpDingtalk(CommonConfigIdpDingtalk &&) = default ;
    CommonConfigIdpDingtalk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonConfigIdpDingtalk() = default ;
    CommonConfigIdpDingtalk& operator=(const CommonConfigIdpDingtalk &) = default ;
    CommonConfigIdpDingtalk& operator=(CommonConfigIdpDingtalk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCallbackBase_ == nullptr
        && return this->eventLabel_ == nullptr && return this->homePage_ == nullptr && return this->loginRedirect_ == nullptr; };
    // eventCallbackBase Field Functions 
    bool hasEventCallbackBase() const { return this->eventCallbackBase_ != nullptr;};
    void deleteEventCallbackBase() { this->eventCallbackBase_ = nullptr;};
    inline string eventCallbackBase() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackBase_, "") };
    inline CommonConfigIdpDingtalk& setEventCallbackBase(string eventCallbackBase) { DARABONBA_PTR_SET_VALUE(eventCallbackBase_, eventCallbackBase) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline CommonConfigIdpDingtalk& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // homePage Field Functions 
    bool hasHomePage() const { return this->homePage_ != nullptr;};
    void deleteHomePage() { this->homePage_ = nullptr;};
    inline string homePage() const { DARABONBA_PTR_GET_DEFAULT(homePage_, "") };
    inline CommonConfigIdpDingtalk& setHomePage(string homePage) { DARABONBA_PTR_SET_VALUE(homePage_, homePage) };


    // loginRedirect Field Functions 
    bool hasLoginRedirect() const { return this->loginRedirect_ != nullptr;};
    void deleteLoginRedirect() { this->loginRedirect_ = nullptr;};
    inline string loginRedirect() const { DARABONBA_PTR_GET_DEFAULT(loginRedirect_, "") };
    inline CommonConfigIdpDingtalk& setLoginRedirect(string loginRedirect) { DARABONBA_PTR_SET_VALUE(loginRedirect_, loginRedirect) };


  protected:
    std::shared_ptr<string> eventCallbackBase_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> homePage_ = nullptr;
    std::shared_ptr<string> loginRedirect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
