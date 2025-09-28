// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSMSCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSMSCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifySmsCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySmsCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(SmsCode, smsCode_);
      DARABONBA_PTR_TO_JSON(SmsToken, smsToken_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySmsCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(SmsCode, smsCode_);
      DARABONBA_PTR_FROM_JSON(SmsToken, smsToken_);
    };
    VerifySmsCodeRequest() = default ;
    VerifySmsCodeRequest(const VerifySmsCodeRequest &) = default ;
    VerifySmsCodeRequest(VerifySmsCodeRequest &&) = default ;
    VerifySmsCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySmsCodeRequest() = default ;
    VerifySmsCodeRequest& operator=(const VerifySmsCodeRequest &) = default ;
    VerifySmsCodeRequest& operator=(VerifySmsCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phoneNumber_ != nullptr
        && this->smsCode_ != nullptr && this->smsToken_ != nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline VerifySmsCodeRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // smsCode Field Functions 
    bool hasSmsCode() const { return this->smsCode_ != nullptr;};
    void deleteSmsCode() { this->smsCode_ = nullptr;};
    inline string smsCode() const { DARABONBA_PTR_GET_DEFAULT(smsCode_, "") };
    inline VerifySmsCodeRequest& setSmsCode(string smsCode) { DARABONBA_PTR_SET_VALUE(smsCode_, smsCode) };


    // smsToken Field Functions 
    bool hasSmsToken() const { return this->smsToken_ != nullptr;};
    void deleteSmsToken() { this->smsToken_ = nullptr;};
    inline string smsToken() const { DARABONBA_PTR_GET_DEFAULT(smsToken_, "") };
    inline VerifySmsCodeRequest& setSmsToken(string smsToken) { DARABONBA_PTR_SET_VALUE(smsToken_, smsToken) };


  protected:
    // The phone number, which is used to receive SMS verification codes.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // The SMS verification code.
    // 
    // This parameter is required.
    std::shared_ptr<string> smsCode_ = nullptr;
    // The text message verification code. After you successfully call the corresponding API operation to send the SMS verification code, the end users receive the SMS verification code. SmsToken is returned by the SDK for SMS verification for you to verify the text message verification code. For an Android client, sendVerifyCode is called to send the verification code. For an iOS client, sendVerifyCodeWithTimeout is called to send the verification code. For more information, see [Overview](https://help.aliyun.com/document_detail/400434.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> smsToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
