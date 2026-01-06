// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_TO_JSON(EffectiveSpecificTime, effectiveSpecificTime_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(MigrateAZ, migrateAZ_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_FROM_JSON(EffectiveSpecificTime, effectiveSpecificTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(MigrateAZ, migrateAZ_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    ModifyDBProxyInstanceRequest() = default ;
    ModifyDBProxyInstanceRequest(const ModifyDBProxyInstanceRequest &) = default ;
    ModifyDBProxyInstanceRequest(ModifyDBProxyInstanceRequest &&) = default ;
    ModifyDBProxyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyInstanceRequest() = default ;
    ModifyDBProxyInstanceRequest& operator=(const ModifyDBProxyInstanceRequest &) = default ;
    ModifyDBProxyInstanceRequest& operator=(ModifyDBProxyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MigrateAZ : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MigrateAZ& obj) { 
        DARABONBA_PTR_TO_JSON(dbProxyEndpointId, dbProxyEndpointId_);
        DARABONBA_PTR_TO_JSON(destVSwitchId, destVSwitchId_);
        DARABONBA_PTR_TO_JSON(destVpcId, destVpcId_);
      };
      friend void from_json(const Darabonba::Json& j, MigrateAZ& obj) { 
        DARABONBA_PTR_FROM_JSON(dbProxyEndpointId, dbProxyEndpointId_);
        DARABONBA_PTR_FROM_JSON(destVSwitchId, destVSwitchId_);
        DARABONBA_PTR_FROM_JSON(destVpcId, destVpcId_);
      };
      MigrateAZ() = default ;
      MigrateAZ(const MigrateAZ &) = default ;
      MigrateAZ(MigrateAZ &&) = default ;
      MigrateAZ(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MigrateAZ() = default ;
      MigrateAZ& operator=(const MigrateAZ &) = default ;
      MigrateAZ& operator=(MigrateAZ &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbProxyEndpointId_ == nullptr
        && this->destVSwitchId_ == nullptr && this->destVpcId_ == nullptr; };
      // dbProxyEndpointId Field Functions 
      bool hasDbProxyEndpointId() const { return this->dbProxyEndpointId_ != nullptr;};
      void deleteDbProxyEndpointId() { this->dbProxyEndpointId_ = nullptr;};
      inline string getDbProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointId_, "") };
      inline MigrateAZ& setDbProxyEndpointId(string dbProxyEndpointId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointId_, dbProxyEndpointId) };


      // destVSwitchId Field Functions 
      bool hasDestVSwitchId() const { return this->destVSwitchId_ != nullptr;};
      void deleteDestVSwitchId() { this->destVSwitchId_ = nullptr;};
      inline string getDestVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(destVSwitchId_, "") };
      inline MigrateAZ& setDestVSwitchId(string destVSwitchId) { DARABONBA_PTR_SET_VALUE(destVSwitchId_, destVSwitchId) };


      // destVpcId Field Functions 
      bool hasDestVpcId() const { return this->destVpcId_ != nullptr;};
      void deleteDestVpcId() { this->destVpcId_ = nullptr;};
      inline string getDestVpcId() const { DARABONBA_PTR_GET_DEFAULT(destVpcId_, "") };
      inline MigrateAZ& setDestVpcId(string destVpcId) { DARABONBA_PTR_SET_VALUE(destVpcId_, destVpcId) };


    protected:
      // The proxy connection address ID. You can obtain it through the DescribeDBProxyEndpoint interface.
      // 
      // > This parameter is required when MigrateAZ is selected.
      shared_ptr<string> dbProxyEndpointId_ {};
      // The target VSwitchId corresponding to the proxy instance migration.
      // 
      // > This parameter is required when MigrateAZ is selected.
      shared_ptr<string> destVSwitchId_ {};
      // The target vpc id corresponding to the proxy instance migration.
      shared_ptr<string> destVpcId_ {};
    };

    class DBProxyNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBProxyNodes& obj) { 
        DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
        DARABONBA_PTR_TO_JSON(nodeCounts, nodeCounts_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBProxyNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
        DARABONBA_PTR_FROM_JSON(nodeCounts, nodeCounts_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      DBProxyNodes() = default ;
      DBProxyNodes(const DBProxyNodes &) = default ;
      DBProxyNodes(DBProxyNodes &&) = default ;
      DBProxyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBProxyNodes() = default ;
      DBProxyNodes& operator=(const DBProxyNodes &) = default ;
      DBProxyNodes& operator=(DBProxyNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->nodeCounts_ == nullptr && this->zoneId_ == nullptr; };
      // cpuCores Field Functions 
      bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
      void deleteCpuCores() { this->cpuCores_ = nullptr;};
      inline string getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
      inline DBProxyNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


      // nodeCounts Field Functions 
      bool hasNodeCounts() const { return this->nodeCounts_ != nullptr;};
      void deleteNodeCounts() { this->nodeCounts_ = nullptr;};
      inline string getNodeCounts() const { DARABONBA_PTR_GET_DEFAULT(nodeCounts_, "") };
      inline DBProxyNodes& setNodeCounts(string nodeCounts) { DARABONBA_PTR_SET_VALUE(nodeCounts_, nodeCounts) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBProxyNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The number of cpu cores for the node, valid values: **1** to **16**.
      // >This parameter is required when selecting **DBProxyNodes**.
      shared_ptr<string> cpuCores_ {};
      // The number of proxy nodes in the availability zone, valid values: **1** to **16**.
      // >This parameter is required when selecting **DBProxyNodes**.
      shared_ptr<string> nodeCounts_ {};
      // The id of the availability zone where the node is located.
      // >This parameter is required when selecting **DBProxyNodes**.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBProxyEngineType_ == nullptr && this->DBProxyInstanceNum_ == nullptr && this->DBProxyInstanceType_ == nullptr && this->DBProxyNodes_ == nullptr && this->effectiveSpecificTime_ == nullptr
        && this->effectiveTime_ == nullptr && this->migrateAZ_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->vSwitchIds_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBProxyInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDBProxyInstanceRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceNum Field Functions 
    bool hasDBProxyInstanceNum() const { return this->DBProxyInstanceNum_ != nullptr;};
    void deleteDBProxyInstanceNum() { this->DBProxyInstanceNum_ = nullptr;};
    inline string getDBProxyInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceNum_, "") };
    inline ModifyDBProxyInstanceRequest& setDBProxyInstanceNum(string DBProxyInstanceNum) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceNum_, DBProxyInstanceNum) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string getDBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline ModifyDBProxyInstanceRequest& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const vector<ModifyDBProxyInstanceRequest::DBProxyNodes> & getDBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, vector<ModifyDBProxyInstanceRequest::DBProxyNodes>) };
    inline vector<ModifyDBProxyInstanceRequest::DBProxyNodes> getDBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, vector<ModifyDBProxyInstanceRequest::DBProxyNodes>) };
    inline ModifyDBProxyInstanceRequest& setDBProxyNodes(const vector<ModifyDBProxyInstanceRequest::DBProxyNodes> & dBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, dBProxyNodes) };
    inline ModifyDBProxyInstanceRequest& setDBProxyNodes(vector<ModifyDBProxyInstanceRequest::DBProxyNodes> && dBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, dBProxyNodes) };


    // effectiveSpecificTime Field Functions 
    bool hasEffectiveSpecificTime() const { return this->effectiveSpecificTime_ != nullptr;};
    void deleteEffectiveSpecificTime() { this->effectiveSpecificTime_ = nullptr;};
    inline string getEffectiveSpecificTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecificTime_, "") };
    inline ModifyDBProxyInstanceRequest& setEffectiveSpecificTime(string effectiveSpecificTime) { DARABONBA_PTR_SET_VALUE(effectiveSpecificTime_, effectiveSpecificTime) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBProxyInstanceRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // migrateAZ Field Functions 
    bool hasMigrateAZ() const { return this->migrateAZ_ != nullptr;};
    void deleteMigrateAZ() { this->migrateAZ_ = nullptr;};
    inline const vector<ModifyDBProxyInstanceRequest::MigrateAZ> & getMigrateAZ() const { DARABONBA_PTR_GET_CONST(migrateAZ_, vector<ModifyDBProxyInstanceRequest::MigrateAZ>) };
    inline vector<ModifyDBProxyInstanceRequest::MigrateAZ> getMigrateAZ() { DARABONBA_PTR_GET(migrateAZ_, vector<ModifyDBProxyInstanceRequest::MigrateAZ>) };
    inline ModifyDBProxyInstanceRequest& setMigrateAZ(const vector<ModifyDBProxyInstanceRequest::MigrateAZ> & migrateAZ) { DARABONBA_PTR_SET_VALUE(migrateAZ_, migrateAZ) };
    inline ModifyDBProxyInstanceRequest& setMigrateAZ(vector<ModifyDBProxyInstanceRequest::MigrateAZ> && migrateAZ) { DARABONBA_PTR_SET_RVALUE(migrateAZ_, migrateAZ) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBProxyInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBProxyInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBProxyInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBProxyInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ModifyDBProxyInstanceRequest& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // A deprecated parameter. You do not need to specify this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The number of database proxies. If you set this parameter to 0, the database proxy feature is disabled for the instance. Valid values: **1** to **16**.
    // 
    // >  The capability of the database proxy feature to process requests increases with the number of database proxies that are enabled. You can monitor the load on the instance and specify an appropriate number of database proxies based on the load monitoring data.
    // 
    // This parameter is required.
    shared_ptr<string> DBProxyInstanceNum_ {};
    // The database proxy type. Valid values:
    // 
    // *   **common**: general-purpose database proxy
    // *   **exclusive** (default): dedicated database proxy
    // 
    // This parameter is required.
    shared_ptr<string> DBProxyInstanceType_ {};
    // List of proxy nodes.
    // 
    // > This parameter must be passed when the current proxy instance is deployed in multiple availability zones.
    shared_ptr<vector<ModifyDBProxyInstanceRequest::DBProxyNodes>> DBProxyNodes_ {};
    // The point in time that you want to specify. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  If the **EffectiveTime** parameter is set to **SpecificTime**, you must specify this parameter.
    shared_ptr<string> effectiveSpecificTime_ {};
    // The effective time. Valid values:
    // 
    // *   **Immediate**: The effective time is immediate.
    // *   **MaintainTime**: The effective time is within the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // *   **SpecificTime**: The effective time is a specified point in time.
    // 
    // Default value: **MaintainTime**.
    shared_ptr<string> effectiveTime_ {};
    // The list of available zones for migration agents.
    // 
    // > Currently, only RDS MySQL cloud disk version agent instance migration is supported.
    shared_ptr<vector<ModifyDBProxyInstanceRequest::MigrateAZ>> migrateAZ_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the vSwitch in the destination zone. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/610431.html) operation to query existing vSwitches.
    // 
    // >  Only database proxies for ApsaraDB RDS for MySQL instances that use cloud disks can be migrated to different zones.
    shared_ptr<string> vSwitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
