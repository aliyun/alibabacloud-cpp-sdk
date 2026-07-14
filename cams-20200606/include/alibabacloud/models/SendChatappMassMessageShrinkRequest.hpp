// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATAPPMASSMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATAPPMASSMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class SendChatappMassMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatappMassMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_TO_JSON(FallBackContent, fallBackContent_);
      DARABONBA_PTR_TO_JSON(FallBackDuration, fallBackDuration_);
      DARABONBA_PTR_TO_JSON(FallBackId, fallBackId_);
      DARABONBA_PTR_TO_JSON(FallBackRule, fallBackRule_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SenderList, senderListShrink_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatappMassMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_FROM_JSON(FallBackContent, fallBackContent_);
      DARABONBA_PTR_FROM_JSON(FallBackDuration, fallBackDuration_);
      DARABONBA_PTR_FROM_JSON(FallBackId, fallBackId_);
      DARABONBA_PTR_FROM_JSON(FallBackRule, fallBackRule_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SenderList, senderListShrink_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    SendChatappMassMessageShrinkRequest() = default ;
    SendChatappMassMessageShrinkRequest(const SendChatappMassMessageShrinkRequest &) = default ;
    SendChatappMassMessageShrinkRequest(SendChatappMassMessageShrinkRequest &&) = default ;
    SendChatappMassMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatappMassMessageShrinkRequest() = default ;
    SendChatappMassMessageShrinkRequest& operator=(const SendChatappMassMessageShrinkRequest &) = default ;
    SendChatappMassMessageShrinkRequest& operator=(SendChatappMassMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && this->custSpaceId_ == nullptr && this->custWabaId_ == nullptr && this->fallBackContent_ == nullptr && this->fallBackDuration_ == nullptr && this->fallBackId_ == nullptr
        && this->fallBackRule_ == nullptr && this->from_ == nullptr && this->isvCode_ == nullptr && this->label_ == nullptr && this->language_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->senderListShrink_ == nullptr && this->tag_ == nullptr
        && this->taskId_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->ttl_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SendChatappMassMessageShrinkRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline SendChatappMassMessageShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // custWabaId Field Functions 
    bool hasCustWabaId() const { return this->custWabaId_ != nullptr;};
    void deleteCustWabaId() { this->custWabaId_ = nullptr;};
    inline string getCustWabaId() const { DARABONBA_PTR_GET_DEFAULT(custWabaId_, "") };
    inline SendChatappMassMessageShrinkRequest& setCustWabaId(string custWabaId) { DARABONBA_PTR_SET_VALUE(custWabaId_, custWabaId) };


    // fallBackContent Field Functions 
    bool hasFallBackContent() const { return this->fallBackContent_ != nullptr;};
    void deleteFallBackContent() { this->fallBackContent_ = nullptr;};
    inline string getFallBackContent() const { DARABONBA_PTR_GET_DEFAULT(fallBackContent_, "") };
    inline SendChatappMassMessageShrinkRequest& setFallBackContent(string fallBackContent) { DARABONBA_PTR_SET_VALUE(fallBackContent_, fallBackContent) };


    // fallBackDuration Field Functions 
    bool hasFallBackDuration() const { return this->fallBackDuration_ != nullptr;};
    void deleteFallBackDuration() { this->fallBackDuration_ = nullptr;};
    inline int32_t getFallBackDuration() const { DARABONBA_PTR_GET_DEFAULT(fallBackDuration_, 0) };
    inline SendChatappMassMessageShrinkRequest& setFallBackDuration(int32_t fallBackDuration) { DARABONBA_PTR_SET_VALUE(fallBackDuration_, fallBackDuration) };


    // fallBackId Field Functions 
    bool hasFallBackId() const { return this->fallBackId_ != nullptr;};
    void deleteFallBackId() { this->fallBackId_ = nullptr;};
    inline string getFallBackId() const { DARABONBA_PTR_GET_DEFAULT(fallBackId_, "") };
    inline SendChatappMassMessageShrinkRequest& setFallBackId(string fallBackId) { DARABONBA_PTR_SET_VALUE(fallBackId_, fallBackId) };


    // fallBackRule Field Functions 
    bool hasFallBackRule() const { return this->fallBackRule_ != nullptr;};
    void deleteFallBackRule() { this->fallBackRule_ = nullptr;};
    inline string getFallBackRule() const { DARABONBA_PTR_GET_DEFAULT(fallBackRule_, "") };
    inline SendChatappMassMessageShrinkRequest& setFallBackRule(string fallBackRule) { DARABONBA_PTR_SET_VALUE(fallBackRule_, fallBackRule) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline SendChatappMassMessageShrinkRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // isvCode Field Functions 
    bool hasIsvCode() const { return this->isvCode_ != nullptr;};
    void deleteIsvCode() { this->isvCode_ = nullptr;};
    inline string getIsvCode() const { DARABONBA_PTR_GET_DEFAULT(isvCode_, "") };
    inline SendChatappMassMessageShrinkRequest& setIsvCode(string isvCode) { DARABONBA_PTR_SET_VALUE(isvCode_, isvCode) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline SendChatappMassMessageShrinkRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SendChatappMassMessageShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendChatappMassMessageShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendChatappMassMessageShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendChatappMassMessageShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // senderListShrink Field Functions 
    bool hasSenderListShrink() const { return this->senderListShrink_ != nullptr;};
    void deleteSenderListShrink() { this->senderListShrink_ = nullptr;};
    inline string getSenderListShrink() const { DARABONBA_PTR_GET_DEFAULT(senderListShrink_, "") };
    inline SendChatappMassMessageShrinkRequest& setSenderListShrink(string senderListShrink) { DARABONBA_PTR_SET_VALUE(senderListShrink_, senderListShrink) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline SendChatappMassMessageShrinkRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SendChatappMassMessageShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendChatappMassMessageShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline SendChatappMassMessageShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline SendChatappMassMessageShrinkRequest& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The channel type. Valid values:
    // 
    // - **whatsapp**
    // 
    // - **messenger**
    // - **instagram**
    // 
    // <props="intl">- **viber**
    // 
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    // The ISV sub-customer SpaceId or direct customer instance ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page.
    shared_ptr<string> custSpaceId_ {};
    // The ISV customer WABA ID. This parameter is deprecated. Use CustSpaceId instead, which is the direct customer instance ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page.
    shared_ptr<string> custWabaId_ {};
    // The custom fallback content. This parameter is for the China site (Chinese). China site users can ignore this parameter.
    shared_ptr<string> fallBackContent_ {};
    // The fallback trigger time. This parameter is for the international site. China site users can ignore this parameter. <props="intl">If no delivery receipt is returned within the specified time, the fallback is triggered. If this parameter is not specified, the fallback is triggered only when the message fails to send or a failure status report is received. Unit: seconds. Minimum value: 60. Maximum value: 43200.
    shared_ptr<int32_t> fallBackDuration_ {};
    // The fallback policy ID. This parameter is for the China site (Chinese). China site users can ignore this parameter. <props="intl">You can view the policy ID on the [**Fallback Policy**](https://chatapp.console.alibabacloud.com/FallbackStrategy) page.
    shared_ptr<string> fallBackId_ {};
    // The fallback rule. This parameter is for the international site. China site users can ignore this parameter.
    // <props="intl">Valid values:
    // <props="intl">- **undelivered**: the fallback is triggered when the message cannot be delivered to the device. During sending, the template and parameters must pass validation. Blocked templates or blocked numbers are not validated. This rule is used by default if the parameter value is empty.
    // <props="intl">- **sentFailed**: the fallback is triggered when validation of the template or template variables fails. Only channelType, type, messageType, to, and from (whether it exists) are strictly validated.
    shared_ptr<string> fallBackRule_ {};
    // The sender phone number.
    // 
    // - If ChannelType is **whatsapp**, this is the phone number registered and bindng with WhatsApp. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **WABA Management** > **Phone Number Management** page.
    // - If ChannelType is **messenger**, this is the Page ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Public Page** page.
    // - If ChannelType is **instagram**, this is the Instagram professional Account ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Professional Account** page.
    // <props="intl">- If ChannelType is **viber**, this is the Viber Service ID. You can view it on the [**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Service ID Management** page.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // The ISV verification code used to verify whether a RAM user is authorized by the ISV. This parameter is deprecated and can be ignored.
    shared_ptr<string> isvCode_ {};
    // The Viber message type. This parameter is for the international site. China site users can ignore this parameter.
    // <props="intl">Valid values:
    // <props="intl">- **pormotion**: marketing or promotional messages.
    // <props="intl">- **transaction**: notification messages.
    shared_ptr<string> label_ {};
    // The language. For a list of language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of recipient phone numbers.
    shared_ptr<string> senderListShrink_ {};
    // The tag information. Custom tag information for Viber message sending.
    shared_ptr<string> tag_ {};
    // The custom task ID.
    shared_ptr<string> taskId_ {};
    // The template code. You can view the template code on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Template Design** page.
    shared_ptr<string> templateCode_ {};
    // The template name. You can view the template name on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Template Design** page.
    shared_ptr<string> templateName_ {};
    // The timeout period for Viber message sending. This parameter is for the international site. China site users can ignore this parameter. <props="intl">Unit: seconds. Valid values: 30 to 1209600.
    shared_ptr<int64_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
