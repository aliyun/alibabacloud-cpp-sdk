// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFirewallTaskResponseBodyTaskSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsFound, isFound_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskFinishTimestamp, taskFinishTimestamp_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTimestamp, taskStartTimestamp_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskSteps, taskSteps_);
      DARABONBA_PTR_TO_JSON(TaskWaitingTime, taskWaitingTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsFound, isFound_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskFinishTimestamp, taskFinishTimestamp_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTimestamp, taskStartTimestamp_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskSteps, taskSteps_);
      DARABONBA_PTR_FROM_JSON(TaskWaitingTime, taskWaitingTime_);
    };
    DescribeFirewallTaskResponseBody() = default ;
    DescribeFirewallTaskResponseBody(const DescribeFirewallTaskResponseBody &) = default ;
    DescribeFirewallTaskResponseBody(DescribeFirewallTaskResponseBody &&) = default ;
    DescribeFirewallTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTaskResponseBody() = default ;
    DescribeFirewallTaskResponseBody& operator=(const DescribeFirewallTaskResponseBody &) = default ;
    DescribeFirewallTaskResponseBody& operator=(DescribeFirewallTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isFound_ == nullptr
        && return this->requestId_ == nullptr && return this->taskFinishTimestamp_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskStartTimestamp_ == nullptr
        && return this->taskStatus_ == nullptr && return this->taskSteps_ == nullptr && return this->taskWaitingTime_ == nullptr; };
    // isFound Field Functions 
    bool hasIsFound() const { return this->isFound_ != nullptr;};
    void deleteIsFound() { this->isFound_ = nullptr;};
    inline bool isFound() const { DARABONBA_PTR_GET_DEFAULT(isFound_, false) };
    inline DescribeFirewallTaskResponseBody& setIsFound(bool isFound) { DARABONBA_PTR_SET_VALUE(isFound_, isFound) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskFinishTimestamp Field Functions 
    bool hasTaskFinishTimestamp() const { return this->taskFinishTimestamp_ != nullptr;};
    void deleteTaskFinishTimestamp() { this->taskFinishTimestamp_ = nullptr;};
    inline string taskFinishTimestamp() const { DARABONBA_PTR_GET_DEFAULT(taskFinishTimestamp_, "") };
    inline DescribeFirewallTaskResponseBody& setTaskFinishTimestamp(string taskFinishTimestamp) { DARABONBA_PTR_SET_VALUE(taskFinishTimestamp_, taskFinishTimestamp) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeFirewallTaskResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeFirewallTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTimestamp Field Functions 
    bool hasTaskStartTimestamp() const { return this->taskStartTimestamp_ != nullptr;};
    void deleteTaskStartTimestamp() { this->taskStartTimestamp_ = nullptr;};
    inline string taskStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(taskStartTimestamp_, "") };
    inline DescribeFirewallTaskResponseBody& setTaskStartTimestamp(string taskStartTimestamp) { DARABONBA_PTR_SET_VALUE(taskStartTimestamp_, taskStartTimestamp) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeFirewallTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskSteps Field Functions 
    bool hasTaskSteps() const { return this->taskSteps_ != nullptr;};
    void deleteTaskSteps() { this->taskSteps_ = nullptr;};
    inline const vector<DescribeFirewallTaskResponseBodyTaskSteps> & taskSteps() const { DARABONBA_PTR_GET_CONST(taskSteps_, vector<DescribeFirewallTaskResponseBodyTaskSteps>) };
    inline vector<DescribeFirewallTaskResponseBodyTaskSteps> taskSteps() { DARABONBA_PTR_GET(taskSteps_, vector<DescribeFirewallTaskResponseBodyTaskSteps>) };
    inline DescribeFirewallTaskResponseBody& setTaskSteps(const vector<DescribeFirewallTaskResponseBodyTaskSteps> & taskSteps) { DARABONBA_PTR_SET_VALUE(taskSteps_, taskSteps) };
    inline DescribeFirewallTaskResponseBody& setTaskSteps(vector<DescribeFirewallTaskResponseBodyTaskSteps> && taskSteps) { DARABONBA_PTR_SET_RVALUE(taskSteps_, taskSteps) };


    // taskWaitingTime Field Functions 
    bool hasTaskWaitingTime() const { return this->taskWaitingTime_ != nullptr;};
    void deleteTaskWaitingTime() { this->taskWaitingTime_ = nullptr;};
    inline string taskWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(taskWaitingTime_, "") };
    inline DescribeFirewallTaskResponseBody& setTaskWaitingTime(string taskWaitingTime) { DARABONBA_PTR_SET_VALUE(taskWaitingTime_, taskWaitingTime) };


  protected:
    std::shared_ptr<bool> isFound_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> taskFinishTimestamp_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> taskStartTimestamp_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<vector<DescribeFirewallTaskResponseBodyTaskSteps>> taskSteps_ = nullptr;
    std::shared_ptr<string> taskWaitingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
