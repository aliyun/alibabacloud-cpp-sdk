// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATAPPMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATAPPMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListChatappMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatappMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatappMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListChatappMessageResponseBody() = default ;
    ListChatappMessageResponseBody(const ListChatappMessageResponseBody &) = default ;
    ListChatappMessageResponseBody(ListChatappMessageResponseBody &&) = default ;
    ListChatappMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatappMessageResponseBody() = default ;
    ListChatappMessageResponseBody& operator=(const ListChatappMessageResponseBody &) = default ;
    ListChatappMessageResponseBody& operator=(ListChatappMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessNumber, businessNumber_);
        DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
        DARABONBA_PTR_TO_JSON(ClientAcceptStatusName, clientAcceptStatusName_);
        DARABONBA_PTR_TO_JSON(ClientReadStatus, clientReadStatus_);
        DARABONBA_PTR_TO_JSON(ClientReadStatusName, clientReadStatusName_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(EventAction, eventAction_);
        DARABONBA_PTR_TO_JSON(EventActionName, eventActionName_);
        DARABONBA_PTR_TO_JSON(FailBackContent, failBackContent_);
        DARABONBA_PTR_TO_JSON(FailBackFlag, failBackFlag_);
        DARABONBA_PTR_TO_JSON(FailReason, failReason_);
        DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(MessageSource, messageSource_);
        DARABONBA_PTR_TO_JSON(MessageStatus, messageStatus_);
        DARABONBA_PTR_TO_JSON(MessageStatusName, messageStatusName_);
        DARABONBA_PTR_TO_JSON(MessageType, messageType_);
        DARABONBA_PTR_TO_JSON(MessageTypeName, messageTypeName_);
        DARABONBA_PTR_TO_JSON(Month, month_);
        DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UniqueMessageId, uniqueMessageId_);
        DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessNumber, businessNumber_);
        DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
        DARABONBA_PTR_FROM_JSON(ClientAcceptStatusName, clientAcceptStatusName_);
        DARABONBA_PTR_FROM_JSON(ClientReadStatus, clientReadStatus_);
        DARABONBA_PTR_FROM_JSON(ClientReadStatusName, clientReadStatusName_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(EventAction, eventAction_);
        DARABONBA_PTR_FROM_JSON(EventActionName, eventActionName_);
        DARABONBA_PTR_FROM_JSON(FailBackContent, failBackContent_);
        DARABONBA_PTR_FROM_JSON(FailBackFlag, failBackFlag_);
        DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
        DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(MessageSource, messageSource_);
        DARABONBA_PTR_FROM_JSON(MessageStatus, messageStatus_);
        DARABONBA_PTR_FROM_JSON(MessageStatusName, messageStatusName_);
        DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
        DARABONBA_PTR_FROM_JSON(MessageTypeName, messageTypeName_);
        DARABONBA_PTR_FROM_JSON(Month, month_);
        DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UniqueMessageId, uniqueMessageId_);
        DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessNumber_ == nullptr
        && this->channelType_ == nullptr && this->clientAcceptStatusName_ == nullptr && this->clientReadStatus_ == nullptr && this->clientReadStatusName_ == nullptr && this->conversationId_ == nullptr
        && this->eventAction_ == nullptr && this->eventActionName_ == nullptr && this->failBackContent_ == nullptr && this->failBackFlag_ == nullptr && this->failReason_ == nullptr
        && this->languageCode_ == nullptr && this->message_ == nullptr && this->messageId_ == nullptr && this->messageSource_ == nullptr && this->messageStatus_ == nullptr
        && this->messageStatusName_ == nullptr && this->messageType_ == nullptr && this->messageTypeName_ == nullptr && this->month_ == nullptr && this->sendTime_ == nullptr
        && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->type_ == nullptr && this->uniqueMessageId_ == nullptr && this->userNumber_ == nullptr; };
      // businessNumber Field Functions 
      bool hasBusinessNumber() const { return this->businessNumber_ != nullptr;};
      void deleteBusinessNumber() { this->businessNumber_ = nullptr;};
      inline string getBusinessNumber() const { DARABONBA_PTR_GET_DEFAULT(businessNumber_, "") };
      inline Data& setBusinessNumber(string businessNumber) { DARABONBA_PTR_SET_VALUE(businessNumber_, businessNumber) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Data& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // clientAcceptStatusName Field Functions 
      bool hasClientAcceptStatusName() const { return this->clientAcceptStatusName_ != nullptr;};
      void deleteClientAcceptStatusName() { this->clientAcceptStatusName_ = nullptr;};
      inline string getClientAcceptStatusName() const { DARABONBA_PTR_GET_DEFAULT(clientAcceptStatusName_, "") };
      inline Data& setClientAcceptStatusName(string clientAcceptStatusName) { DARABONBA_PTR_SET_VALUE(clientAcceptStatusName_, clientAcceptStatusName) };


      // clientReadStatus Field Functions 
      bool hasClientReadStatus() const { return this->clientReadStatus_ != nullptr;};
      void deleteClientReadStatus() { this->clientReadStatus_ = nullptr;};
      inline string getClientReadStatus() const { DARABONBA_PTR_GET_DEFAULT(clientReadStatus_, "") };
      inline Data& setClientReadStatus(string clientReadStatus) { DARABONBA_PTR_SET_VALUE(clientReadStatus_, clientReadStatus) };


      // clientReadStatusName Field Functions 
      bool hasClientReadStatusName() const { return this->clientReadStatusName_ != nullptr;};
      void deleteClientReadStatusName() { this->clientReadStatusName_ = nullptr;};
      inline string getClientReadStatusName() const { DARABONBA_PTR_GET_DEFAULT(clientReadStatusName_, "") };
      inline Data& setClientReadStatusName(string clientReadStatusName) { DARABONBA_PTR_SET_VALUE(clientReadStatusName_, clientReadStatusName) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Data& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // eventAction Field Functions 
      bool hasEventAction() const { return this->eventAction_ != nullptr;};
      void deleteEventAction() { this->eventAction_ = nullptr;};
      inline string getEventAction() const { DARABONBA_PTR_GET_DEFAULT(eventAction_, "") };
      inline Data& setEventAction(string eventAction) { DARABONBA_PTR_SET_VALUE(eventAction_, eventAction) };


      // eventActionName Field Functions 
      bool hasEventActionName() const { return this->eventActionName_ != nullptr;};
      void deleteEventActionName() { this->eventActionName_ = nullptr;};
      inline string getEventActionName() const { DARABONBA_PTR_GET_DEFAULT(eventActionName_, "") };
      inline Data& setEventActionName(string eventActionName) { DARABONBA_PTR_SET_VALUE(eventActionName_, eventActionName) };


      // failBackContent Field Functions 
      bool hasFailBackContent() const { return this->failBackContent_ != nullptr;};
      void deleteFailBackContent() { this->failBackContent_ = nullptr;};
      inline string getFailBackContent() const { DARABONBA_PTR_GET_DEFAULT(failBackContent_, "") };
      inline Data& setFailBackContent(string failBackContent) { DARABONBA_PTR_SET_VALUE(failBackContent_, failBackContent) };


      // failBackFlag Field Functions 
      bool hasFailBackFlag() const { return this->failBackFlag_ != nullptr;};
      void deleteFailBackFlag() { this->failBackFlag_ = nullptr;};
      inline string getFailBackFlag() const { DARABONBA_PTR_GET_DEFAULT(failBackFlag_, "") };
      inline Data& setFailBackFlag(string failBackFlag) { DARABONBA_PTR_SET_VALUE(failBackFlag_, failBackFlag) };


      // failReason Field Functions 
      bool hasFailReason() const { return this->failReason_ != nullptr;};
      void deleteFailReason() { this->failReason_ = nullptr;};
      inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
      inline Data& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


      // languageCode Field Functions 
      bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
      void deleteLanguageCode() { this->languageCode_ = nullptr;};
      inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
      inline Data& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Data& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // messageSource Field Functions 
      bool hasMessageSource() const { return this->messageSource_ != nullptr;};
      void deleteMessageSource() { this->messageSource_ = nullptr;};
      inline string getMessageSource() const { DARABONBA_PTR_GET_DEFAULT(messageSource_, "") };
      inline Data& setMessageSource(string messageSource) { DARABONBA_PTR_SET_VALUE(messageSource_, messageSource) };


      // messageStatus Field Functions 
      bool hasMessageStatus() const { return this->messageStatus_ != nullptr;};
      void deleteMessageStatus() { this->messageStatus_ = nullptr;};
      inline string getMessageStatus() const { DARABONBA_PTR_GET_DEFAULT(messageStatus_, "") };
      inline Data& setMessageStatus(string messageStatus) { DARABONBA_PTR_SET_VALUE(messageStatus_, messageStatus) };


      // messageStatusName Field Functions 
      bool hasMessageStatusName() const { return this->messageStatusName_ != nullptr;};
      void deleteMessageStatusName() { this->messageStatusName_ = nullptr;};
      inline string getMessageStatusName() const { DARABONBA_PTR_GET_DEFAULT(messageStatusName_, "") };
      inline Data& setMessageStatusName(string messageStatusName) { DARABONBA_PTR_SET_VALUE(messageStatusName_, messageStatusName) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline Data& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // messageTypeName Field Functions 
      bool hasMessageTypeName() const { return this->messageTypeName_ != nullptr;};
      void deleteMessageTypeName() { this->messageTypeName_ = nullptr;};
      inline string getMessageTypeName() const { DARABONBA_PTR_GET_DEFAULT(messageTypeName_, "") };
      inline Data& setMessageTypeName(string messageTypeName) { DARABONBA_PTR_SET_VALUE(messageTypeName_, messageTypeName) };


      // month Field Functions 
      bool hasMonth() const { return this->month_ != nullptr;};
      void deleteMonth() { this->month_ = nullptr;};
      inline string getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, "") };
      inline Data& setMonth(string month) { DARABONBA_PTR_SET_VALUE(month_, month) };


      // sendTime Field Functions 
      bool hasSendTime() const { return this->sendTime_ != nullptr;};
      void deleteSendTime() { this->sendTime_ = nullptr;};
      inline string getSendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, "") };
      inline Data& setSendTime(string sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Data& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uniqueMessageId Field Functions 
      bool hasUniqueMessageId() const { return this->uniqueMessageId_ != nullptr;};
      void deleteUniqueMessageId() { this->uniqueMessageId_ = nullptr;};
      inline string getUniqueMessageId() const { DARABONBA_PTR_GET_DEFAULT(uniqueMessageId_, "") };
      inline Data& setUniqueMessageId(string uniqueMessageId) { DARABONBA_PTR_SET_VALUE(uniqueMessageId_, uniqueMessageId) };


      // userNumber Field Functions 
      bool hasUserNumber() const { return this->userNumber_ != nullptr;};
      void deleteUserNumber() { this->userNumber_ = nullptr;};
      inline string getUserNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, "") };
      inline Data& setUserNumber(string userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


    protected:
      shared_ptr<string> businessNumber_ {};
      shared_ptr<string> channelType_ {};
      shared_ptr<string> clientAcceptStatusName_ {};
      shared_ptr<string> clientReadStatus_ {};
      shared_ptr<string> clientReadStatusName_ {};
      shared_ptr<string> conversationId_ {};
      shared_ptr<string> eventAction_ {};
      shared_ptr<string> eventActionName_ {};
      shared_ptr<string> failBackContent_ {};
      shared_ptr<string> failBackFlag_ {};
      shared_ptr<string> failReason_ {};
      shared_ptr<string> languageCode_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> messageId_ {};
      shared_ptr<string> messageSource_ {};
      shared_ptr<string> messageStatus_ {};
      shared_ptr<string> messageStatusName_ {};
      shared_ptr<string> messageType_ {};
      shared_ptr<string> messageTypeName_ {};
      shared_ptr<string> month_ {};
      shared_ptr<string> sendTime_ {};
      shared_ptr<string> templateCode_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uniqueMessageId_ {};
      shared_ptr<string> userNumber_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListChatappMessageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChatappMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListChatappMessageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListChatappMessageResponseBody::Data>) };
    inline vector<ListChatappMessageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListChatappMessageResponseBody::Data>) };
    inline ListChatappMessageResponseBody& setData(const vector<ListChatappMessageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListChatappMessageResponseBody& setData(vector<ListChatappMessageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListChatappMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatappMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListChatappMessageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListChatappMessageResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
