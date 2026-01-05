// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBATCHSMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDBATCHSMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendBatchSmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendBatchSmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumberJson, phoneNumberJson_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignNameJson, signNameJson_);
      DARABONBA_PTR_TO_JSON(SmsUpExtendCodeJson, smsUpExtendCodeJson_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParamJson, templateParamJson_);
    };
    friend void from_json(const Darabonba::Json& j, SendBatchSmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberJson, phoneNumberJson_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignNameJson, signNameJson_);
      DARABONBA_PTR_FROM_JSON(SmsUpExtendCodeJson, smsUpExtendCodeJson_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParamJson, templateParamJson_);
    };
    SendBatchSmsRequest() = default ;
    SendBatchSmsRequest(const SendBatchSmsRequest &) = default ;
    SendBatchSmsRequest(SendBatchSmsRequest &&) = default ;
    SendBatchSmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendBatchSmsRequest() = default ;
    SendBatchSmsRequest& operator=(const SendBatchSmsRequest &) = default ;
    SendBatchSmsRequest& operator=(SendBatchSmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outId_ == nullptr
        && this->ownerId_ == nullptr && this->phoneNumberJson_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signNameJson_ == nullptr
        && this->smsUpExtendCodeJson_ == nullptr && this->templateCode_ == nullptr && this->templateParamJson_ == nullptr; };
    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendBatchSmsRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendBatchSmsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumberJson Field Functions 
    bool hasPhoneNumberJson() const { return this->phoneNumberJson_ != nullptr;};
    void deletePhoneNumberJson() { this->phoneNumberJson_ = nullptr;};
    inline string getPhoneNumberJson() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberJson_, "") };
    inline SendBatchSmsRequest& setPhoneNumberJson(string phoneNumberJson) { DARABONBA_PTR_SET_VALUE(phoneNumberJson_, phoneNumberJson) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendBatchSmsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendBatchSmsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signNameJson Field Functions 
    bool hasSignNameJson() const { return this->signNameJson_ != nullptr;};
    void deleteSignNameJson() { this->signNameJson_ = nullptr;};
    inline string getSignNameJson() const { DARABONBA_PTR_GET_DEFAULT(signNameJson_, "") };
    inline SendBatchSmsRequest& setSignNameJson(string signNameJson) { DARABONBA_PTR_SET_VALUE(signNameJson_, signNameJson) };


    // smsUpExtendCodeJson Field Functions 
    bool hasSmsUpExtendCodeJson() const { return this->smsUpExtendCodeJson_ != nullptr;};
    void deleteSmsUpExtendCodeJson() { this->smsUpExtendCodeJson_ = nullptr;};
    inline string getSmsUpExtendCodeJson() const { DARABONBA_PTR_GET_DEFAULT(smsUpExtendCodeJson_, "") };
    inline SendBatchSmsRequest& setSmsUpExtendCodeJson(string smsUpExtendCodeJson) { DARABONBA_PTR_SET_VALUE(smsUpExtendCodeJson_, smsUpExtendCodeJson) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendBatchSmsRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParamJson Field Functions 
    bool hasTemplateParamJson() const { return this->templateParamJson_ != nullptr;};
    void deleteTemplateParamJson() { this->templateParamJson_ = nullptr;};
    inline string getTemplateParamJson() const { DARABONBA_PTR_GET_DEFAULT(templateParamJson_, "") };
    inline SendBatchSmsRequest& setTemplateParamJson(string templateParamJson) { DARABONBA_PTR_SET_VALUE(templateParamJson_, templateParamJson) };


  protected:
    // The extension field of the external record. The value is a string that contains no more than 256 characters.
    // 
    // > The parameter is optional.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The mobile number of the recipient. Format:
    // 
    // *   Message delivery to the Chinese mainland: +/+86/0086/86 or an 11-digit mobile number without a prefix. Example: 1590000\\*\\*\\*\\*.
    // *   Message delivery to countries or regions outside the Chinese mainland: Dialing code + Mobile number. Example: 852000012\\*\\*\\*\\*.
    // 
    // > We recommend that you call the SendSms operation to send verification codes.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumberJson_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The signature.
    // 
    // Log on to the Alibaba Cloud SMS console. In the left-side navigation pane, click **Go Globe** or **Go China**. You can view the signature in the **Signature** column on the **Signatures** tab.
    // 
    // > The signatures must be approved and correspond to the mobile numbers in sequence.
    // 
    // This parameter is required.
    shared_ptr<string> signNameJson_ {};
    // The extension code of the MO message. Format: JSON array.
    // 
    // > The parameter is optional.
    shared_ptr<string> smsUpExtendCodeJson_ {};
    // The code of the message template.
    // 
    // Log on to the Alibaba Cloud SMS console. In the left-side navigation pane, click **Go Globe** or **Go China**. You can view the message template in the **Template Code** column on the **Message Templates** tab.
    // 
    // > The message templates must be created on the Go Globe page and approved.
    // 
    // This parameter is required.
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
