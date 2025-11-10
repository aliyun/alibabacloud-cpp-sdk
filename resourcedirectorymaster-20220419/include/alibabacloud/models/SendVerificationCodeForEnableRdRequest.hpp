// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVERIFICATIONCODEFORENABLERDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVERIFICATIONCODEFORENABLERDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SendVerificationCodeForEnableRDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVerificationCodeForEnableRDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecureMobilePhone, secureMobilePhone_);
    };
    friend void from_json(const Darabonba::Json& j, SendVerificationCodeForEnableRDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecureMobilePhone, secureMobilePhone_);
    };
    SendVerificationCodeForEnableRDRequest() = default ;
    SendVerificationCodeForEnableRDRequest(const SendVerificationCodeForEnableRDRequest &) = default ;
    SendVerificationCodeForEnableRDRequest(SendVerificationCodeForEnableRDRequest &&) = default ;
    SendVerificationCodeForEnableRDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVerificationCodeForEnableRDRequest() = default ;
    SendVerificationCodeForEnableRDRequest& operator=(const SendVerificationCodeForEnableRDRequest &) = default ;
    SendVerificationCodeForEnableRDRequest& operator=(SendVerificationCodeForEnableRDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secureMobilePhone_ == nullptr; };
    // secureMobilePhone Field Functions 
    bool hasSecureMobilePhone() const { return this->secureMobilePhone_ != nullptr;};
    void deleteSecureMobilePhone() { this->secureMobilePhone_ = nullptr;};
    inline string secureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(secureMobilePhone_, "") };
    inline SendVerificationCodeForEnableRDRequest& setSecureMobilePhone(string secureMobilePhone) { DARABONBA_PTR_SET_VALUE(secureMobilePhone_, secureMobilePhone) };


  protected:
    // The mobile phone number that is bound to the newly created account. If you leave this parameter empty, the mobile phone number that is bound to the current account is used.
    // 
    // Specify the mobile phone number in the `<Country code>-<Mobile phone number>` format.
    // 
    // > Mobile phone numbers in the `86-<Mobile phone number>` format in the Chinese mainland are not supported.
    std::shared_ptr<string> secureMobilePhone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
