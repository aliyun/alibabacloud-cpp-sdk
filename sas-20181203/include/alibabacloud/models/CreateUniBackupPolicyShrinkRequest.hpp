// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUNIBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUNIBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateUniBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUniBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(DatabaseAddByUser, databaseAddByUser_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(FullPlan, fullPlanShrink_);
      DARABONBA_PTR_TO_JSON(IncPlan, incPlanShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SpeedLimiter, speedLimiter_);
      DARABONBA_PTR_TO_JSON(UniRegionId, uniRegionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUniBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(DatabaseAddByUser, databaseAddByUser_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(FullPlan, fullPlanShrink_);
      DARABONBA_PTR_FROM_JSON(IncPlan, incPlanShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SpeedLimiter, speedLimiter_);
      DARABONBA_PTR_FROM_JSON(UniRegionId, uniRegionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CreateUniBackupPolicyShrinkRequest() = default ;
    CreateUniBackupPolicyShrinkRequest(const CreateUniBackupPolicyShrinkRequest &) = default ;
    CreateUniBackupPolicyShrinkRequest(CreateUniBackupPolicyShrinkRequest &&) = default ;
    CreateUniBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUniBackupPolicyShrinkRequest() = default ;
    CreateUniBackupPolicyShrinkRequest& operator=(const CreateUniBackupPolicyShrinkRequest &) = default ;
    CreateUniBackupPolicyShrinkRequest& operator=(CreateUniBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountPassword_ != nullptr && this->databaseAddByUser_ != nullptr && this->databaseType_ != nullptr && this->fullPlanShrink_ != nullptr && this->incPlanShrink_ != nullptr
        && this->instanceId_ != nullptr && this->policyName_ != nullptr && this->retention_ != nullptr && this->speedLimiter_ != nullptr && this->uniRegionId_ != nullptr
        && this->uuid_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string accountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // databaseAddByUser Field Functions 
    bool hasDatabaseAddByUser() const { return this->databaseAddByUser_ != nullptr;};
    void deleteDatabaseAddByUser() { this->databaseAddByUser_ = nullptr;};
    inline string databaseAddByUser() const { DARABONBA_PTR_GET_DEFAULT(databaseAddByUser_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setDatabaseAddByUser(string databaseAddByUser) { DARABONBA_PTR_SET_VALUE(databaseAddByUser_, databaseAddByUser) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // fullPlanShrink Field Functions 
    bool hasFullPlanShrink() const { return this->fullPlanShrink_ != nullptr;};
    void deleteFullPlanShrink() { this->fullPlanShrink_ = nullptr;};
    inline string fullPlanShrink() const { DARABONBA_PTR_GET_DEFAULT(fullPlanShrink_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setFullPlanShrink(string fullPlanShrink) { DARABONBA_PTR_SET_VALUE(fullPlanShrink_, fullPlanShrink) };


    // incPlanShrink Field Functions 
    bool hasIncPlanShrink() const { return this->incPlanShrink_ != nullptr;};
    void deleteIncPlanShrink() { this->incPlanShrink_ = nullptr;};
    inline string incPlanShrink() const { DARABONBA_PTR_GET_DEFAULT(incPlanShrink_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setIncPlanShrink(string incPlanShrink) { DARABONBA_PTR_SET_VALUE(incPlanShrink_, incPlanShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline CreateUniBackupPolicyShrinkRequest& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // speedLimiter Field Functions 
    bool hasSpeedLimiter() const { return this->speedLimiter_ != nullptr;};
    void deleteSpeedLimiter() { this->speedLimiter_ = nullptr;};
    inline int64_t speedLimiter() const { DARABONBA_PTR_GET_DEFAULT(speedLimiter_, 0L) };
    inline CreateUniBackupPolicyShrinkRequest& setSpeedLimiter(int64_t speedLimiter) { DARABONBA_PTR_SET_VALUE(speedLimiter_, speedLimiter) };


    // uniRegionId Field Functions 
    bool hasUniRegionId() const { return this->uniRegionId_ != nullptr;};
    void deleteUniRegionId() { this->uniRegionId_ = nullptr;};
    inline string uniRegionId() const { DARABONBA_PTR_GET_DEFAULT(uniRegionId_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setUniRegionId(string uniRegionId) { DARABONBA_PTR_SET_VALUE(uniRegionId_, uniRegionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateUniBackupPolicyShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The password of the database account.
    std::shared_ptr<string> accountPassword_ = nullptr;
    // Specifies whether the database is manually added. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> databaseAddByUser_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **MYSQL**
    // *   **ORACLE**
    // *   **MSSQL**
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseType_ = nullptr;
    // The policy for full data backup. The value of this parameter is a JSON string. The JSON string contains the following fields:
    // 
    // *   **start**: the start time of a backup task.
    // *   **interval**: the interval of backup tasks.
    // *   **type**: the unit of the interval.
    // *   **days**: the days of a week on which a backup task is performed.
    // 
    // This parameter is required.
    std::shared_ptr<string> fullPlanShrink_ = nullptr;
    // The policy for incremental data backup. The value of this parameter is a JSON string. The JSON string contains the following fields:
    // 
    // *   **start**: the start time of a backup task.
    // *   **interval**: the interval of backup tasks.
    // *   **type**: the unit of the interval.
    // *   **days**: the days of a week on which a backup task is performed.
    // 
    // This parameter is required.
    std::shared_ptr<string> incPlanShrink_ = nullptr;
    // The ID of the Elastic Compute Service (ECS) instance.
    // 
    // >  You can call the [DescribeUniBackupDatabase](~~DescribeUniBackupDatabase~~) operation to query the IDs of ECS instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the anti-ransomware policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // The retention period of backup data.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> retention_ = nullptr;
    // The maximum network bandwidth that is allowed during data backup. Unit: bytes.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> speedLimiter_ = nullptr;
    // The region in which the server resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> uniRegionId_ = nullptr;
    // The UUID of the server whose data is backed up based on the anti-ransomware policy.
    // 
    // >  You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
