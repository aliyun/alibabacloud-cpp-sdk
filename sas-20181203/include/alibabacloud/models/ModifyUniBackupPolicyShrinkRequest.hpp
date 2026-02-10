// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUNIBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUNIBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyUniBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUniBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(FullPlan, fullPlanShrink_);
      DARABONBA_PTR_TO_JSON(IncPlan, incPlanShrink_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SpeedLimiter, speedLimiter_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUniBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(FullPlan, fullPlanShrink_);
      DARABONBA_PTR_FROM_JSON(IncPlan, incPlanShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SpeedLimiter, speedLimiter_);
    };
    ModifyUniBackupPolicyShrinkRequest() = default ;
    ModifyUniBackupPolicyShrinkRequest(const ModifyUniBackupPolicyShrinkRequest &) = default ;
    ModifyUniBackupPolicyShrinkRequest(ModifyUniBackupPolicyShrinkRequest &&) = default ;
    ModifyUniBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUniBackupPolicyShrinkRequest() = default ;
    ModifyUniBackupPolicyShrinkRequest& operator=(const ModifyUniBackupPolicyShrinkRequest &) = default ;
    ModifyUniBackupPolicyShrinkRequest& operator=(ModifyUniBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPassword_ == nullptr && this->fullPlanShrink_ == nullptr && this->incPlanShrink_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policyStatus_ == nullptr && this->retention_ == nullptr && this->speedLimiter_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyUniBackupPolicyShrinkRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline ModifyUniBackupPolicyShrinkRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // fullPlanShrink Field Functions 
    bool hasFullPlanShrink() const { return this->fullPlanShrink_ != nullptr;};
    void deleteFullPlanShrink() { this->fullPlanShrink_ = nullptr;};
    inline string getFullPlanShrink() const { DARABONBA_PTR_GET_DEFAULT(fullPlanShrink_, "") };
    inline ModifyUniBackupPolicyShrinkRequest& setFullPlanShrink(string fullPlanShrink) { DARABONBA_PTR_SET_VALUE(fullPlanShrink_, fullPlanShrink) };


    // incPlanShrink Field Functions 
    bool hasIncPlanShrink() const { return this->incPlanShrink_ != nullptr;};
    void deleteIncPlanShrink() { this->incPlanShrink_ = nullptr;};
    inline string getIncPlanShrink() const { DARABONBA_PTR_GET_DEFAULT(incPlanShrink_, "") };
    inline ModifyUniBackupPolicyShrinkRequest& setIncPlanShrink(string incPlanShrink) { DARABONBA_PTR_SET_VALUE(incPlanShrink_, incPlanShrink) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ModifyUniBackupPolicyShrinkRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ModifyUniBackupPolicyShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline ModifyUniBackupPolicyShrinkRequest& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ModifyUniBackupPolicyShrinkRequest& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // speedLimiter Field Functions 
    bool hasSpeedLimiter() const { return this->speedLimiter_ != nullptr;};
    void deleteSpeedLimiter() { this->speedLimiter_ = nullptr;};
    inline int64_t getSpeedLimiter() const { DARABONBA_PTR_GET_DEFAULT(speedLimiter_, 0L) };
    inline ModifyUniBackupPolicyShrinkRequest& setSpeedLimiter(int64_t speedLimiter) { DARABONBA_PTR_SET_VALUE(speedLimiter_, speedLimiter) };


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
    shared_ptr<string> fullPlanShrink_ {};
    // The policy for incremental backup. The value of this parameter is a JSON string that contains the following fields:
    // 
    // *   **start**: the start time of a backup task
    // *   **interval**: the interval of backup tasks
    // *   **type**: the unit of the interval
    // *   **days**: the days of a week on which a backup task is performed
    shared_ptr<string> incPlanShrink_ {};
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
