// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDSMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDSMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendSmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendSmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
    };
    friend void from_json(const Darabonba::Json& j, SendSmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
    };
    SendSmsRequest() = default ;
    SendSmsRequest(const SendSmsRequest &) = default ;
    SendSmsRequest(SendSmsRequest &&) = default ;
    SendSmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendSmsRequest() = default ;
    SendSmsRequest& operator=(const SendSmsRequest &) = default ;
    SendSmsRequest& operator=(SendSmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outId_ == nullptr
        && this->ownerId_ == nullptr && this->phoneNumbers_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signName_ == nullptr
        && this->smsUpExtendCode_ == nullptr && this->templateCode_ == nullptr && this->templateParam_ == nullptr; };
    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendSmsRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendSmsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline string getPhoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbers_, "") };
    inline SendSmsRequest& setPhoneNumbers(string phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendSmsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendSmsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SendSmsRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // smsUpExtendCode Field Functions 
    bool hasSmsUpExtendCode() const { return this->smsUpExtendCode_ != nullptr;};
    void deleteSmsUpExtendCode() { this->smsUpExtendCode_ = nullptr;};
    inline string getSmsUpExtendCode() const { DARABONBA_PTR_GET_DEFAULT(smsUpExtendCode_, "") };
    inline SendSmsRequest& setSmsUpExtendCode(string smsUpExtendCode) { DARABONBA_PTR_SET_VALUE(smsUpExtendCode_, smsUpExtendCode) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendSmsRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string getTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendSmsRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


  protected:
    // The external transaction ID.
    // 
    // > You can ignore this parameter if you do not have special requirements.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recipient\\"s mobile number. The format varies based on the destination region:
    // 
    // - For messages to the Chinese mainland: A mobile number, with or without a country code. Valid prefixes are +, +86, 0086, and 86. Example: 1390000\\*\\*\\*\\*.
    // 
    // - For international messages or messages to Hong Kong, Macao, or Taiwan: Use the format [Country code][Mobile number]. Example: 852000012\\*\\*\\*\\*.
    // 
    // - To send a test message, bind a test mobile number in the [console](https://dysms.console.aliyun.com/quickstart).
    // 
    // > To send a message to multiple numbers, separate them with commas (,). You can specify up to 1,000 mobile numbers per request. Bulk sending may have higher latency than sending single messages. For time-sensitive messages such as verification codes, we recommend sending them individually.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumbers_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The signature name.
    // 
    // Call the [QuerySmsSignList](https://help.aliyun.com/document_detail/419282.html) API or view your list of signatures in the [Short Message Service console](https://dysms.console.aliyun.com/domestic/text/sign). You must use a signature that has been **approved**.
    // 
    // > - 1\\. If a verification code signature and a general-purpose signature share the same name, the general-purpose signature is used by default.
    // >
    // > - 2\\. The system uses the specified signature to send the message.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // The upstream SMS extension code. An upstream SMS message is a message sent from a user to a service provider to subscribe to a service, make a query, or perform other tasks. Such messages are charged by the carrier at standard rates.
    // 
    // > The system assigns a default extension code when a signature is created. Use this parameter to specify a different code. You can ignore this parameter if you do not have special requirements.
    shared_ptr<string> smsUpExtendCode_ {};
    // The code of the template.
    // 
    // Call the [QuerySmsTemplateList](https://help.aliyun.com/document_detail/419288.html) API or view your list of templates in the [Short Message Service console](https://dysms.console.aliyun.com/domestic/text/template). You must use the code of a template that has been **approved**.
    // 
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
    // The values for the template variables, specified as a **JSON string**. This parameter is required if the template contains variables. The JSON string must provide a value for each variable.
    // 
    // > - If the JSON string needs to include line breaks, format it according to standard JSON specifications.
    // >
    // > - For more information about template variable formatting, see [SMS template specifications](https://help.aliyun.com/document_detail/463161.html).
    shared_ptr<string> templateParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
