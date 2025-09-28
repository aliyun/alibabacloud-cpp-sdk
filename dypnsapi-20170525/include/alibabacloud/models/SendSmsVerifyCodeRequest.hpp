// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDSMSVERIFYCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDSMSVERIFYCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class SendSmsVerifyCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendSmsVerifyCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRetry, autoRetry_);
      DARABONBA_PTR_TO_JSON(CodeLength, codeLength_);
      DARABONBA_PTR_TO_JSON(CodeType, codeType_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(DuplicatePolicy, duplicatePolicy_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ReturnVerifyCode, returnVerifyCode_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
      DARABONBA_PTR_TO_JSON(ValidTime, validTime_);
    };
    friend void from_json(const Darabonba::Json& j, SendSmsVerifyCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRetry, autoRetry_);
      DARABONBA_PTR_FROM_JSON(CodeLength, codeLength_);
      DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(DuplicatePolicy, duplicatePolicy_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ReturnVerifyCode, returnVerifyCode_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SmsUpExtendCode, smsUpExtendCode_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
      DARABONBA_PTR_FROM_JSON(ValidTime, validTime_);
    };
    SendSmsVerifyCodeRequest() = default ;
    SendSmsVerifyCodeRequest(const SendSmsVerifyCodeRequest &) = default ;
    SendSmsVerifyCodeRequest(SendSmsVerifyCodeRequest &&) = default ;
    SendSmsVerifyCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendSmsVerifyCodeRequest() = default ;
    SendSmsVerifyCodeRequest& operator=(const SendSmsVerifyCodeRequest &) = default ;
    SendSmsVerifyCodeRequest& operator=(SendSmsVerifyCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRetry_ != nullptr
        && this->codeLength_ != nullptr && this->codeType_ != nullptr && this->countryCode_ != nullptr && this->duplicatePolicy_ != nullptr && this->interval_ != nullptr
        && this->outId_ != nullptr && this->ownerId_ != nullptr && this->phoneNumber_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->returnVerifyCode_ != nullptr && this->schemeName_ != nullptr && this->signName_ != nullptr && this->smsUpExtendCode_ != nullptr && this->templateCode_ != nullptr
        && this->templateParam_ != nullptr && this->validTime_ != nullptr; };
    // autoRetry Field Functions 
    bool hasAutoRetry() const { return this->autoRetry_ != nullptr;};
    void deleteAutoRetry() { this->autoRetry_ = nullptr;};
    inline int64_t autoRetry() const { DARABONBA_PTR_GET_DEFAULT(autoRetry_, 0L) };
    inline SendSmsVerifyCodeRequest& setAutoRetry(int64_t autoRetry) { DARABONBA_PTR_SET_VALUE(autoRetry_, autoRetry) };


    // codeLength Field Functions 
    bool hasCodeLength() const { return this->codeLength_ != nullptr;};
    void deleteCodeLength() { this->codeLength_ = nullptr;};
    inline int64_t codeLength() const { DARABONBA_PTR_GET_DEFAULT(codeLength_, 0L) };
    inline SendSmsVerifyCodeRequest& setCodeLength(int64_t codeLength) { DARABONBA_PTR_SET_VALUE(codeLength_, codeLength) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline int64_t codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, 0L) };
    inline SendSmsVerifyCodeRequest& setCodeType(int64_t codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline SendSmsVerifyCodeRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // duplicatePolicy Field Functions 
    bool hasDuplicatePolicy() const { return this->duplicatePolicy_ != nullptr;};
    void deleteDuplicatePolicy() { this->duplicatePolicy_ = nullptr;};
    inline int64_t duplicatePolicy() const { DARABONBA_PTR_GET_DEFAULT(duplicatePolicy_, 0L) };
    inline SendSmsVerifyCodeRequest& setDuplicatePolicy(int64_t duplicatePolicy) { DARABONBA_PTR_SET_VALUE(duplicatePolicy_, duplicatePolicy) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline SendSmsVerifyCodeRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendSmsVerifyCodeRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendSmsVerifyCodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline SendSmsVerifyCodeRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendSmsVerifyCodeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendSmsVerifyCodeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // returnVerifyCode Field Functions 
    bool hasReturnVerifyCode() const { return this->returnVerifyCode_ != nullptr;};
    void deleteReturnVerifyCode() { this->returnVerifyCode_ = nullptr;};
    inline bool returnVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(returnVerifyCode_, false) };
    inline SendSmsVerifyCodeRequest& setReturnVerifyCode(bool returnVerifyCode) { DARABONBA_PTR_SET_VALUE(returnVerifyCode_, returnVerifyCode) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string schemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline SendSmsVerifyCodeRequest& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SendSmsVerifyCodeRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // smsUpExtendCode Field Functions 
    bool hasSmsUpExtendCode() const { return this->smsUpExtendCode_ != nullptr;};
    void deleteSmsUpExtendCode() { this->smsUpExtendCode_ = nullptr;};
    inline string smsUpExtendCode() const { DARABONBA_PTR_GET_DEFAULT(smsUpExtendCode_, "") };
    inline SendSmsVerifyCodeRequest& setSmsUpExtendCode(string smsUpExtendCode) { DARABONBA_PTR_SET_VALUE(smsUpExtendCode_, smsUpExtendCode) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendSmsVerifyCodeRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string templateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendSmsVerifyCodeRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


    // validTime Field Functions 
    bool hasValidTime() const { return this->validTime_ != nullptr;};
    void deleteValidTime() { this->validTime_ = nullptr;};
    inline int64_t validTime() const { DARABONBA_PTR_GET_DEFAULT(validTime_, 0L) };
    inline SendSmsVerifyCodeRequest& setValidTime(int64_t validTime) { DARABONBA_PTR_SET_VALUE(validTime_, validTime) };


  protected:
    std::shared_ptr<int64_t> autoRetry_ = nullptr;
    // The length of the verification code. Default value: 4. Valid values: 4 to 8.
    std::shared_ptr<int64_t> codeLength_ = nullptr;
    // The type of the generated verification code. Default value: 1. Valid values:
    // 
    // *   1: digits only
    // *   2: uppercase letters only
    // *   3: lowercase letters only
    // *   4: uppercase and lowercase letters
    // *   5: digits and uppercase letters
    // *   6: digits and lowercase letters
    // *   7: digits and uppercase and lowercase letters
    std::shared_ptr<int64_t> codeType_ = nullptr;
    // The country code of the phone number. SMS verification codes can be sent only by using phone numbers in the Chinese mainland. Default value: 86.
    std::shared_ptr<string> countryCode_ = nullptr;
    // Specifies how to handle the verification codes received earlier in a case where verification codes are sent to the same phone number for the same scenario within the validity period.
    // 
    // *   1 (default): The latest verification code overwrites the verification codes received earlier. In this case, verification codes received earlier expire.
    // *   2: Verification codes within their validity period are valid and can be used for verification.
    std::shared_ptr<int64_t> duplicatePolicy_ = nullptr;
    // The time interval. Unit: seconds. Default value: 60. This parameter specifies how often you can send a verification code.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The external ID.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The phone number.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to return a verification code.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> returnVerifyCode_ = nullptr;
    // The verification service name. If this parameter is not specified, the default service is used. The name can be up to 20 characters in length.
    std::shared_ptr<string> schemeName_ = nullptr;
    // The signature.
    // 
    // This parameter is required.
    std::shared_ptr<string> signName_ = nullptr;
    // The extension code of the upstream text message. Upstream text messages are text messages sent to the communication service provider. Upstream text messages are used to customize a service, complete an inquiry, or send a request. You are charged for sending upstream text messages based on the billing standards of the service provider.
    // 
    // >  The extension code is automatically generated by the system when the signature is generated. You do not need to specify the extension code. You can skip this parameter based on your business requirements. If you want to use custom extension codes, contact your account manager.
    std::shared_ptr<string> smsUpExtendCode_ = nullptr;
    // The code of the text message template.
    // 
    // Log on to the [SMS console](https://dysms.console.aliyun.com/dysms.htm?spm=5176.12818093.categories-n-products.ddysms.3b2816d0xml2NA#/overview). In the left-side navigation pane, click **Go China** or **Go Globe**. You can view the text message template code in the **Template Code** column on the **Message Templates** tab.
    // 
    // >  The text message templates must be created on the Go Globe page and approved.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateCode_ = nullptr;
    // The value of the variable in the text message template. The verification code is replaced with "##code##".
    // 
    // Example 1: For a system-defined template that contains variables, if the template content is "Your verification code is ${code} and valid for 5 minutes. Do not disclose the verification code to others.", specify the value of this parameter as {"code":"##code##"}
    // 
    // Example 2: For a custom template, if the template content is ${content}, specify the value of this parameter as {"content":"Your verification code is ##code## and must be used within 5 minutes."}.
    // 
    // > 
    // 
    // *   If line breaks are required in JSON-formatted data, they must meet the relevant requirements that are specified in the standard JSON protocol.
    // 
    // *   For more information about template variables, see [SMS template specifications](https://help.aliyun.com/document_detail/108253.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateParam_ = nullptr;
    // The validity period of the verification code. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> validTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
