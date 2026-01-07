// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDASYNCEMAILCAPTCHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDASYNCEMAILCAPTCHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class SendAsyncEmailCaptchaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAsyncEmailCaptchaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_TO_JSON(ContactorId, contactorId_);
    };
    friend void from_json(const Darabonba::Json& j, SendAsyncEmailCaptchaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_FROM_JSON(ContactorId, contactorId_);
    };
    SendAsyncEmailCaptchaRequest() = default ;
    SendAsyncEmailCaptchaRequest(const SendAsyncEmailCaptchaRequest &) = default ;
    SendAsyncEmailCaptchaRequest(SendAsyncEmailCaptchaRequest &&) = default ;
    SendAsyncEmailCaptchaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAsyncEmailCaptchaRequest() = default ;
    SendAsyncEmailCaptchaRequest& operator=(const SendAsyncEmailCaptchaRequest &) = default ;
    SendAsyncEmailCaptchaRequest& operator=(SendAsyncEmailCaptchaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->contactInfo_ == nullptr && this->contactorId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SendAsyncEmailCaptchaRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline string getContactInfo() const { DARABONBA_PTR_GET_DEFAULT(contactInfo_, "") };
    inline SendAsyncEmailCaptchaRequest& setContactInfo(string contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };


    // contactorId Field Functions 
    bool hasContactorId() const { return this->contactorId_ != nullptr;};
    void deleteContactorId() { this->contactorId_ = nullptr;};
    inline string getContactorId() const { DARABONBA_PTR_GET_DEFAULT(contactorId_, "") };
    inline SendAsyncEmailCaptchaRequest& setContactorId(string contactorId) { DARABONBA_PTR_SET_VALUE(contactorId_, contactorId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> contactInfo_ {};
    shared_ptr<string> contactorId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
