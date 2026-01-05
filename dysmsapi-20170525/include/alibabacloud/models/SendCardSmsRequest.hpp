// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCARDSMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCARDSMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendCardSmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCardSmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CardObjects, cardObjects_);
      DARABONBA_PTR_TO_JSON(CardTemplateCode, cardTemplateCode_);
      DARABONBA_PTR_TO_JSON(DigitalTemplateCode, digitalTemplateCode_);
      DARABONBA_PTR_TO_JSON(DigitalTemplateParam, digitalTemplateParam_);
      DARABONBA_PTR_TO_JSON(FallbackType, fallbackType_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_TO_JSON(SmsTemplateParam, smsTemplateParam_);
      DARABONBA_PTR_TO_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
    };
    friend void from_json(const Darabonba::Json& j, SendCardSmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CardObjects, cardObjects_);
      DARABONBA_PTR_FROM_JSON(CardTemplateCode, cardTemplateCode_);
      DARABONBA_PTR_FROM_JSON(DigitalTemplateCode, digitalTemplateCode_);
      DARABONBA_PTR_FROM_JSON(DigitalTemplateParam, digitalTemplateParam_);
      DARABONBA_PTR_FROM_JSON(FallbackType, fallbackType_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateParam, smsTemplateParam_);
      DARABONBA_PTR_FROM_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
    };
    SendCardSmsRequest() = default ;
    SendCardSmsRequest(const SendCardSmsRequest &) = default ;
    SendCardSmsRequest(SendCardSmsRequest &&) = default ;
    SendCardSmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCardSmsRequest() = default ;
    SendCardSmsRequest& operator=(const SendCardSmsRequest &) = default ;
    SendCardSmsRequest& operator=(SendCardSmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CardObjects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CardObjects& obj) { 
        DARABONBA_PTR_TO_JSON(customUrl, customUrl_);
        DARABONBA_PTR_TO_JSON(dyncParams, dyncParams_);
        DARABONBA_PTR_TO_JSON(mobile, mobile_);
      };
      friend void from_json(const Darabonba::Json& j, CardObjects& obj) { 
        DARABONBA_PTR_FROM_JSON(customUrl, customUrl_);
        DARABONBA_PTR_FROM_JSON(dyncParams, dyncParams_);
        DARABONBA_PTR_FROM_JSON(mobile, mobile_);
      };
      CardObjects() = default ;
      CardObjects(const CardObjects &) = default ;
      CardObjects(CardObjects &&) = default ;
      CardObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CardObjects() = default ;
      CardObjects& operator=(const CardObjects &) = default ;
      CardObjects& operator=(CardObjects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customUrl_ == nullptr
        && this->dyncParams_ == nullptr && this->mobile_ == nullptr; };
      // customUrl Field Functions 
      bool hasCustomUrl() const { return this->customUrl_ != nullptr;};
      void deleteCustomUrl() { this->customUrl_ = nullptr;};
      inline string getCustomUrl() const { DARABONBA_PTR_GET_DEFAULT(customUrl_, "") };
      inline CardObjects& setCustomUrl(string customUrl) { DARABONBA_PTR_SET_VALUE(customUrl_, customUrl) };


      // dyncParams Field Functions 
      bool hasDyncParams() const { return this->dyncParams_ != nullptr;};
      void deleteDyncParams() { this->dyncParams_ = nullptr;};
      inline string getDyncParams() const { DARABONBA_PTR_GET_DEFAULT(dyncParams_, "") };
      inline CardObjects& setDyncParams(string dyncParams) { DARABONBA_PTR_SET_VALUE(dyncParams_, dyncParams) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline CardObjects& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    protected:
      // The URL to which the message is redirected if the message fails to be rendered.
      shared_ptr<string> customUrl_ {};
      // The variables. Special characters, such as $ and {}, do not need to be entered.
      shared_ptr<string> dyncParams_ {};
      // The mobile phone number.
      shared_ptr<string> mobile_ {};
    };

    virtual bool empty() const override { return this->cardObjects_ == nullptr
        && this->cardTemplateCode_ == nullptr && this->digitalTemplateCode_ == nullptr && this->digitalTemplateParam_ == nullptr && this->fallbackType_ == nullptr && this->outId_ == nullptr
        && this->signName_ == nullptr && this->smsTemplateCode_ == nullptr && this->smsTemplateParam_ == nullptr && this->smsUpExtendCode_ == nullptr && this->templateCode_ == nullptr
        && this->templateParam_ == nullptr; };
    // cardObjects Field Functions 
    bool hasCardObjects() const { return this->cardObjects_ != nullptr;};
    void deleteCardObjects() { this->cardObjects_ = nullptr;};
    inline const vector<SendCardSmsRequest::CardObjects> & getCardObjects() const { DARABONBA_PTR_GET_CONST(cardObjects_, vector<SendCardSmsRequest::CardObjects>) };
    inline vector<SendCardSmsRequest::CardObjects> getCardObjects() { DARABONBA_PTR_GET(cardObjects_, vector<SendCardSmsRequest::CardObjects>) };
    inline SendCardSmsRequest& setCardObjects(const vector<SendCardSmsRequest::CardObjects> & cardObjects) { DARABONBA_PTR_SET_VALUE(cardObjects_, cardObjects) };
    inline SendCardSmsRequest& setCardObjects(vector<SendCardSmsRequest::CardObjects> && cardObjects) { DARABONBA_PTR_SET_RVALUE(cardObjects_, cardObjects) };


    // cardTemplateCode Field Functions 
    bool hasCardTemplateCode() const { return this->cardTemplateCode_ != nullptr;};
    void deleteCardTemplateCode() { this->cardTemplateCode_ = nullptr;};
    inline string getCardTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateCode_, "") };
    inline SendCardSmsRequest& setCardTemplateCode(string cardTemplateCode) { DARABONBA_PTR_SET_VALUE(cardTemplateCode_, cardTemplateCode) };


    // digitalTemplateCode Field Functions 
    bool hasDigitalTemplateCode() const { return this->digitalTemplateCode_ != nullptr;};
    void deleteDigitalTemplateCode() { this->digitalTemplateCode_ = nullptr;};
    inline string getDigitalTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(digitalTemplateCode_, "") };
    inline SendCardSmsRequest& setDigitalTemplateCode(string digitalTemplateCode) { DARABONBA_PTR_SET_VALUE(digitalTemplateCode_, digitalTemplateCode) };


    // digitalTemplateParam Field Functions 
    bool hasDigitalTemplateParam() const { return this->digitalTemplateParam_ != nullptr;};
    void deleteDigitalTemplateParam() { this->digitalTemplateParam_ = nullptr;};
    inline string getDigitalTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(digitalTemplateParam_, "") };
    inline SendCardSmsRequest& setDigitalTemplateParam(string digitalTemplateParam) { DARABONBA_PTR_SET_VALUE(digitalTemplateParam_, digitalTemplateParam) };


    // fallbackType Field Functions 
    bool hasFallbackType() const { return this->fallbackType_ != nullptr;};
    void deleteFallbackType() { this->fallbackType_ = nullptr;};
    inline string getFallbackType() const { DARABONBA_PTR_GET_DEFAULT(fallbackType_, "") };
    inline SendCardSmsRequest& setFallbackType(string fallbackType) { DARABONBA_PTR_SET_VALUE(fallbackType_, fallbackType) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendCardSmsRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SendCardSmsRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // smsTemplateCode Field Functions 
    bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
    void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
    inline string getSmsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, "") };
    inline SendCardSmsRequest& setSmsTemplateCode(string smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


    // smsTemplateParam Field Functions 
    bool hasSmsTemplateParam() const { return this->smsTemplateParam_ != nullptr;};
    void deleteSmsTemplateParam() { this->smsTemplateParam_ = nullptr;};
    inline string getSmsTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateParam_, "") };
    inline SendCardSmsRequest& setSmsTemplateParam(string smsTemplateParam) { DARABONBA_PTR_SET_VALUE(smsTemplateParam_, smsTemplateParam) };


    // smsUpExtendCode Field Functions 
    bool hasSmsUpExtendCode() const { return this->smsUpExtendCode_ != nullptr;};
    void deleteSmsUpExtendCode() { this->smsUpExtendCode_ = nullptr;};
    inline string getSmsUpExtendCode() const { DARABONBA_PTR_GET_DEFAULT(smsUpExtendCode_, "") };
    inline SendCardSmsRequest& setSmsUpExtendCode(string smsUpExtendCode) { DARABONBA_PTR_SET_VALUE(smsUpExtendCode_, smsUpExtendCode) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendCardSmsRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string getTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendCardSmsRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


  protected:
    // The objects of the message template.
    // 
    // This parameter is required.
    shared_ptr<vector<SendCardSmsRequest::CardObjects>> cardObjects_ {};
    // The code of the message template. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    // 
    // This parameter is required.
    shared_ptr<string> cardTemplateCode_ {};
    // The code of the digital message template that applies when the card message is rolled back. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved.
    shared_ptr<string> digitalTemplateCode_ {};
    // The variables of the digital message template.
    // 
    // > If you need to add line breaks to the JSON template, make sure that the format is valid.
    shared_ptr<string> digitalTemplateParam_ {};
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
    // The signature. You can view the template code in the **Signature** column on the **Signaturess** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > The signature must be approved.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // The code of the text message template that applies when the card message is rolled back. You can view the template code in the **Template Code** column on the **Templates** tab of the **Go China** page in the Alibaba Cloud SMS console.
    // 
    // > Make sure that the message template has been approved. If you set the **FallbackType** parameter to **SMS**, this parameter is required.
    shared_ptr<string> smsTemplateCode_ {};
    // The variables of the text message template.
    // 
    // > If you need to add line breaks to the JSON template, make sure that the format is valid.
    shared_ptr<string> smsTemplateParam_ {};
    // The extension code of the upstream message. Upstream messages are messages sent to the communication service provider. Upstream messages are used to customize a service, complete an inquiry, or send a request. You are charged for sending upstream messages based on the billing standards of the service provider.
    // 
    // > If you do not need upstream messages, ignore this parameter.
    shared_ptr<string> smsUpExtendCode_ {};
    // The code of the text message template.
    // 
    // Log on to the Alibaba Cloud SMS console. In the left-side navigation pane, click **Go Globe** or **Go China**. You can view the message template in the **Template Code** column on the **Message Templates** tab.
    // 
    // > The message templates must be created on the Go Globe page and approved.
    shared_ptr<string> templateCode_ {};
    // The variables of the message template. Format: JSON.
    // 
    // > If you need to add line breaks to the JSON template, make sure that the format is valid.
    shared_ptr<string> templateParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
