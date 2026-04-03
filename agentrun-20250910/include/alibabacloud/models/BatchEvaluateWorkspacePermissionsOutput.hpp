// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVALUATEWORKSPACEPERMISSIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVALUATEWORKSPACEPERMISSIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WorkspacePermissionEvaluateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BatchEvaluateWorkspacePermissionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEvaluateWorkspacePermissionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEvaluateWorkspacePermissionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    BatchEvaluateWorkspacePermissionsOutput() = default ;
    BatchEvaluateWorkspacePermissionsOutput(const BatchEvaluateWorkspacePermissionsOutput &) = default ;
    BatchEvaluateWorkspacePermissionsOutput(BatchEvaluateWorkspacePermissionsOutput &&) = default ;
    BatchEvaluateWorkspacePermissionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEvaluateWorkspacePermissionsOutput() = default ;
    BatchEvaluateWorkspacePermissionsOutput& operator=(const BatchEvaluateWorkspacePermissionsOutput &) = default ;
    BatchEvaluateWorkspacePermissionsOutput& operator=(BatchEvaluateWorkspacePermissionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->results_ == nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<WorkspacePermissionEvaluateResult> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<WorkspacePermissionEvaluateResult>) };
    inline vector<WorkspacePermissionEvaluateResult> getResults() { DARABONBA_PTR_GET(results_, vector<WorkspacePermissionEvaluateResult>) };
    inline BatchEvaluateWorkspacePermissionsOutput& setResults(const vector<WorkspacePermissionEvaluateResult> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchEvaluateWorkspacePermissionsOutput& setResults(vector<WorkspacePermissionEvaluateResult> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // 各 workspace 的权限校验结果列表；顺序与请求 workspaceIds 一致
    shared_ptr<vector<WorkspacePermissionEvaluateResult>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
