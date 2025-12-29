// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONETWICETELVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONETWICETELVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneTwiceTelVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneTwiceTelVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneTwiceTelVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribePhoneTwiceTelVerifyRequest() = default ;
    DescribePhoneTwiceTelVerifyRequest(const DescribePhoneTwiceTelVerifyRequest &) = default ;
    DescribePhoneTwiceTelVerifyRequest(DescribePhoneTwiceTelVerifyRequest &&) = default ;
    DescribePhoneTwiceTelVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneTwiceTelVerifyRequest() = default ;
    DescribePhoneTwiceTelVerifyRequest& operator=(const DescribePhoneTwiceTelVerifyRequest &) = default ;
    DescribePhoneTwiceTelVerifyRequest& operator=(DescribePhoneTwiceTelVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->inputNumber_ == nullptr && this->mask_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->startTime_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePhoneTwiceTelVerifyRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline DescribePhoneTwiceTelVerifyRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribePhoneTwiceTelVerifyRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePhoneTwiceTelVerifyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePhoneTwiceTelVerifyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePhoneTwiceTelVerifyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePhoneTwiceTelVerifyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The authorization code.
    // 
    // >  On the **My Applications** page in the [Cell Phone Number Service console](https://dytns.console.aliyun.com/analysis/apply), you can obtain the authorization code (also known as authorization ID).
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The phone number to be queried.
    // 
    // *   If the value of Mask is NORMAL, specify an 11-digit phone number in plaintext.
    // *   If the value of Mask is MD5, specify a 32-bit string that is encrypted by using MD5.
    // *   If the value of Mask is SHA256, specify a 64-bit string that is encrypted by using SHA256.
    // 
    // >  Letters in the encrypted strings are not case-sensitive.
    // 
    // This parameter is required.
    shared_ptr<string> inputNumber_ {};
    // The encryption method of the phone number. Valid values:
    // 
    // *   **NORMAL**: The phone number is not encrypted.
    // *   **MD5**
    // *   **SHA256**
    // 
    // This parameter is required.
    shared_ptr<string> mask_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The registration time. Specify the time in the yyyy-MM-dd HH:mm:ss format. This time is the service registration time of the mobile phone user. If the service registration time is later than the time when the phone number is assigned by a carrier, it indicates that the phone number is not a reassigned number. Otherwise, the phone number is a reassigned number.
    // 
    // > 
    // 
    // *   If a carrier allocates a single number multiple times, the system will determine whether the phone number is a reassigned number based on the time when the carrier last allocated the phone number.
    // 
    // *   The service registration time must be later than 00:00:00 on January 1, 1970.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
