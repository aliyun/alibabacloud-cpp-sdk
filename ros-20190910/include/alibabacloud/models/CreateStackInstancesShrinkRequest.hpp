// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKINSTANCESSHRINKREQUEST_HPP_
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

    virtual bool empty() const override { return this->accountIdsShrink_ == nullptr
        && this->clientToken_ == nullptr && this->deploymentOptions_ == nullptr && this->deploymentTargetsShrink_ == nullptr && this->disableRollback_ == nullptr && this->operationDescription_ == nullptr
        && this->operationPreferencesShrink_ == nullptr && this->parameterOverrides_ == nullptr && this->regionId_ == nullptr && this->regionIdsShrink_ == nullptr && this->stackGroupName_ == nullptr
        && this->timeoutInMinutes_ == nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string getAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackInstancesShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentOptions Field Functions 
    bool hasDeploymentOptions() const { return this->deploymentOptions_ != nullptr;};
    void deleteDeploymentOptions() { this->deploymentOptions_ = nullptr;};
    inline const vector<string> & getDeploymentOptions() const { DARABONBA_PTR_GET_CONST(deploymentOptions_, vector<string>) };
    inline vector<string> getDeploymentOptions() { DARABONBA_PTR_GET(deploymentOptions_, vector<string>) };
    inline CreateStackInstancesShrinkRequest& setDeploymentOptions(const vector<string> & deploymentOptions) { DARABONBA_PTR_SET_VALUE(deploymentOptions_, deploymentOptions) };
    inline CreateStackInstancesShrinkRequest& setDeploymentOptions(vector<string> && deploymentOptions) { DARABONBA_PTR_SET_RVALUE(deploymentOptions_, deploymentOptions) };


    // deploymentTargetsShrink Field Functions 
    bool hasDeploymentTargetsShrink() const { return this->deploymentTargetsShrink_ != nullptr;};
    void deleteDeploymentTargetsShrink() { this->deploymentTargetsShrink_ = nullptr;};
    inline string getDeploymentTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetsShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setDeploymentTargetsShrink(string deploymentTargetsShrink) { DARABONBA_PTR_SET_VALUE(deploymentTargetsShrink_, deploymentTargetsShrink) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateStackInstancesShrinkRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string getOperationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline CreateStackInstancesShrinkRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferencesShrink Field Functions 
    bool hasOperationPreferencesShrink() const { return this->operationPreferencesShrink_ != nullptr;};
    void deleteOperationPreferencesShrink() { this->operationPreferencesShrink_ = nullptr;};
    inline string getOperationPreferencesShrink() const { DARABONBA_PTR_GET_DEFAULT(operationPreferencesShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setOperationPreferencesShrink(string operationPreferencesShrink) { DARABONBA_PTR_SET_VALUE(operationPreferencesShrink_, operationPreferencesShrink) };


    // parameterOverrides Field Functions 
    bool hasParameterOverrides() const { return this->parameterOverrides_ != nullptr;};
    void deleteParameterOverrides() { this->parameterOverrides_ = nullptr;};
    inline const vector<CreateStackInstancesShrinkRequest::ParameterOverrides> & getParameterOverrides() const { DARABONBA_PTR_GET_CONST(parameterOverrides_, vector<CreateStackInstancesShrinkRequest::ParameterOverrides>) };
    inline vector<CreateStackInstancesShrinkRequest::ParameterOverrides> getParameterOverrides() { DARABONBA_PTR_GET(parameterOverrides_, vector<CreateStackInstancesShrinkRequest::ParameterOverrides>) };
    inline CreateStackInstancesShrinkRequest& setParameterOverrides(const vector<CreateStackInstancesShrinkRequest::ParameterOverrides> & parameterOverrides) { DARABONBA_PTR_SET_VALUE(parameterOverrides_, parameterOverrides) };
    inline CreateStackInstancesShrinkRequest& setParameterOverrides(vector<CreateStackInstancesShrinkRequest::ParameterOverrides> && parameterOverrides) { DARABONBA_PTR_SET_RVALUE(parameterOverrides_, parameterOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStackInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string getRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline CreateStackInstancesShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline CreateStackInstancesShrinkRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline CreateStackInstancesShrinkRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    shared_ptr<string> accountIdsShrink_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, hyphens (-), and underscores (_), and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<string>> deploymentOptions_ {};
    // The folders in which ROS deploy stacks in service-managed permission model.
    // 
    // > You must specify one of the following parameters: `AccountIds` and `DeploymentTargets`.
    shared_ptr<string> deploymentTargetsShrink_ {};
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
    shared_ptr<string> operationPreferencesShrink_ {};
    // The parameters that are used to override specific parameters.
    shared_ptr<vector<CreateStackInstancesShrinkRequest::ParameterOverrides>> parameterOverrides_ {};
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of the regions where you want to create the stacks. You can specify up to 20 region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionIdsShrink_ {};
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
