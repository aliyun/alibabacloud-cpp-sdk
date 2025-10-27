// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageLatestScanTaskResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageLatestScanTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_TO_JSON(Create, create_);
      DARABONBA_PTR_TO_JSON(Finish, finish_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Modified, modified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageLatestScanTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Create, create_);
      DARABONBA_PTR_FROM_JSON(Finish, finish_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Modified, modified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeImageLatestScanTaskResponseBodyTask() = default ;
    DescribeImageLatestScanTaskResponseBodyTask(const DescribeImageLatestScanTaskResponseBodyTask &) = default ;
    DescribeImageLatestScanTaskResponseBodyTask(DescribeImageLatestScanTaskResponseBodyTask &&) = default ;
    DescribeImageLatestScanTaskResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageLatestScanTaskResponseBodyTask() = default ;
    DescribeImageLatestScanTaskResponseBodyTask& operator=(const DescribeImageLatestScanTaskResponseBodyTask &) = default ;
    DescribeImageLatestScanTaskResponseBodyTask& operator=(DescribeImageLatestScanTaskResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->create_ == nullptr
        && return this->finish_ == nullptr && return this->finishTime_ == nullptr && return this->id_ == nullptr && return this->modified_ == nullptr && return this->name_ == nullptr
        && return this->source_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->target_ == nullptr && return this->targetType_ == nullptr
        && return this->taskId_ == nullptr && return this->taskType_ == nullptr; };
    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline string create() const { DARABONBA_PTR_GET_DEFAULT(create_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setCreate(string create) { DARABONBA_PTR_SET_VALUE(create_, create) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline int32_t finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, 0) };
    inline DescribeImageLatestScanTaskResponseBodyTask& setFinish(int32_t finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline DescribeImageLatestScanTaskResponseBodyTask& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeImageLatestScanTaskResponseBodyTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modified Field Functions 
    bool hasModified() const { return this->modified_ != nullptr;};
    void deleteModified() { this->modified_ = nullptr;};
    inline string modified() const { DARABONBA_PTR_GET_DEFAULT(modified_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setModified(string modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeImageLatestScanTaskResponseBodyTask& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeImageLatestScanTaskResponseBodyTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The time when the task was created. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> create_ = nullptr;
    // The number of images that are scanned.
    std::shared_ptr<int32_t> finish_ = nullptr;
    // The end time of the task. A value is returned only when the task is in the Finished state. Otherwise, the returned value is empty.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The time when the task was last modified. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> modified_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The method in which the task was created. A task can be created in the Security Center console or by calling an API operation. Valid values:
    // 
    // *   **console_batch**: The task was created in the Security Center console.
    // *   **openapi**: The task was created by calling an API operation.
    std::shared_ptr<string> source_ = nullptr;
    // The start time of the task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the task. Valid value:
    // 
    // *   **PROCESSING**: The task is running.
    // *   **START**: The task is being started.
    // *   **MESSAGE_SEND**: The scan task is sent.
    // *   **PRE_ANALYZER**: The image is in precheck.
    // *   **SUCCESS**: The task was successful.
    // *   **FAIL**: The task failed.
    // *   **TIMOUT**: The task timed out.
    std::shared_ptr<string> status_ = nullptr;
    // The digest value of the image.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the scanned asset. Valid value:
    // 
    // *   **IMAGE**
    std::shared_ptr<string> targetType_ = nullptr;
    // The ID of the scan task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task. Valid value:
    // 
    // *   **IMAGE_SCAN**
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
