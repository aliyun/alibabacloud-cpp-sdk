// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDSECUREMOBILEPHONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDSECUREMOBILEPHONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class BindSecureMobilePhoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindSecureMobilePhoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(SecureMobilePhone, secureMobilePhone_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
    };
    friend void from_json(const Darabonba::Json& j, BindSecureMobilePhoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(SecureMobilePhone, secureMobilePhone_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
    };
    BindSecureMobilePhoneRequest() = default ;
    BindSecureMobilePhoneRequest(const BindSecureMobilePhoneRequest &) = default ;
    BindSecureMobilePhoneRequest(BindSecureMobilePhoneRequest &&) = default ;
    BindSecureMobilePhoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindSecureMobilePhoneRequest() = default ;
    BindSecureMobilePhoneRequest& operator=(const BindSecureMobilePhoneRequest &) = default ;
    BindSecureMobilePhoneRequest& operator=(BindSecureMobilePhoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->secureMobilePhone_ == nullptr && this->verificationCode_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline BindSecureMobilePhoneRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // secureMobilePhone Field Functions 
    bool hasSecureMobilePhone() const { return this->secureMobilePhone_ != nullptr;};
    void deleteSecureMobilePhone() { this->secureMobilePhone_ = nullptr;};
    inline string getSecureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(secureMobilePhone_, "") };
    inline BindSecureMobilePhoneRequest& setSecureMobilePhone(string secureMobilePhone) { DARABONBA_PTR_SET_VALUE(secureMobilePhone_, secureMobilePhone) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline BindSecureMobilePhoneRequest& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


  protected:
    // The member ID.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // The secure phone number.
    // 
    // The phone number must be the same as the one that you specified when you called [SendVerificationCodeForBindSecureMobilePhone](https://help.aliyun.com/document_detail/372556.html) to authenticate and obtain the verification code.
    // 
    // Format: <Country code>-<Phone number>.
    // 
    // <props="china">
    // > Only the Chinese mainland phone numbers in the `86-<Phone number>` format are supported.
    // 
    // 
    // <props="intl">
    // > The Chinese mainland phone numbers in the `86-<Phone number>` format are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> secureMobilePhone_ {};
    // The verification code.
    // 
    // You can call [SendVerificationCodeForBindSecureMobilePhone](https://help.aliyun.com/document_detail/372556.html) to obtain the verification code.
    // 
    // This parameter is required.
    shared_ptr<string> verificationCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
