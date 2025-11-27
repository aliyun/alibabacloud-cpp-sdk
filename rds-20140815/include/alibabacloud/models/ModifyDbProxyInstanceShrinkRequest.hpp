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
        && return this->DBProxyEngineType_ == nullptr && return this->DBProxyInstanceNum_ == nullptr && return this->DBProxyInstanceType_ == nullptr && return this->DBProxyNodesShrink_ == nullptr && return this->effectiveSpecificTime_ == nullptr
        && return this->effectiveTime_ == nullptr && return this->migrateAZShrink_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string DBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceNum Field Functions 
    bool hasDBProxyInstanceNum() const { return this->DBProxyInstanceNum_ != nullptr;};
    void deleteDBProxyInstanceNum() { this->DBProxyInstanceNum_ = nullptr;};
    inline string DBProxyInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceNum_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyInstanceNum(string DBProxyInstanceNum) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceNum_, DBProxyInstanceNum) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string DBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // DBProxyNodesShrink Field Functions 
    bool hasDBProxyNodesShrink() const { return this->DBProxyNodesShrink_ != nullptr;};
    void deleteDBProxyNodesShrink() { this->DBProxyNodesShrink_ = nullptr;};
    inline string DBProxyNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(DBProxyNodesShrink_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setDBProxyNodesShrink(string DBProxyNodesShrink) { DARABONBA_PTR_SET_VALUE(DBProxyNodesShrink_, DBProxyNodesShrink) };


    // effectiveSpecificTime Field Functions 
    bool hasEffectiveSpecificTime() const { return this->effectiveSpecificTime_ != nullptr;};
    void deleteEffectiveSpecificTime() { this->effectiveSpecificTime_ = nullptr;};
    inline string effectiveSpecificTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecificTime_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setEffectiveSpecificTime(string effectiveSpecificTime) { DARABONBA_PTR_SET_VALUE(effectiveSpecificTime_, effectiveSpecificTime) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // migrateAZShrink Field Functions 
    bool hasMigrateAZShrink() const { return this->migrateAZShrink_ != nullptr;};
    void deleteMigrateAZShrink() { this->migrateAZShrink_ = nullptr;};
    inline string migrateAZShrink() const { DARABONBA_PTR_GET_DEFAULT(migrateAZShrink_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setMigrateAZShrink(string migrateAZShrink) { DARABONBA_PTR_SET_VALUE(migrateAZShrink_, migrateAZShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBProxyInstanceShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBProxyInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ModifyDBProxyInstanceShrinkRequest& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // A deprecated parameter. You do not need to specify this parameter.
    std::shared_ptr<string> DBProxyEngineType_ = nullptr;
    // The number of database proxies. If you set this parameter to 0, the database proxy feature is disabled for the instance. Valid values: **1** to **16**.
    // 
    // >  The capability of the database proxy feature to process requests increases with the number of database proxies that are enabled. You can monitor the load on the instance and specify an appropriate number of database proxies based on the load monitoring data.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBProxyInstanceNum_ = nullptr;
    // The database proxy type. Valid values:
    // 
    // *   **common**: general-purpose database proxy
    // *   **exclusive** (default): dedicated database proxy
    // 
    // This parameter is required.
    std::shared_ptr<string> DBProxyInstanceType_ = nullptr;
    // List of proxy nodes.
    // 
    // > This parameter must be passed when the current proxy instance is deployed in multiple availability zones.
    std::shared_ptr<string> DBProxyNodesShrink_ = nullptr;
    // The point in time that you want to specify. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  If the **EffectiveTime** parameter is set to **SpecificTime**, you must specify this parameter.
    std::shared_ptr<string> effectiveSpecificTime_ = nullptr;
    // The effective time. Valid values:
    // 
    // *   **Immediate**: The effective time is immediate.
    // *   **MaintainTime**: The effective time is within the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // *   **SpecificTime**: The effective time is a specified point in time.
    // 
    // Default value: **MaintainTime**.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The list of available zones for migration agents.
    // 
    // > Currently, only RDS MySQL cloud disk version agent instance migration is supported.
    std::shared_ptr<string> migrateAZShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the vSwitch in the destination zone. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/610431.html) operation to query existing vSwitches.
    // 
    // >  Only database proxies for ApsaraDB RDS for MySQL instances that use cloud disks can be migrated to different zones.
    std::shared_ptr<string> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
