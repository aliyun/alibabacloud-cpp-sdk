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
    // > This parameter is a test parameter that is not fully available. Ignore this parameter.
    shared_ptr<string> adAccountId_ {};
    // The message type (for WhatsApp direct send).
    // 
    // >Warning: Do not specify this parameter if you are not a Meta-invited customer. Otherwise, message sending fails.
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
    // - **line**
    // 
    // - **telegram**
    // 
    // <props="intl">- **viber**
    // 
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    // The message content.
    // <details>
    // <summary>WhatsApp message notes:</summary>
    // 
    // - When **messageType** is **text**, the **text** field is required and the **Caption** field must not be specified.
    // - When **messageType** is **image**, the **Link** field is required.
    // - When **messageType** is **video**, the **Link** field is required.
    // - When **messageType** is **audio**, the **Link** field is required and the **Caption** field is invalid.
    // - When **messageType** is **document**, the **Link** and **FileName** fields are required and the **Caption** field is invalid.
    // - When **messageType** is **interactive**, the **type** and **action** fields are required.
    // - When **messageType** is **contacts**, the **name** field is required.
    // - When **messageType** is **location**, the **longitude** and **latitude** fields are required.
    // - When **messageType** is **sticker**, the **Link** field is required and the **Caption** and **FileName** fields are invalid.
    // - When **messageType** is **reaction**, the **messageId** and **emoji** fields are required.
    // </details>
    // 
    // <details>
    // <summary>Messenger message notes:</summary>
    // 
    // - When **messageType** is **text**, the **text** field is required.
    // - When **messageType** is **image**, **video**, **audio**, or **document**, the **link** field is required.
    // </details>
    // 
    // <details>
    // <summary>Instagram message notes:</summary>
    // 
    // - When **messageType** is **text**, the **text** field is required.
    // - When **messageType** is **image**, **video**, or **audio**, the **link** field is required.
    // </details>
    // 
    // <props="intl">
    // 
    // <details>
    // <summary>Viber message notes:</summary>
    // 
    // - When **messageType** is **text**, the **text** field is required.
    // - When **messageType** is **image**, the **link** field is required.
    // - When **messageType** is **video**, the **link**, **thumbnail**, **fileSize**, and **duration** fields are required.
    // - When **messageType** is **document**, the **link**, **fileName**, and **fileType** fields are required.
    // - When **messageType** is **text_button**, the **text**, **caption**, and **action** fields are required.
    // - When **messageType** is **text_image_button**, the **text**, **link**, **caption**, and **action** fields are required.
    // - When **messageType** is **text_video**, the **text**, **link**, **thumbnail**, **fileSize**, and **duration** fields are required.
    // - When **messageType** is **text_video_button**, the **text**, **link**, **thumbnail**, **fileSize**, **duration**, and **caption** fields are required, and the **action** field must not be empty.
    // </details>
    // 
    // 
    // <details>
    // <summary>Telegram message notes:</summary>
    // 
    // - When **messageType** is **text**, the **text** field is required.
    // - When **messageType** is **image**, **video**, **audio**, **gif**, or **sticker**, the **link** field is required.
    // - When **messageType** is **location**, the **latitude** and **longitude** fields are required.
    // - When **messageType** is **interactive**, the **type** field is required. You can send various Telegram message types. Example: {"type": "sendPhoto", "sendPhoto": {"photo":"http://img.png","caption":"21"}}. This can be used to send a Photo type message. For more information about message types, see [Telegram message body](https://core.telegram.org/bots/api#sendphoto).
    // </details>
    // 
    // <details>
    // <summary>LINE message notes:</summary>
    // 
    // - When **messageType** is **text** or **textV2**, the **text** field is required.
    // - When **messageType** is **image** or **video**, the **link** and **previewImageUrl** fields are required.
    // - When **messageType** is **audio**, the **link** and **duration** fields are required.
    // - When **messageType** is **buttons** or **confirm**, the **text** and **actions** fields are required.
    // - When **messageType** is **carousel** or **imageCarousel**, the **columns** field is required.
    // - When **messageType** is **quickReply**, the **text** and **items** fields are required.
    // - When **messageType** is **sticker**, the **packageId** and **stickerId** fields are required.
    // - When **messageType** is **location**, the **title**, **address**, **latitude**, and **longitude** fields are required.
    // - When **messageType** is **coupon**, the **couponId** field is required.
    // - When **messageType** is **imagemap**, the **baseUrl** and **altText** fields are required.
    // - When **messageType** is **flex**, the **contents** and **altText** fields are required.
    // - When **messageType** is **interactive**, you can pass in message formats supported by LINE:
    // 
    //   - To send a single message, the **type** field is required, and other fields follow the LINE message body format. Example: {"type": "text", "text": "test"}
    //   - To send multiple messages (LINE supports up to 5 messages at a time), the **messages** field is required. Example: {"messages": [{"type": "text", "text": "test"}, {"type": "image", "originalContentUrl": "http://img.png", "previewImageUrl": "http://img2.png"}]}
    //   - For more information, see [LINE message body](https://developers.line.biz/en/reference/messaging-api/#message-objects).
    // </details>
    shared_ptr<string> content_ {};
    // The ID of the message to reply to. This is the ID of a previously sent or received message.
    shared_ptr<string> contextMessageId_ {};
    // The SpaceId of the ISV sub-customer or the instance ID of a direct customer. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page.
    shared_ptr<string> custSpaceId_ {};
    // The ISV customer WABA ID. 
    // 
    // > This parameter is deprecated. Use CustSpaceId instead.
    // > - You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page.
    shared_ptr<string> custWabaId_ {};
    // The custom fallback content. This parameter is for the China International site. China site users can ignore this parameter.
    shared_ptr<string> fallBackContent_ {};
    // The fallback trigger time. This parameter is for the China International site. China site users can ignore this parameter. <props="intl">If the message does not return a delivered receipt within the specified time, fallback is triggered. If this parameter is not specified, fallback is triggered only when the message fails to send or a failure status report is received. Unit: seconds. Minimum value: 60. Maximum value: 43200.
    shared_ptr<int32_t> fallBackDuration_ {};
    // The fallback policy ID. This parameter is for the China International site. China site users can ignore this parameter. <props="intl">You can view the policy ID on the [**Fallback Strategy**](https://chatapp.console.alibabacloud.com/FallbackStrategy) page.
    shared_ptr<string> fallBackId_ {};
    // The fallback rule. This parameter is for the China International site. China site users can ignore this parameter.
    // <props="intl">Valid values:
    // <props="intl">- **undelivered**: fallback is triggered when the message cannot be delivered to the endpoint (template and parameter validation must pass during the sending state; blocked templates or numbers are not validated). This rule is used by default when the parameter value is empty.
    // <props="intl">- **sentFailed**: fallback is also triggered when template or template variable validation fails. Only the channelType, type, messageType, to, and from (existence check) parameters are strictly validated.
    shared_ptr<string> fallBackRule_ {};
    // The Flow message object.
    // 
    // > Valid only for WHATSAPP.
    shared_ptr<string> flowActionShrink_ {};
    // The sender number.
    // 
    // - When ChannelType is **whatsapp**, this is the phone number registered and bindng with WhatsApp. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **WABA Management** > **Number Management** page.
    // - When ChannelType is **messenger**, this is the Page ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Public Page** page.
    // - When ChannelType is **instagram**, this is the Instagram professional account ID (Account ID). You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Professional Account** page.
    // <props="intl">- When ChannelType is **viber**, this is the Viber Service ID. You can view it on the [**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Service ID Management** page.
    // - When ChannelType is **telegram**, this is the Telegram bot ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Bot Management** page.
    // - When ChannelType is **line**, this is the LINE Channel ID. You can view it on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **LINE Official Account** page.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // The ISV verification code.
    // 
    // > This parameter is deprecated. You can ignore it.
    shared_ptr<string> isvCode_ {};
    // The Viber message type. This parameter is for the China International site. China site users can ignore this parameter.
    // <props="intl">Valid values:
    // <props="intl">- **pormotion**: marketing or promotional messages.
    // <props="intl">- **transaction**: notification messages.
    // 
    // > Valid only for VIBER.
    shared_ptr<string> label_ {};
    // The language. For a list of language codes, see [Language codes](https://help.aliyun.com/document_detail/463420.html).
    shared_ptr<string> language_ {};
    // The campaign message ID.
    // 
    // > This parameter is a test parameter that is not fully available. Ignore this parameter.
    shared_ptr<string> messageCampaignId_ {};
    // The detailed message type when Type is set to message. Valid values:
    // 
    // <details>
    // <summary>WHATSAPP</summary>
    // 
    // - text: text message.
    // 
    // - image: image message.
    // 
    // - video: video message.
    // 
    // - audio: audio message.
    // 
    // - document: document message.
    // 
    // - interactive: interactive message.
    // 
    // - location: location message.
    // 
    // - contacts: contacts message.
    // 
    // - reaction: reaction message.
    // 
    // - sticker: sticker message.
    // 
    // - typing_indicator: typing indicator message.
    // 
    // - pin: pin or unpin message (group messages only).
    // 
    // - carousel: carousel message.
    // </details>
    // 
    // <details>
    // <summary>VIBER</summary>
    // 
    // - text: text message.
    // 
    // - image: image message.
    // 
    // - text_image_button: text + image + button message.
    // 
    // - text_button: text + button message.
    // 
    // - document: document message.
    // 
    // - video: video message.
    // 
    // - text_video: text + video message.
    // 
    // - text_video_button: text + video + button message.
    // 
    // - text_image: text + image message.
    // </details>
    // 
    // 
    // <details>
    // <summary>MESSENGER / INSTAGRAM</summary>
    // 
    // - text: text message.
    // 
    // - image: image message.
    // 
    // - video: video message.
    // 
    // - document: document message.
    // 
    // - audio: audio message.
    // 
    // - interactive: interactive message.
    // 
    // - couponTemplate: coupon template message.
    // 
    // - regularTemplate: regular template message.
    // 
    // - quickReply: quick reply message.
    // 
    // - buttonTemplate: button template message.
    // </details>
    // 
    // <details>
    // <summary>TELEGRAM</summary>
    // 
    // - text: text message.
    // 
    // - image: image message.
    // 
    // - video: video message.
    // 
    // - audio: audio message.
    // 
    // - document: document message.
    // 
    // - location: location message.
    // 
    // - gif: animated GIF message.
    // 
    // - sticker: sticker message.
    // 
    // - interactive: custom pass-through Telegram message.
    // 
    // </details>
    // 
    // <details>
    // <summary>LINE</summary>
    // 
    // - text: text message.
    // 
    // - image: image message.
    // 
    // - video: video message.
    // 
    // - audio: audio message.
    // 
    // - buttons: button message.
    // 
    // - confirm: confirm message.
    // 
    // - carousel: carousel message.
    // 
    // - imageCarousel: image carousel message.
    // 
    // - quickReply: quick reply message.
    // 
    // - sticker: sticker message.
    // 
    // - location: location message.
    // 
    // - textV2: text message (V2).
    // 
    // - coupon: coupon message.
    // 
    // - imagemap: imagemap message.
    // 
    // - flex: flex message.
    // 
    // - interactive: custom pass-through LINE message.
    // 
    // > [For more information, see the message types supported by LINE](https://developers.line.biz/en/reference/messaging-api/#message-objects)
    // 
    // </details>
    shared_ptr<string> messageType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The collection of button trigger messages.
    // 
    // > This parameter is valid only for WHATSAPP.
    shared_ptr<string> payloadShrink_ {};
    // The product information. This parameter is valid only for WhatsApp channel types. It refers to the product information you uploaded on Meta.
    // 
    // > Valid only for WHATSAPP.
    shared_ptr<string> productActionShrink_ {};
    // The recipient type. Valid values:
    // 
    // - individual: an individual.
    // 
    // - group: a group.
    // 
    // - userId: WhatsApp BSUID. Valid only for WHATSAPP.
    shared_ptr<string> recipientType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag information. Custom tag information when sending Viber messages.
    // 
    // > Valid only for VIBER.
    shared_ptr<string> tag_ {};
    // The custom task ID.
    shared_ptr<string> taskId_ {};
    // The template code. You can view the template code on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Template Design** page.
    shared_ptr<string> templateCode_ {};
    // The template name. You can view the template name on the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Management** > **Template Design** page.
    shared_ptr<string> templateName_ {};
    // The collection of template parameters.
    shared_ptr<string> templateParamsShrink_ {};
    // The recipient number.
    // 
    // - When ChannelType is **whatsapp**, this is the phone number or BSUID of the message recipient.
    // - When ChannelType is **messenger**, this is the Page-Scoped User ID generated when the user interacts with the Facebook page.
    // - When ChannelType is **instagram**, this is the Instagram User ID generated when the user interacts with the Instagram business or creator account.
    // <props="intl">- When ChannelType is **viber**, this is the phone number of the message recipient.
    // - When ChannelType is **telegram**, this is the Telegram chatId.
    // - When ChannelType is **line**, this is the LINE User ID.
    // 
    // This parameter is required.
    shared_ptr<string> to_ {};
    // The token type.
    // > This parameter is a test parameter that is not fully available. Ignore this parameter.
    shared_ptr<string> tokenType_ {};
    // The custom tracking data passed in for Viber message types. This parameter is for the China International site. China site users can ignore this parameter.
    // 
    // > Valid only for VIBER.
    shared_ptr<string> trackingData_ {};
    // The Viber message sending timeout period. This parameter is for the China International site. China site users can ignore this parameter. <props="intl">Unit: seconds. Valid values: 30 to 1209600.
    // 
    // > Valid only for VIBER.
    shared_ptr<int32_t> ttl_ {};
    // The message type. Valid values:
    // 
    // - template: a message template that has been approved in the console. This type of message can be sent at any time.
    // 
    // - message: a message in any format. This type of message can only be sent within 24 hours after receiving the last message from the user.
    // 
    // >Notice: When Type is set to template, you must specify TemplateCode. When Type is set to message, you must specify MessageType.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
