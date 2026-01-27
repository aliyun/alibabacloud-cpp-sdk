// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeImportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeImportTaskResponseBody() = default ;
    DescribeImportTaskResponseBody(const DescribeImportTaskResponseBody &) = default ;
    DescribeImportTaskResponseBody(DescribeImportTaskResponseBody &&) = default ;
    DescribeImportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportTaskResponseBody() = default ;
    DescribeImportTaskResponseBody& operator=(const DescribeImportTaskResponseBody &) = default ;
    DescribeImportTaskResponseBody& operator=(DescribeImportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->dbVersion_ == nullptr && this->detail_ == nullptr && this->requestId_ == nullptr && this->sourceCategory_ == nullptr && this->sourceIp_ == nullptr
        && this->sourcePort_ == nullptr && this->status_ == nullptr && this->targetInstanceName_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->taskType_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline DescribeImportTaskResponseBody& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline DescribeImportTaskResponseBody& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeImportTaskResponseBody& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline DescribeImportTaskResponseBody& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeImportTaskResponseBody& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline string getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, "") };
    inline DescribeImportTaskResponseBody& setSourcePort(string sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImportTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string getTargetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline DescribeImportTaskResponseBody& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeImportTaskResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeImportTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeImportTaskResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> account_ {};
    shared_ptr<string> dbVersion_ {};
    shared_ptr<string> detail_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sourceCategory_ {};
    shared_ptr<string> sourceIp_ {};
    shared_ptr<string> sourcePort_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> targetInstanceName_ {};
    shared_ptr<int64_t> taskId_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
