// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskSQLJobList, DBTaskSQLJobList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskSQLJobList, DBTaskSQLJobList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDBTaskSQLJobResponseBody() = default ;
    ListDBTaskSQLJobResponseBody(const ListDBTaskSQLJobResponseBody &) = default ;
    ListDBTaskSQLJobResponseBody(ListDBTaskSQLJobResponseBody &&) = default ;
    ListDBTaskSQLJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobResponseBody() = default ;
    ListDBTaskSQLJobResponseBody& operator=(const ListDBTaskSQLJobResponseBody &) = default ;
    ListDBTaskSQLJobResponseBody& operator=(ListDBTaskSQLJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBTaskSQLJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBTaskSQLJobList& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
        DARABONBA_PTR_TO_JSON(DbTaskGroupId, dbTaskGroupId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(LastExecTime, lastExecTime_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Transactional, transactional_);
      };
      friend void from_json(const Darabonba::Json& j, DBTaskSQLJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
        DARABONBA_PTR_FROM_JSON(DbTaskGroupId, dbTaskGroupId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(LastExecTime, lastExecTime_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Transactional, transactional_);
      };
      DBTaskSQLJobList() = default ;
      DBTaskSQLJobList(const DBTaskSQLJobList &) = default ;
      DBTaskSQLJobList(DBTaskSQLJobList &&) = default ;
      DBTaskSQLJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBTaskSQLJobList() = default ;
      DBTaskSQLJobList& operator=(const DBTaskSQLJobList &) = default ;
      DBTaskSQLJobList& operator=(DBTaskSQLJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->dbId_ == nullptr && this->dbSearchName_ == nullptr && this->dbTaskGroupId_ == nullptr && this->jobId_ == nullptr
        && this->jobType_ == nullptr && this->lastExecTime_ == nullptr && this->logic_ == nullptr && this->status_ == nullptr && this->transactional_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline DBTaskSQLJobList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DBTaskSQLJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline DBTaskSQLJobList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbSearchName Field Functions 
      bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
      void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
      inline string getDbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
      inline DBTaskSQLJobList& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


      // dbTaskGroupId Field Functions 
      bool hasDbTaskGroupId() const { return this->dbTaskGroupId_ != nullptr;};
      void deleteDbTaskGroupId() { this->dbTaskGroupId_ = nullptr;};
      inline int64_t getDbTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(dbTaskGroupId_, 0L) };
      inline DBTaskSQLJobList& setDbTaskGroupId(int64_t dbTaskGroupId) { DARABONBA_PTR_SET_VALUE(dbTaskGroupId_, dbTaskGroupId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
      inline DBTaskSQLJobList& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline DBTaskSQLJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // lastExecTime Field Functions 
      bool hasLastExecTime() const { return this->lastExecTime_ != nullptr;};
      void deleteLastExecTime() { this->lastExecTime_ = nullptr;};
      inline string getLastExecTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecTime_, "") };
      inline DBTaskSQLJobList& setLastExecTime(string lastExecTime) { DARABONBA_PTR_SET_VALUE(lastExecTime_, lastExecTime) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline DBTaskSQLJobList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBTaskSQLJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transactional Field Functions 
      bool hasTransactional() const { return this->transactional_ != nullptr;};
      void deleteTransactional() { this->transactional_ = nullptr;};
      inline bool getTransactional() const { DARABONBA_PTR_GET_DEFAULT(transactional_, false) };
      inline DBTaskSQLJobList& setTransactional(bool transactional) { DARABONBA_PTR_SET_VALUE(transactional_, transactional) };


    protected:
      // The description of the SQL task.
      shared_ptr<string> comment_ {};
      // The time when the SQL task was created.
      shared_ptr<string> createTime_ {};
      // The ID of the database.
      shared_ptr<int64_t> dbId_ {};
      // The name that is used to search for the database.
      shared_ptr<string> dbSearchName_ {};
      // The ID of the SQL task group.
      shared_ptr<int64_t> dbTaskGroupId_ {};
      // The ID of the SQL task.
      shared_ptr<int64_t> jobId_ {};
      // The type of the SQL task.
      shared_ptr<string> jobType_ {};
      // The time when the SQL task was last executed.
      shared_ptr<string> lastExecTime_ {};
      // Indicates whether the database is a logical database. Valid values:
      // 
      // *   **true**: The database is a logical database.
      // *   **false**: The database is a logical database.
      shared_ptr<bool> logic_ {};
      // The state of the SQL task. Valid values:
      // 
      // *   **INIT**: The SQL task was initialized.
      // *   **PENDING**: The SQL task waited to be run.
      // *   **BE_SCHEDULED**: The SQL task waited to be scheduled.
      // *   **FAIL**: The SQL task failed.
      // *   **SUCCESS**: The SQL task was successful.
      // *   **PAUSE**: The SQL task was paused.
      // *   **DELETE**: The SQL task was deleted.
      // *   **RUNNING**: The SQL task was being run.
      shared_ptr<string> status_ {};
      // Indicates whether the SQL task is executed as a transaction. Valid values:
      // 
      // *   **true**: The SQL task is executed as a transaction.
      // *   **false**: The SQL task is not executed as a transaction.
      shared_ptr<bool> transactional_ {};
    };

    virtual bool empty() const override { return this->DBTaskSQLJobList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // DBTaskSQLJobList Field Functions 
    bool hasDBTaskSQLJobList() const { return this->DBTaskSQLJobList_ != nullptr;};
    void deleteDBTaskSQLJobList() { this->DBTaskSQLJobList_ = nullptr;};
    inline const vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList> & getDBTaskSQLJobList() const { DARABONBA_PTR_GET_CONST(DBTaskSQLJobList_, vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList>) };
    inline vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList> getDBTaskSQLJobList() { DARABONBA_PTR_GET(DBTaskSQLJobList_, vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList>) };
    inline ListDBTaskSQLJobResponseBody& setDBTaskSQLJobList(const vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList> & dBTaskSQLJobList) { DARABONBA_PTR_SET_VALUE(DBTaskSQLJobList_, dBTaskSQLJobList) };
    inline ListDBTaskSQLJobResponseBody& setDBTaskSQLJobList(vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList> && dBTaskSQLJobList) { DARABONBA_PTR_SET_RVALUE(DBTaskSQLJobList_, dBTaskSQLJobList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDBTaskSQLJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDBTaskSQLJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDBTaskSQLJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDBTaskSQLJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDBTaskSQLJobResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the SQL tasks.
    shared_ptr<vector<ListDBTaskSQLJobResponseBody::DBTaskSQLJobList>> DBTaskSQLJobList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of the SQL tasks.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
