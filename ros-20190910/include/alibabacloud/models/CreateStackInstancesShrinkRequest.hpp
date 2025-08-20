// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateStackInstancesShrinkRequestParameterOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargetsShrink_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_TO_JSON(OperationPreferences, operationPreferencesShrink_);
      DARABONBA_PTR_TO_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargetsShrink_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_FROM_JSON(OperationPreferences, operationPreferencesShrink_);
      DARABONBA_PTR_FROM_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    CreateStackInstancesShrinkRequest() = default ;
    CreateStackInstancesShrinkRequest(const CreateStackInstancesShrinkRequest &) = default ;
    CreateStackInstancesShrinkRequest(CreateStackInstancesShrinkRequest &&) = default ;
    CreateStackInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackInstancesShrinkRequest() = default ;
    CreateStackInstancesShrinkRequest& operator=(const CreateStackInstancesShrinkRequest &) = default ;
    CreateStackInstancesShrinkRequest& operator=(CreateStackInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIdsShrink_ != nullptr
        && this->clientToken_ != nullptr && this->deploymentOptions_ != nullptr && this->deploymentTargetsShrink_ != nullptr && this->disableRollback_ != nullptr && this->operationDescription_ != nullptr
        && this->operationPreferencesShrink_ != nullptr && this->parameterOverrides_ != nullptr && this->regionId_ != nullptr && this->regionIdsShrink_ != nullptr && this->stackGroupName_ != nullptr
        && this->timeoutInMinutes_ != nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string accountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackInstancesShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentOptions Field Functions 
    bool hasDeploymentOptions() const { return this->deploymentOptions_ != nullptr;};
    void deleteDeploymentOptions() { this->deploymentOptions_ = nullptr;};
    inline const vector<string> & deploymentOptions() const { DARABONBA_PTR_GET_CONST(deploymentOptions_, vector<string>) };
    inline vector<string> deploymentOptions() { DARABONBA_PTR_GET(deploymentOptions_, vector<string>) };
    inline CreateStackInstancesShrinkRequest& setDeploymentOptions(const vector<string> & deploymentOptions) { DARABONBA_PTR_SET_VALUE(deploymentOptions_, deploymentOptions) };
    inline CreateStackInstancesShrinkRequest& setDeploymentOptions(vector<string> && deploymentOptions) { DARABONBA_PTR_SET_RVALUE(deploymentOptions_, deploymentOptions) };


    // deploymentTargetsShrink Field Functions 
    bool hasDeploymentTargetsShrink() const { return this->deploymentTargetsShrink_ != nullptr;};
    void deleteDeploymentTargetsShrink() { this->deploymentTargetsShrink_ = nullptr;};
    inline string deploymentTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetsShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setDeploymentTargetsShrink(string deploymentTargetsShrink) { DARABONBA_PTR_SET_VALUE(deploymentTargetsShrink_, deploymentTargetsShrink) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateStackInstancesShrinkRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline CreateStackInstancesShrinkRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferencesShrink Field Functions 
    bool hasOperationPreferencesShrink() const { return this->operationPreferencesShrink_ != nullptr;};
    void deleteOperationPreferencesShrink() { this->operationPreferencesShrink_ = nullptr;};
    inline string operationPreferencesShrink() const { DARABONBA_PTR_GET_DEFAULT(operationPreferencesShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setOperationPreferencesShrink(string operationPreferencesShrink) { DARABONBA_PTR_SET_VALUE(operationPreferencesShrink_, operationPreferencesShrink) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<CreateStackInstancesShrinkRequestParameterOverrides> & parameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<CreateStackInstancesShrinkRequestParameterOverrides>) };
    inline vector<CreateStackInstancesShrinkRequestParameterOverrides> parameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<CreateStackInstancesShrinkRequestParameterOverrides>) };
    inline CreateStackInstancesShrinkRequest& setParameterOverrides(const vector<CreateStackInstancesShrinkRequestParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline CreateStackInstancesShrinkRequest& setParameterOverrides(vector<CreateStackInstancesShrinkRequestParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStackInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string regionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline CreateStackInstancesShrinkRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline CreateStackInstancesShrinkRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    std::shared_ptr<string> accountIdsShrink_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_), and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<string>> deploymentOptions_ = nullptr;
    // The folders in which ROS deploy stacks in service-managed permission model.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    std::shared_ptr<string> deploymentTargetsShrink_ = nullptr;
    // Specifies whether to disable rollback when the stack fails to be created.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // The description of the stack creation operation.
    // 
    // The description must be 1 to 256 characters in length.
    std::shared_ptr<string> operationDescription_ = nullptr;
    // The preference settings of the stack creation operation.
    // 
    // The following parameters are available:
    // 
    // -  {"FailureToleranceCount": N}
    // 
    //     The number of accounts within which stack operation failures are allowed in each region. If the value of this parameter is exceeded in a region, Resource Orchestration Service (ROS) stops the operation in the region. If ROS stops the operation in one region, ROS stops the operation in other regions.
    // 
    //     Valid values of N: 0 to 20.
    // 
    //     If you do not specify FailureToleranceCount, 0 is used as the default value.
    // 
    // -  {"FailureTolerancePercentage": N}
    // 
    //     The percentage of the number of accounts within which stack operation failures are allowed to the total number of accounts in each region. If the value of this parameter is exceeded, ROS stops the operation in the region.
    // 
    //     Valid values of N: 0 to 100. If the numeric value in the percentage is not an integer, ROS rounds the value down to the nearest integer.
    // 
    //     If you do not specify FailureTolerancePercentage, 0 is used as the default value.
    // 
    // -  {"MaxConcurrentCount": N}
    // 
    //    The maximum number of accounts within which multiple stacks are deployed at the same time in each region.
    // 
    //    Valid values of N: 1 to 20.
    // 
    //    If you do not specify MaxConcurrentCount, 1 is used as the default value.
    // 
    // -  {"MaxConcurrentPercentage": N}
    // 
    //     The percentage of the maximum number of accounts within which multiple stacks are deployed at the same time to the total number of accounts in each region.
    // 
    //     Valid values: 1 to 100. If the numeric value in the percentage is not an integer, ROS rounds the number down to the nearest integer.
    // 
    //     If you do not specify MaxConcurrentPercentage, 1 is used as the default value.
    // 
    // -  {"RegionConcurrencyType": N}\\
    //     The mode that you want to use to deploy stacks across regions. Valid values: 
    //    - SEQUENTIAL (default): deploys stacks in each specified region based on the specified sequence of regions. ROS deploys stacks in one region at a time. 
    //    - PARALLEL: deploys stacks in parallel across all specified regions.
    // 
    // Separate multiple parameters with commas (,).
    // 
    // >-  You can specify only one of the following parameters: MaxConcurrentCount and MaxConcurrentPercentage.
    // >-  You can specify only one of the following parameters: FailureToleranceCount and FailureTolerancePercentage.
    std::shared_ptr<string> operationPreferencesShrink_ = nullptr;
    // The parameters that are used to override specific parameters.
    std::shared_ptr<vector<CreateStackInstancesShrinkRequestParameterOverrides>> parameterOverrides_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the regions where you want to create the stacks. You can specify up to 20 region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionIdsShrink_ = nullptr;
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The timeout period within which you can create the stack.
    // 
    // *   Default value: 60.
    // *   Unit: minutes.
    std::shared_ptr<int64_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
