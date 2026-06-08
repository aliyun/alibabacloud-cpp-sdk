// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ParameterOverrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterOverrides& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterOverrides& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      ParameterOverrides() = default ;
      ParameterOverrides(const ParameterOverrides &) = default ;
      ParameterOverrides(ParameterOverrides &&) = default ;
      ParameterOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterOverrides() = default ;
      ParameterOverrides& operator=(const ParameterOverrides &) = default ;
      ParameterOverrides& operator=(ParameterOverrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline ParameterOverrides& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline ParameterOverrides& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The key of parameter N that you want to use to override a specific parameter. If you do not specify this parameter, ROS uses the name that you specified when you created the stack group.
      // 
      // Maximum value of N: 200.
      // 
      // > -  ParameterOverrides is optional.
      // > - If you specify ParameterOverrides, you must specify ParameterOverrides.N.ParameterKey and ParameterOverrides.N.ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The value of parameter N that you want to use to override a specific parameter. If you do not specify this parameter, ROS uses the value that you specified when you created the stack group.
      // 
      // Maximum value of N: 200.
      // 
      // > -  ParameterOverrides is optional.
      // > - If you specify ParameterOverrides, you must specify ParameterOverrides.N.ParameterKey and ParameterOverrides.N.ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    class DeploymentTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentTargets& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
      };
      DeploymentTargets() = default ;
      DeploymentTargets(const DeploymentTargets &) = default ;
      DeploymentTargets(DeploymentTargets &&) = default ;
      DeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentTargets() = default ;
      DeploymentTargets& operator=(const DeploymentTargets &) = default ;
      DeploymentTargets& operator=(DeploymentTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->rdFolderIds_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
      inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
      inline DeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline DeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // rdFolderIds Field Functions 
      bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
      void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
      inline const vector<string> & getRdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
      inline vector<string> getRdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
      inline DeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
      inline DeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


    protected:
      // The IDs of the member accounts in the resource directory. You can specify up to 20 member account IDs.
      // 
      // > To view the member account IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the details of a member](https://help.aliyun.com/document_detail/111624.html).
      shared_ptr<vector<string>> accountIds_ {};
      // The folder IDs of the resource directory.
      shared_ptr<vector<string>> rdFolderIds_ {};
    };

    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->clientToken_ == nullptr && this->deploymentTargets_ == nullptr && this->operationDescription_ == nullptr && this->operationPreferences_ == nullptr && this->parameterOverrides_ == nullptr
        && this->regionId_ == nullptr && this->regionIds_ == nullptr && this->stackGroupName_ == nullptr && this->timeoutInMinutes_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline UpdateStackInstancesRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline UpdateStackInstancesRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentTargets Field Functions 
    bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
    void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
    inline const UpdateStackInstancesRequest::DeploymentTargets & getDeploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, UpdateStackInstancesRequest::DeploymentTargets) };
    inline UpdateStackInstancesRequest::DeploymentTargets getDeploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, UpdateStackInstancesRequest::DeploymentTargets) };
    inline UpdateStackInstancesRequest& setDeploymentTargets(const UpdateStackInstancesRequest::DeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
    inline UpdateStackInstancesRequest& setDeploymentTargets(UpdateStackInstancesRequest::DeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string getOperationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline UpdateStackInstancesRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline     const Darabonba::Json & getOperationPreferences() const { DARABONBA_GET(operationPreferences_) };
    Darabonba::Json & getOperationPreferences() { DARABONBA_GET(operationPreferences_) };
    inline UpdateStackInstancesRequest& setOperationPreferences(const Darabonba::Json & operationPreferences) { DARABONBA_SET_VALUE(operationPreferences_, operationPreferences) };
    inline UpdateStackInstancesRequest& setOperationPreferences(Darabonba::Json && operationPreferences) { DARABONBA_SET_RVALUE(operationPreferences_, operationPreferences) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<UpdateStackInstancesRequest::ParameterOverrides> & getParameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<UpdateStackInstancesRequest::ParameterOverrides>) };
    inline vector<UpdateStackInstancesRequest::ParameterOverrides> getParameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<UpdateStackInstancesRequest::ParameterOverrides>) };
    inline UpdateStackInstancesRequest& setParameterOverrides(const vector<UpdateStackInstancesRequest::ParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline UpdateStackInstancesRequest& setParameterOverrides(vector<UpdateStackInstancesRequest::ParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStackInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline UpdateStackInstancesRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline UpdateStackInstancesRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline UpdateStackInstancesRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline UpdateStackInstancesRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > If you want to update stacks in self-managed permission mode, you must specify this parameter.
    shared_ptr<vector<string>> accountIds_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_), and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    // The folders in which you want to deploy stacks in service-managed mode.
    // 
    // > If you want to update stacks in service-managed permission mode, you must specify this parameter.
    shared_ptr<UpdateStackInstancesRequest::DeploymentTargets> deploymentTargets_ {};
    // The description of the update operation.
    // 
    // The description must be 1 to 256 characters in length.
    shared_ptr<string> operationDescription_ {};
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
    Darabonba::Json operationPreferences_ {};
    // The parameters that are used to override specific parameters.
    shared_ptr<vector<UpdateStackInstancesRequest::ParameterOverrides>> parameterOverrides_ {};
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of the regions where you want to update the stacks. You can specify up to 20 region IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> regionIds_ {};
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
    // 
    // This parameter is required.
    shared_ptr<string> stackGroupName_ {};
    // The timeout period for the update operation.
    // 
    // *   Default value: 60.
    // *   Unit: minutes.
    shared_ptr<int64_t> timeoutInMinutes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
