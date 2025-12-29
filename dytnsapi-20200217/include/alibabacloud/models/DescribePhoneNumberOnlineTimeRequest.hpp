// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERONLINETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERONLINETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberOnlineTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberOnlineTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberOnlineTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(InputNumber, inputNumber_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribePhoneNumberOnlineTimeRequest() = default ;
    DescribePhoneNumberOnlineTimeRequest(const DescribePhoneNumberOnlineTimeRequest &) = default ;
    DescribePhoneNumberOnlineTimeRequest(DescribePhoneNumberOnlineTimeRequest &&) = default ;
    DescribePhoneNumberOnlineTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberOnlineTimeRequest() = default ;
    DescribePhoneNumberOnlineTimeRequest& operator=(const DescribePhoneNumberOnlineTimeRequest &) = default ;
    DescribePhoneNumberOnlineTimeRequest& operator=(DescribePhoneNumberOnlineTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->carrier_ == nullptr && this->inputNumber_ == nullptr && this->mask_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline DescribePhoneNumberOnlineTimeRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline DescribePhoneNumberOnlineTimeRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // inputNumber Field Functions 
    bool hasInputNumber() const { return this->inputNumber_ != nullptr;};
    void deleteInputNumber() { this->inputNumber_ = nullptr;};
    inline string getInputNumber() const { DARABONBA_PTR_GET_DEFAULT(inputNumber_, "") };
    inline DescribePhoneNumberOnlineTimeRequest& setInputNumber(string inputNumber) { DARABONBA_PTR_SET_VALUE(inputNumber_, inputNumber) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribePhoneNumberOnlineTimeRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePhoneNumberOnlineTimeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePhoneNumberOnlineTimeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePhoneNumberOnlineTimeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The authorization code.
    // 
    // >  On the **My Applications** page in the [Cell Phone Number Service console](https://dytns.console.aliyun.com/analysis/apply), you can obtain the authorization code (also known as authorization ID).
    // 
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // The carrier. Valid values:
    // 
    // *   **MOBILE**: China Mobile
    // *   **UNICOM**: China Unicom
    // *   **TELECOM**: China Telecom
    // 
    // >  Alibaba Cloud automatically determines the carrier based on the carrier who assigns the phone number. Therefore, the value of this field does not affect the query result.
    shared_ptr<string> carrier_ {};
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
