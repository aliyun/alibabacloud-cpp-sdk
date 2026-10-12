// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTMONITORSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTMONITORSESSIONSRESPONSEBODY_HPP_
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
  class ListCustomAgentMonitorSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentMonitorSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentMonitorSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCustomAgentMonitorSessionsResponseBody() = default ;
    ListCustomAgentMonitorSessionsResponseBody(const ListCustomAgentMonitorSessionsResponseBody &) = default ;
    ListCustomAgentMonitorSessionsResponseBody(ListCustomAgentMonitorSessionsResponseBody &&) = default ;
    ListCustomAgentMonitorSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentMonitorSessionsResponseBody() = default ;
    ListCustomAgentMonitorSessionsResponseBody& operator=(const ListCustomAgentMonitorSessionsResponseBody &) = default ;
    ListCustomAgentMonitorSessionsResponseBody& operator=(ListCustomAgentMonitorSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(CreatorUserName, creatorUserName_);
          DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_TO_JSON(DislikeCount, dislikeCount_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(LikeCount, likeCount_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TurnCount, turnCount_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(CreatorUserName, creatorUserName_);
          DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_FROM_JSON(DislikeCount, dislikeCount_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(LikeCount, likeCount_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TurnCount, turnCount_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->creatorUserName_ == nullptr && this->customAgentId_ == nullptr && this->dislikeCount_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->likeCount_ == nullptr && this->sessionId_ == nullptr && this->state_ == nullptr && this->title_ == nullptr && this->turnCount_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline Content& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // creatorUserName Field Functions 
        bool hasCreatorUserName() const { return this->creatorUserName_ != nullptr;};
        void deleteCreatorUserName() { this->creatorUserName_ = nullptr;};
        inline string getCreatorUserName() const { DARABONBA_PTR_GET_DEFAULT(creatorUserName_, "") };
        inline Content& setCreatorUserName(string creatorUserName) { DARABONBA_PTR_SET_VALUE(creatorUserName_, creatorUserName) };


        // customAgentId Field Functions 
        bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
        void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
        inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
        inline Content& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


        // dislikeCount Field Functions 
        bool hasDislikeCount() const { return this->dislikeCount_ != nullptr;};
        void deleteDislikeCount() { this->dislikeCount_ = nullptr;};
        inline int64_t getDislikeCount() const { DARABONBA_PTR_GET_DEFAULT(dislikeCount_, 0L) };
        inline Content& setDislikeCount(int64_t dislikeCount) { DARABONBA_PTR_SET_VALUE(dislikeCount_, dislikeCount) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline Content& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // likeCount Field Functions 
        bool hasLikeCount() const { return this->likeCount_ != nullptr;};
        void deleteLikeCount() { this->likeCount_ = nullptr;};
        inline int64_t getLikeCount() const { DARABONBA_PTR_GET_DEFAULT(likeCount_, 0L) };
        inline Content& setLikeCount(int64_t likeCount) { DARABONBA_PTR_SET_VALUE(likeCount_, likeCount) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Content& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Content& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Content& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // turnCount Field Functions 
        bool hasTurnCount() const { return this->turnCount_ != nullptr;};
        void deleteTurnCount() { this->turnCount_ = nullptr;};
        inline int64_t getTurnCount() const { DARABONBA_PTR_GET_DEFAULT(turnCount_, 0L) };
        inline Content& setTurnCount(int64_t turnCount) { DARABONBA_PTR_SET_VALUE(turnCount_, turnCount) };


      protected:
        // The Alibaba Cloud UID of the creator.
        shared_ptr<string> aliyunUid_ {};
        // The display name of the creator.
        shared_ptr<string> creatorUserName_ {};
        // The custom agent ID.
        shared_ptr<string> customAgentId_ {};
        // The number of dislikes for the session.
        shared_ptr<int64_t> dislikeCount_ {};
        // The creation time.
        shared_ptr<string> gmtCreated_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The number of likes for the session.
        shared_ptr<int64_t> likeCount_ {};
        // The session ID.
        shared_ptr<string> sessionId_ {};
        // The session status. Valid values:
        // - init: The session is in the initial state.
        // - INITIALIZING: The session is being initialized.
        // - RUNNING: The session is running.
        // - IDLE: The session is idle.
        // - RECOVERABLE: The session is completed and can accept further questions.
        // - UNAVAILABLE: The session is completed and cannot accept further questions.
        shared_ptr<string> state_ {};
        // The session name.
        shared_ptr<string> title_ {};
        // The total number of turns in the session.
        shared_ptr<int64_t> turnCount_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalElements Field Functions 
      bool hasTotalElements() const { return this->totalElements_ != nullptr;};
      void deleteTotalElements() { this->totalElements_ = nullptr;};
      inline int64_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0L) };
      inline Data& setTotalElements(int64_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // The session details list for the current page, sorted by creation time in descending order.
      shared_ptr<vector<Data::Content>> content_ {};
      // The current page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of sessions within the filter scope.
      shared_ptr<int64_t> totalElements_ {};
      // The total number of pages.
      shared_ptr<int64_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCustomAgentMonitorSessionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCustomAgentMonitorSessionsResponseBody::Data) };
    inline ListCustomAgentMonitorSessionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCustomAgentMonitorSessionsResponseBody::Data) };
    inline ListCustomAgentMonitorSessionsResponseBody& setData(const ListCustomAgentMonitorSessionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomAgentMonitorSessionsResponseBody& setData(ListCustomAgentMonitorSessionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListCustomAgentMonitorSessionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListCustomAgentMonitorSessionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAgentMonitorSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomAgentMonitorSessionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<ListCustomAgentMonitorSessionsResponseBody::Data> data_ {};
    // The error code returned if the call fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
