// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNWORKFLOWNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RERUNWORKFLOWNODERESPONSEBODY_HPP_
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
  class RerunWorkflowNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunWorkflowNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(affectedNodeKeys, affectedNodeKeys_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RerunWorkflowNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(affectedNodeKeys, affectedNodeKeys_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
    };
    RerunWorkflowNodeResponseBody() = default ;
    RerunWorkflowNodeResponseBody(const RerunWorkflowNodeResponseBody &) = default ;
    RerunWorkflowNodeResponseBody(RerunWorkflowNodeResponseBody &&) = default ;
    RerunWorkflowNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunWorkflowNodeResponseBody() = default ;
    RerunWorkflowNodeResponseBody& operator=(const RerunWorkflowNodeResponseBody &) = default ;
    RerunWorkflowNodeResponseBody& operator=(RerunWorkflowNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedNodeKeys_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->planId_ == nullptr && this->requestId_ == nullptr && this->revision_ == nullptr
        && this->runId_ == nullptr && this->stateVersion_ == nullptr; };
    // affectedNodeKeys Field Functions 
    bool hasAffectedNodeKeys() const { return this->affectedNodeKeys_ != nullptr;};
    void deleteAffectedNodeKeys() { this->affectedNodeKeys_ = nullptr;};
    inline const vector<string> & getAffectedNodeKeys() const { DARABONBA_PTR_GET_CONST(affectedNodeKeys_, vector<string>) };
    inline vector<string> getAffectedNodeKeys() { DARABONBA_PTR_GET(affectedNodeKeys_, vector<string>) };
    inline RerunWorkflowNodeResponseBody& setAffectedNodeKeys(const vector<string> & affectedNodeKeys) { DARABONBA_PTR_SET_VALUE(affectedNodeKeys_, affectedNodeKeys) };
    inline RerunWorkflowNodeResponseBody& setAffectedNodeKeys(vector<string> && affectedNodeKeys) { DARABONBA_PTR_SET_RVALUE(affectedNodeKeys_, affectedNodeKeys) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RerunWorkflowNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RerunWorkflowNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline RerunWorkflowNodeResponseBody& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RerunWorkflowNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline RerunWorkflowNodeResponseBody& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline RerunWorkflowNodeResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline RerunWorkflowNodeResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


  protected:
    // 本次重跑影响的节点 key 列表，供调用方刷新；成功响应恒包含，错误响应可缺省
    shared_ptr<vector<string>> affectedNodeKeys_ {};
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 重跑后的当前物理计划ID；固定规划节点重跑可能生成新计划，后续查询应使用此值
    shared_ptr<string> planId_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 重跑后的当前计划修订号
    shared_ptr<int64_t> revision_ {};
    // 当前工作流运行ID，固定节点生成新 revision 时保持不变
    shared_ptr<string> runId_ {};
    // 重跑被接受后的工作流状态版本
    shared_ptr<int64_t> stateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
