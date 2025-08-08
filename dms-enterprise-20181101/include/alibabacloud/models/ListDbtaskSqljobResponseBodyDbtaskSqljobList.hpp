// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBRESPONSEBODYDBTASKSQLJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBRESPONSEBODYDBTASKSQLJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobResponseBodyDBTaskSQLJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& obj) { 
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
    ListDBTaskSQLJobResponseBodyDBTaskSQLJobList() = default ;
    ListDBTaskSQLJobResponseBodyDBTaskSQLJobList(const ListDBTaskSQLJobResponseBodyDBTaskSQLJobList &) = default ;
    ListDBTaskSQLJobResponseBodyDBTaskSQLJobList(ListDBTaskSQLJobResponseBodyDBTaskSQLJobList &&) = default ;
    ListDBTaskSQLJobResponseBodyDBTaskSQLJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobResponseBodyDBTaskSQLJobList() = default ;
    ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& operator=(const ListDBTaskSQLJobResponseBodyDBTaskSQLJobList &) = default ;
    ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& operator=(ListDBTaskSQLJobResponseBodyDBTaskSQLJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->createTime_ != nullptr && this->dbId_ != nullptr && this->dbSearchName_ != nullptr && this->dbTaskGroupId_ != nullptr && this->jobId_ != nullptr
        && this->jobType_ != nullptr && this->lastExecTime_ != nullptr && this->logic_ != nullptr && this->status_ != nullptr && this->transactional_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbSearchName Field Functions 
    bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
    void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
    inline string dbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


    // dbTaskGroupId Field Functions 
    bool hasDbTaskGroupId() const { return this->dbTaskGroupId_ != nullptr;};
    void deleteDbTaskGroupId() { this->dbTaskGroupId_ = nullptr;};
    inline int64_t dbTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(dbTaskGroupId_, 0L) };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setDbTaskGroupId(int64_t dbTaskGroupId) { DARABONBA_PTR_SET_VALUE(dbTaskGroupId_, dbTaskGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // lastExecTime Field Functions 
    bool hasLastExecTime() const { return this->lastExecTime_ != nullptr;};
    void deleteLastExecTime() { this->lastExecTime_ = nullptr;};
    inline string lastExecTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecTime_, "") };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setLastExecTime(string lastExecTime) { DARABONBA_PTR_SET_VALUE(lastExecTime_, lastExecTime) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transactional Field Functions 
    bool hasTransactional() const { return this->transactional_ != nullptr;};
    void deleteTransactional() { this->transactional_ = nullptr;};
    inline bool transactional() const { DARABONBA_PTR_GET_DEFAULT(transactional_, false) };
    inline ListDBTaskSQLJobResponseBodyDBTaskSQLJobList& setTransactional(bool transactional) { DARABONBA_PTR_SET_VALUE(transactional_, transactional) };


  protected:
    // The description of the SQL task.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the SQL task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> dbSearchName_ = nullptr;
    // The ID of the SQL task group.
    std::shared_ptr<int64_t> dbTaskGroupId_ = nullptr;
    // The ID of the SQL task.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The type of the SQL task.
    std::shared_ptr<string> jobType_ = nullptr;
    // The time when the SQL task was last executed.
    std::shared_ptr<string> lastExecTime_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the SQL task is executed as a transaction. Valid values:
    // 
    // *   **true**: The SQL task is executed as a transaction.
    // *   **false**: The SQL task is not executed as a transaction.
    std::shared_ptr<bool> transactional_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
