// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPARKANALYZELOGTASK_HPP_
#define ALIBABACLOUD_MODELS_SPARKANALYZELOGTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LogAnalyzeResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SparkAnalyzeLogTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SparkAnalyzeLogTask& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RuleMatched, ruleMatched_);
      DARABONBA_PTR_TO_JSON(StartedTimeInMillis, startedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(TaskErrMsg, taskErrMsg_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(TerminatedTimeInMillis, terminatedTimeInMillis_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SparkAnalyzeLogTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RuleMatched, ruleMatched_);
      DARABONBA_PTR_FROM_JSON(StartedTimeInMillis, startedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(SubmittedTimeInMillis, submittedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(TaskErrMsg, taskErrMsg_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(TerminatedTimeInMillis, terminatedTimeInMillis_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SparkAnalyzeLogTask() = default ;
    SparkAnalyzeLogTask(const SparkAnalyzeLogTask &) = default ;
    SparkAnalyzeLogTask(SparkAnalyzeLogTask &&) = default ;
    SparkAnalyzeLogTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SparkAnalyzeLogTask() = default ;
    SparkAnalyzeLogTask& operator=(const SparkAnalyzeLogTask &) = default ;
    SparkAnalyzeLogTask& operator=(SparkAnalyzeLogTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->result_ == nullptr && this->ruleMatched_ == nullptr && this->startedTimeInMillis_ == nullptr && this->submittedTimeInMillis_ == nullptr && this->taskErrMsg_ == nullptr
        && this->taskId_ == nullptr && this->taskState_ == nullptr && this->terminatedTimeInMillis_ == nullptr && this->userId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline SparkAnalyzeLogTask& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const LogAnalyzeResult & getResult() const { DARABONBA_PTR_GET_CONST(result_, LogAnalyzeResult) };
    inline LogAnalyzeResult getResult() { DARABONBA_PTR_GET(result_, LogAnalyzeResult) };
    inline SparkAnalyzeLogTask& setResult(const LogAnalyzeResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SparkAnalyzeLogTask& setResult(LogAnalyzeResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // ruleMatched Field Functions 
    bool hasRuleMatched() const { return this->ruleMatched_ != nullptr;};
    void deleteRuleMatched() { this->ruleMatched_ = nullptr;};
    inline bool getRuleMatched() const { DARABONBA_PTR_GET_DEFAULT(ruleMatched_, false) };
    inline SparkAnalyzeLogTask& setRuleMatched(bool ruleMatched) { DARABONBA_PTR_SET_VALUE(ruleMatched_, ruleMatched) };


    // startedTimeInMillis Field Functions 
    bool hasStartedTimeInMillis() const { return this->startedTimeInMillis_ != nullptr;};
    void deleteStartedTimeInMillis() { this->startedTimeInMillis_ = nullptr;};
    inline int64_t getStartedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(startedTimeInMillis_, 0L) };
    inline SparkAnalyzeLogTask& setStartedTimeInMillis(int64_t startedTimeInMillis) { DARABONBA_PTR_SET_VALUE(startedTimeInMillis_, startedTimeInMillis) };


    // submittedTimeInMillis Field Functions 
    bool hasSubmittedTimeInMillis() const { return this->submittedTimeInMillis_ != nullptr;};
    void deleteSubmittedTimeInMillis() { this->submittedTimeInMillis_ = nullptr;};
    inline int64_t getSubmittedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(submittedTimeInMillis_, 0L) };
    inline SparkAnalyzeLogTask& setSubmittedTimeInMillis(int64_t submittedTimeInMillis) { DARABONBA_PTR_SET_VALUE(submittedTimeInMillis_, submittedTimeInMillis) };


    // taskErrMsg Field Functions 
    bool hasTaskErrMsg() const { return this->taskErrMsg_ != nullptr;};
    void deleteTaskErrMsg() { this->taskErrMsg_ = nullptr;};
    inline string getTaskErrMsg() const { DARABONBA_PTR_GET_DEFAULT(taskErrMsg_, "") };
    inline SparkAnalyzeLogTask& setTaskErrMsg(string taskErrMsg) { DARABONBA_PTR_SET_VALUE(taskErrMsg_, taskErrMsg) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline SparkAnalyzeLogTask& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline SparkAnalyzeLogTask& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // terminatedTimeInMillis Field Functions 
    bool hasTerminatedTimeInMillis() const { return this->terminatedTimeInMillis_ != nullptr;};
    void deleteTerminatedTimeInMillis() { this->terminatedTimeInMillis_ = nullptr;};
    inline int64_t getTerminatedTimeInMillis() const { DARABONBA_PTR_GET_DEFAULT(terminatedTimeInMillis_, 0L) };
    inline SparkAnalyzeLogTask& setTerminatedTimeInMillis(int64_t terminatedTimeInMillis) { DARABONBA_PTR_SET_VALUE(terminatedTimeInMillis_, terminatedTimeInMillis) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline SparkAnalyzeLogTask& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<LogAnalyzeResult> result_ {};
    shared_ptr<bool> ruleMatched_ {};
    shared_ptr<int64_t> startedTimeInMillis_ {};
    shared_ptr<int64_t> submittedTimeInMillis_ {};
    shared_ptr<string> taskErrMsg_ {};
    shared_ptr<int64_t> taskId_ {};
    shared_ptr<string> taskState_ {};
    shared_ptr<int64_t> terminatedTimeInMillis_ {};
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
