// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMSCONVERSIONINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SMSCONVERSIONINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SmsConversionIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmsConversionIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversionTime, conversionTime_);
      DARABONBA_PTR_TO_JSON(Delivered, delivered_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SmsConversionIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversionTime, conversionTime_);
      DARABONBA_PTR_FROM_JSON(Delivered, delivered_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SmsConversionIntlRequest() = default ;
    SmsConversionIntlRequest(const SmsConversionIntlRequest &) = default ;
    SmsConversionIntlRequest(SmsConversionIntlRequest &&) = default ;
    SmsConversionIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmsConversionIntlRequest() = default ;
    SmsConversionIntlRequest& operator=(const SmsConversionIntlRequest &) = default ;
    SmsConversionIntlRequest& operator=(SmsConversionIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversionTime_ == nullptr
        && this->delivered_ == nullptr && this->messageId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // conversionTime Field Functions 
    bool hasConversionTime() const { return this->conversionTime_ != nullptr;};
    void deleteConversionTime() { this->conversionTime_ = nullptr;};
    inline int64_t getConversionTime() const { DARABONBA_PTR_GET_DEFAULT(conversionTime_, 0L) };
    inline SmsConversionIntlRequest& setConversionTime(int64_t conversionTime) { DARABONBA_PTR_SET_VALUE(conversionTime_, conversionTime) };


    // delivered Field Functions 
    bool hasDelivered() const { return this->delivered_ != nullptr;};
    void deleteDelivered() { this->delivered_ = nullptr;};
    inline bool getDelivered() const { DARABONBA_PTR_GET_DEFAULT(delivered_, false) };
    inline SmsConversionIntlRequest& setDelivered(bool delivered) { DARABONBA_PTR_SET_VALUE(delivered_, delivered) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SmsConversionIntlRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SmsConversionIntlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SmsConversionIntlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SmsConversionIntlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The time when the OTP message was delivered. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // *   If you leave the parameter empty, the current timestamp is specified by default.
    // *   If you specify the parameter, the timestamp must be greater than the message sending time and less than the current timestamp.
    shared_ptr<int64_t> conversionTime_ {};
    // Specifies whether customers replied to the OTP message. Valid values: true and false.
    // 
    // This parameter is required.
    shared_ptr<bool> delivered_ {};
    // The ID of the message.
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
