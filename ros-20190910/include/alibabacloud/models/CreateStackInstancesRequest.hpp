// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUEST_HPP_
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
      // >-   ParameterOverrides is optional.
      // >-   If you specify ParameterOverrides, you must specify ParameterOverrides.N.ParameterKey and ParameterOverrides.N.ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The value of parameter N that you want to use to override a specific parameter. If you do not specify this parameter, ROS uses the value that you specify when you create the stack group.
      // 
      // Maximum value of N: 200.
      // 
      // >-  ParameterOverrides is optional.
      // >-  If you specify ParameterOverrides, you must specify ParameterOverrides.N.ParameterKey and ParameterOverrides.N.ParameterValue.
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
      shared_ptr<vector<string>> accountIds_ {};
      // The folder IDs of the resource directory. You can add up to five folder IDs.
      // 
      // You can create stacks within all the member accounts in the specified folders. If you create stacks in the Root folder, the stacks are created within all member accounts in the resource directory.
      // 
      // > To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information about a folder](https://help.aliyun.com/document_detail/111223.html).
      shared_ptr<vector<string>> rdFolderIds_ {};
    };

    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->clientToken_ == nullptr && this->deploymentOptions_ == nullptr && this->deploymentTargets_ == nullptr && this->disableRollback_ == nullptr && this->operationDescription_ == nullptr
        && this->operationPreferences_ == nullptr && this->parameterOverrides_ == nullptr && this->regionId_ == nullptr && this->regionIds_ == nullptr && this->stackGroupName_ == nullptr
        && this->timeoutInMinutes_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline CreateStackInstancesRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline CreateStackInstancesRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentOptions Field Functions 
    bool hasDeploymentOptions() const { return this->deploymentOptions_ != nullptr;};
    void deleteDeploymentOptions() { this->deploymentOptions_ = nullptr;};
    inline const vector<string> & getDeploymentOptions() const { DARABONBA_PTR_GET_CONST(deploymentOptions_, vector<string>) };
    inline vector<string> getDeploymentOptions() { DARABONBA_PTR_GET(deploymentOptions_, vector<string>) };
    inline CreateStackInstancesRequest& setDeploymentOptions(const vector<string> & deploymentOptions) { DARABONBA_PTR_SET_VALUE(deploymentOptions_, deploymentOptions) };
    inline CreateStackInstancesRequest& setDeploymentOptions(vector<string> && deploymentOptions) { DARABONBA_PTR_SET_RVALUE(deploymentOptions_, deploymentOptions) };


    // deploymentTargets Field Functions 
    bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
    void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
    inline const CreateStackInstancesRequest::DeploymentTargets & getDeploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, CreateStackInstancesRequest::DeploymentTargets) };
    inline CreateStackInstancesRequest::DeploymentTargets getDeploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, CreateStackInstancesRequest::DeploymentTargets) };
    inline CreateStackInstancesRequest& setDeploymentTargets(const CreateStackInstancesRequest::DeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
    inline CreateStackInstancesRequest& setDeploymentTargets(CreateStackInstancesRequest::DeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateStackInstancesRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string getOperationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline CreateStackInstancesRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline     const Darabonba::Json & getOperationPreferences() const { DARABONBA_GET(operationPreferences_) };
    Darabonba::Json & getOperationPreferences() { DARABONBA_GET(operationPreferences_) };
    inline CreateStackInstancesRequest& setOperationPreferences(const Darabonba::Json & operationPreferences) { DARABONBA_SET_VALUE(operationPreferences_, operationPreferences) };
    inline CreateStackInstancesRequest& setOperationPreferences(Darabonba::Json && operationPreferences) { DARABONBA_SET_RVALUE(operationPreferences_, operationPreferences) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<CreateStackInstancesRequest::ParameterOverrides> & getParameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<CreateStackInstancesRequest::ParameterOverrides>) };
    inline vector<CreateStackInstancesRequest::ParameterOverrides> getParameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<CreateStackInstancesRequest::ParameterOverrides>) };
    inline CreateStackInstancesRequest& setParameterOverrides(const vector<CreateStackInstancesRequest::ParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline CreateStackInstancesRequest& setParameterOverrides(vector<CreateStackInstancesRequest::ParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStackInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline CreateStackInstancesRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline CreateStackInstancesRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline CreateStackInstancesRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline CreateStackInstancesRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    shared_ptr<vector<string>> accountIds_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_), and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<string>> deploymentOptions_ {};
    // The folders in which ROS deploy stacks in service-managed permission model.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    shared_ptr<CreateStackInstancesRequest::DeploymentTargets> deploymentTargets_ {};
    // Specifies whether to disable rollback when the stack fails to be created.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> disableRollback_ {};
    // The description of the stack creation operation.
    // 
    // The description must be 1 to 256 characters in length.
    shared_ptr<string> operationDescription_ {};
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
    Darabonba::Json operationPreferences_ {};
    // The parameters that are used to override specific parameters.
    shared_ptr<vector<CreateStackInstancesRequest::ParameterOverrides>> parameterOverrides_ {};
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of the regions where you want to create the stacks. You can specify up to 20 region IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> regionIds_ {};
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
    // 
    // This parameter is required.
    shared_ptr<string> stackGroupName_ {};
    // The timeout period within which you can create the stack.
    // 
    // *   Default value: 60.
    // *   Unit: minutes.
    shared_ptr<int64_t> timeoutInMinutes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
