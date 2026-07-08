// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCONVERSATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCONVERSATIONSRESPONSEBODY_HPP_
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
  class ListAppConversationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppConversationsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAppConversationsResponseBody& obj) { 
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
    ListAppConversationsResponseBody() = default ;
    ListAppConversationsResponseBody(const ListAppConversationsResponseBody &) = default ;
    ListAppConversationsResponseBody(ListAppConversationsResponseBody &&) = default ;
    ListAppConversationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppConversationsResponseBody() = default ;
    ListAppConversationsResponseBody& operator=(const ListAppConversationsResponseBody &) = default ;
    ListAppConversationsResponseBody& operator=(ListAppConversationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
          DARABONBA_PTR_TO_JSON(BotId, botId_);
          DARABONBA_PTR_TO_JSON(ChatNum, chatNum_);
          DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
          DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
          DARABONBA_PTR_TO_JSON(MetaData, metaData_);
          DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
          DARABONBA_PTR_TO_JSON(SiteId, siteId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
          DARABONBA_PTR_FROM_JSON(BotId, botId_);
          DARABONBA_PTR_FROM_JSON(ChatNum, chatNum_);
          DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
          DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
          DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
          DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
          DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && this->botId_ == nullptr && this->chatNum_ == nullptr && this->conversationId_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->metaData_ == nullptr && this->sectionId_ == nullptr && this->siteId_ == nullptr && this->title_ == nullptr && this->userId_ == nullptr; };
        // aliyunPk Field Functions 
        bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
        void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
        inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
        inline Data& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


        // botId Field Functions 
        bool hasBotId() const { return this->botId_ != nullptr;};
        void deleteBotId() { this->botId_ = nullptr;};
        inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
        inline Data& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


        // chatNum Field Functions 
        bool hasChatNum() const { return this->chatNum_ != nullptr;};
        void deleteChatNum() { this->chatNum_ = nullptr;};
        inline int32_t getChatNum() const { DARABONBA_PTR_GET_DEFAULT(chatNum_, 0) };
        inline Data& setChatNum(int32_t chatNum) { DARABONBA_PTR_SET_VALUE(chatNum_, chatNum) };


        // conversationId Field Functions 
        bool hasConversationId() const { return this->conversationId_ != nullptr;};
        void deleteConversationId() { this->conversationId_ = nullptr;};
        inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
        inline Data& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


        // gmtCreateTime Field Functions 
        bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
        void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
        inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
        inline Data& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


        // gmtModifiedTime Field Functions 
        bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
        void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
        inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
        inline Data& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


        // metaData Field Functions 
        bool hasMetaData() const { return this->metaData_ != nullptr;};
        void deleteMetaData() { this->metaData_ = nullptr;};
        inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
        inline Data& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


        // sectionId Field Functions 
        bool hasSectionId() const { return this->sectionId_ != nullptr;};
        void deleteSectionId() { this->sectionId_ = nullptr;};
        inline string getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, "") };
        inline Data& setSectionId(string sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


        // siteId Field Functions 
        bool hasSiteId() const { return this->siteId_ != nullptr;};
        void deleteSiteId() { this->siteId_ = nullptr;};
        inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
        inline Data& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // aliyun_pk
        shared_ptr<string> aliyunPk_ {};
        // The bot ID.
        shared_ptr<string> botId_ {};
        // The number of chat records.
        shared_ptr<int32_t> chatNum_ {};
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
        // The extended information in JSON string format.
        shared_ptr<string> metaData_ {};
        // The section ID of the check item.
        shared_ptr<string> sectionId_ {};
        // The site ID. You can obtain the site ID by calling the [ListSites](~~ListSites~~) operation.
        shared_ptr<string> siteId_ {};
        // The current viewpoint, which is equivalent to the news title.
        shared_ptr<string> title_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Module::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Module::Data>) };
      inline vector<Module::Data> getData() { DARABONBA_PTR_GET(data_, vector<Module::Data>) };
      inline Module& setData(const vector<Module::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Module& setData(vector<Module::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Module& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Module& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The request result.
      shared_ptr<vector<Module::Data>> data_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNum_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The resource count that matches the conditional filter criteria.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppConversationsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppConversationsResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppConversationsResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppConversationsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppConversationsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppConversationsResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppConversationsResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppConversationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListAppConversationsResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListAppConversationsResponseBody::Module) };
    inline ListAppConversationsResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListAppConversationsResponseBody::Module) };
    inline ListAppConversationsResponseBody& setModule(const ListAppConversationsResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppConversationsResponseBody& setModule(ListAppConversationsResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppConversationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppConversationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppConversationsResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppConversationsResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppConversationsResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The detailed reason why access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name. The application with this name is queried.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The maximum number of entries to return per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response data.
    shared_ptr<ListAppConversationsResponseBody::Module> module_ {};
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
