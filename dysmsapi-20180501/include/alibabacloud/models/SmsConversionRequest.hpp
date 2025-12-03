// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMSCONVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SMSCONVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class SmsConversionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmsConversionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversionTime, conversionTime_);
      DARABONBA_PTR_TO_JSON(Delivered, delivered_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, SmsConversionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversionTime, conversionTime_);
      DARABONBA_PTR_FROM_JSON(Delivered, delivered_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    SmsConversionRequest() = default ;
    SmsConversionRequest(const SmsConversionRequest &) = default ;
    SmsConversionRequest(SmsConversionRequest &&) = default ;
    SmsConversionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmsConversionRequest() = default ;
    SmsConversionRequest& operator=(const SmsConversionRequest &) = default ;
    SmsConversionRequest& operator=(SmsConversionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversionTime_ == nullptr
        && return this->delivered_ == nullptr && return this->messageId_ == nullptr && return this->to_ == nullptr; };
    // conversionTime Field Functions 
    bool hasConversionTime() const { return this->conversionTime_ != nullptr;};
    void deleteConversionTime() { this->conversionTime_ = nullptr;};
    inline int64_t conversionTime() const { DARABONBA_PTR_GET_DEFAULT(conversionTime_, 0L) };
    inline SmsConversionRequest& setConversionTime(int64_t conversionTime) { DARABONBA_PTR_SET_VALUE(conversionTime_, conversionTime) };


    // delivered Field Functions 
    bool hasDelivered() const { return this->delivered_ != nullptr;};
    void deleteDelivered() { this->delivered_ = nullptr;};
    inline bool delivered() const { DARABONBA_PTR_GET_DEFAULT(delivered_, false) };
    inline SmsConversionRequest& setDelivered(bool delivered) { DARABONBA_PTR_SET_VALUE(delivered_, delivered) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SmsConversionRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline SmsConversionRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The time when the OTP message was delivered. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // *   If you leave the parameter empty, the current timestamp is specified by default.
    // *   If you specify the parameter, the timestamp must be greater than the message sending time and less than the current timestamp.
    std::shared_ptr<int64_t> conversionTime_ = nullptr;
    // Specifies whether customers replied to the OTP message. Valid values: true and false.
    // 
    // This parameter is required.
    std::shared_ptr<bool> delivered_ = nullptr;
    // The ID of the OTP message.
    std::shared_ptr<string> messageId_ = nullptr;
    // The mobile phone number of the recipient. You must add the dialing code to the beginning of the mobile phone number.
    // 
    // For more information, see [Dialing codes](https://help.aliyun.com/document_detail/158400.html).
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
