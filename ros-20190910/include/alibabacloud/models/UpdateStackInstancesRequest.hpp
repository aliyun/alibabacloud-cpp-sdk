// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStackInstancesRequestDeploymentTargets.hpp>
#include <alibabacloud/models/UpdateStackInstancesRequestParameterOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_ANY_TO_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_TO_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_ANY_FROM_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_FROM_JSON(ParameterOverrides, parameterOverrides_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    UpdateStackInstancesRequest() = default ;
    UpdateStackInstancesRequest(const UpdateStackInstancesRequest &) = default ;
    UpdateStackInstancesRequest(UpdateStackInstancesRequest &&) = default ;
    UpdateStackInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackInstancesRequest() = default ;
    UpdateStackInstancesRequest& operator=(const UpdateStackInstancesRequest &) = default ;
    UpdateStackInstancesRequest& operator=(UpdateStackInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr
        && this->clientToken_ != nullptr && this->deploymentTargets_ != nullptr && this->operationDescription_ != nullptr && this->operationPreferences_ != nullptr && this->parameterOverrides_ != nullptr
        && this->regionId_ != nullptr && this->regionIds_ != nullptr && this->stackGroupName_ != nullptr && this->timeoutInMinutes_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline UpdateStackInstancesRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline UpdateStackInstancesRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentTargets Field Functions 
    bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
    void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
    inline const UpdateStackInstancesRequestDeploymentTargets & deploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, UpdateStackInstancesRequestDeploymentTargets) };
    inline UpdateStackInstancesRequestDeploymentTargets deploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, UpdateStackInstancesRequestDeploymentTargets) };
    inline UpdateStackInstancesRequest& setDeploymentTargets(const UpdateStackInstancesRequestDeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
    inline UpdateStackInstancesRequest& setDeploymentTargets(UpdateStackInstancesRequestDeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline UpdateStackInstancesRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline     const Darabonba::Json & operationPreferences() const { DARABONBA_GET(operationPreferences_) };
    Darabonba::Json & operationPreferences() { DARABONBA_GET(operationPreferences_) };
    inline UpdateStackInstancesRequest& setOperationPreferences(const Darabonba::Json & operationPreferences) { DARABONBA_SET_VALUE(operationPreferences_, operationPreferences) };
    inline UpdateStackInstancesRequest& setOperationPreferences(Darabonba::Json & operationPreferences) { DARABONBA_SET_RVALUE(operationPreferences_, operationPreferences) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<UpdateStackInstancesRequestParameterOverrides> & parameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<UpdateStackInstancesRequestParameterOverrides>) };
    inline vector<UpdateStackInstancesRequestParameterOverrides> parameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<UpdateStackInstancesRequestParameterOverrides>) };
    inline UpdateStackInstancesRequest& setParameterOverrides(const vector<UpdateStackInstancesRequestParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline UpdateStackInstancesRequest& setParameterOverrides(vector<UpdateStackInstancesRequestParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStackInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline UpdateStackInstancesRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline UpdateStackInstancesRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline UpdateStackInstancesRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline UpdateStackInstancesRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > If you want to update stacks in self-managed permission mode, you must specify this parameter.
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_), and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The folders in which you want to deploy stacks in service-managed mode.
    // 
    // > If you want to update stacks in service-managed permission mode, you must specify this parameter.
    std::shared_ptr<UpdateStackInstancesRequestDeploymentTargets> deploymentTargets_ = nullptr;
    // The description of the update operation.
    // 
    // The description must be 1 to 256 characters in length.
    std::shared_ptr<string> operationDescription_ = nullptr;
    // The preference settings of the update operation.
    // 
    // The following parameters are available:
    // -  {"FailureToleranceCount": N}
    // 
    //     The number of accounts within which stack operation failures are allowed in each region. If the value of this parameter is exceeded in a region, ROS stops the operation in the region. If ROS stops the operation in one region, ROS stops the operation in other regions.
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
    //     The maximum number of accounts within which multiple stacks are deployed at the same time in each region.
    // 
    //     Valid values of N: 1 to 20.
    // 
    //     If you do not specify MaxConcurrentCount, 1 is used as the default value.
    // 
    // - {"MaxConcurrentPercentage": N}
    // 
    //     The percentage of the maximum number of accounts within which stacks are deployed at the same time to the total number of accounts in each region.
    // 
    //     Valid values: 1 to 100. If the numeric value in the percentage is not an integer, ROS rounds the value down to the nearest integer.
    // 
    //     If you do not specify MaxConcurrentPercentage, 1 is used as the default value.
    // 
    // - {"RegionConcurrencyType": N}
    // 
    //   The mode that you want to use to deploy stacks across regions. Valid values:
    //   - SEQUENTIAL (default): deploys stacks in the specified regions one by one in sequence. This way, ROS deploys stacks in only one region at a time. 
    // 
    //    - PARALLEL: deploys stacks in all the specified regions in parallel. 
    // 
    // Separate multiple parameters with commas (,).
    // 
    // > - You can specify only one of the following parameters: MaxConcurrentCount and MaxConcurrentPercentage.
    // > - You can specify only one of the following parameters: FailureToleranceCount and FailureTolerancePercentage.
    Darabonba::Json operationPreferences_ = nullptr;
    // The parameters that are used to override specific parameters.
    std::shared_ptr<vector<UpdateStackInstancesRequestParameterOverrides>> parameterOverrides_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the regions where you want to update the stacks. You can specify up to 20 region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The timeout period for the update operation.
    // 
    // *   Default value: 60.
    // *   Unit: minutes.
    std::shared_ptr<int64_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
