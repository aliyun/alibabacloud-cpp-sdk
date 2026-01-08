// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPREVALIDATEPHONEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPREVALIDATEPHONEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetPreValidatePhoneIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPreValidatePhoneIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetPreValidatePhoneIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    GetPreValidatePhoneIdRequest() = default ;
    GetPreValidatePhoneIdRequest(const GetPreValidatePhoneIdRequest &) = default ;
    GetPreValidatePhoneIdRequest(GetPreValidatePhoneIdRequest &&) = default ;
    GetPreValidatePhoneIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPreValidatePhoneIdRequest() = default ;
    GetPreValidatePhoneIdRequest& operator=(const GetPreValidatePhoneIdRequest &) = default ;
    GetPreValidatePhoneIdRequest& operator=(GetPreValidatePhoneIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phoneNumber_ == nullptr
        && this->verifyCode_ == nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetPreValidatePhoneIdRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline GetPreValidatePhoneIdRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The verification code provided when you purchased the pre-registered phone number.
    // 
    // This parameter is required.
    shared_ptr<string> verifyCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
