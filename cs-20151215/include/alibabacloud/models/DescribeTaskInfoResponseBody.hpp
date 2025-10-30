// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTaskInfoResponseBodyError.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTaskInfoResponseBodyEvents.hpp>
#include <alibabacloud/models/DescribeTaskInfoResponseBodyStages.hpp>
#include <alibabacloud/models/DescribeTaskInfoResponseBodyTarget.hpp>
#include <alibabacloud/models/DescribeTaskInfoResponseBodyTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(current_stage, currentStage_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(stages, stages_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
      DARABONBA_PTR_TO_JSON(task_result, taskResult_);
      DARABONBA_PTR_TO_JSON(task_type, taskType_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(current_stage, currentStage_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(stages, stages_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
      DARABONBA_PTR_FROM_JSON(task_result, taskResult_);
      DARABONBA_PTR_FROM_JSON(task_type, taskType_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeTaskInfoResponseBody() = default ;
    DescribeTaskInfoResponseBody(const DescribeTaskInfoResponseBody &) = default ;
    DescribeTaskInfoResponseBody(DescribeTaskInfoResponseBody &&) = default ;
    DescribeTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskInfoResponseBody() = default ;
    DescribeTaskInfoResponseBody& operator=(const DescribeTaskInfoResponseBody &) = default ;
    DescribeTaskInfoResponseBody& operator=(DescribeTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->created_ == nullptr && return this->currentStage_ == nullptr && return this->error_ == nullptr && return this->events_ == nullptr && return this->parameters_ == nullptr
        && return this->stages_ == nullptr && return this->state_ == nullptr && return this->target_ == nullptr && return this->taskId_ == nullptr && return this->taskResult_ == nullptr
        && return this->taskType_ == nullptr && return this->updated_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeTaskInfoResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeTaskInfoResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline string currentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
    inline DescribeTaskInfoResponseBody& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const DescribeTaskInfoResponseBodyError & error() const { DARABONBA_PTR_GET_CONST(error_, DescribeTaskInfoResponseBodyError) };
    inline DescribeTaskInfoResponseBodyError error() { DARABONBA_PTR_GET(error_, DescribeTaskInfoResponseBodyError) };
    inline DescribeTaskInfoResponseBody& setError(const DescribeTaskInfoResponseBodyError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline DescribeTaskInfoResponseBody& setError(DescribeTaskInfoResponseBodyError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeTaskInfoResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeTaskInfoResponseBodyEvents>) };
    inline vector<DescribeTaskInfoResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<DescribeTaskInfoResponseBodyEvents>) };
    inline DescribeTaskInfoResponseBody& setEvents(const vector<DescribeTaskInfoResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeTaskInfoResponseBody& setEvents(vector<DescribeTaskInfoResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline DescribeTaskInfoResponseBody& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DescribeTaskInfoResponseBody& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<DescribeTaskInfoResponseBodyStages> & stages() const { DARABONBA_PTR_GET_CONST(stages_, vector<DescribeTaskInfoResponseBodyStages>) };
    inline vector<DescribeTaskInfoResponseBodyStages> stages() { DARABONBA_PTR_GET(stages_, vector<DescribeTaskInfoResponseBodyStages>) };
    inline DescribeTaskInfoResponseBody& setStages(const vector<DescribeTaskInfoResponseBodyStages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline DescribeTaskInfoResponseBody& setStages(vector<DescribeTaskInfoResponseBodyStages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeTaskInfoResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const DescribeTaskInfoResponseBodyTarget & target() const { DARABONBA_PTR_GET_CONST(target_, DescribeTaskInfoResponseBodyTarget) };
    inline DescribeTaskInfoResponseBodyTarget target() { DARABONBA_PTR_GET(target_, DescribeTaskInfoResponseBodyTarget) };
    inline DescribeTaskInfoResponseBody& setTarget(const DescribeTaskInfoResponseBodyTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DescribeTaskInfoResponseBody& setTarget(DescribeTaskInfoResponseBodyTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskInfoResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline const vector<DescribeTaskInfoResponseBodyTaskResult> & taskResult() const { DARABONBA_PTR_GET_CONST(taskResult_, vector<DescribeTaskInfoResponseBodyTaskResult>) };
    inline vector<DescribeTaskInfoResponseBodyTaskResult> taskResult() { DARABONBA_PTR_GET(taskResult_, vector<DescribeTaskInfoResponseBodyTaskResult>) };
    inline DescribeTaskInfoResponseBody& setTaskResult(const vector<DescribeTaskInfoResponseBodyTaskResult> & taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };
    inline DescribeTaskInfoResponseBody& setTaskResult(vector<DescribeTaskInfoResponseBodyTaskResult> && taskResult) { DARABONBA_PTR_SET_RVALUE(taskResult_, taskResult) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTaskInfoResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeTaskInfoResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> created_ = nullptr;
    // The current stage of the task.
    std::shared_ptr<string> currentStage_ = nullptr;
    // The error returned for the task.
    std::shared_ptr<DescribeTaskInfoResponseBodyError> error_ = nullptr;
    // The event generated by the task.
    std::shared_ptr<vector<DescribeTaskInfoResponseBodyEvents>> events_ = nullptr;
    // The task parameters.
    Darabonba::Json parameters_ = nullptr;
    // Detailed information about the stage of the task.
    std::shared_ptr<vector<DescribeTaskInfoResponseBodyStages>> stages_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   `running`: The task is running.
    // *   `failed`: The task failed.
    // *   `success`: The task is complete.
    std::shared_ptr<string> state_ = nullptr;
    // The object of the task.
    std::shared_ptr<DescribeTaskInfoResponseBodyTarget> target_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The execution details of the task.
    std::shared_ptr<vector<DescribeTaskInfoResponseBodyTaskResult>> taskResult_ = nullptr;
    // The task type. A value of `cluster_scaleout` indicates a scale-out task.
    std::shared_ptr<string> taskType_ = nullptr;
    // The time when the task was updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
