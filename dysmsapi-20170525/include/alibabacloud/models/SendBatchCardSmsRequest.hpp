// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBATCHCARDSMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDBATCHCARDSMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendBatchCardSmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendBatchCardSmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CardTemplateCode, cardTemplateCode_);
      DARABONBA_PTR_TO_JSON(CardTemplateParamJson, cardTemplateParamJson_);
      DARABONBA_PTR_TO_JSON(DigitalTemplateCode, digitalTemplateCode_);
      DARABONBA_PTR_TO_JSON(DigitalTemplateParamJson, digitalTemplateParamJson_);
      DARABONBA_PTR_TO_JSON(FallbackType, fallbackType_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNumberJson, phoneNumberJson_);
      DARABONBA_PTR_TO_JSON(SignNameJson, signNameJson_);
      DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_TO_JSON(SmsTemplateParamJson, smsTemplateParamJson_);
      DARABONBA_PTR_TO_JSON(SmsUpExtendCodeJson, smsUpExtendCodeJson_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParamJson, templateParamJson_);
    };
    friend void from_json(const Darabonba::Json& j, SendBatchCardSmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CardTemplateCode, cardTemplateCode_);
      DARABONBA_PTR_FROM_JSON(CardTemplateParamJson, cardTemplateParamJson_);
      DARABONBA_PTR_FROM_JSON(DigitalTemplateCode, digitalTemplateCode_);
      DARABONBA_PTR_FROM_JSON(DigitalTemplateParamJson, digitalTemplateParamJson_);
      DARABONBA_PTR_FROM_JSON(FallbackType, fallbackType_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberJson, phoneNumberJson_);
      DARABONBA_PTR_FROM_JSON(SignNameJson, signNameJson_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateParamJson, smsTemplateParamJson_);
      DARABONBA_PTR_FROM_JSON(SmsUpExtendCodeJson, smsUpExtendCodeJson_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParamJson, templateParamJson_);
    };
    SendBatchCardSmsRequest() = default ;
    SendBatchCardSmsRequest(const SendBatchCardSmsRequest &) = default ;
    SendBatchCardSmsRequest(SendBatchCardSmsRequest &&) = default ;
    SendBatchCardSmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendBatchCardSmsRequest() = default ;
    SendBatchCardSmsRequest& operator=(const SendBatchCardSmsRequest &) = default ;
    SendBatchCardSmsRequest& operator=(SendBatchCardSmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardTemplateCode_ == nullptr
        && this->cardTemplateParamJson_ == nullptr && this->digitalTemplateCode_ == nullptr && this->digitalTemplateParamJson_ == nullptr && this->fallbackType_ == nullptr && this->outId_ == nullptr
        && this->phoneNumberJson_ == nullptr && this->signNameJson_ == nullptr && this->smsTemplateCode_ == nullptr && this->smsTemplateParamJson_ == nullptr && this->smsUpExtendCodeJson_ == nullptr
        && this->templateCode_ == nullptr && this->templateParamJson_ == nullptr; };
    // cardTemplateCode Field Functions 
    bool hasCardTemplateCode() const { return this->cardTemplateCode_ != nullptr;};
    void deleteCardTemplateCode() { this->cardTemplateCode_ = nullptr;};
    inline string getCardTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateCode_, "") };
    inline SendBatchCardSmsRequest& setCardTemplateCode(string cardTemplateCode) { DARABONBA_PTR_SET_VALUE(cardTemplateCode_, cardTemplateCode) };


    // cardTemplateParamJson Field Functions 
    bool hasCardTemplateParamJson() const { return this->cardTemplateParamJson_ != nullptr;};
    void deleteCardTemplateParamJson() { this->cardTemplateParamJson_ = nullptr;};
    inline string getCardTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateParamJson_, "") };
    inline SendBatchCardSmsRequest& setCardTemplateParamJson(string cardTemplateParamJson) { DARABONBA_PTR_SET_VALUE(cardTemplateParamJson_, cardTemplateParamJson) };


    // digitalTemplateCode Field Functions 
    bool hasDigitalTemplateCode() const { return this->digitalTemplateCode_ != nullptr;};
    void deleteDigitalTemplateCode() { this->digitalTemplateCode_ = nullptr;};
    inline string getDigitalTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(digitalTemplateCode_, "") };
    inline SendBatchCardSmsRequest& setDigitalTemplateCode(string digitalTemplateCode) { DARABONBA_PTR_SET_VALUE(digitalTemplateCode_, digitalTemplateCode) };


    // digitalTemplateParamJson Field Functions 
    bool hasDigitalTemplateParamJson() const { return this->digitalTemplateParamJson_ != nullptr;};
    void deleteDigitalTemplateParamJson() { this->digitalTemplateParamJson_ = nullptr;};
    inline string getDigitalTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(digitalTemplateParamJson_, "") };
    inline SendBatchCardSmsRequest& setDigitalTemplateParamJson(string digitalTemplateParamJson) { DARABONBA_PTR_SET_VALUE(digitalTemplateParamJson_, digitalTemplateParamJson) };


    // fallbackType Field Functions 
    bool hasFallbackType() const { return this->fallbackType_ != nullptr;};
    void deleteFallbackType() { this->fallbackType_ = nullptr;};
    inline string getFallbackType() const { DARABONBA_PTR_GET_DEFAULT(fallbackType_, "") };
    inline SendBatchCardSmsRequest& setFallbackType(string fallbackType) { DARABONBA_PTR_SET_VALUE(fallbackType_, fallbackType) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendBatchCardSmsRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNumberJson Field Functions 
    bool hasPhoneNumberJson() const { return this->phoneNumberJson_ != nullptr;};
    void deletePhoneNumberJson() { this->phoneNumberJson_ = nullptr;};
    inline string getPhoneNumberJson() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberJson_, "") };
    inline SendBatchCardSmsRequest& setPhoneNumberJson(string phoneNumberJson) { DARABONBA_PTR_SET_VALUE(phoneNumberJson_, phoneNumberJson) };


    // signNameJson Field Functions 
    bool hasSignNameJson() const { return this->signNameJson_ != nullptr;};
    void deleteSignNameJson() { this->signNameJson_ = nullptr;};
    inline string getSignNameJson() const { DARABONBA_PTR_GET_DEFAULT(signNameJson_, "") };
    inline SendBatchCardSmsRequest& setSignNameJson(string signNameJson) { DARABONBA_PTR_SET_VALUE(signNameJson_, signNameJson) };


    // smsTemplateCode Field Functions 
    bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
    void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
    inline string getSmsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, "") };
    inline SendBatchCardSmsRequest& setSmsTemplateCode(string smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


    // smsTemplateParamJson Field Functions 
    bool hasSmsTemplateParamJson() const { return this->smsTemplateParamJson_ != nullptr;};
    void deleteSmsTemplateParamJson() { this->smsTemplateParamJson_ = nullptr;};
    inline string getSmsTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateParamJson_, "") };
    inline SendBatchCardSmsRequest& setSmsTemplateParamJson(string smsTemplateParamJson) { DARABONBA_PTR_SET_VALUE(smsTemplateParamJson_, smsTemplateParamJson) };


    // smsUpExtendCodeJson Field Functions 
    bool hasSmsUpExtendCodeJson() const { return this->smsUpExtendCodeJson_ != nullptr;};
    void deleteSmsUpExtendCodeJson() { this->smsUpExtendCodeJson_ = nullptr;};
    inline string getSmsUpExtendCodeJson() const { DARABONBA_PTR_GET_DEFAULT(smsUpExtendCodeJson_, "") };
    inline SendBatchCardSmsRequest& setSmsUpExtendCodeJson(string smsUpExtendCodeJson) { DARABONBA_PTR_SET_VALUE(smsUpExtendCodeJson_, smsUpExtendCodeJson) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendBatchCardSmsRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParamJson Field Functions 
    bool hasTemplateParamJson() const { return this->templateParamJson_ != nullptr;};
    void deleteTemplateParamJson() { this->templateParamJson_ = nullptr;};
    inline string getTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(templateParamJson_, "") };
    inline SendBatchCardSmsRequest& setTemplateParamJson(string templateParamJson) { DARABONBA_PTR_SET_VALUE(templateParamJson_, templateParamJson) };


  protected:
    // The code of the message template. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    // 
    // This parameter is required.
    shared_ptr<string> cardTemplateCode_ {};
    // The variables of the card message template.
    shared_ptr<string> cardTemplateParamJson_ {};
    // The code of the digital message template that applies when the card message is rolled back. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    shared_ptr<string> digitalTemplateCode_ {};
    // The variables of the digital message template.
    shared_ptr<string> digitalTemplateParamJson_ {};
    // The rollback type. Valid values:
    // 
    // *   **SMS**: text message
    // *   **DIGITALSMS**: digital message
    // *   **NONE**: none
    // 
    // This parameter is required.
    shared_ptr<string> fallbackType_ {};
    // The ID that is reserved for the caller of the operation.
    shared_ptr<string> outId_ {};
    // The mobile numbers of the recipients.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumberJson_ {};
    // The signature. You can view the template code in the **Signature** column on the **Signaturess** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > The signatures must be approved and correspond to the mobile numbers in sequence.
    // 
    // This parameter is required.
    shared_ptr<string> signNameJson_ {};
    // The code of the text message template that applies when the card message is rolled back. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    shared_ptr<string> smsTemplateCode_ {};
    // The variables of the text message template.
    shared_ptr<string> smsTemplateParamJson_ {};
    // The extension code of the upstream message.
    shared_ptr<string> smsUpExtendCodeJson_ {};
    // The code of the message template.
    // 
    // You can log on to the [Alibaba Cloud console](https://dysms.console.aliyun.com/dysms.htm?spm=5176.12818093.categories-n-products.ddysms.3b2816d0xml2NA#/overview), click **Go China** or **Go Globe** in the left-side navigation pane, and then view the **template code** on the **Templates** tab.
    // 
    // > You must specify a message template that is created in the SMS console and approved by Alibaba Cloud. If you send messages to countries or regions outside the Chinese mainland, use the corresponding message templates.
    shared_ptr<string> templateCode_ {};
    // The value of the variable in the message template.
    // 
    // > If you need to add line breaks to the JSON template, make sure that the format is valid. In addition, the sequence of variable values must be the same as that of the mobile numbers and signatures.
    shared_ptr<string> templateParamJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
