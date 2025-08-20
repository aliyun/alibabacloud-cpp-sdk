// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateStackInstancesRequestDeploymentTargets.hpp>
#include <alibabacloud/models/CreateStackInstancesRequestParameterOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_ANY_TO_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_TO_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_ANY_FROM_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_FROM_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    CreateStackInstancesRequest() = default ;
    CreateStackInstancesRequest(const CreateStackInstancesRequest &) = default ;
    CreateStackInstancesRequest(CreateStackInstancesRequest &&) = default ;
    CreateStackInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackInstancesRequest() = default ;
    CreateStackInstancesRequest& operator=(const CreateStackInstancesRequest &) = default ;
    CreateStackInstancesRequest& operator=(CreateStackInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr
        && this->clientToken_ != nullptr && this->deploymentOptions_ != nullptr && this->deploymentTargets_ != nullptr && this->disableRollback_ != nullptr && this->operationDescription_ != nullptr
        && this->operationPreferences_ != nullptr && this->parameterOverrides_ != nullptr && this->regionId_ != nullptr && this->regionIds_ != nullptr && this->stackGroupName_ != nullptr
        && this->timeoutInMinutes_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline CreateStackInstancesRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline CreateStackInstancesRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentOptions Field Functions 
    bool hasDeploymentOptions() const { return this->deploymentOptions_ != nullptr;};
    void deleteDeploymentOptions() { this->deploymentOptions_ = nullptr;};
    inline const vector<string> & deploymentOptions() const { DARABONBA_PTR_GET_CONST(deploymentOptions_, vector<string>) };
    inline vector<string> deploymentOptions() { DARABONBA_PTR_GET(deploymentOptions_, vector<string>) };
    inline CreateStackInstancesRequest& setDeploymentOptions(const vector<string> & deploymentOptions) { DARABONBA_PTR_SET_VALUE(deploymentOptions_, deploymentOptions) };
    inline CreateStackInstancesRequest& setDeploymentOptions(vector<string> && deploymentOptions) { DARABONBA_PTR_SET_RVALUE(deploymentOptions_, deploymentOptions) };


    // deploymentTargets Field Functions 
    bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
    void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
    inline const CreateStackInstancesRequestDeploymentTargets & deploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, CreateStackInstancesRequestDeploymentTargets) };
    inline CreateStackInstancesRequestDeploymentTargets deploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, CreateStackInstancesRequestDeploymentTargets) };
    inline CreateStackInstancesRequest& setDeploymentTargets(const CreateStackInstancesRequestDeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
    inline CreateStackInstancesRequest& setDeploymentTargets(CreateStackInstancesRequestDeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateStackInstancesRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline CreateStackInstancesRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline     const Darabonba::Json & operationPreferences() const { DARABONBA_GET(operationPreferences_) };
    Darabonba::Json & operationPreferences() { DARABONBA_GET(operationPreferences_) };
    inline CreateStackInstancesRequest& setOperationPreferences(const Darabonba::Json & operationPreferences) { DARABONBA_SET_VALUE(operationPreferences_, operationPreferences) };
    inline CreateStackInstancesRequest& setOperationPreferences(Darabonba::Json & operationPreferences) { DARABONBA_SET_RVALUE(operationPreferences_, operationPreferences) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<CreateStackInstancesRequestParameterOverrides> & parameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<CreateStackInstancesRequestParameterOverrides>) };
    inline vector<CreateStackInstancesRequestParameterOverrides> parameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<CreateStackInstancesRequestParameterOverrides>) };
    inline CreateStackInstancesRequest& setParameterOverrides(const vector<CreateStackInstancesRequestParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline CreateStackInstancesRequest& setParameterOverrides(vector<CreateStackInstancesRequestParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStackInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline CreateStackInstancesRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline CreateStackInstancesRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline CreateStackInstancesRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline CreateStackInstancesRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_), and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<string>> deploymentOptions_ = nullptr;
    // The folders in which ROS deploy stacks in service-managed permission model.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    std::shared_ptr<CreateStackInstancesRequestDeploymentTargets> deploymentTargets_ = nullptr;
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
    Darabonba::Json operationPreferences_ = nullptr;
    // The parameters that are used to override specific parameters.
    std::shared_ptr<vector<CreateStackInstancesRequestParameterOverrides>> parameterOverrides_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the regions where you want to create the stacks. You can specify up to 20 region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
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
