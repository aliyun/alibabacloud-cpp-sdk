// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESCHEDULEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESCHEDULEDTASKRESPONSEBODY_HPP_
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
  class ExecuteScheduledTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(executionId, executionId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskExecution, taskExecution_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(executionId, executionId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskExecution, taskExecution_);
    };
    ExecuteScheduledTaskResponseBody() = default ;
    ExecuteScheduledTaskResponseBody(const ExecuteScheduledTaskResponseBody &) = default ;
    ExecuteScheduledTaskResponseBody(ExecuteScheduledTaskResponseBody &&) = default ;
    ExecuteScheduledTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteScheduledTaskResponseBody() = default ;
    ExecuteScheduledTaskResponseBody& operator=(const ExecuteScheduledTaskResponseBody &) = default ;
    ExecuteScheduledTaskResponseBody& operator=(ExecuteScheduledTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskExecution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskExecution& obj) { 
        DARABONBA_PTR_TO_JSON(autoPreference, autoPreference_);
        DARABONBA_PTR_TO_JSON(billingId, billingId_);
        DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
        DARABONBA_PTR_TO_JSON(executionId, executionId_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_TO_JSON(skillCodes, skillCodes_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(taskUnderstand, taskUnderstand_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskExecution& obj) { 
        DARABONBA_PTR_FROM_JSON(autoPreference, autoPreference_);
        DARABONBA_PTR_FROM_JSON(billingId, billingId_);
        DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
        DARABONBA_PTR_FROM_JSON(executionId, executionId_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_FROM_JSON(skillCodes, skillCodes_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(taskUnderstand, taskUnderstand_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      TaskExecution() = default ;
      TaskExecution(const TaskExecution &) = default ;
      TaskExecution(TaskExecution &&) = default ;
      TaskExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskExecution() = default ;
      TaskExecution& operator=(const TaskExecution &) = default ;
      TaskExecution& operator=(TaskExecution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPreference_ == nullptr
        && this->billingId_ == nullptr && this->collaborationGroupId_ == nullptr && this->enableWebSearch_ == nullptr && this->executionId_ == nullptr && this->model_ == nullptr
        && this->operatingObjectName_ == nullptr && this->skillCodes_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskUnderstand_ == nullptr
        && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // autoPreference Field Functions 
      bool hasAutoPreference() const { return this->autoPreference_ != nullptr;};
      void deleteAutoPreference() { this->autoPreference_ = nullptr;};
      inline string getAutoPreference() const { DARABONBA_PTR_GET_DEFAULT(autoPreference_, "") };
      inline TaskExecution& setAutoPreference(string autoPreference) { DARABONBA_PTR_SET_VALUE(autoPreference_, autoPreference) };


      // billingId Field Functions 
      bool hasBillingId() const { return this->billingId_ != nullptr;};
      void deleteBillingId() { this->billingId_ = nullptr;};
      inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
      inline TaskExecution& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


      // collaborationGroupId Field Functions 
      bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
      void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
      inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
      inline TaskExecution& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


      // enableWebSearch Field Functions 
      bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
      void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
      inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
      inline TaskExecution& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline TaskExecution& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline TaskExecution& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // operatingObjectName Field Functions 
      bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
      void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
      inline const vector<string> & getOperatingObjectName() const { DARABONBA_PTR_GET_CONST(operatingObjectName_, vector<string>) };
      inline vector<string> getOperatingObjectName() { DARABONBA_PTR_GET(operatingObjectName_, vector<string>) };
      inline TaskExecution& setOperatingObjectName(const vector<string> & operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };
      inline TaskExecution& setOperatingObjectName(vector<string> && operatingObjectName) { DARABONBA_PTR_SET_RVALUE(operatingObjectName_, operatingObjectName) };


      // skillCodes Field Functions 
      bool hasSkillCodes() const { return this->skillCodes_ != nullptr;};
      void deleteSkillCodes() { this->skillCodes_ = nullptr;};
      inline const vector<string> & getSkillCodes() const { DARABONBA_PTR_GET_CONST(skillCodes_, vector<string>) };
      inline vector<string> getSkillCodes() { DARABONBA_PTR_GET(skillCodes_, vector<string>) };
      inline TaskExecution& setSkillCodes(const vector<string> & skillCodes) { DARABONBA_PTR_SET_VALUE(skillCodes_, skillCodes) };
      inline TaskExecution& setSkillCodes(vector<string> && skillCodes) { DARABONBA_PTR_SET_RVALUE(skillCodes_, skillCodes) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskExecution& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskExecution& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskUnderstand Field Functions 
      bool hasTaskUnderstand() const { return this->taskUnderstand_ != nullptr;};
      void deleteTaskUnderstand() { this->taskUnderstand_ = nullptr;};
      inline string getTaskUnderstand() const { DARABONBA_PTR_GET_DEFAULT(taskUnderstand_, "") };
      inline TaskExecution& setTaskUnderstand(string taskUnderstand) { DARABONBA_PTR_SET_VALUE(taskUnderstand_, taskUnderstand) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TaskExecution& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TaskExecution& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // 任务 AUTO 偏好：none=默认、performance=效果优先、credit=成本优先
      shared_ptr<string> autoPreference_ {};
      shared_ptr<string> billingId_ {};
      shared_ptr<string> collaborationGroupId_ {};
      shared_ptr<bool> enableWebSearch_ {};
      shared_ptr<string> executionId_ {};
      // 执行模型档位
      shared_ptr<string> model_ {};
      shared_ptr<vector<string>> operatingObjectName_ {};
      shared_ptr<vector<string>> skillCodes_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskName_ {};
      shared_ptr<string> taskUnderstand_ {};
      shared_ptr<string> tenantId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->executionId_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->taskExecution_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExecuteScheduledTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ExecuteScheduledTaskResponseBody& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteScheduledTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteScheduledTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskExecution Field Functions 
    bool hasTaskExecution() const { return this->taskExecution_ != nullptr;};
    void deleteTaskExecution() { this->taskExecution_ = nullptr;};
    inline const ExecuteScheduledTaskResponseBody::TaskExecution & getTaskExecution() const { DARABONBA_PTR_GET_CONST(taskExecution_, ExecuteScheduledTaskResponseBody::TaskExecution) };
    inline ExecuteScheduledTaskResponseBody::TaskExecution getTaskExecution() { DARABONBA_PTR_GET(taskExecution_, ExecuteScheduledTaskResponseBody::TaskExecution) };
    inline ExecuteScheduledTaskResponseBody& setTaskExecution(const ExecuteScheduledTaskResponseBody::TaskExecution & taskExecution) { DARABONBA_PTR_SET_VALUE(taskExecution_, taskExecution) };
    inline ExecuteScheduledTaskResponseBody& setTaskExecution(ExecuteScheduledTaskResponseBody::TaskExecution && taskExecution) { DARABONBA_PTR_SET_RVALUE(taskExecution_, taskExecution) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码
    shared_ptr<string> code_ {};
    // 执行记录 ID
    shared_ptr<string> executionId_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    shared_ptr<ExecuteScheduledTaskResponseBody::TaskExecution> taskExecution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
