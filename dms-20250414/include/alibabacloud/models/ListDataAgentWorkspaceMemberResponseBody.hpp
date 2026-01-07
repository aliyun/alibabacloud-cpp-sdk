// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTWORKSPACEMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTWORKSPACEMEMBERRESPONSEBODY_HPP_
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
  class ListDataAgentWorkspaceMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentWorkspaceMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentWorkspaceMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataAgentWorkspaceMemberResponseBody() = default ;
    ListDataAgentWorkspaceMemberResponseBody(const ListDataAgentWorkspaceMemberResponseBody &) = default ;
    ListDataAgentWorkspaceMemberResponseBody(ListDataAgentWorkspaceMemberResponseBody &&) = default ;
    ListDataAgentWorkspaceMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentWorkspaceMemberResponseBody() = default ;
    ListDataAgentWorkspaceMemberResponseBody& operator=(const ListDataAgentWorkspaceMemberResponseBody &) = default ;
    ListDataAgentWorkspaceMemberResponseBody& operator=(ListDataAgentWorkspaceMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
          DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
          DARABONBA_PTR_TO_JSON(MemberId, memberId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(RunningTaskNumber, runningTaskNumber_);
          DARABONBA_PTR_TO_JSON(TotalTaskNumber, totalTaskNumber_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
          DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(RunningTaskNumber, runningTaskNumber_);
          DARABONBA_PTR_FROM_JSON(TotalTaskNumber, totalTaskNumber_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
        virtual bool empty() const override { return this->joinTime_ == nullptr
        && this->memberId_ == nullptr && this->roleName_ == nullptr && this->runningTaskNumber_ == nullptr && this->totalTaskNumber_ == nullptr && this->userName_ == nullptr; };
        // joinTime Field Functions 
        bool hasJoinTime() const { return this->joinTime_ != nullptr;};
        void deleteJoinTime() { this->joinTime_ = nullptr;};
        inline string getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, "") };
        inline Content& setJoinTime(string joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


        // memberId Field Functions 
        bool hasMemberId() const { return this->memberId_ != nullptr;};
        void deleteMemberId() { this->memberId_ = nullptr;};
        inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
        inline Content& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline Content& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // runningTaskNumber Field Functions 
        bool hasRunningTaskNumber() const { return this->runningTaskNumber_ != nullptr;};
        void deleteRunningTaskNumber() { this->runningTaskNumber_ = nullptr;};
        inline int64_t getRunningTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(runningTaskNumber_, 0L) };
        inline Content& setRunningTaskNumber(int64_t runningTaskNumber) { DARABONBA_PTR_SET_VALUE(runningTaskNumber_, runningTaskNumber) };


        // totalTaskNumber Field Functions 
        bool hasTotalTaskNumber() const { return this->totalTaskNumber_ != nullptr;};
        void deleteTotalTaskNumber() { this->totalTaskNumber_ = nullptr;};
        inline int64_t getTotalTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(totalTaskNumber_, 0L) };
        inline Content& setTotalTaskNumber(int64_t totalTaskNumber) { DARABONBA_PTR_SET_VALUE(totalTaskNumber_, totalTaskNumber) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline Content& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> joinTime_ {};
        shared_ptr<string> memberId_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<int64_t> runningTaskNumber_ {};
        shared_ptr<int64_t> totalTaskNumber_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalElements_ == nullptr
        && this->totalPages_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
      shared_ptr<vector<Data::Content>> content_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalElements_ {};
      shared_ptr<int64_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataAgentWorkspaceMemberResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataAgentWorkspaceMemberResponseBody::Data) };
    inline ListDataAgentWorkspaceMemberResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataAgentWorkspaceMemberResponseBody::Data) };
    inline ListDataAgentWorkspaceMemberResponseBody& setData(const ListDataAgentWorkspaceMemberResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataAgentWorkspaceMemberResponseBody& setData(ListDataAgentWorkspaceMemberResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataAgentWorkspaceMemberResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataAgentWorkspaceMemberResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataAgentWorkspaceMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataAgentWorkspaceMemberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListDataAgentWorkspaceMemberResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
