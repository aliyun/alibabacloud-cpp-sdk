// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETJOB_HPP_
#define ALIBABACLOUD_MODELS_DATASETJOB_HPP_
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
  class DatasetJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetJob& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedFileCount, completedFileCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetJobId, datasetJobId_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FailedFileCount, failedFileCount_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedFileCount, completedFileCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetJobId, datasetJobId_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FailedFileCount, failedFileCount_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DatasetJob() = default ;
    DatasetJob(const DatasetJob &) = default ;
    DatasetJob(DatasetJob &&) = default ;
    DatasetJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetJob() = default ;
    DatasetJob& operator=(const DatasetJob &) = default ;
    DatasetJob& operator=(DatasetJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completedFileCount_ != nullptr
        && this->createTime_ != nullptr && this->datasetJobId_ != nullptr && this->datasetVersion_ != nullptr && this->description_ != nullptr && this->failedFileCount_ != nullptr
        && this->finishTime_ != nullptr && this->jobAction_ != nullptr && this->jobMode_ != nullptr && this->jobSpec_ != nullptr && this->logs_ != nullptr
        && this->status_ != nullptr && this->totalFileCount_ != nullptr && this->workspaceId_ != nullptr; };
    // completedFileCount Field Functions 
    bool hasCompletedFileCount() const { return this->completedFileCount_ != nullptr;};
    void deleteCompletedFileCount() { this->completedFileCount_ = nullptr;};
    inline int64_t completedFileCount() const { DARABONBA_PTR_GET_DEFAULT(completedFileCount_, 0L) };
    inline DatasetJob& setCompletedFileCount(int64_t completedFileCount) { DARABONBA_PTR_SET_VALUE(completedFileCount_, completedFileCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DatasetJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetJobId Field Functions 
    bool hasDatasetJobId() const { return this->datasetJobId_ != nullptr;};
    void deleteDatasetJobId() { this->datasetJobId_ = nullptr;};
    inline string datasetJobId() const { DARABONBA_PTR_GET_DEFAULT(datasetJobId_, "") };
    inline DatasetJob& setDatasetJobId(string datasetJobId) { DARABONBA_PTR_SET_VALUE(datasetJobId_, datasetJobId) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline DatasetJob& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DatasetJob& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failedFileCount Field Functions 
    bool hasFailedFileCount() const { return this->failedFileCount_ != nullptr;};
    void deleteFailedFileCount() { this->failedFileCount_ = nullptr;};
    inline int64_t failedFileCount() const { DARABONBA_PTR_GET_DEFAULT(failedFileCount_, 0L) };
    inline DatasetJob& setFailedFileCount(int64_t failedFileCount) { DARABONBA_PTR_SET_VALUE(failedFileCount_, failedFileCount) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DatasetJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline DatasetJob& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // jobMode Field Functions 
    bool hasJobMode() const { return this->jobMode_ != nullptr;};
    void deleteJobMode() { this->jobMode_ = nullptr;};
    inline string jobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
    inline DatasetJob& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline string jobSpec() const { DARABONBA_PTR_GET_DEFAULT(jobSpec_, "") };
    inline DatasetJob& setJobSpec(string jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline DatasetJob& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DatasetJob& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DatasetJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline int64_t totalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0L) };
    inline DatasetJob& setTotalFileCount(int64_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DatasetJob& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> completedFileCount_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> datasetJobId_ = nullptr;
    std::shared_ptr<string> datasetVersion_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> failedFileCount_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> jobAction_ = nullptr;
    std::shared_ptr<string> jobMode_ = nullptr;
    std::shared_ptr<string> jobSpec_ = nullptr;
    std::shared_ptr<vector<string>> logs_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalFileCount_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
