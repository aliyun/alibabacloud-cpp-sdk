// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsFound, isFound_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskFinishTimestamp, taskFinishTimestamp_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTimestamp, taskStartTimestamp_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskSteps, taskSteps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsFound, isFound_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskFinishTimestamp, taskFinishTimestamp_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTimestamp, taskStartTimestamp_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskSteps, taskSteps_);
    };
    DescribeAccessInstanceTaskResponseBody() = default ;
    DescribeAccessInstanceTaskResponseBody(const DescribeAccessInstanceTaskResponseBody &) = default ;
    DescribeAccessInstanceTaskResponseBody(DescribeAccessInstanceTaskResponseBody &&) = default ;
    DescribeAccessInstanceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceTaskResponseBody() = default ;
    DescribeAccessInstanceTaskResponseBody& operator=(const DescribeAccessInstanceTaskResponseBody &) = default ;
    DescribeAccessInstanceTaskResponseBody& operator=(DescribeAccessInstanceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskSteps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskSteps& obj) { 
        DARABONBA_PTR_TO_JSON(StepName, stepName_);
        DARABONBA_PTR_TO_JSON(StepProgress, stepProgress_);
        DARABONBA_PTR_TO_JSON(StepStatus, stepStatus_);
      };
      friend void from_json(const Darabonba::Json& j, TaskSteps& obj) { 
        DARABONBA_PTR_FROM_JSON(StepName, stepName_);
        DARABONBA_PTR_FROM_JSON(StepProgress, stepProgress_);
        DARABONBA_PTR_FROM_JSON(StepStatus, stepStatus_);
      };
      TaskSteps() = default ;
      TaskSteps(const TaskSteps &) = default ;
      TaskSteps(TaskSteps &&) = default ;
      TaskSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskSteps() = default ;
      TaskSteps& operator=(const TaskSteps &) = default ;
      TaskSteps& operator=(TaskSteps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->stepName_ == nullptr
        && this->stepProgress_ == nullptr && this->stepStatus_ == nullptr; };
      // stepName Field Functions 
      bool hasStepName() const { return this->stepName_ != nullptr;};
      void deleteStepName() { this->stepName_ = nullptr;};
      inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
      inline TaskSteps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


      // stepProgress Field Functions 
      bool hasStepProgress() const { return this->stepProgress_ != nullptr;};
      void deleteStepProgress() { this->stepProgress_ = nullptr;};
      inline string getStepProgress() const { DARABONBA_PTR_GET_DEFAULT(stepProgress_, "") };
      inline TaskSteps& setStepProgress(string stepProgress) { DARABONBA_PTR_SET_VALUE(stepProgress_, stepProgress) };


      // stepStatus Field Functions 
      bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
      void deleteStepStatus() { this->stepStatus_ = nullptr;};
      inline string getStepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
      inline TaskSteps& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


    protected:
      shared_ptr<string> stepName_ {};
      shared_ptr<string> stepProgress_ {};
      shared_ptr<string> stepStatus_ {};
    };

    virtual bool empty() const override { return this->isFound_ == nullptr
        && this->requestId_ == nullptr && this->taskFinishTimestamp_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStartTimestamp_ == nullptr
        && this->taskStatus_ == nullptr && this->taskSteps_ == nullptr; };
    // isFound Field Functions 
    bool hasIsFound() const { return this->isFound_ != nullptr;};
    void deleteIsFound() { this->isFound_ = nullptr;};
    inline bool getIsFound() const { DARABONBA_PTR_GET_DEFAULT(isFound_, false) };
    inline DescribeAccessInstanceTaskResponseBody& setIsFound(bool isFound) { DARABONBA_PTR_SET_VALUE(isFound_, isFound) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessInstanceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskFinishTimestamp Field Functions 
    bool hasTaskFinishTimestamp() const { return this->taskFinishTimestamp_ != nullptr;};
    void deleteTaskFinishTimestamp() { this->taskFinishTimestamp_ = nullptr;};
    inline int64_t getTaskFinishTimestamp() const { DARABONBA_PTR_GET_DEFAULT(taskFinishTimestamp_, 0L) };
    inline DescribeAccessInstanceTaskResponseBody& setTaskFinishTimestamp(int64_t taskFinishTimestamp) { DARABONBA_PTR_SET_VALUE(taskFinishTimestamp_, taskFinishTimestamp) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeAccessInstanceTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeAccessInstanceTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTimestamp Field Functions 
    bool hasTaskStartTimestamp() const { return this->taskStartTimestamp_ != nullptr;};
    void deleteTaskStartTimestamp() { this->taskStartTimestamp_ = nullptr;};
    inline int64_t getTaskStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(taskStartTimestamp_, 0L) };
    inline DescribeAccessInstanceTaskResponseBody& setTaskStartTimestamp(int64_t taskStartTimestamp) { DARABONBA_PTR_SET_VALUE(taskStartTimestamp_, taskStartTimestamp) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeAccessInstanceTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskSteps Field Functions 
    bool hasTaskSteps() const { return this->taskSteps_ != nullptr;};
    void deleteTaskSteps() { this->taskSteps_ = nullptr;};
    inline const vector<DescribeAccessInstanceTaskResponseBody::TaskSteps> & getTaskSteps() const { DARABONBA_PTR_GET_CONST(taskSteps_, vector<DescribeAccessInstanceTaskResponseBody::TaskSteps>) };
    inline vector<DescribeAccessInstanceTaskResponseBody::TaskSteps> getTaskSteps() { DARABONBA_PTR_GET(taskSteps_, vector<DescribeAccessInstanceTaskResponseBody::TaskSteps>) };
    inline DescribeAccessInstanceTaskResponseBody& setTaskSteps(const vector<DescribeAccessInstanceTaskResponseBody::TaskSteps> & taskSteps) { DARABONBA_PTR_SET_VALUE(taskSteps_, taskSteps) };
    inline DescribeAccessInstanceTaskResponseBody& setTaskSteps(vector<DescribeAccessInstanceTaskResponseBody::TaskSteps> && taskSteps) { DARABONBA_PTR_SET_RVALUE(taskSteps_, taskSteps) };


  protected:
    shared_ptr<bool> isFound_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> taskFinishTimestamp_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<int64_t> taskStartTimestamp_ {};
    shared_ptr<string> taskStatus_ {};
    shared_ptr<vector<DescribeAccessInstanceTaskResponseBody::TaskSteps>> taskSteps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
