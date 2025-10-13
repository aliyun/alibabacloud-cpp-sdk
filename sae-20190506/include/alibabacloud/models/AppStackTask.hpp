// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSTACKTASK_HPP_
#define ALIBABACLOUD_MODELS_APPSTACKTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppStackTaskSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AppStackTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppStackTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AppStackTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AppStackTask() = default ;
    AppStackTask(const AppStackTask &) = default ;
    AppStackTask(AppStackTask &&) = default ;
    AppStackTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppStackTask() = default ;
    AppStackTask& operator=(const AppStackTask &) = default ;
    AppStackTask& operator=(AppStackTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->stackId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->steps_ == nullptr && return this->taskId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline AppStackTask& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline AppStackTask& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppStackTask& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline AppStackTask& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline AppStackTask& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppStackTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<AppStackTaskSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<AppStackTaskSteps>) };
    inline vector<AppStackTaskSteps> steps() { DARABONBA_PTR_GET(steps_, vector<AppStackTaskSteps>) };
    inline AppStackTask& setSteps(const vector<AppStackTaskSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline AppStackTask& setSteps(vector<AppStackTaskSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AppStackTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> stackId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<AppStackTaskSteps>> steps_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
