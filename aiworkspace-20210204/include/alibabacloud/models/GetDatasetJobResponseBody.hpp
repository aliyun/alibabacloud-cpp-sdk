// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDatasetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedFileCount, completedFileCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FailedFileCount, failedFileCount_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedFileCount, completedFileCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FailedFileCount, failedFileCount_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
    };
    GetDatasetJobResponseBody() = default ;
    GetDatasetJobResponseBody(const GetDatasetJobResponseBody &) = default ;
    GetDatasetJobResponseBody(GetDatasetJobResponseBody &&) = default ;
    GetDatasetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetJobResponseBody() = default ;
    GetDatasetJobResponseBody& operator=(const GetDatasetJobResponseBody &) = default ;
    GetDatasetJobResponseBody& operator=(GetDatasetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completedFileCount_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->failedFileCount_ != nullptr && this->finishTime_ != nullptr && this->jobAction_ != nullptr
        && this->jobMode_ != nullptr && this->jobSpec_ != nullptr && this->logs_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr
        && this->totalFileCount_ != nullptr; };
    // completedFileCount Field Functions 
    bool hasCompletedFileCount() const { return this->completedFileCount_ != nullptr;};
    void deleteCompletedFileCount() { this->completedFileCount_ = nullptr;};
    inline int64_t completedFileCount() const { DARABONBA_PTR_GET_DEFAULT(completedFileCount_, 0L) };
    inline GetDatasetJobResponseBody& setCompletedFileCount(int64_t completedFileCount) { DARABONBA_PTR_SET_VALUE(completedFileCount_, completedFileCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDatasetJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDatasetJobResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failedFileCount Field Functions 
    bool hasFailedFileCount() const { return this->failedFileCount_ != nullptr;};
    void deleteFailedFileCount() { this->failedFileCount_ = nullptr;};
    inline int64_t failedFileCount() const { DARABONBA_PTR_GET_DEFAULT(failedFileCount_, 0L) };
    inline GetDatasetJobResponseBody& setFailedFileCount(int64_t failedFileCount) { DARABONBA_PTR_SET_VALUE(failedFileCount_, failedFileCount) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetDatasetJobResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline GetDatasetJobResponseBody& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // jobMode Field Functions 
    bool hasJobMode() const { return this->jobMode_ != nullptr;};
    void deleteJobMode() { this->jobMode_ = nullptr;};
    inline string jobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
    inline GetDatasetJobResponseBody& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline string jobSpec() const { DARABONBA_PTR_GET_DEFAULT(jobSpec_, "") };
    inline GetDatasetJobResponseBody& setJobSpec(string jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline GetDatasetJobResponseBody& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetDatasetJobResponseBody& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDatasetJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline int64_t totalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0L) };
    inline GetDatasetJobResponseBody& setTotalFileCount(int64_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


  protected:
    // The total number of completed files.
    std::shared_ptr<int64_t> completedFileCount_ = nullptr;
    // The time when the job is started.
    std::shared_ptr<string> createTime_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The total number of failed files.
    std::shared_ptr<int64_t> failedFileCount_ = nullptr;
    // The time when the job ends.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The action that is performed on the job.
    // 
    // Valid values:
    // 
    // *   SemanticIndex: semantic indexing
    // *   IntelligentTag: smart labeling
    // *   FileMetaExport: metadata export
    std::shared_ptr<string> jobAction_ = nullptr;
    // The job mode.
    // 
    // Valid value:
    // 
    // *   Full: full data mode.
    std::shared_ptr<string> jobMode_ = nullptr;
    // The job details.
    std::shared_ptr<string> jobSpec_ = nullptr;
    // The job logs.
    std::shared_ptr<vector<string>> logs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The job state.
    // 
    // Valid values:
    // 
    // *   Succeeded
    // *   Failed
    // *   Running
    // *   Pending
    // *   PartialFailed
    // *   Deleting
    // *   ManuallyStop
    std::shared_ptr<string> status_ = nullptr;
    // The total number of job files.
    std::shared_ptr<int64_t> totalFileCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
