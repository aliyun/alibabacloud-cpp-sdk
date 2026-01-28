// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITEMAILVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITEMAILVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SubmitEmailVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEmailVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SendIfExist, sendIfExist_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEmailVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SendIfExist, sendIfExist_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SubmitEmailVerificationRequest() = default ;
    SubmitEmailVerificationRequest(const SubmitEmailVerificationRequest &) = default ;
    SubmitEmailVerificationRequest(SubmitEmailVerificationRequest &&) = default ;
    SubmitEmailVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEmailVerificationRequest() = default ;
    SubmitEmailVerificationRequest& operator=(const SubmitEmailVerificationRequest &) = default ;
    SubmitEmailVerificationRequest& operator=(SubmitEmailVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && this->lang_ == nullptr && this->sendIfExist_ == nullptr && this->userClientIp_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SubmitEmailVerificationRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SubmitEmailVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sendIfExist Field Functions 
    bool hasSendIfExist() const { return this->sendIfExist_ != nullptr;};
    void deleteSendIfExist() { this->sendIfExist_ = nullptr;};
    inline bool getSendIfExist() const { DARABONBA_PTR_GET_DEFAULT(sendIfExist_, false) };
    inline SubmitEmailVerificationRequest& setSendIfExist(bool sendIfExist) { DARABONBA_PTR_SET_VALUE(sendIfExist_, sendIfExist) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SubmitEmailVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> email_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<bool> sendIfExist_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
