// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATAPPMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATAPPMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class SendChatappMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatappMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdAccountId, adAccountId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContextMessageId, contextMessageId_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_TO_JSON(FallBackContent, fallBackContent_);
      DARABONBA_PTR_TO_JSON(FallBackDuration, fallBackDuration_);
      DARABONBA_PTR_TO_JSON(FallBackId, fallBackId_);
      DARABONBA_PTR_TO_JSON(FallBackRule, fallBackRule_);
      DARABONBA_PTR_TO_JSON(FlowAction, flowActionShrink_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MessageCampaignId, messageCampaignId_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_TO_JSON(ProductAction, productActionShrink_);
      DARABONBA_PTR_TO_JSON(RecipientType, recipientType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateParams, templateParamsShrink_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(TokenType, tokenType_);
      DARABONBA_PTR_TO_JSON(TrackingData, trackingData_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatappMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdAccountId, adAccountId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContextMessageId, contextMessageId_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustWabaId, custWabaId_);
      DARABONBA_PTR_FROM_JSON(FallBackContent, fallBackContent_);
      DARABONBA_PTR_FROM_JSON(FallBackDuration, fallBackDuration_);
      DARABONBA_PTR_FROM_JSON(FallBackId, fallBackId_);
      DARABONBA_PTR_FROM_JSON(FallBackRule, fallBackRule_);
      DARABONBA_PTR_FROM_JSON(FlowAction, flowActionShrink_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IsvCode, isvCode_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MessageCampaignId, messageCampaignId_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_FROM_JSON(ProductAction, productActionShrink_);
      DARABONBA_PTR_FROM_JSON(RecipientType, recipientType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateParams, templateParamsShrink_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(TokenType, tokenType_);
      DARABONBA_PTR_FROM_JSON(TrackingData, trackingData_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SendChatappMessageShrinkRequest() = default ;
    SendChatappMessageShrinkRequest(const SendChatappMessageShrinkRequest &) = default ;
    SendChatappMessageShrinkRequest(SendChatappMessageShrinkRequest &&) = default ;
    SendChatappMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatappMessageShrinkRequest() = default ;
    SendChatappMessageShrinkRequest& operator=(const SendChatappMessageShrinkRequest &) = default ;
    SendChatappMessageShrinkRequest& operator=(SendChatappMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adAccountId_ == nullptr
        && this->category_ == nullptr && this->channelType_ == nullptr && this->content_ == nullptr && this->contextMessageId_ == nullptr && this->custSpaceId_ == nullptr
        && this->custWabaId_ == nullptr && this->fallBackContent_ == nullptr && this->fallBackDuration_ == nullptr && this->fallBackId_ == nullptr && this->fallBackRule_ == nullptr
        && this->flowActionShrink_ == nullptr && this->from_ == nullptr && this->isvCode_ == nullptr && this->label_ == nullptr && this->language_ == nullptr
        && this->messageCampaignId_ == nullptr && this->messageType_ == nullptr && this->ownerId_ == nullptr && this->payloadShrink_ == nullptr && this->productActionShrink_ == nullptr
        && this->recipientType_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->taskId_ == nullptr
        && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->templateParamsShrink_ == nullptr && this->to_ == nullptr && this->tokenType_ == nullptr
        && this->trackingData_ == nullptr && this->ttl_ == nullptr && this->type_ == nullptr; };
    // adAccountId Field Functions 
    bool hasAdAccountId() const { return this->adAccountId_ != nullptr;};
    void deleteAdAccountId() { this->adAccountId_ = nullptr;};
    inline string getAdAccountId() const { DARABONBA_PTR_GET_DEFAULT(adAccountId_, "") };
    inline SendChatappMessageShrinkRequest& setAdAccountId(string adAccountId) { DARABONBA_PTR_SET_VALUE(adAccountId_, adAccountId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SendChatappMessageShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SendChatappMessageShrinkRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendChatappMessageShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contextMessageId Field Functions 
    bool hasContextMessageId() const { return this->contextMessageId_ != nullptr;};
    void deleteContextMessageId() { this->contextMessageId_ = nullptr;};
    inline string getContextMessageId() const { DARABONBA_PTR_GET_DEFAULT(contextMessageId_, "") };
    inline SendChatappMessageShrinkRequest& setContextMessageId(string contextMessageId) { DARABONBA_PTR_SET_VALUE(contextMessageId_, contextMessageId) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline SendChatappMessageShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // custWabaId Field Functions 
    bool hasCustWabaId() const { return this->custWabaId_ != nullptr;};
    void deleteCustWabaId() { this->custWabaId_ = nullptr;};
    inline string getCustWabaId() const { DARABONBA_PTR_GET_DEFAULT(custWabaId_, "") };
    inline SendChatappMessageShrinkRequest& setCustWabaId(string custWabaId) { DARABONBA_PTR_SET_VALUE(custWabaId_, custWabaId) };


    // fallBackContent Field Functions 
    bool hasFallBackContent() const { return this->fallBackContent_ != nullptr;};
    void deleteFallBackContent() { this->fallBackContent_ = nullptr;};
    inline string getFallBackContent() const { DARABONBA_PTR_GET_DEFAULT(fallBackContent_, "") };
    inline SendChatappMessageShrinkRequest& setFallBackContent(string fallBackContent) { DARABONBA_PTR_SET_VALUE(fallBackContent_, fallBackContent) };


    // fallBackDuration Field Functions 
    bool hasFallBackDuration() const { return this->fallBackDuration_ != nullptr;};
    void deleteFallBackDuration() { this->fallBackDuration_ = nullptr;};
    inline int32_t getFallBackDuration() const { DARABONBA_PTR_GET_DEFAULT(fallBackDuration_, 0) };
    inline SendChatappMessageShrinkRequest& setFallBackDuration(int32_t fallBackDuration) { DARABONBA_PTR_SET_VALUE(fallBackDuration_, fallBackDuration) };


    // fallBackId Field Functions 
    bool hasFallBackId() const { return this->fallBackId_ != nullptr;};
    void deleteFallBackId() { this->fallBackId_ = nullptr;};
    inline string getFallBackId() const { DARABONBA_PTR_GET_DEFAULT(fallBackId_, "") };
    inline SendChatappMessageShrinkRequest& setFallBackId(string fallBackId) { DARABONBA_PTR_SET_VALUE(fallBackId_, fallBackId) };


    // fallBackRule Field Functions 
    bool hasFallBackRule() const { return this->fallBackRule_ != nullptr;};
    void deleteFallBackRule() { this->fallBackRule_ = nullptr;};
    inline string getFallBackRule() const { DARABONBA_PTR_GET_DEFAULT(fallBackRule_, "") };
    inline SendChatappMessageShrinkRequest& setFallBackRule(string fallBackRule) { DARABONBA_PTR_SET_VALUE(fallBackRule_, fallBackRule) };


    // flowActionShrink Field Functions 
    bool hasFlowActionShrink() const { return this->flowActionShrink_ != nullptr;};
    void deleteFlowActionShrink() { this->flowActionShrink_ = nullptr;};
    inline string getFlowActionShrink() const { DARABONBA_PTR_GET_DEFAULT(flowActionShrink_, "") };
    inline SendChatappMessageShrinkRequest& setFlowActionShrink(string flowActionShrink) { DARABONBA_PTR_SET_VALUE(flowActionShrink_, flowActionShrink) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline SendChatappMessageShrinkRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // isvCode Field Functions 
    bool hasIsvCode() const { return this->isvCode_ != nullptr;};
    void deleteIsvCode() { this->isvCode_ = nullptr;};
    inline string getIsvCode() const { DARABONBA_PTR_GET_DEFAULT(isvCode_, "") };
    inline SendChatappMessageShrinkRequest& setIsvCode(string isvCode) { DARABONBA_PTR_SET_VALUE(isvCode_, isvCode) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline SendChatappMessageShrinkRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SendChatappMessageShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // messageCampaignId Field Functions 
    bool hasMessageCampaignId() const { return this->messageCampaignId_ != nullptr;};
    void deleteMessageCampaignId() { this->messageCampaignId_ = nullptr;};
    inline string getMessageCampaignId() const { DARABONBA_PTR_GET_DEFAULT(messageCampaignId_, "") };
    inline SendChatappMessageShrinkRequest& setMessageCampaignId(string messageCampaignId) { DARABONBA_PTR_SET_VALUE(messageCampaignId_, messageCampaignId) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline SendChatappMessageShrinkRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendChatappMessageShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payloadShrink Field Functions 
    bool hasPayloadShrink() const { return this->payloadShrink_ != nullptr;};
    void deletePayloadShrink() { this->payloadShrink_ = nullptr;};
    inline string getPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(payloadShrink_, "") };
    inline SendChatappMessageShrinkRequest& setPayloadShrink(string payloadShrink) { DARABONBA_PTR_SET_VALUE(payloadShrink_, payloadShrink) };


    // productActionShrink Field Functions 
    bool hasProductActionShrink() const { return this->productActionShrink_ != nullptr;};
    void deleteProductActionShrink() { this->productActionShrink_ = nullptr;};
    inline string getProductActionShrink() const { DARABONBA_PTR_GET_DEFAULT(productActionShrink_, "") };
    inline SendChatappMessageShrinkRequest& setProductActionShrink(string productActionShrink) { DARABONBA_PTR_SET_VALUE(productActionShrink_, productActionShrink) };


    // recipientType Field Functions 
    bool hasRecipientType() const { return this->recipientType_ != nullptr;};
    void deleteRecipientType() { this->recipientType_ = nullptr;};
    inline string getRecipientType() const { DARABONBA_PTR_GET_DEFAULT(recipientType_, "") };
    inline SendChatappMessageShrinkRequest& setRecipientType(string recipientType) { DARABONBA_PTR_SET_VALUE(recipientType_, recipientType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendChatappMessageShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendChatappMessageShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline SendChatappMessageShrinkRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SendChatappMessageShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendChatappMessageShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline SendChatappMessageShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateParamsShrink Field Functions 
    bool hasTemplateParamsShrink() const { return this->templateParamsShrink_ != nullptr;};
    void deleteTemplateParamsShrink() { this->templateParamsShrink_ = nullptr;};
    inline string getTemplateParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(templateParamsShrink_, "") };
    inline SendChatappMessageShrinkRequest& setTemplateParamsShrink(string templateParamsShrink) { DARABONBA_PTR_SET_VALUE(templateParamsShrink_, templateParamsShrink) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline SendChatappMessageShrinkRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline SendChatappMessageShrinkRequest& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


    // trackingData Field Functions 
    bool hasTrackingData() const { return this->trackingData_ != nullptr;};
    void deleteTrackingData() { this->trackingData_ = nullptr;};
    inline string getTrackingData() const { DARABONBA_PTR_GET_DEFAULT(trackingData_, "") };
    inline SendChatappMessageShrinkRequest& setTrackingData(string trackingData) { DARABONBA_PTR_SET_VALUE(trackingData_, trackingData) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline SendChatappMessageShrinkRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SendChatappMessageShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Meta ad account ID.
    // 
    // > This parameter is for internal testing, is not generally available, and can be ignored.
    shared_ptr<string> adAccountId_ {};
    // The message category for direct WhatsApp sending.
    // 
    // >Warning: 
    // 
    // Specify this parameter only if you are a Meta-invited customer. Otherwise, the message may fail to send.
    shared_ptr<string> category_ {};
    // The channel type. Valid values:
    // 
    // - **whatsapp**
    // 
    // - **messenger**
    // 
    // - **instagram**
    // 
    // - **telegram**
    // 
    // <props="intl">
    // 
    // - **viber**
    // 
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    // The message content, in a JSON-formatted string.
    // 
    // **Notes for WhatsApp messages:**
    // 
    // - If `MessageType` is `text`, the `text` field is required, and the `Caption` field is not supported.
    // 
    // - If `MessageType` is `image`, the `Link` field is required.
    // 
    // - If `MessageType` is `video`, the `Link` field is required.
    // 
    // - If `MessageType` is `audio`, the `Link` field is required. The `Caption` field is not supported.
    // 
    // - If `MessageType` is `document`, the `Link` and `FileName` fields are required. The `Caption` field is not supported.
    // 
    // - If `MessageType` is `interactive`, the `type` and `action` fields are required.
    // 
    // - If `MessageType` is `contacts`, the `name` field is required.
    // 
    // - If `MessageType` is `location`, the `longitude` and `latitude` fields are required.
    // 
    // - If `MessageType` is `sticker`, the `Link` field is required. The `Caption` and `FileName` fields are not supported.
    // 
    // - If `MessageType` is `reaction`, the `messageId` and `emoji` fields are required.
    // 
    // **Notes for Messenger messages:**
    // 
    // - If `MessageType` is `text`, the `text` field is required.
    // 
    // - If `MessageType` is `image`, `video`, `audio`, or `document`, the `link` field is required.
    // 
    // **Notes for Instagram messages:**
    // 
    // - If `MessageType` is `text`, the `text` field is required.
    // 
    // - If `MessageType` is `image`, `video`, or `audio`, the `link` field is required.
    // 
    // <props="intl">
    // 
    // **Notes for Viber messages:**
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `text`, the `text` field is required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `image`, the `link` field is required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `video`, the `link`, `thumbnail`, `fileSize`, and `duration` fields are required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `document`, the `link`, `fileName`, and `fileType` fields are required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `text_button`, the `text`, `caption`, and `action` fields are required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `text_image_button`, the `text`, `link`, `caption`, and `action` fields are required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `text_video`, the `text`, `link`, `thumbnail`, `fileSize`, and `duration` fields are required.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - If `MessageType` is `text_video_button`, the `text`, `link`, `thumbnail`, `fileSize`, `duration`, and `caption` fields are required. The `action` field is not supported.
    shared_ptr<string> content_ {};
    // The ID of the message to which you are replying.
    shared_ptr<string> contextMessageId_ {};
    // The Space ID of the ISV\\"s sub-account. For a direct customer, this is the Instance ID. You can find the ID on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page.
    shared_ptr<string> custSpaceId_ {};
    // **Deprecated.** Use `CustSpaceId` instead. The WABA ID of an ISV\\"s customer. For a direct customer, this is the Instance ID. You can find the ID on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page.
    shared_ptr<string> custWabaId_ {};
    // The custom content of the fallback message. This parameter is available only on the International Site and can be ignored if you are using the China site.
    shared_ptr<string> fallBackContent_ {};
    // The duration after which a fallback is triggered. This parameter is available only on the International Site and can be ignored if you are using the China site.<props="intl"> If a delivery receipt is not returned within the specified period, a fallback is triggered. If this parameter is omitted, a fallback is triggered only if the message fails to send or a failed delivery receipt is returned. Unit: seconds. The value must be between 60 and 43200.
    shared_ptr<int32_t> fallBackDuration_ {};
    // The ID of the fallback strategy. This parameter is available only on the International Site and can be ignored if you are using the China site.<props="intl"> You can find the strategy ID on the [**Fallback Policy**](https://chatapp.console.alibabacloud.com/FallbackStrategy) page.
    shared_ptr<string> fallBackId_ {};
    // The fallback rule. This parameter is available only on the International Site and can be ignored if you are using the China site.
    // <props="intl">Valid values:
    // 
    // <props="intl">
    // 
    // - **undelivered**: A fallback is triggered if message delivery fails. The template and parameters must be valid at the time of sending. Blocked templates or phone numbers are not validated. This is the default rule if the parameter is empty.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - **sentFailed**: A fallback is triggered if the message fails parameter validation, such as for the template or template parameters. Only the existence of `channelType`, `type`, `messageType`, `to`, and `from` is strictly validated.
    shared_ptr<string> fallBackRule_ {};
    // The Flow message object.
    shared_ptr<string> flowActionShrink_ {};
    // The sender\\"s number or ID.
    // 
    // - If `ChannelType` is **whatsapp**, this is the phone number registered with WhatsApp. You can find the number on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **WABA Management** > **Phone Number Management** page.
    // 
    // - If `ChannelType` is **messenger**, this is the Facebook Page ID. You can find this ID on your <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Facebook Page** page.
    // 
    // - If `ChannelType` is **instagram**, this is the Instagram professional account ID (Account ID). You can find the ID on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Professional Account** page.
    // 
    // <props="intl">
    // 
    // - If `ChannelType` is **viber**, this is the Viber service ID (Service ID). You can find the ID on the [**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Service Number Management** page.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // **Deprecated.** A verification code used to authorize an ISV\\"s sub-account. You can ignore this parameter.
    shared_ptr<string> isvCode_ {};
    // The Viber message type. This parameter is available only on the International Site and can be ignored if you are using the China site.
    // <props="intl">Valid values:
    // 
    // <props="intl">
    // 
    // - **promotion**: A promotional or marketing message.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - **transaction**: A notification message.
    shared_ptr<string> label_ {};
    // The language of the message template. For a list of supported languages and their corresponding codes, see [language code](https://help.aliyun.com/document_detail/463420.html).
    shared_ptr<string> language_ {};
    // The ID of the message campaign.
    // 
    // > This parameter is for internal testing, is not generally available, and can be ignored.
    shared_ptr<string> messageCampaignId_ {};
    // The message type to use when `Type` is set to `message`. The valid values vary based on the channel type:
    // 
    // <details>
    // 
    // <summary>
    // 
    // WHATSAPP
    // 
    // </summary>
    // 
    // - `text`: A text message.
    // 
    // - `image`: An image message.
    // 
    // - `video`: A video message.
    // 
    // - `audio`: An audio message.
    // 
    // - `document`: A document message.
    // 
    // - `interactive`: An interactive message.
    // 
    // - `location`: A location message.
    // 
    // - `contacts`: A contacts message.
    // 
    // - `reaction`: A reaction message.
    // 
    // - `sticker`: A sticker message.
    // 
    // - `typing_indicator`: A typing indicator message.
    // 
    // - `pin`: A message to pin or unpin. This type is available only for group messages.
    // 
    // - `carousel`: A carousel message.
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // VIBER
    // 
    // </summary>
    // 
    // - `text`: A text message.
    // 
    // - `image`: An image message.
    // 
    // - `text_image_button`: A message with text, an image, and a button.
    // 
    // - `text_button`: A message with text and a button.
    // 
    // - `document`: A document message.
    // 
    // - `video`: A video message.
    // 
    // - `text_video`: A message with text and a video.
    // 
    // - `text_video_button`: A message with text, a video, and a button.
    // 
    // - `text_image`: A message with text and an image.
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // MESSENGER / INSTAGRAM
    // 
    // </summary>
    // 
    // - `text`: A text message.
    // 
    // - `image`: An image message.
    // 
    // - `video`: A video message.
    // 
    // - `document`: A document message.
    // 
    // - `audio`: An audio message.
    // 
    // - `interactive`: An interactive message.
    // 
    // - `couponTemplate`: A coupon template message.
    // 
    // - `regularTemplate`: A regular template message.
    // 
    // - `quickReply`: A quick reply message.
    // 
    // - `buttonTemplate`: A button template message.
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // TELEGRAM
    // 
    // </summary>
    // 
    // - `text`: A text message.
    // 
    // - `image`: An image message.
    // 
    // - `video`: A video message.
    // 
    // - `audio`: An audio message.
    // 
    // - `document`: A document message.
    // 
    // - `location`: A location message.
    // 
    // - `gif`: An animated GIF message.
    // 
    // - `sticker`: A sticker message.
    // 
    // </details>
    shared_ptr<string> messageType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // An array of custom data strings that are sent to your webhook when a user clicks a corresponding button.
    shared_ptr<string> payloadShrink_ {};
    // Product information that you have uploaded to Meta. This parameter applies to WhatsApp channels only.
    shared_ptr<string> productActionShrink_ {};
    // The recipient type. Valid values:
    // 
    // - `individual`: A single recipient.
    // 
    // - `group`: A group.
    shared_ptr<string> recipientType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // A custom tag for the Viber message.
    shared_ptr<string> tag_ {};
    // A custom task ID.
    shared_ptr<string> taskId_ {};
    // The message template code. You can find the code on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Template Design** page.
    shared_ptr<string> templateCode_ {};
    // The template name. You can find the template name on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Template Design** page.
    shared_ptr<string> templateName_ {};
    // The parameters for the message template.
    shared_ptr<string> templateParamsShrink_ {};
    // The recipient\\"s number or ID.
    // 
    // - If `ChannelType` is **whatsapp**, this is the recipient\\"s phone number.
    // 
    // - If `ChannelType` is **messenger**, this is a Page-Scoped User ID (PSID) generated when a user interacts with your Facebook Page.
    // 
    // - If `ChannelType` is **instagram**, this is an Instagram-Scoped User ID (IGSID) generated when a user interacts with your Instagram business or creator account.
    // 
    // <props="intl">
    // 
    // - If `ChannelType` is **viber**, this is the recipient\\"s phone number.
    // 
    // This parameter is required.
    shared_ptr<string> to_ {};
    // The token type.
    // 
    // > This parameter is for internal testing, is not generally available, and can be ignored.
    shared_ptr<string> tokenType_ {};
    // Custom tracking data for a Viber message. This parameter is available only on the International Site and can be ignored if you are using the China site.
    shared_ptr<string> trackingData_ {};
    // The time-to-live (TTL) for a Viber message. This parameter is available only on the International Site and can be ignored if you are using the China site.<props="intl"> Unit: seconds. The value must be between 30 and 1209600.
    shared_ptr<int32_t> ttl_ {};
    // The message type. Valid values:
    // 
    // - `template`: A message template approved in the console. You can send this type of message at any time.
    // 
    // - `message`: A message of any format. You can send this type of message only within 24 hours of receiving the last message from a user.
    // 
    // >Notice: 
    // 
    // If you set `Type` to `template`, you must set the `TemplateCode` parameter. If you set `Type` to `message`, you must set the `MessageType` parameter.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
