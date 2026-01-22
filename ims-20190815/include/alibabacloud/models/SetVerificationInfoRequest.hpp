// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVERIFICATIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETVERIFICATIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetVerificationInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVerificationInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, SetVerificationInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    SetVerificationInfoRequest() = default ;
    SetVerificationInfoRequest(const SetVerificationInfoRequest &) = default ;
    SetVerificationInfoRequest(SetVerificationInfoRequest &&) = default ;
    SetVerificationInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVerificationInfoRequest() = default ;
    SetVerificationInfoRequest& operator=(const SetVerificationInfoRequest &) = default ;
    SetVerificationInfoRequest& operator=(SetVerificationInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && this->mobilePhone_ == nullptr && this->userPrincipalName_ == nullptr && this->verifyType_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SetVerificationInfoRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline SetVerificationInfoRequest& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline SetVerificationInfoRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline SetVerificationInfoRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The email address.
    // 
    // >  If you set `VerifyType` to `email`, you must specify this parameter.
    shared_ptr<string> email_ {};
    // The mobile phone number.
    // 
    // >  If you set `VerifyType` to `sms`, you must specify this parameter.
    shared_ptr<string> mobilePhone_ {};
    // The logon name of the RAM user.
    shared_ptr<string> userPrincipalName_ {};
    // The multi-factor authentication (MFA) method. Valid values:
    // 
    // *   sms: mobile phone.
    // *   email: email.
    shared_ptr<string> verifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
