// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSkillRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(logs, logs_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(progressMessage, progressMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_ANY_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(logs, logs_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(progressMessage, progressMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_ANY_FROM_JSON(usage, usage_);
    };
    GetSkillRunResponseBody() = default ;
    GetSkillRunResponseBody(const GetSkillRunResponseBody &) = default ;
    GetSkillRunResponseBody(GetSkillRunResponseBody &&) = default ;
    GetSkillRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillRunResponseBody() = default ;
    GetSkillRunResponseBody& operator=(const GetSkillRunResponseBody &) = default ;
    GetSkillRunResponseBody& operator=(GetSkillRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->createdAt_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->finishedAt_ == nullptr && this->logs_ == nullptr
        && this->message_ == nullptr && this->progress_ == nullptr && this->progressMessage_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->runId_ == nullptr && this->skillCode_ == nullptr && this->skillName_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr
        && this->usage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSkillRunResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetSkillRunResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSkillRunResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSkillRunResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline GetSkillRunResponseBody& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Darabonba::Json> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getLogs() { DARABONBA_PTR_GET(logs_, vector<Darabonba::Json>) };
    inline GetSkillRunResponseBody& setLogs(const vector<Darabonba::Json> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetSkillRunResponseBody& setLogs(vector<Darabonba::Json> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSkillRunResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetSkillRunResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressMessage Field Functions 
    bool hasProgressMessage() const { return this->progressMessage_ != nullptr;};
    void deleteProgressMessage() { this->progressMessage_ = nullptr;};
    inline string getProgressMessage() const { DARABONBA_PTR_GET_DEFAULT(progressMessage_, "") };
    inline GetSkillRunResponseBody& setProgressMessage(string progressMessage) { DARABONBA_PTR_SET_VALUE(progressMessage_, progressMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
    Darabonba::Json & getResult() { DARABONBA_GET(result_) };
    inline GetSkillRunResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline GetSkillRunResponseBody& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetSkillRunResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // skillCode Field Functions 
    bool hasSkillCode() const { return this->skillCode_ != nullptr;};
    void deleteSkillCode() { this->skillCode_ = nullptr;};
    inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
    inline GetSkillRunResponseBody& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline GetSkillRunResponseBody& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline GetSkillRunResponseBody& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSkillRunResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline     const Darabonba::Json & getUsage() const { DARABONBA_GET(usage_) };
    Darabonba::Json & getUsage() { DARABONBA_GET(usage_) };
    inline GetSkillRunResponseBody& setUsage(const Darabonba::Json & usage) { DARABONBA_SET_VALUE(usage_, usage) };
    inline GetSkillRunResponseBody& setUsage(Darabonba::Json && usage) { DARABONBA_SET_RVALUE(usage_, usage) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 任务创建时间，ISO8601
    shared_ptr<string> createdAt_ {};
    // 错误码，仅 Failed 时返回
    shared_ptr<string> errorCode_ {};
    // 错误描述，仅 Failed 时返回
    shared_ptr<string> errorMessage_ {};
    // 任务结束时间，ISO8601；仅终态（Succeeded/Failed/Cancelled）有值
    shared_ptr<string> finishedAt_ {};
    shared_ptr<vector<Darabonba::Json>> logs_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 进度百分比（仅 Running 时有意义）
    shared_ptr<int64_t> progress_ {};
    // 进度描述
    shared_ptr<string> progressMessage_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    Darabonba::Json result_ {};
    // 异步任务 ID
    shared_ptr<string> runId_ {};
    // 技能编码
    shared_ptr<string> skillCode_ {};
    // 技能名称
    shared_ptr<string> skillName_ {};
    // 任务开始执行时间，ISO8601
    shared_ptr<string> startedAt_ {};
    // 执行状态：Running / Succeeded / Failed / Cancelled
    shared_ptr<string> status_ {};
    Darabonba::Json usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
