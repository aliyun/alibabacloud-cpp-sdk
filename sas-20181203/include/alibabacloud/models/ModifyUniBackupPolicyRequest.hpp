// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUNIBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUNIBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyUniBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUniBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_ANY_TO_JSON(FullPlan, fullPlan_);
      DARABONBA_ANY_TO_JSON(IncPlan, incPlan_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SpeedLimiter, speedLimiter_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUniBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_ANY_FROM_JSON(FullPlan, fullPlan_);
      DARABONBA_ANY_FROM_JSON(IncPlan, incPlan_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SpeedLimiter, speedLimiter_);
    };
    ModifyUniBackupPolicyRequest() = default ;
    ModifyUniBackupPolicyRequest(const ModifyUniBackupPolicyRequest &) = default ;
    ModifyUniBackupPolicyRequest(ModifyUniBackupPolicyRequest &&) = default ;
    ModifyUniBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUniBackupPolicyRequest() = default ;
    ModifyUniBackupPolicyRequest& operator=(const ModifyUniBackupPolicyRequest &) = default ;
    ModifyUniBackupPolicyRequest& operator=(ModifyUniBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPassword_ == nullptr && this->fullPlan_ == nullptr && this->incPlan_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policyStatus_ == nullptr && this->retention_ == nullptr && this->speedLimiter_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyUniBackupPolicyRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline ModifyUniBackupPolicyRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // fullPlan Field Functions 
    bool hasFullPlan() const { return this->fullPlan_ != nullptr;};
    void deleteFullPlan() { this->fullPlan_ = nullptr;};
    inline     const Darabonba::Json & getFullPlan() const { DARABONBA_GET(fullPlan_) };
    Darabonba::Json & getFullPlan() { DARABONBA_GET(fullPlan_) };
    inline ModifyUniBackupPolicyRequest& setFullPlan(const Darabonba::Json & fullPlan) { DARABONBA_SET_VALUE(fullPlan_, fullPlan) };
    inline ModifyUniBackupPolicyRequest& setFullPlan(Darabonba::Json && fullPlan) { DARABONBA_SET_RVALUE(fullPlan_, fullPlan) };


    // incPlan Field Functions 
    bool hasIncPlan() const { return this->incPlan_ != nullptr;};
    void deleteIncPlan() { this->incPlan_ = nullptr;};
    inline     const Darabonba::Json & getIncPlan() const { DARABONBA_GET(incPlan_) };
    Darabonba::Json & getIncPlan() { DARABONBA_GET(incPlan_) };
    inline ModifyUniBackupPolicyRequest& setIncPlan(const Darabonba::Json & incPlan) { DARABONBA_SET_VALUE(incPlan_, incPlan) };
    inline ModifyUniBackupPolicyRequest& setIncPlan(Darabonba::Json && incPlan) { DARABONBA_SET_RVALUE(incPlan_, incPlan) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ModifyUniBackupPolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ModifyUniBackupPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline ModifyUniBackupPolicyRequest& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ModifyUniBackupPolicyRequest& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // speedLimiter Field Functions 
    bool hasSpeedLimiter() const { return this->speedLimiter_ != nullptr;};
    void deleteSpeedLimiter() { this->speedLimiter_ = nullptr;};
    inline int64_t getSpeedLimiter() const { DARABONBA_PTR_GET_DEFAULT(speedLimiter_, 0L) };
    inline ModifyUniBackupPolicyRequest& setSpeedLimiter(int64_t speedLimiter) { DARABONBA_PTR_SET_VALUE(speedLimiter_, speedLimiter) };


  protected:
    // The name of the database account.
    shared_ptr<string> accountName_ {};
    // The password of the database account.
    shared_ptr<string> accountPassword_ {};
    // The policy for full backup. The value of this parameter is a JSON string that contains the following fields:
    // 
    // *   **start**: the start time of a backup task
    // *   **interval**: the interval of backup tasks
    // *   **type**: the unit of the interval
    // *   **days**: the days of a week on which a backup task is performed
    Darabonba::Json fullPlan_ {};
    // The policy for incremental backup. The value of this parameter is a JSON string that contains the following fields:
    // 
    // *   **start**: the start time of a backup task
    // *   **interval**: the interval of backup tasks
    // *   **type**: the unit of the interval
    // *   **days**: the days of a week on which a backup task is performed
    Darabonba::Json incPlan_ {};
    // The ID of the anti-ransomware policy.
    // 
    // > You can call the [DescribeUniBackupPolicies](~~DescribeUniBackupPolicies~~) operation to query the IDs of anti-ransomware policies.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The name of the anti-ransomware policy.
    shared_ptr<string> policyName_ {};
    // The status of the anti-ransomware policy. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    shared_ptr<string> policyStatus_ {};
    // The retention period of the backup snapshot.
    shared_ptr<int32_t> retention_ {};
    // The maximum network bandwidth that is allowed during data backup. Unit: bytes.
    shared_ptr<int64_t> speedLimiter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
