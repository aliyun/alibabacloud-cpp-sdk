// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECROSSBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECROSSBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyInstanceCrossBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceCrossBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEnabled, backupEnabled_);
      DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_TO_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(LogBackupEnabled, logBackupEnabled_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetentType, retentType_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceCrossBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEnabled, backupEnabled_);
      DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_FROM_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogBackupEnabled, logBackupEnabled_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetentType, retentType_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
    };
    ModifyInstanceCrossBackupPolicyRequest() = default ;
    ModifyInstanceCrossBackupPolicyRequest(const ModifyInstanceCrossBackupPolicyRequest &) = default ;
    ModifyInstanceCrossBackupPolicyRequest(ModifyInstanceCrossBackupPolicyRequest &&) = default ;
    ModifyInstanceCrossBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceCrossBackupPolicyRequest() = default ;
    ModifyInstanceCrossBackupPolicyRequest& operator=(const ModifyInstanceCrossBackupPolicyRequest &) = default ;
    ModifyInstanceCrossBackupPolicyRequest& operator=(ModifyInstanceCrossBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEnabled_ == nullptr
        && this->crossBackupRegion_ == nullptr && this->crossBackupType_ == nullptr && this->DBInstanceId_ == nullptr && this->logBackupEnabled_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->retentType_ == nullptr && this->retention_ == nullptr; };
    // backupEnabled Field Functions 
    bool hasBackupEnabled() const { return this->backupEnabled_ != nullptr;};
    void deleteBackupEnabled() { this->backupEnabled_ = nullptr;};
    inline string getBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(backupEnabled_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setBackupEnabled(string backupEnabled) { DARABONBA_PTR_SET_VALUE(backupEnabled_, backupEnabled) };


    // crossBackupRegion Field Functions 
    bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
    void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
    inline string getCrossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


    // crossBackupType Field Functions 
    bool hasCrossBackupType() const { return this->crossBackupType_ != nullptr;};
    void deleteCrossBackupType() { this->crossBackupType_ = nullptr;};
    inline string getCrossBackupType() const { DARABONBA_PTR_GET_DEFAULT(crossBackupType_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setCrossBackupType(string crossBackupType) { DARABONBA_PTR_SET_VALUE(crossBackupType_, crossBackupType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // logBackupEnabled Field Functions 
    bool hasLogBackupEnabled() const { return this->logBackupEnabled_ != nullptr;};
    void deleteLogBackupEnabled() { this->logBackupEnabled_ = nullptr;};
    inline string getLogBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(logBackupEnabled_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setLogBackupEnabled(string logBackupEnabled) { DARABONBA_PTR_SET_VALUE(logBackupEnabled_, logBackupEnabled) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceCrossBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceCrossBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceCrossBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retentType Field Functions 
    bool hasRetentType() const { return this->retentType_ != nullptr;};
    void deleteRetentType() { this->retentType_ = nullptr;};
    inline int32_t getRetentType() const { DARABONBA_PTR_GET_DEFAULT(retentType_, 0) };
    inline ModifyInstanceCrossBackupPolicyRequest& setRetentType(int32_t retentType) { DARABONBA_PTR_SET_VALUE(retentType_, retentType) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ModifyInstanceCrossBackupPolicyRequest& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


  protected:
    // Specifies whether to enable the cross-region backup feature on the instance. This parameter specifies whether you can back up data and logs. Valid values:
    // 
    // *   **0**: disables the feature.
    // *   **1:** enables the feature.
    // 
    // > Before you enable the cross-region backup feature, you must configure the CrossBackupRegion parameter.
    shared_ptr<string> backupEnabled_ {};
    // The ID of the region in which the cross-region backup files of the instance are stored.
    shared_ptr<string> crossBackupRegion_ {};
    // The policy that is used to save the cross-region backup files of the instance. Set the value to **1**. The value 1 specifies that all cross-region backup files are saved.
    shared_ptr<string> crossBackupType_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Specifies whether to enable the cross-region log backup feature on the instance. Valid values:
    // 
    // *   **0**: disables the feature.
    // *   **1:** enables the feature.
    // 
    // > You can enable the cross-region log backup feature only when the cross-region backup feature is enabled.
    shared_ptr<string> logBackupEnabled_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the source instance. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The policy that is used to retain the cross-region backup files of the instance. Set the value to 1. The value **1** specifies that the cross-region backup files of the instance are retained based on the specified retention period.
    shared_ptr<int32_t> retentType_ {};
    // The number of days for which the cross-region backup files of the instance are retained. Valid values: **7 to 1825**.
    shared_ptr<int32_t> retention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
