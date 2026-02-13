// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTSESSIONRESPONSEBODY_HPP_
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
  class ListDataAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListDataAgentSessionResponseBody() = default ;
    ListDataAgentSessionResponseBody(const ListDataAgentSessionResponseBody &) = default ;
    ListDataAgentSessionResponseBody(ListDataAgentSessionResponseBody &&) = default ;
    ListDataAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentSessionResponseBody() = default ;
    ListDataAgentSessionResponseBody& operator=(const ListDataAgentSessionResponseBody &) = default ;
    ListDataAgentSessionResponseBody& operator=(ListDataAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
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
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(UserOssBucket, userOssBucket_);
        };
        friend void from_json(const Darabonba::Json& j, SessionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
          DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(UserOssBucket, userOssBucket_);
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
        && this->customAgentStage_ == nullptr && this->enableSearch_ == nullptr && this->language_ == nullptr && this->mode_ == nullptr && this->userOssBucket_ == nullptr; };
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


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SessionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // userOssBucket Field Functions 
        bool hasUserOssBucket() const { return this->userOssBucket_ != nullptr;};
        void deleteUserOssBucket() { this->userOssBucket_ = nullptr;};
        inline string getUserOssBucket() const { DARABONBA_PTR_GET_DEFAULT(userOssBucket_, "") };
        inline SessionConfig& setUserOssBucket(string userOssBucket) { DARABONBA_PTR_SET_VALUE(userOssBucket_, userOssBucket) };


      protected:
        shared_ptr<string> customAgentId_ {};
        shared_ptr<string> customAgentStage_ {};
        shared_ptr<bool> enableSearch_ {};
        shared_ptr<string> language_ {};
        shared_ptr<string> mode_ {};
        shared_ptr<string> userOssBucket_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentStatus_ == nullptr && this->createTime_ == nullptr && this->favoriteInWorkspace_ == nullptr && this->file_ == nullptr && this->saved_ == nullptr
        && this->sessionConfig_ == nullptr && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr && this->title_ == nullptr && this->userId_ == nullptr; };
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


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // favoriteInWorkspace Field Functions 
      bool hasFavoriteInWorkspace() const { return this->favoriteInWorkspace_ != nullptr;};
      void deleteFavoriteInWorkspace() { this->favoriteInWorkspace_ = nullptr;};
      inline bool getFavoriteInWorkspace() const { DARABONBA_PTR_GET_DEFAULT(favoriteInWorkspace_, false) };
      inline Data& setFavoriteInWorkspace(bool favoriteInWorkspace) { DARABONBA_PTR_SET_VALUE(favoriteInWorkspace_, favoriteInWorkspace) };


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
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<bool> favoriteInWorkspace_ {};
      shared_ptr<string> file_ {};
      shared_ptr<bool> saved_ {};
      shared_ptr<Data::SessionConfig> sessionConfig_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> sessionStatus_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr && this->totalPages_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataAgentSessionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataAgentSessionResponseBody::Data>) };
    inline vector<ListDataAgentSessionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataAgentSessionResponseBody::Data>) };
    inline ListDataAgentSessionResponseBody& setData(const vector<ListDataAgentSessionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataAgentSessionResponseBody& setData(vector<ListDataAgentSessionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataAgentSessionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataAgentSessionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAgentSessionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAgentSessionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataAgentSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDataAgentSessionResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListDataAgentSessionResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    shared_ptr<vector<ListDataAgentSessionResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
