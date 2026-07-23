// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTTASKSRESPONSEBODY_HPP_
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
  class ListDataAgentAccuracyTestTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentAccuracyTestTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentAccuracyTestTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListDataAgentAccuracyTestTasksResponseBody() = default ;
    ListDataAgentAccuracyTestTasksResponseBody(const ListDataAgentAccuracyTestTasksResponseBody &) = default ;
    ListDataAgentAccuracyTestTasksResponseBody(ListDataAgentAccuracyTestTasksResponseBody &&) = default ;
    ListDataAgentAccuracyTestTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentAccuracyTestTasksResponseBody() = default ;
    ListDataAgentAccuracyTestTasksResponseBody& operator=(const ListDataAgentAccuracyTestTasksResponseBody &) = default ;
    ListDataAgentAccuracyTestTasksResponseBody& operator=(ListDataAgentAccuracyTestTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccuracyTestInsId, accuracyTestInsId_);
        DARABONBA_PTR_TO_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
        DARABONBA_PTR_TO_JSON(FinishedTaskNumber, finishedTaskNumber_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(MaxConcurrent, maxConcurrent_);
        DARABONBA_PTR_TO_JSON(NeedDelete, needDelete_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalTaskNumber, totalTaskNumber_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccuracyTestInsId, accuracyTestInsId_);
        DARABONBA_PTR_FROM_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
        DARABONBA_PTR_FROM_JSON(FinishedTaskNumber, finishedTaskNumber_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrent, maxConcurrent_);
        DARABONBA_PTR_FROM_JSON(NeedDelete, needDelete_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalTaskNumber, totalTaskNumber_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->accuracyTestInsId_ == nullptr
        && this->accuracyTestTaskId_ == nullptr && this->finishedTaskNumber_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->maxConcurrent_ == nullptr
        && this->needDelete_ == nullptr && this->status_ == nullptr && this->totalTaskNumber_ == nullptr && this->workspaceId_ == nullptr; };
      // accuracyTestInsId Field Functions 
      bool hasAccuracyTestInsId() const { return this->accuracyTestInsId_ != nullptr;};
      void deleteAccuracyTestInsId() { this->accuracyTestInsId_ = nullptr;};
      inline string getAccuracyTestInsId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestInsId_, "") };
      inline Data& setAccuracyTestInsId(string accuracyTestInsId) { DARABONBA_PTR_SET_VALUE(accuracyTestInsId_, accuracyTestInsId) };


      // accuracyTestTaskId Field Functions 
      bool hasAccuracyTestTaskId() const { return this->accuracyTestTaskId_ != nullptr;};
      void deleteAccuracyTestTaskId() { this->accuracyTestTaskId_ = nullptr;};
      inline string getAccuracyTestTaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestTaskId_, "") };
      inline Data& setAccuracyTestTaskId(string accuracyTestTaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestTaskId_, accuracyTestTaskId) };


      // finishedTaskNumber Field Functions 
      bool hasFinishedTaskNumber() const { return this->finishedTaskNumber_ != nullptr;};
      void deleteFinishedTaskNumber() { this->finishedTaskNumber_ = nullptr;};
      inline int32_t getFinishedTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(finishedTaskNumber_, 0) };
      inline Data& setFinishedTaskNumber(int32_t finishedTaskNumber) { DARABONBA_PTR_SET_VALUE(finishedTaskNumber_, finishedTaskNumber) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // maxConcurrent Field Functions 
      bool hasMaxConcurrent() const { return this->maxConcurrent_ != nullptr;};
      void deleteMaxConcurrent() { this->maxConcurrent_ = nullptr;};
      inline int32_t getMaxConcurrent() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrent_, 0) };
      inline Data& setMaxConcurrent(int32_t maxConcurrent) { DARABONBA_PTR_SET_VALUE(maxConcurrent_, maxConcurrent) };


      // needDelete Field Functions 
      bool hasNeedDelete() const { return this->needDelete_ != nullptr;};
      void deleteNeedDelete() { this->needDelete_ = nullptr;};
      inline bool getNeedDelete() const { DARABONBA_PTR_GET_DEFAULT(needDelete_, false) };
      inline Data& setNeedDelete(bool needDelete) { DARABONBA_PTR_SET_VALUE(needDelete_, needDelete) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalTaskNumber Field Functions 
      bool hasTotalTaskNumber() const { return this->totalTaskNumber_ != nullptr;};
      void deleteTotalTaskNumber() { this->totalTaskNumber_ = nullptr;};
      inline int32_t getTotalTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(totalTaskNumber_, 0) };
      inline Data& setTotalTaskNumber(int32_t totalTaskNumber) { DARABONBA_PTR_SET_VALUE(totalTaskNumber_, totalTaskNumber) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The accuracy test instance ID to which the task belongs.
      shared_ptr<string> accuracyTestInsId_ {};
      // The accuracy test task ID.
      shared_ptr<string> accuracyTestTaskId_ {};
      // The number of completed test subtasks.
      shared_ptr<int32_t> finishedTaskNumber_ {};
      // The time when the document was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the document was last modified.
      shared_ptr<string> gmtModified_ {};
      // The maximum number of concurrent sessions during the test.
      shared_ptr<int32_t> maxConcurrent_ {};
      // Specifies whether sessions are displayed after analysis. This feature is not supported.
      shared_ptr<bool> needDelete_ {};
      // The status of the custom agent.
      shared_ptr<int32_t> status_ {};
      // The total number of subtasks in the accuracy test task.
      shared_ptr<int32_t> totalTaskNumber_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataAgentAccuracyTestTasksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataAgentAccuracyTestTasksResponseBody::Data>) };
    inline vector<ListDataAgentAccuracyTestTasksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataAgentAccuracyTestTasksResponseBody::Data>) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setData(const vector<ListDataAgentAccuracyTestTasksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setData(vector<ListDataAgentAccuracyTestTasksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataAgentAccuracyTestTasksResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataAgentAccuracyTestTasksResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataAgentAccuracyTestTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataAgentAccuracyTestTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDataAgentAccuracyTestTasksResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response struct.
    shared_ptr<vector<ListDataAgentAccuracyTestTasksResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
