// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetStorageAnalysisResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageAnalysisResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AnalyzedDbCount, analyzedDbCount_);
      DARABONBA_PTR_TO_JSON(StorageAnalysisResult, storageAnalysisResult_);
      DARABONBA_PTR_TO_JSON(TaskFinish, taskFinish_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(TaskSuccess, taskSuccess_);
      DARABONBA_PTR_TO_JSON(TotalDbCount, totalDbCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageAnalysisResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalyzedDbCount, analyzedDbCount_);
      DARABONBA_PTR_FROM_JSON(StorageAnalysisResult, storageAnalysisResult_);
      DARABONBA_PTR_FROM_JSON(TaskFinish, taskFinish_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(TaskSuccess, taskSuccess_);
      DARABONBA_PTR_FROM_JSON(TotalDbCount, totalDbCount_);
    };
    GetStorageAnalysisResultResponseBodyData() = default ;
    GetStorageAnalysisResultResponseBodyData(const GetStorageAnalysisResultResponseBodyData &) = default ;
    GetStorageAnalysisResultResponseBodyData(GetStorageAnalysisResultResponseBodyData &&) = default ;
    GetStorageAnalysisResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageAnalysisResultResponseBodyData() = default ;
    GetStorageAnalysisResultResponseBodyData& operator=(const GetStorageAnalysisResultResponseBodyData &) = default ;
    GetStorageAnalysisResultResponseBodyData& operator=(GetStorageAnalysisResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzedDbCount_ == nullptr
        && return this->storageAnalysisResult_ == nullptr && return this->taskFinish_ == nullptr && return this->taskId_ == nullptr && return this->taskProgress_ == nullptr && return this->taskState_ == nullptr
        && return this->taskSuccess_ == nullptr && return this->totalDbCount_ == nullptr; };
    // analyzedDbCount Field Functions 
    bool hasAnalyzedDbCount() const { return this->analyzedDbCount_ != nullptr;};
    void deleteAnalyzedDbCount() { this->analyzedDbCount_ = nullptr;};
    inline int64_t analyzedDbCount() const { DARABONBA_PTR_GET_DEFAULT(analyzedDbCount_, 0L) };
    inline GetStorageAnalysisResultResponseBodyData& setAnalyzedDbCount(int64_t analyzedDbCount) { DARABONBA_PTR_SET_VALUE(analyzedDbCount_, analyzedDbCount) };


    // storageAnalysisResult Field Functions 
    bool hasStorageAnalysisResult() const { return this->storageAnalysisResult_ != nullptr;};
    void deleteStorageAnalysisResult() { this->storageAnalysisResult_ = nullptr;};
    inline const Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult & storageAnalysisResult() const { DARABONBA_PTR_GET_CONST(storageAnalysisResult_, Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult) };
    inline Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult storageAnalysisResult() { DARABONBA_PTR_GET(storageAnalysisResult_, Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult) };
    inline GetStorageAnalysisResultResponseBodyData& setStorageAnalysisResult(const Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult & storageAnalysisResult) { DARABONBA_PTR_SET_VALUE(storageAnalysisResult_, storageAnalysisResult) };
    inline GetStorageAnalysisResultResponseBodyData& setStorageAnalysisResult(Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult && storageAnalysisResult) { DARABONBA_PTR_SET_RVALUE(storageAnalysisResult_, storageAnalysisResult) };


    // taskFinish Field Functions 
    bool hasTaskFinish() const { return this->taskFinish_ != nullptr;};
    void deleteTaskFinish() { this->taskFinish_ = nullptr;};
    inline bool taskFinish() const { DARABONBA_PTR_GET_DEFAULT(taskFinish_, false) };
    inline GetStorageAnalysisResultResponseBodyData& setTaskFinish(bool taskFinish) { DARABONBA_PTR_SET_VALUE(taskFinish_, taskFinish) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetStorageAnalysisResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskProgress Field Functions 
    bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
    void deleteTaskProgress() { this->taskProgress_ = nullptr;};
    inline int64_t taskProgress() const { DARABONBA_PTR_GET_DEFAULT(taskProgress_, 0L) };
    inline GetStorageAnalysisResultResponseBodyData& setTaskProgress(int64_t taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline GetStorageAnalysisResultResponseBodyData& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // taskSuccess Field Functions 
    bool hasTaskSuccess() const { return this->taskSuccess_ != nullptr;};
    void deleteTaskSuccess() { this->taskSuccess_ = nullptr;};
    inline bool taskSuccess() const { DARABONBA_PTR_GET_DEFAULT(taskSuccess_, false) };
    inline GetStorageAnalysisResultResponseBodyData& setTaskSuccess(bool taskSuccess) { DARABONBA_PTR_SET_VALUE(taskSuccess_, taskSuccess) };


    // totalDbCount Field Functions 
    bool hasTotalDbCount() const { return this->totalDbCount_ != nullptr;};
    void deleteTotalDbCount() { this->totalDbCount_ = nullptr;};
    inline int64_t totalDbCount() const { DARABONBA_PTR_GET_DEFAULT(totalDbCount_, 0L) };
    inline GetStorageAnalysisResultResponseBodyData& setTotalDbCount(int64_t totalDbCount) { DARABONBA_PTR_SET_VALUE(totalDbCount_, totalDbCount) };


  protected:
    // The number of databases that have been analyzed.
    std::shared_ptr<int64_t> analyzedDbCount_ = nullptr;
    // The details of storage analysis.
    std::shared_ptr<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult> storageAnalysisResult_ = nullptr;
    // Indicates whether the task is complete.
    std::shared_ptr<bool> taskFinish_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task progress.
    // 
    // >  Valid values are integers that range from 0 to 100.
    std::shared_ptr<int64_t> taskProgress_ = nullptr;
    // The status of the storage analysis task. Valid values:
    // 
    // *   **INIT**: The task is being initialized.
    // *   **PENDING**: The task is being queued for execution.
    // *   **RECEIVED**: The task is received for execution.
    // *   **RUNNING**: The task is being executed.
    // *   **RETRY**: The task is being retried.
    // *   **SUCCESS**: The task succeeds.
    // *   **FAILURE**: The task fails.
    std::shared_ptr<string> taskState_ = nullptr;
    // Indicates whether the task is successful.
    std::shared_ptr<bool> taskSuccess_ = nullptr;
    // The number of databases that need to be analyzed in the storage analysis task.
    std::shared_ptr<int64_t> totalDbCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
