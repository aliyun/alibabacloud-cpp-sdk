// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKINSTANCERESPONSEBODYSTACKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKINSTANCERESPONSEBODYSTACKINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStackInstanceResponseBodyStackInstanceParameterOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackInstanceResponseBodyStackInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackInstanceResponseBodyStackInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_TO_JSON(RdFolderId, rdFolderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackInstanceResponseBodyStackInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_FROM_JSON(RdFolderId, rdFolderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
    };
    GetStackInstanceResponseBodyStackInstance() = default ;
    GetStackInstanceResponseBodyStackInstance(const GetStackInstanceResponseBodyStackInstance &) = default ;
    GetStackInstanceResponseBodyStackInstance(GetStackInstanceResponseBodyStackInstance &&) = default ;
    GetStackInstanceResponseBodyStackInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackInstanceResponseBodyStackInstance() = default ;
    GetStackInstanceResponseBodyStackInstance& operator=(const GetStackInstanceResponseBodyStackInstance &) = default ;
    GetStackInstanceResponseBodyStackInstance& operator=(GetStackInstanceResponseBodyStackInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->driftDetectionTime_ != nullptr && this->outputs_ != nullptr && this->parameterOverrides_ != nullptr && this->rdFolderId_ != nullptr && this->regionId_ != nullptr
        && this->stackDriftStatus_ != nullptr && this->stackGroupId_ != nullptr && this->stackGroupName_ != nullptr && this->stackId_ != nullptr && this->status_ != nullptr
        && this->statusReason_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Darabonba::Json> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> outputs() { DARABONBA_PTR_GET(outputs_, vector<Darabonba::Json>) };
    inline GetStackInstanceResponseBodyStackInstance& setOutputs(const vector<Darabonba::Json> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline GetStackInstanceResponseBodyStackInstance& setOutputs(vector<Darabonba::Json> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides> & parameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides>) };
    inline vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides> parameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides>) };
    inline GetStackInstanceResponseBodyStackInstance& setParameterOverrides(const vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline GetStackInstanceResponseBodyStackInstance& setParameterOverrides(vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // rdFolderId Field Functions 
    bool hasRdFolderId() const { return this->rdFolderId_ != nullptr;};
    void deleteRdFolderId() { this->rdFolderId_ = nullptr;};
    inline string rdFolderId() const { DARABONBA_PTR_GET_DEFAULT(rdFolderId_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setRdFolderId(string rdFolderId) { DARABONBA_PTR_SET_VALUE(rdFolderId_, rdFolderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackDriftStatus Field Functions 
    bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
    void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
    inline string stackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


    // stackGroupId Field Functions 
    bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
    void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
    inline string stackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetStackInstanceResponseBodyStackInstance& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    // The ID of the destination account to which the stack belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when the most recent successful drift detection was performed on the stack group.
    // 
    // > This parameter is returned only if drift detection is performed on the stack group.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The outputs of the stack.
    // 
    // >  This parameter is returned if OutputOption is set to Enabled.
    std::shared_ptr<vector<Darabonba::Json>> outputs_ = nullptr;
    // The parameters that are used to override specific parameters.
    std::shared_ptr<vector<Models::GetStackInstanceResponseBodyStackInstanceParameterOverrides>> parameterOverrides_ = nullptr;
    // The ID of the folder in the resource directory.
    // 
    // > This parameter is returned only if the stack group is granted service-managed permissions.
    std::shared_ptr<string> rdFolderId_ = nullptr;
    // The region ID of the stack.
    std::shared_ptr<string> regionId_ = nullptr;
    // The state of the stack when the most recent successful drift detection was performed on the stack group.
    // 
    // Valid values:
    // 
    // *   DRIFTED: The stack has drifted.
    // *   NOT_CHECKED: No successful drift detection is performed on the stack.
    // *   IN_SYNC: The stack is being synchronized.
    // 
    // > This parameter is returned only if drift detection is performed on the stack group.
    std::shared_ptr<string> stackDriftStatus_ = nullptr;
    // The ID of the stack group.
    std::shared_ptr<string> stackGroupId_ = nullptr;
    // The name of the stack group.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The stack ID.
    // 
    // > This parameter is returned only if the stack is in the CURRENT state.
    std::shared_ptr<string> stackId_ = nullptr;
    // The state of the stack.
    // 
    // Valid values:
    // 
    // *   CURRENT: The stack is up-to-date with the stack group.
    // 
    // *   OUTDATED: The stack is not up-to-date with the stack group. Stacks are in the OUTDATED state due to the following possible reasons:
    // 
    //     *   When the CreateStackInstances operation is called to create stacks, the stacks fail to be created.
    //     *   When the UpdateStackInstances or UpdateStackGroup operation is called to update stacks, the stacks fail to be updated, or only specific stacks are updated.
    //     *   The creation or update operation is not complete.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the stack instance is in the OUTDATED state.
    // 
    // > This parameter is returned only if the stack instance is in the OUTDATED state.
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
