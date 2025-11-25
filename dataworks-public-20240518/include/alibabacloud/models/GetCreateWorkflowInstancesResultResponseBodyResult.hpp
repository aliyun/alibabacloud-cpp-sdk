// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCreateWorkflowInstancesResultResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateWorkflowInstancesResultResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailureMessage, failureMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceIds, unifiedWorkflowInstanceIds_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceIds, workflowInstanceIds_);
      DARABONBA_PTR_TO_JSON(WorkflowTaskInstanceIds, workflowTaskInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateWorkflowInstancesResultResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureMessage, failureMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceIds, unifiedWorkflowInstanceIds_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceIds, workflowInstanceIds_);
      DARABONBA_PTR_FROM_JSON(WorkflowTaskInstanceIds, workflowTaskInstanceIds_);
    };
    GetCreateWorkflowInstancesResultResponseBodyResult() = default ;
    GetCreateWorkflowInstancesResultResponseBodyResult(const GetCreateWorkflowInstancesResultResponseBodyResult &) = default ;
    GetCreateWorkflowInstancesResultResponseBodyResult(GetCreateWorkflowInstancesResultResponseBodyResult &&) = default ;
    GetCreateWorkflowInstancesResultResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateWorkflowInstancesResultResponseBodyResult() = default ;
    GetCreateWorkflowInstancesResultResponseBodyResult& operator=(const GetCreateWorkflowInstancesResultResponseBodyResult &) = default ;
    GetCreateWorkflowInstancesResultResponseBodyResult& operator=(GetCreateWorkflowInstancesResultResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureMessage_ == nullptr
        && return this->status_ == nullptr && return this->unifiedWorkflowInstanceIds_ == nullptr && return this->workflowInstanceIds_ == nullptr && return this->workflowTaskInstanceIds_ == nullptr; };
    // failureMessage Field Functions 
    bool hasFailureMessage() const { return this->failureMessage_ != nullptr;};
    void deleteFailureMessage() { this->failureMessage_ = nullptr;};
    inline string failureMessage() const { DARABONBA_PTR_GET_DEFAULT(failureMessage_, "") };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setFailureMessage(string failureMessage) { DARABONBA_PTR_SET_VALUE(failureMessage_, failureMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unifiedWorkflowInstanceIds Field Functions 
    bool hasUnifiedWorkflowInstanceIds() const { return this->unifiedWorkflowInstanceIds_ != nullptr;};
    void deleteUnifiedWorkflowInstanceIds() { this->unifiedWorkflowInstanceIds_ = nullptr;};
    inline const vector<int64_t> & unifiedWorkflowInstanceIds() const { DARABONBA_PTR_GET_CONST(unifiedWorkflowInstanceIds_, vector<int64_t>) };
    inline vector<int64_t> unifiedWorkflowInstanceIds() { DARABONBA_PTR_GET(unifiedWorkflowInstanceIds_, vector<int64_t>) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setUnifiedWorkflowInstanceIds(const vector<int64_t> & unifiedWorkflowInstanceIds) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceIds_, unifiedWorkflowInstanceIds) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setUnifiedWorkflowInstanceIds(vector<int64_t> && unifiedWorkflowInstanceIds) { DARABONBA_PTR_SET_RVALUE(unifiedWorkflowInstanceIds_, unifiedWorkflowInstanceIds) };


    // workflowInstanceIds Field Functions 
    bool hasWorkflowInstanceIds() const { return this->workflowInstanceIds_ != nullptr;};
    void deleteWorkflowInstanceIds() { this->workflowInstanceIds_ = nullptr;};
    inline const vector<int64_t> & workflowInstanceIds() const { DARABONBA_PTR_GET_CONST(workflowInstanceIds_, vector<int64_t>) };
    inline vector<int64_t> workflowInstanceIds() { DARABONBA_PTR_GET(workflowInstanceIds_, vector<int64_t>) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setWorkflowInstanceIds(const vector<int64_t> & workflowInstanceIds) { DARABONBA_PTR_SET_VALUE(workflowInstanceIds_, workflowInstanceIds) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setWorkflowInstanceIds(vector<int64_t> && workflowInstanceIds) { DARABONBA_PTR_SET_RVALUE(workflowInstanceIds_, workflowInstanceIds) };


    // workflowTaskInstanceIds Field Functions 
    bool hasWorkflowTaskInstanceIds() const { return this->workflowTaskInstanceIds_ != nullptr;};
    void deleteWorkflowTaskInstanceIds() { this->workflowTaskInstanceIds_ = nullptr;};
    inline const vector<int64_t> & workflowTaskInstanceIds() const { DARABONBA_PTR_GET_CONST(workflowTaskInstanceIds_, vector<int64_t>) };
    inline vector<int64_t> workflowTaskInstanceIds() { DARABONBA_PTR_GET(workflowTaskInstanceIds_, vector<int64_t>) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setWorkflowTaskInstanceIds(const vector<int64_t> & workflowTaskInstanceIds) { DARABONBA_PTR_SET_VALUE(workflowTaskInstanceIds_, workflowTaskInstanceIds) };
    inline GetCreateWorkflowInstancesResultResponseBodyResult& setWorkflowTaskInstanceIds(vector<int64_t> && workflowTaskInstanceIds) { DARABONBA_PTR_SET_RVALUE(workflowTaskInstanceIds_, workflowTaskInstanceIds) };


  protected:
    // The error message. This parameter is returned only if the creation fails.
    std::shared_ptr<string> failureMessage_ = nullptr;
    // The creation status. Valid values:
    // 
    // *   Creating
    // *   Created
    // *   CreateFailure
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<int64_t>> unifiedWorkflowInstanceIds_ = nullptr;
    // The workflow instance IDs. This parameter is returned only if the creation is successful.
    std::shared_ptr<vector<int64_t>> workflowInstanceIds_ = nullptr;
    std::shared_ptr<vector<int64_t>> workflowTaskInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
