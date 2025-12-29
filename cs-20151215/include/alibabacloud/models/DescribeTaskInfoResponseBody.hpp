// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TaskResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskResult& obj) { 
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, TaskResult& obj) { 
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      TaskResult() = default ;
      TaskResult(const TaskResult &) = default ;
      TaskResult(TaskResult &&) = default ;
      TaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskResult() = default ;
      TaskResult& operator=(const TaskResult &) = default ;
      TaskResult& operator=(TaskResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr
        && this->status_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline TaskResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The resources that are managed by the task. For a scale-out task, the value of this parameter is the ID of the instance that is added by the task.
      shared_ptr<string> data_ {};
      // The status of the scale-out task. Valid values:
      // 
      // *   `success`: The scale-out task is successful.
      // *   `success`: The scale-out task failed.
      // *   `initial`: The scale-out task is being initialized.
      shared_ptr<string> status_ {};
    };

    class Target : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Target& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Target& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Target() = default ;
      Target(const Target &) = default ;
      Target(Target &&) = default ;
      Target(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Target() = default ;
      Target& operator=(const Target &) = default ;
      Target& operator=(Target &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Target& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the object.
      shared_ptr<string> id_ {};
      // The type of the object.
      shared_ptr<string> type_ {};
    };

    class Stages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stages& obj) { 
        DARABONBA_PTR_TO_JSON(end_time, endTime_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_ANY_TO_JSON(outputs, outputs_);
        DARABONBA_PTR_TO_JSON(start_time, startTime_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Stages& obj) { 
        DARABONBA_PTR_FROM_JSON(end_time, endTime_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_ANY_FROM_JSON(outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(start_time, startTime_);
        DARABONBA_PTR_FROM_JSON(state, state_);
      };
      Stages() = default ;
      Stages(const Stages &) = default ;
      Stages(Stages &&) = default ;
      Stages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Stages() = default ;
      Stages& operator=(const Stages &) = default ;
      Stages& operator=(Stages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->message_ == nullptr && this->outputs_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Stages& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Stages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline       const Darabonba::Json & getOutputs() const { DARABONBA_GET(outputs_) };
      Darabonba::Json & getOutputs() { DARABONBA_GET(outputs_) };
      inline Stages& setOutputs(const Darabonba::Json & outputs) { DARABONBA_SET_VALUE(outputs_, outputs) };
      inline Stages& setOutputs(Darabonba::Json && outputs) { DARABONBA_SET_RVALUE(outputs_, outputs) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Stages& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Stages& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The end time of the stage.
      shared_ptr<string> endTime_ {};
      // The message about the stage.
      shared_ptr<string> message_ {};
      // The output generated at the stage.
      Darabonba::Json outputs_ {};
      // The start time of the stage.
      shared_ptr<string> startTime_ {};
      // The status of the stage.
      shared_ptr<string> state_ {};
    };

    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->level_ == nullptr && this->message_ == nullptr && this->reason_ == nullptr && this->source_ == nullptr && this->timestamp_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Events& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Events& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Events& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Events& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Events& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Events& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The action of the event.
      shared_ptr<string> action_ {};
      // The severity level of the event.
      shared_ptr<string> level_ {};
      // The message about the event.
      shared_ptr<string> message_ {};
      // The cause of the event.
      shared_ptr<string> reason_ {};
      // The source of the event.
      shared_ptr<string> source_ {};
      // The timestamp when the event was generated.
      shared_ptr<string> timestamp_ {};
    };

    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The error code returned.
      shared_ptr<string> code_ {};
      // The error message returned.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->created_ == nullptr && this->currentStage_ == nullptr && this->error_ == nullptr && this->events_ == nullptr && this->parameters_ == nullptr
        && this->stages_ == nullptr && this->state_ == nullptr && this->target_ == nullptr && this->taskId_ == nullptr && this->taskResult_ == nullptr
        && this->taskType_ == nullptr && this->updated_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeTaskInfoResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeTaskInfoResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline string getCurrentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, "") };
    inline DescribeTaskInfoResponseBody& setCurrentStage(string currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const DescribeTaskInfoResponseBody::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, DescribeTaskInfoResponseBody::Error) };
    inline DescribeTaskInfoResponseBody::Error getError() { DARABONBA_PTR_GET(error_, DescribeTaskInfoResponseBody::Error) };
    inline DescribeTaskInfoResponseBody& setError(const DescribeTaskInfoResponseBody::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline DescribeTaskInfoResponseBody& setError(DescribeTaskInfoResponseBody::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeTaskInfoResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeTaskInfoResponseBody::Events>) };
    inline vector<DescribeTaskInfoResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<DescribeTaskInfoResponseBody::Events>) };
    inline DescribeTaskInfoResponseBody& setEvents(const vector<DescribeTaskInfoResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeTaskInfoResponseBody& setEvents(vector<DescribeTaskInfoResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline DescribeTaskInfoResponseBody& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DescribeTaskInfoResponseBody& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<DescribeTaskInfoResponseBody::Stages> & getStages() const { DARABONBA_PTR_GET_CONST(stages_, vector<DescribeTaskInfoResponseBody::Stages>) };
    inline vector<DescribeTaskInfoResponseBody::Stages> getStages() { DARABONBA_PTR_GET(stages_, vector<DescribeTaskInfoResponseBody::Stages>) };
    inline DescribeTaskInfoResponseBody& setStages(const vector<DescribeTaskInfoResponseBody::Stages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline DescribeTaskInfoResponseBody& setStages(vector<DescribeTaskInfoResponseBody::Stages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeTaskInfoResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const DescribeTaskInfoResponseBody::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, DescribeTaskInfoResponseBody::Target) };
    inline DescribeTaskInfoResponseBody::Target getTarget() { DARABONBA_PTR_GET(target_, DescribeTaskInfoResponseBody::Target) };
    inline DescribeTaskInfoResponseBody& setTarget(const DescribeTaskInfoResponseBody::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DescribeTaskInfoResponseBody& setTarget(DescribeTaskInfoResponseBody::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskInfoResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline const vector<DescribeTaskInfoResponseBody::TaskResult> & getTaskResult() const { DARABONBA_PTR_GET_CONST(taskResult_, vector<DescribeTaskInfoResponseBody::TaskResult>) };
    inline vector<DescribeTaskInfoResponseBody::TaskResult> getTaskResult() { DARABONBA_PTR_GET(taskResult_, vector<DescribeTaskInfoResponseBody::TaskResult>) };
    inline DescribeTaskInfoResponseBody& setTaskResult(const vector<DescribeTaskInfoResponseBody::TaskResult> & taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };
    inline DescribeTaskInfoResponseBody& setTaskResult(vector<DescribeTaskInfoResponseBody::TaskResult> && taskResult) { DARABONBA_PTR_SET_RVALUE(taskResult_, taskResult) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTaskInfoResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeTaskInfoResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The time when the task was created.
    shared_ptr<string> created_ {};
    // The current stage of the task.
    shared_ptr<string> currentStage_ {};
    // The error returned for the task.
    shared_ptr<DescribeTaskInfoResponseBody::Error> error_ {};
    // The event generated by the task.
    shared_ptr<vector<DescribeTaskInfoResponseBody::Events>> events_ {};
    // The task parameters.
    Darabonba::Json parameters_ {};
    // Detailed information about the stage of the task.
    shared_ptr<vector<DescribeTaskInfoResponseBody::Stages>> stages_ {};
    // The status of the task. Valid values:
    // 
    // *   `running`: The task is running.
    // *   `failed`: The task failed.
    // *   `success`: The task is complete.
    shared_ptr<string> state_ {};
    // The object of the task.
    shared_ptr<DescribeTaskInfoResponseBody::Target> target_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The execution details of the task.
    shared_ptr<vector<DescribeTaskInfoResponseBody::TaskResult>> taskResult_ {};
    // The task type. A value of `cluster_scaleout` indicates a scale-out task.
    shared_ptr<string> taskType_ {};
    // The time when the task was updated.
    shared_ptr<string> updated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
