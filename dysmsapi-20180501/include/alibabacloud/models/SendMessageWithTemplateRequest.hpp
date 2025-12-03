// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEWITHTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEWITHTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class SendMessageWithTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageWithTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageWithTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
    };
    SendMessageWithTemplateRequest() = default ;
    SendMessageWithTemplateRequest(const SendMessageWithTemplateRequest &) = default ;
    SendMessageWithTemplateRequest(SendMessageWithTemplateRequest &&) = default ;
    SendMessageWithTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageWithTemplateRequest() = default ;
    SendMessageWithTemplateRequest& operator=(const SendMessageWithTemplateRequest &) = default ;
    SendMessageWithTemplateRequest& operator=(SendMessageWithTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->from_ == nullptr && return this->smsUpExtendCode_ == nullptr && return this->templateCode_ == nullptr && return this->templateParam_ == nullptr && return this->to_ == nullptr
        && return this->validityPeriod_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline SendMessageWithTemplateRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline SendMessageWithTemplateRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // smsUpExtendCode Field Functions 
    bool hasSmsUpExtendCode() const { return this->smsUpExtendCode_ != nullptr;};
    void deleteSmsUpExtendCode() { this->smsUpExtendCode_ = nullptr;};
    inline string smsUpExtendCode() const { DARABONBA_PTR_GET_DEFAULT(smsUpExtendCode_, "") };
    inline SendMessageWithTemplateRequest& setSmsUpExtendCode(string smsUpExtendCode) { DARABONBA_PTR_SET_VALUE(smsUpExtendCode_, smsUpExtendCode) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendMessageWithTemplateRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string templateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendMessageWithTemplateRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline SendMessageWithTemplateRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // validityPeriod Field Functions 
    bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
    void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
    inline int64_t validityPeriod() const { DARABONBA_PTR_GET_DEFAULT(validityPeriod_, 0L) };
    inline SendMessageWithTemplateRequest& setValidityPeriod(int64_t validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };


  protected:
    // The ID of the channel.
    std::shared_ptr<string> channelId_ = nullptr;
    // The signature. To query the signature, log on to the [Short Message Service (SMS) console](https://sms-intl.console.aliyun.com/overview) and navigate to the **Signatures** tab of the **Go China** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    // The extension code of the MO message.
    std::shared_ptr<string> smsUpExtendCode_ = nullptr;
    // The code of the message template. To query the code, log on to the [SMS console](https://sms-intl.console.aliyun.com/overview) and navigate to the **Templates** tab of the **Go China** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateCode_ = nullptr;
    // The value of the variable in the message template. If a variable exists in the template, the parameter is required.
    std::shared_ptr<string> templateParam_ = nullptr;
    // The mobile phone number to which the message is sent. You must add the country code to the beginning of the mobile phone number. Example: 861503871\\*\\*\\*\\*.
    // 
    // For more information, see [Dialing codes](https://www.alibabacloud.com/help/en/sms/product-overview/dialing-codes?spm=a2c63.p38356.0.0.367279cbwQFoeM).
    // 
    // This parameter is required.
    std::shared_ptr<string> to_ = nullptr;
    // The validity period of the message.
    std::shared_ptr<int64_t> validityPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
