// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCHATMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCHATMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppChatMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppChatMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    ListAppChatMessagesResponseBody() = default ;
    ListAppChatMessagesResponseBody(const ListAppChatMessagesResponseBody &) = default ;
    ListAppChatMessagesResponseBody(ListAppChatMessagesResponseBody &&) = default ;
    ListAppChatMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppChatMessagesResponseBody() = default ;
    ListAppChatMessagesResponseBody& operator=(const ListAppChatMessagesResponseBody &) = default ;
    ListAppChatMessagesResponseBody& operator=(ListAppChatMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(BotId, botId_);
        DARABONBA_PTR_TO_JSON(ChatId, chatId_);
        DARABONBA_PTR_TO_JSON(ChatStatus, chatStatus_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(MetaData, metaData_);
        DARABONBA_PTR_TO_JSON(No, no_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(BotId, botId_);
        DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
        DARABONBA_PTR_FROM_JSON(ChatStatus, chatStatus_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
        DARABONBA_PTR_FROM_JSON(No, no_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->botId_ == nullptr
        && this->chatId_ == nullptr && this->chatStatus_ == nullptr && this->content_ == nullptr && this->contentType_ == nullptr && this->conversationId_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->messageId_ == nullptr && this->metaData_ == nullptr && this->no_ == nullptr
        && this->role_ == nullptr && this->sectionId_ == nullptr && this->siteId_ == nullptr && this->type_ == nullptr; };
      // botId Field Functions 
      bool hasBotId() const { return this->botId_ != nullptr;};
      void deleteBotId() { this->botId_ = nullptr;};
      inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
      inline Module& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


      // chatId Field Functions 
      bool hasChatId() const { return this->chatId_ != nullptr;};
      void deleteChatId() { this->chatId_ = nullptr;};
      inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
      inline Module& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


      // chatStatus Field Functions 
      bool hasChatStatus() const { return this->chatStatus_ != nullptr;};
      void deleteChatStatus() { this->chatStatus_ = nullptr;};
      inline string getChatStatus() const { DARABONBA_PTR_GET_DEFAULT(chatStatus_, "") };
      inline Module& setChatStatus(string chatStatus) { DARABONBA_PTR_SET_VALUE(chatStatus_, chatStatus) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Module& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Module& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline Module& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Module& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Module& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Module& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
      inline Module& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


      // no Field Functions 
      bool hasNo() const { return this->no_ != nullptr;};
      void deleteNo() { this->no_ = nullptr;};
      inline int32_t getNo() const { DARABONBA_PTR_GET_DEFAULT(no_, 0) };
      inline Module& setNo(int32_t no) { DARABONBA_PTR_SET_VALUE(no_, no) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Module& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // sectionId Field Functions 
      bool hasSectionId() const { return this->sectionId_ != nullptr;};
      void deleteSectionId() { this->sectionId_ = nullptr;};
      inline string getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, "") };
      inline Module& setSectionId(string sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
      inline Module& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Module& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The bot ID.
      shared_ptr<string> botId_ {};
      // The unique ID of a single message.
      shared_ptr<string> chatId_ {};
      // The current chat status.
      shared_ptr<string> chatStatus_ {};
      // The ID of the data API operation that is called.
      shared_ptr<string> content_ {};
      // The content type.
      shared_ptr<string> contentType_ {};
      // The conversation ID.
      shared_ptr<string> conversationId_ {};
      // The creation time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtCreateTime_ {};
      // The modification time.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtModifiedTime_ {};
      // The message ID.
      shared_ptr<string> messageId_ {};
      // The business extension metadata in Map format. The value must be a JSON string.
      shared_ptr<string> metaData_ {};
      // The region sequence number. This parameter is deprecated.
      shared_ptr<int32_t> no_ {};
      // The role of the conversation participant. Valid values:
      // 
      // - user: user
      // 
      // - assistant: assistant
      // 
      // - system: system
      // - function: function
      // 
      // - plugin: plug-in
      // 
      // - tool: tool
      shared_ptr<string> role_ {};
      // The section ID of the check item.
      shared_ptr<string> sectionId_ {};
      // The site ID. You can obtain this value by calling the [ListSites](~~ListSites~~) operation.
      shared_ptr<string> siteId_ {};
      // The file type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppChatMessagesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppChatMessagesResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppChatMessagesResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppChatMessagesResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppChatMessagesResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppChatMessagesResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppChatMessagesResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppChatMessagesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<ListAppChatMessagesResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<ListAppChatMessagesResponseBody::Module>) };
    inline vector<ListAppChatMessagesResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<ListAppChatMessagesResponseBody::Module>) };
    inline ListAppChatMessagesResponseBody& setModule(const vector<ListAppChatMessagesResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppChatMessagesResponseBody& setModule(vector<ListAppChatMessagesResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppChatMessagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppChatMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppChatMessagesResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppChatMessagesResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppChatMessagesResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The access denied detail.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message, which is used to replace the `%s` placeholder in the **ErrMessage** response parameter.
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, the value of the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error arguments.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response data.
    shared_ptr<vector<ListAppChatMessagesResponseBody::Module>> module_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // The reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
