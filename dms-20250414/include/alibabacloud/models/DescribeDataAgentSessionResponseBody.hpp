// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDataAgentSessionResponseBody() = default ;
    DescribeDataAgentSessionResponseBody(const DescribeDataAgentSessionResponseBody &) = default ;
    DescribeDataAgentSessionResponseBody(DescribeDataAgentSessionResponseBody &&) = default ;
    DescribeDataAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentSessionResponseBody() = default ;
    DescribeDataAgentSessionResponseBody& operator=(const DescribeDataAgentSessionResponseBody &) = default ;
    DescribeDataAgentSessionResponseBody& operator=(DescribeDataAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(ChatHistoryLocations, chatHistoryLocations_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
        DARABONBA_PTR_TO_JSON(File, file_);
        DARABONBA_PTR_TO_JSON(Saved, saved_);
        DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(ChatHistoryLocations, chatHistoryLocations_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
        DARABONBA_PTR_FROM_JSON(File, file_);
        DARABONBA_PTR_FROM_JSON(Saved, saved_);
        DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
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
      class SessionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
          DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(McpServerIds, mcpServerIds_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, SessionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
          DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(McpServerIds, mcpServerIds_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
        };
        SessionConfig() = default ;
        SessionConfig(const SessionConfig &) = default ;
        SessionConfig(SessionConfig &&) = default ;
        SessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionConfig() = default ;
        SessionConfig& operator=(const SessionConfig &) = default ;
        SessionConfig& operator=(SessionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->customAgentStage_ == nullptr && this->enableSearch_ == nullptr && this->language_ == nullptr && this->mcpServerIds_ == nullptr && this->mode_ == nullptr; };
        // customAgentId Field Functions 
        bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
        void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
        inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
        inline SessionConfig& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


        // customAgentStage Field Functions 
        bool hasCustomAgentStage() const { return this->customAgentStage_ != nullptr;};
        void deleteCustomAgentStage() { this->customAgentStage_ = nullptr;};
        inline string getCustomAgentStage() const { DARABONBA_PTR_GET_DEFAULT(customAgentStage_, "") };
        inline SessionConfig& setCustomAgentStage(string customAgentStage) { DARABONBA_PTR_SET_VALUE(customAgentStage_, customAgentStage) };


        // enableSearch Field Functions 
        bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
        void deleteEnableSearch() { this->enableSearch_ = nullptr;};
        inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
        inline SessionConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline SessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // mcpServerIds Field Functions 
        bool hasMcpServerIds() const { return this->mcpServerIds_ != nullptr;};
        void deleteMcpServerIds() { this->mcpServerIds_ = nullptr;};
        inline const vector<string> & getMcpServerIds() const { DARABONBA_PTR_GET_CONST(mcpServerIds_, vector<string>) };
        inline vector<string> getMcpServerIds() { DARABONBA_PTR_GET(mcpServerIds_, vector<string>) };
        inline SessionConfig& setMcpServerIds(const vector<string> & mcpServerIds) { DARABONBA_PTR_SET_VALUE(mcpServerIds_, mcpServerIds) };
        inline SessionConfig& setMcpServerIds(vector<string> && mcpServerIds) { DARABONBA_PTR_SET_RVALUE(mcpServerIds_, mcpServerIds) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SessionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        shared_ptr<string> customAgentId_ {};
        shared_ptr<string> customAgentStage_ {};
        shared_ptr<bool> enableSearch_ {};
        shared_ptr<string> language_ {};
        shared_ptr<vector<string>> mcpServerIds_ {};
        shared_ptr<string> mode_ {};
      };

      class ChatHistoryLocations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChatHistoryLocations& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ChatHistoryLocations& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        ChatHistoryLocations() = default ;
        ChatHistoryLocations(const ChatHistoryLocations &) = default ;
        ChatHistoryLocations(ChatHistoryLocations &&) = default ;
        ChatHistoryLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChatHistoryLocations() = default ;
        ChatHistoryLocations& operator=(const ChatHistoryLocations &) = default ;
        ChatHistoryLocations& operator=(ChatHistoryLocations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->url_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ChatHistoryLocations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ChatHistoryLocations& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentStatus_ == nullptr && this->chatHistoryLocations_ == nullptr && this->createTime_ == nullptr && this->favoriteInWorkspace_ == nullptr && this->file_ == nullptr
        && this->saved_ == nullptr && this->sessionConfig_ == nullptr && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr && this->title_ == nullptr
        && this->userId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline Data& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // chatHistoryLocations Field Functions 
      bool hasChatHistoryLocations() const { return this->chatHistoryLocations_ != nullptr;};
      void deleteChatHistoryLocations() { this->chatHistoryLocations_ = nullptr;};
      inline const vector<Data::ChatHistoryLocations> & getChatHistoryLocations() const { DARABONBA_PTR_GET_CONST(chatHistoryLocations_, vector<Data::ChatHistoryLocations>) };
      inline vector<Data::ChatHistoryLocations> getChatHistoryLocations() { DARABONBA_PTR_GET(chatHistoryLocations_, vector<Data::ChatHistoryLocations>) };
      inline Data& setChatHistoryLocations(const vector<Data::ChatHistoryLocations> & chatHistoryLocations) { DARABONBA_PTR_SET_VALUE(chatHistoryLocations_, chatHistoryLocations) };
      inline Data& setChatHistoryLocations(vector<Data::ChatHistoryLocations> && chatHistoryLocations) { DARABONBA_PTR_SET_RVALUE(chatHistoryLocations_, chatHistoryLocations) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // favoriteInWorkspace Field Functions 
      bool hasFavoriteInWorkspace() const { return this->favoriteInWorkspace_ != nullptr;};
      void deleteFavoriteInWorkspace() { this->favoriteInWorkspace_ = nullptr;};
      inline string getFavoriteInWorkspace() const { DARABONBA_PTR_GET_DEFAULT(favoriteInWorkspace_, "") };
      inline Data& setFavoriteInWorkspace(string favoriteInWorkspace) { DARABONBA_PTR_SET_VALUE(favoriteInWorkspace_, favoriteInWorkspace) };


      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
      inline Data& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


      // saved Field Functions 
      bool hasSaved() const { return this->saved_ != nullptr;};
      void deleteSaved() { this->saved_ = nullptr;};
      inline bool getSaved() const { DARABONBA_PTR_GET_DEFAULT(saved_, false) };
      inline Data& setSaved(bool saved) { DARABONBA_PTR_SET_VALUE(saved_, saved) };


      // sessionConfig Field Functions 
      bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
      void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
      inline const Data::SessionConfig & getSessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, Data::SessionConfig) };
      inline Data::SessionConfig getSessionConfig() { DARABONBA_PTR_GET(sessionConfig_, Data::SessionConfig) };
      inline Data& setSessionConfig(const Data::SessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
      inline Data& setSessionConfig(Data::SessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
      inline Data& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


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
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentStatus_ {};
      shared_ptr<vector<Data::ChatHistoryLocations>> chatHistoryLocations_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> favoriteInWorkspace_ {};
      shared_ptr<string> file_ {};
      shared_ptr<bool> saved_ {};
      shared_ptr<Data::SessionConfig> sessionConfig_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> sessionStatus_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataAgentSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataAgentSessionResponseBody::Data) };
    inline DescribeDataAgentSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataAgentSessionResponseBody::Data) };
    inline DescribeDataAgentSessionResponseBody& setData(const DescribeDataAgentSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataAgentSessionResponseBody& setData(DescribeDataAgentSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDataAgentSessionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataAgentSessionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataAgentSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeDataAgentSessionResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
