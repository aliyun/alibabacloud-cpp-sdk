// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTAINERSCANTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateContainerScanTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContainerScanTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanCreate, canCreate_);
      DARABONBA_PTR_TO_JSON(CollectTime, collectTime_);
      DARABONBA_PTR_TO_JSON(ExecTime, execTime_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContainerScanTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanCreate, canCreate_);
      DARABONBA_PTR_FROM_JSON(CollectTime, collectTime_);
      DARABONBA_PTR_FROM_JSON(ExecTime, execTime_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CreateContainerScanTaskResponseBodyData() = default ;
    CreateContainerScanTaskResponseBodyData(const CreateContainerScanTaskResponseBodyData &) = default ;
    CreateContainerScanTaskResponseBodyData(CreateContainerScanTaskResponseBodyData &&) = default ;
    CreateContainerScanTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContainerScanTaskResponseBodyData() = default ;
    CreateContainerScanTaskResponseBodyData& operator=(const CreateContainerScanTaskResponseBodyData &) = default ;
    CreateContainerScanTaskResponseBodyData& operator=(CreateContainerScanTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canCreate_ == nullptr
        && return this->collectTime_ == nullptr && return this->execTime_ == nullptr && return this->finishCount_ == nullptr && return this->progress_ == nullptr && return this->result_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->totalCount_ == nullptr; };
    // canCreate Field Functions 
    bool hasCanCreate() const { return this->canCreate_ != nullptr;};
    void deleteCanCreate() { this->canCreate_ = nullptr;};
    inline bool canCreate() const { DARABONBA_PTR_GET_DEFAULT(canCreate_, false) };
    inline CreateContainerScanTaskResponseBodyData& setCanCreate(bool canCreate) { DARABONBA_PTR_SET_VALUE(canCreate_, canCreate) };


    // collectTime Field Functions 
    bool hasCollectTime() const { return this->collectTime_ != nullptr;};
    void deleteCollectTime() { this->collectTime_ = nullptr;};
    inline int64_t collectTime() const { DARABONBA_PTR_GET_DEFAULT(collectTime_, 0L) };
    inline CreateContainerScanTaskResponseBodyData& setCollectTime(int64_t collectTime) { DARABONBA_PTR_SET_VALUE(collectTime_, collectTime) };


    // execTime Field Functions 
    bool hasExecTime() const { return this->execTime_ != nullptr;};
    void deleteExecTime() { this->execTime_ = nullptr;};
    inline int64_t execTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, 0L) };
    inline CreateContainerScanTaskResponseBodyData& setExecTime(int64_t execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline CreateContainerScanTaskResponseBodyData& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline CreateContainerScanTaskResponseBodyData& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline CreateContainerScanTaskResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateContainerScanTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateContainerScanTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CreateContainerScanTaskResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether you can create more scan tasks.
    std::shared_ptr<bool> canCreate_ = nullptr;
    // The collection time.
    std::shared_ptr<int64_t> collectTime_ = nullptr;
    // The execution time of the task.
    std::shared_ptr<int64_t> execTime_ = nullptr;
    // The number of scan tasks that are complete.
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    // The progress of the task.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The execution result of the task.
    std::shared_ptr<string> result_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The total number of scan tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
