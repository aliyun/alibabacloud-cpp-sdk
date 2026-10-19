// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEWORKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEWORKITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ScheduleWorkItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleWorkItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(runSeq, runSeq_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleWorkItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(runSeq, runSeq_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
    };
    ScheduleWorkItemResponseBody() = default ;
    ScheduleWorkItemResponseBody(const ScheduleWorkItemResponseBody &) = default ;
    ScheduleWorkItemResponseBody(ScheduleWorkItemResponseBody &&) = default ;
    ScheduleWorkItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleWorkItemResponseBody() = default ;
    ScheduleWorkItemResponseBody& operator=(const ScheduleWorkItemResponseBody &) = default ;
    ScheduleWorkItemResponseBody& operator=(ScheduleWorkItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->created_ == nullptr && this->message_ == nullptr && this->planId_ == nullptr && this->requestId_ == nullptr && this->revision_ == nullptr
        && this->runId_ == nullptr && this->runSeq_ == nullptr && this->workItemId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ScheduleWorkItemResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline bool getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, false) };
    inline ScheduleWorkItemResponseBody& setCreated(bool created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ScheduleWorkItemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ScheduleWorkItemResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScheduleWorkItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline ScheduleWorkItemResponseBody& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline ScheduleWorkItemResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // runSeq Field Functions 
    bool hasRunSeq() const { return this->runSeq_ != nullptr;};
    void deleteRunSeq() { this->runSeq_ = nullptr;};
    inline int64_t getRunSeq() const { DARABONBA_PTR_GET_DEFAULT(runSeq_, 0L) };
    inline ScheduleWorkItemResponseBody& setRunSeq(int64_t runSeq) { DARABONBA_PTR_SET_VALUE(runSeq_, runSeq) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline ScheduleWorkItemResponseBody& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 本次是否新创建 Plan
    shared_ptr<bool> created_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 物理计划ID
    shared_ptr<string> planId_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 修订号
    shared_ptr<int64_t> revision_ {};
    // 运行ID
    shared_ptr<string> runId_ {};
    // 运行序号
    shared_ptr<int64_t> runSeq_ {};
    // 工作项ID
    shared_ptr<string> workItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
