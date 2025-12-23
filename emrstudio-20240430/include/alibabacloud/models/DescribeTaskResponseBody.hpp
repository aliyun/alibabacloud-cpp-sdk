// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class DescribeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FailRetryInterval, failRetryInterval_);
      DARABONBA_PTR_TO_JSON(FailRetryTimes, failRetryTimes_);
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_TO_JSON(TaskPriority, taskPriority_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TimeoutFlag, timeoutFlag_);
      DARABONBA_PTR_TO_JSON(TimeoutNotifyStrategy, timeoutNotifyStrategy_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FailRetryInterval, failRetryInterval_);
      DARABONBA_PTR_FROM_JSON(FailRetryTimes, failRetryTimes_);
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_FROM_JSON(TaskPriority, taskPriority_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TimeoutFlag, timeoutFlag_);
      DARABONBA_PTR_FROM_JSON(TimeoutNotifyStrategy, timeoutNotifyStrategy_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DescribeTaskResponseBody() = default ;
    DescribeTaskResponseBody(const DescribeTaskResponseBody &) = default ;
    DescribeTaskResponseBody(DescribeTaskResponseBody &&) = default ;
    DescribeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskResponseBody() = default ;
    DescribeTaskResponseBody& operator=(const DescribeTaskResponseBody &) = default ;
    DescribeTaskResponseBody& operator=(DescribeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->delayTime_ == nullptr && return this->description_ == nullptr && return this->failRetryInterval_ == nullptr && return this->failRetryTimes_ == nullptr && return this->flag_ == nullptr
        && return this->projectId_ == nullptr && return this->resourceIds_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskParams_ == nullptr
        && return this->taskPriority_ == nullptr && return this->taskType_ == nullptr && return this->timeout_ == nullptr && return this->timeoutFlag_ == nullptr && return this->timeoutNotifyStrategy_ == nullptr
        && return this->updateTime_ == nullptr && return this->version_ == nullptr && return this->requestId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline DescribeTaskResponseBody& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failRetryInterval Field Functions 
    bool hasFailRetryInterval() const { return this->failRetryInterval_ != nullptr;};
    void deleteFailRetryInterval() { this->failRetryInterval_ = nullptr;};
    inline int32_t failRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(failRetryInterval_, 0) };
    inline DescribeTaskResponseBody& setFailRetryInterval(int32_t failRetryInterval) { DARABONBA_PTR_SET_VALUE(failRetryInterval_, failRetryInterval) };


    // failRetryTimes Field Functions 
    bool hasFailRetryTimes() const { return this->failRetryTimes_ != nullptr;};
    void deleteFailRetryTimes() { this->failRetryTimes_ = nullptr;};
    inline int32_t failRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(failRetryTimes_, 0) };
    inline DescribeTaskResponseBody& setFailRetryTimes(int32_t failRetryTimes) { DARABONBA_PTR_SET_VALUE(failRetryTimes_, failRetryTimes) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeTaskResponseBody& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeTaskResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string resourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline DescribeTaskResponseBody& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline string taskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
    inline DescribeTaskResponseBody& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


    // taskPriority Field Functions 
    bool hasTaskPriority() const { return this->taskPriority_ != nullptr;};
    void deleteTaskPriority() { this->taskPriority_ = nullptr;};
    inline string taskPriority() const { DARABONBA_PTR_GET_DEFAULT(taskPriority_, "") };
    inline DescribeTaskResponseBody& setTaskPriority(string taskPriority) { DARABONBA_PTR_SET_VALUE(taskPriority_, taskPriority) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTaskResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline DescribeTaskResponseBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // timeoutFlag Field Functions 
    bool hasTimeoutFlag() const { return this->timeoutFlag_ != nullptr;};
    void deleteTimeoutFlag() { this->timeoutFlag_ = nullptr;};
    inline string timeoutFlag() const { DARABONBA_PTR_GET_DEFAULT(timeoutFlag_, "") };
    inline DescribeTaskResponseBody& setTimeoutFlag(string timeoutFlag) { DARABONBA_PTR_SET_VALUE(timeoutFlag_, timeoutFlag) };


    // timeoutNotifyStrategy Field Functions 
    bool hasTimeoutNotifyStrategy() const { return this->timeoutNotifyStrategy_ != nullptr;};
    void deleteTimeoutNotifyStrategy() { this->timeoutNotifyStrategy_ = nullptr;};
    inline string timeoutNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(timeoutNotifyStrategy_, "") };
    inline DescribeTaskResponseBody& setTimeoutNotifyStrategy(string timeoutNotifyStrategy) { DARABONBA_PTR_SET_VALUE(timeoutNotifyStrategy_, timeoutNotifyStrategy) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeTaskResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeTaskResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> failRetryInterval_ = nullptr;
    std::shared_ptr<int32_t> failRetryTimes_ = nullptr;
    std::shared_ptr<string> flag_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> resourceIds_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> taskParams_ = nullptr;
    std::shared_ptr<string> taskPriority_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> timeoutFlag_ = nullptr;
    std::shared_ptr<string> timeoutNotifyStrategy_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
