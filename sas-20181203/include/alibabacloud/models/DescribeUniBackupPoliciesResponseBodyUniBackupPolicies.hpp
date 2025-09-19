// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICIESRESPONSEBODYUNIBACKUPPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICIESRESPONSEBODYUNIBACKUPPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPoliciesResponseBodyUniBackupPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AgentErrorMessage, agentErrorMessage_);
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(LatestBackResult, latestBackResult_);
      DARABONBA_PTR_TO_JSON(LatestBackupTime, latestBackupTime_);
      DARABONBA_PTR_TO_JSON(PlanStatus, planStatus_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(UniRegionId, uniRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentErrorMessage, agentErrorMessage_);
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(LatestBackResult, latestBackResult_);
      DARABONBA_PTR_FROM_JSON(LatestBackupTime, latestBackupTime_);
      DARABONBA_PTR_FROM_JSON(PlanStatus, planStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(UniRegionId, uniRegionId_);
    };
    DescribeUniBackupPoliciesResponseBodyUniBackupPolicies() = default ;
    DescribeUniBackupPoliciesResponseBodyUniBackupPolicies(const DescribeUniBackupPoliciesResponseBodyUniBackupPolicies &) = default ;
    DescribeUniBackupPoliciesResponseBodyUniBackupPolicies(DescribeUniBackupPoliciesResponseBodyUniBackupPolicies &&) = default ;
    DescribeUniBackupPoliciesResponseBodyUniBackupPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPoliciesResponseBodyUniBackupPolicies() = default ;
    DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& operator=(const DescribeUniBackupPoliciesResponseBodyUniBackupPolicies &) = default ;
    DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& operator=(DescribeUniBackupPoliciesResponseBodyUniBackupPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentErrorMessage_ != nullptr
        && this->agentStatus_ != nullptr && this->databaseName_ != nullptr && this->databaseType_ != nullptr && this->errorCode_ != nullptr && this->errorMessage_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceStatus_ != nullptr && this->instanceUuid_ != nullptr && this->latestBackResult_ != nullptr
        && this->latestBackupTime_ != nullptr && this->planStatus_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyStatus_ != nullptr
        && this->uniRegionId_ != nullptr; };
    // agentErrorMessage Field Functions 
    bool hasAgentErrorMessage() const { return this->agentErrorMessage_ != nullptr;};
    void deleteAgentErrorMessage() { this->agentErrorMessage_ = nullptr;};
    inline string agentErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(agentErrorMessage_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setAgentErrorMessage(string agentErrorMessage) { DARABONBA_PTR_SET_VALUE(agentErrorMessage_, agentErrorMessage) };


    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string instanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // latestBackResult Field Functions 
    bool hasLatestBackResult() const { return this->latestBackResult_ != nullptr;};
    void deleteLatestBackResult() { this->latestBackResult_ = nullptr;};
    inline string latestBackResult() const { DARABONBA_PTR_GET_DEFAULT(latestBackResult_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setLatestBackResult(string latestBackResult) { DARABONBA_PTR_SET_VALUE(latestBackResult_, latestBackResult) };


    // latestBackupTime Field Functions 
    bool hasLatestBackupTime() const { return this->latestBackupTime_ != nullptr;};
    void deleteLatestBackupTime() { this->latestBackupTime_ = nullptr;};
    inline string latestBackupTime() const { DARABONBA_PTR_GET_DEFAULT(latestBackupTime_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setLatestBackupTime(string latestBackupTime) { DARABONBA_PTR_SET_VALUE(latestBackupTime_, latestBackupTime) };


    // planStatus Field Functions 
    bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
    void deletePlanStatus() { this->planStatus_ = nullptr;};
    inline string planStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // uniRegionId Field Functions 
    bool hasUniRegionId() const { return this->uniRegionId_ != nullptr;};
    void deleteUniRegionId() { this->uniRegionId_ = nullptr;};
    inline string uniRegionId() const { DARABONBA_PTR_GET_DEFAULT(uniRegionId_, "") };
    inline DescribeUniBackupPoliciesResponseBodyUniBackupPolicies& setUniRegionId(string uniRegionId) { DARABONBA_PTR_SET_VALUE(uniRegionId_, uniRegionId) };


  protected:
    // The error message for the anti-ransomware agent.
    std::shared_ptr<string> agentErrorMessage_ = nullptr;
    // The status of the agent. Valid values:
    // 
    // *   **UNKNOWN**
    // *   **INSTALLED**
    // *   **INSTALL_FAILED**
    // *   **UNINSTALL_FAILED**
    std::shared_ptr<string> agentStatus_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **MYSQL**
    // *   **MSSQL**
    // *   **Oracle**
    std::shared_ptr<string> databaseType_ = nullptr;
    // The error code returned when the backup task fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message for the anti-ransomware policy.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The status of the Elastic Compute Service (ECS) instance. Valid values:
    // 
    // *   **Stopped**
    // *   **Running**
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The UUID of the agent that is used to back up the data of the database.
    std::shared_ptr<string> instanceUuid_ = nullptr;
    // The execution result of the last backup task.
    std::shared_ptr<string> latestBackResult_ = nullptr;
    // The time when the last backup task was executed.
    std::shared_ptr<string> latestBackupTime_ = nullptr;
    // The status of the backup task. Valid values:
    // 
    // *   **init**
    // *   **running**
    // *   **completed**
    // *   **restoring**
    // *   **creating**
    // *   **created**
    std::shared_ptr<string> planStatus_ = nullptr;
    // The ID of the anti-ransomware policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the anti-ransomware policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The status of the anti-ransomware policy. Valid values:
    // 
    // *   **initiating**
    // *   **opening**
    // *   **closing**
    // *   **deleting**
    // *   **enabled**
    // *   **disabled**
    std::shared_ptr<string> policyStatus_ = nullptr;
    // The region ID of the server that hosts the database.
    std::shared_ptr<string> uniRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
