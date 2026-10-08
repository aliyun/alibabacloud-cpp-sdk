// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodesShrink_);
      DARABONBA_PTR_TO_JSON(EffectiveSpecificTime, effectiveSpecificTime_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(MigrateAZ, migrateAZShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodesShrink_);
      DARABONBA_PTR_FROM_JSON(EffectiveSpecificTime, effectiveSpecificTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(MigrateAZ, migrateAZShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    ModifyDBProxyInstanceShrinkRequest() = default ;
    ModifyDBProxyInstanceShrinkRequest(const ModifyDBProxyInstanceShrinkRequest &) = default ;
    ModifyDBProxyInstanceShrinkRequest(ModifyDBProxyInstanceShrinkRequest &&) = default ;
    ModifyDBProxyInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyInstanceShrinkRequest() = default ;
    ModifyDBProxyInstanceShrinkRequest& operator=(const ModifyDBProxyInstanceShrinkRequest &) = default ;
    ModifyDBProxyInstanceShrinkRequest& operator=(ModifyDBProxyInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBProxyEngineType_ == nullptr && this->DBProxyInstanceNum_ == nullptr && this->DBProxyInstanceType_ == nullptr && this->DBProxyNodesShrink_ == nullptr && this->effectiveSpecificTime_ == nullptr
        && this->effectiveTime_ == nullptr && this->migrateAZShrink_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->vSwitchIds_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceNum Field Functions 
    bool hasDBProxyInstanceNum() const { return this->DBProxyInstanceNum_ != nullptr;};
    void deleteDBProxyInstanceNum() { this->DBProxyInstanceNum_ = nullptr;};
    inline string getDBProxyInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceNum_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyInstanceNum(string DBProxyInstanceNum) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceNum_, DBProxyInstanceNum) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string getDBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // DBProxyNodesShrink Field Functions 
    bool hasDBProxyNodesShrink() const { return this->DBProxyNodesShrink_ != nullptr;};
    void deleteDBProxyNodesShrink() { this->DBProxyNodesShrink_ = nullptr;};
    inline string getDBProxyNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBProxyNodesShrink_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyNodesShrink(string DBProxyNodesShrink) { DARABONBA_PTR_SET_VALUE(DBProxyNodesShrink_, DBProxyNodesShrink) };


    // effectiveSpecificTime Field Functions 
    bool hasEffectiveSpecificTime() const { return this->effectiveSpecificTime_ != nullptr;};
    void deleteEffectiveSpecificTime() { this->effectiveSpecificTime_ = nullptr;};
    inline string getEffectiveSpecificTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecificTime_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setEffectiveSpecificTime(string effectiveSpecificTime) { DARABONBA_PTR_SET_VALUE(effectiveSpecificTime_, effectiveSpecificTime) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // migrateAZShrink Field Functions 
    bool hasMigrateAZShrink() const { return this->migrateAZShrink_ != nullptr;};
    void deleteMigrateAZShrink() { this->migrateAZShrink_ = nullptr;};
    inline string getMigrateAZShrink() const { DARABONBA_PTR_GET_DEFAULT(migrateAZShrink_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setMigrateAZShrink(string migrateAZShrink) { DARABONBA_PTR_SET_VALUE(migrateAZShrink_, migrateAZShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBProxyInstanceShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBProxyInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The instance ID. You can call DescribeDBInstances to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // A deprecated parameter. You do not need to configure this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The number of proxy instances. If this parameter is set to 0, the proxy service of this type is disabled for the instance. Valid values: **1** to **16**.
    // > More proxy instances can handle more requests. You can check the load of proxy instances based on monitoring data and then specify an appropriate number of proxy instances.
    // 
    // This parameter is required.
    shared_ptr<string> DBProxyInstanceNum_ {};
    // The type of the database proxy instance. Valid values:
    // - **common**: general-purpose database proxy
    // - **exclusive**: dedicated database proxy (default)
    // 
    // This parameter is required.
    shared_ptr<string> DBProxyInstanceType_ {};
    // The list of proxy nodes.
    // > This parameter is required when the current proxy instance uses multi-active zone deployment.
    shared_ptr<string> DBProxyNodesShrink_ {};
    // The specified time for the modification to take effect. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // > This parameter is required when **EffectiveTime** is set to **SpecificTime**.
    shared_ptr<string> effectiveSpecificTime_ {};
    // The effective period. Valid values:
    // 
    // * **Immediate**: The modification takes effect immediately.
    // * **MaintainTime**: The modification takes effect during the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // * **SpecificTime**: The modification takes effect at a specified time.
    // 
    // Default value: **MaintainTime**.
    shared_ptr<string> effectiveTime_ {};
    // The list of active zones for proxy migration.
    // > Currently, only ApsaraDB RDS for MySQL proxy instances with cloud disks support active zone migration.
    shared_ptr<string> migrateAZShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call DescribeRegions to obtain the region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // A deprecated parameter. You do not need to configure this parameter.
    shared_ptr<string> vSwitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
