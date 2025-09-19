// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODYUNIBACKUPPOLICYDTO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODYUNIBACKUPPOLICYDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan.hpp>
#include <alibabacloud/models/DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(FullPlan, fullPlan_);
      DARABONBA_PTR_TO_JSON(IncPlan, incPlan_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SpeedLimiter, speedLimiter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(FullPlan, fullPlan_);
      DARABONBA_PTR_FROM_JSON(IncPlan, incPlan_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SpeedLimiter, speedLimiter_);
    };
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO() = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO(const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO &) = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO(DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO &&) = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO() = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& operator=(const DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO &) = default ;
    DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& operator=(DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->agentStatus_ != nullptr && this->databaseType_ != nullptr && this->fullPlan_ != nullptr && this->incPlan_ != nullptr && this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyStatus_ != nullptr && this->retention_ != nullptr
        && this->speedLimiter_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // fullPlan Field Functions 
    bool hasFullPlan() const { return this->fullPlan_ != nullptr;};
    void deleteFullPlan() { this->fullPlan_ = nullptr;};
    inline const Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan & fullPlan() const { DARABONBA_PTR_GET_CONST(fullPlan_, Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan) };
    inline Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan fullPlan() { DARABONBA_PTR_GET(fullPlan_, Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setFullPlan(const Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan & fullPlan) { DARABONBA_PTR_SET_VALUE(fullPlan_, fullPlan) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setFullPlan(Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan && fullPlan) { DARABONBA_PTR_SET_RVALUE(fullPlan_, fullPlan) };


    // incPlan Field Functions 
    bool hasIncPlan() const { return this->incPlan_ != nullptr;};
    void deleteIncPlan() { this->incPlan_ = nullptr;};
    inline const Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan & incPlan() const { DARABONBA_PTR_GET_CONST(incPlan_, Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan) };
    inline Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan incPlan() { DARABONBA_PTR_GET(incPlan_, Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setIncPlan(const Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan & incPlan) { DARABONBA_PTR_SET_VALUE(incPlan_, incPlan) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setIncPlan(Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan && incPlan) { DARABONBA_PTR_SET_RVALUE(incPlan_, incPlan) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // speedLimiter Field Functions 
    bool hasSpeedLimiter() const { return this->speedLimiter_ != nullptr;};
    void deleteSpeedLimiter() { this->speedLimiter_ = nullptr;};
    inline int64_t speedLimiter() const { DARABONBA_PTR_GET_DEFAULT(speedLimiter_, 0L) };
    inline DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTO& setSpeedLimiter(int64_t speedLimiter) { DARABONBA_PTR_SET_VALUE(speedLimiter_, speedLimiter) };


  protected:
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The status of the database client. Valid values:
    // 
    // *   **UNKNOWN**: unknown
    // *   **INSTALLED**: installed
    // *   **INSTALL_FAILED**: installation failed
    // *   **UNINSTALL_FAILED**: uninstallation failed
    std::shared_ptr<string> agentStatus_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **MYSQL**
    // *   **MSSQL**
    // *   **Oracle**
    std::shared_ptr<string> databaseType_ = nullptr;
    // The details of the policy for full backup.
    std::shared_ptr<Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOFullPlan> fullPlan_ = nullptr;
    // The policy for incremental data backup.
    std::shared_ptr<Models::DescribeUniBackupPolicyDetailResponseBodyUniBackupPolicyDTOIncPlan> incPlan_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The ID of the anti-ransomware policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the anti-ransomware policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The status of the anti-ransomware policy. Valid values:
    // 
    // *   **initiating**: initializing
    // *   **opening**: enabled
    // *   **closing**: disabled
    // *   **deleting**: deleting
    std::shared_ptr<string> policyStatus_ = nullptr;
    // The retention period of the backup snapshot.
    std::shared_ptr<int32_t> retention_ = nullptr;
    // The maximum network bandwidth that is allowed during data backup. Unit: bytes.
    std::shared_ptr<int64_t> speedLimiter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
