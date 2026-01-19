// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDEVICECODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDEVICECODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateDeviceCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDeviceCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(device_code, deviceCode_);
      DARABONBA_PTR_TO_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_TO_JSON(expires_in, expiresIn_);
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(user_code, userCode_);
      DARABONBA_PTR_TO_JSON(verification_uri, verificationUri_);
      DARABONBA_PTR_TO_JSON(verification_uri_complete, verificationUriComplete_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDeviceCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(device_code, deviceCode_);
      DARABONBA_PTR_FROM_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_FROM_JSON(expires_in, expiresIn_);
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(user_code, userCode_);
      DARABONBA_PTR_FROM_JSON(verification_uri, verificationUri_);
      DARABONBA_PTR_FROM_JSON(verification_uri_complete, verificationUriComplete_);
    };
    GenerateDeviceCodeResponseBody() = default ;
    GenerateDeviceCodeResponseBody(const GenerateDeviceCodeResponseBody &) = default ;
    GenerateDeviceCodeResponseBody(GenerateDeviceCodeResponseBody &&) = default ;
    GenerateDeviceCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDeviceCodeResponseBody() = default ;
    GenerateDeviceCodeResponseBody& operator=(const GenerateDeviceCodeResponseBody &) = default ;
    GenerateDeviceCodeResponseBody& operator=(GenerateDeviceCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceCode_ == nullptr
        && this->expiresAt_ == nullptr && this->expiresIn_ == nullptr && this->interval_ == nullptr && this->userCode_ == nullptr && this->verificationUri_ == nullptr
        && this->verificationUriComplete_ == nullptr; };
    // deviceCode Field Functions 
    bool hasDeviceCode() const { return this->deviceCode_ != nullptr;};
    void deleteDeviceCode() { this->deviceCode_ = nullptr;};
    inline string getDeviceCode() const { DARABONBA_PTR_GET_DEFAULT(deviceCode_, "") };
    inline GenerateDeviceCodeResponseBody& setDeviceCode(string deviceCode) { DARABONBA_PTR_SET_VALUE(deviceCode_, deviceCode) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
    inline GenerateDeviceCodeResponseBody& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // expiresIn Field Functions 
    bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
    void deleteExpiresIn() { this->expiresIn_ = nullptr;};
    inline int64_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
    inline GenerateDeviceCodeResponseBody& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline GenerateDeviceCodeResponseBody& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // userCode Field Functions 
    bool hasUserCode() const { return this->userCode_ != nullptr;};
    void deleteUserCode() { this->userCode_ = nullptr;};
    inline string getUserCode() const { DARABONBA_PTR_GET_DEFAULT(userCode_, "") };
    inline GenerateDeviceCodeResponseBody& setUserCode(string userCode) { DARABONBA_PTR_SET_VALUE(userCode_, userCode) };


    // verificationUri Field Functions 
    bool hasVerificationUri() const { return this->verificationUri_ != nullptr;};
    void deleteVerificationUri() { this->verificationUri_ = nullptr;};
    inline string getVerificationUri() const { DARABONBA_PTR_GET_DEFAULT(verificationUri_, "") };
    inline GenerateDeviceCodeResponseBody& setVerificationUri(string verificationUri) { DARABONBA_PTR_SET_VALUE(verificationUri_, verificationUri) };


    // verificationUriComplete Field Functions 
    bool hasVerificationUriComplete() const { return this->verificationUriComplete_ != nullptr;};
    void deleteVerificationUriComplete() { this->verificationUriComplete_ = nullptr;};
    inline string getVerificationUriComplete() const { DARABONBA_PTR_GET_DEFAULT(verificationUriComplete_, "") };
    inline GenerateDeviceCodeResponseBody& setVerificationUriComplete(string verificationUriComplete) { DARABONBA_PTR_SET_VALUE(verificationUriComplete_, verificationUriComplete) };


  protected:
    // The device code.
    shared_ptr<string> deviceCode_ {};
    // The time when the token expires. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> expiresAt_ {};
    // The remaining validity period of the device code. Unit: seconds.
    shared_ptr<int64_t> expiresIn_ {};
    // The timeout period of the request token. Unit: seconds.
    shared_ptr<int64_t> interval_ {};
    // The user authorization code.
    shared_ptr<string> userCode_ {};
    // The verification URI.
    shared_ptr<string> verificationUri_ {};
    // The complete verification URI.
    shared_ptr<string> verificationUriComplete_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
