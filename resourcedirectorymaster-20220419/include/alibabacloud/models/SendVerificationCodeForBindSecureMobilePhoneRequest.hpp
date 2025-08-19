// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVERIFICATIONCODEFORBINDSECUREMOBILEPHONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVERIFICATIONCODEFORBINDSECUREMOBILEPHONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SendVerificationCodeForBindSecureMobilePhoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVerificationCodeForBindSecureMobilePhoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(SecureMobilePhone, secureMobilePhone_);
    };
    friend void from_json(const Darabonba::Json& j, SendVerificationCodeForBindSecureMobilePhoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(SecureMobilePhone, secureMobilePhone_);
    };
    SendVerificationCodeForBindSecureMobilePhoneRequest() = default ;
    SendVerificationCodeForBindSecureMobilePhoneRequest(const SendVerificationCodeForBindSecureMobilePhoneRequest &) = default ;
    SendVerificationCodeForBindSecureMobilePhoneRequest(SendVerificationCodeForBindSecureMobilePhoneRequest &&) = default ;
    SendVerificationCodeForBindSecureMobilePhoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVerificationCodeForBindSecureMobilePhoneRequest() = default ;
    SendVerificationCodeForBindSecureMobilePhoneRequest& operator=(const SendVerificationCodeForBindSecureMobilePhoneRequest &) = default ;
    SendVerificationCodeForBindSecureMobilePhoneRequest& operator=(SendVerificationCodeForBindSecureMobilePhoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->secureMobilePhone_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline SendVerificationCodeForBindSecureMobilePhoneRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // secureMobilePhone Field Functions 
    bool hasSecureMobilePhone() const { return this->secureMobilePhone_ != nullptr;};
    void deleteSecureMobilePhone() { this->secureMobilePhone_ = nullptr;};
    inline string secureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(secureMobilePhone_, "") };
    inline SendVerificationCodeForBindSecureMobilePhoneRequest& setSecureMobilePhone(string secureMobilePhone) { DARABONBA_PTR_SET_VALUE(secureMobilePhone_, secureMobilePhone) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The mobile phone number that you want to bind to the member for security purposes.
    // 
    // Specify the mobile phone number in the \\<Country code>-\\<Mobile phone number> format.
    // 
    // > Mobile phone numbers in the `86-<Mobile phone number>` format in the Chinese mainland are not supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> secureMobilePhone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
