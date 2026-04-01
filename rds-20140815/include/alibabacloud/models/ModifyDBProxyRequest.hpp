// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYREQUEST_HPP_
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
  class ModifyDBProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigDBProxyService, configDBProxyService_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PersistentConnectionStatus, persistentConnectionStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigDBProxyService, configDBProxyService_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PersistentConnectionStatus, persistentConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ModifyDBProxyRequest() = default ;
    ModifyDBProxyRequest(const ModifyDBProxyRequest &) = default ;
    ModifyDBProxyRequest(ModifyDBProxyRequest &&) = default ;
    ModifyDBProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyRequest() = default ;
    ModifyDBProxyRequest& operator=(const ModifyDBProxyRequest &) = default ;
    ModifyDBProxyRequest& operator=(ModifyDBProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The number of CPU cores of the node. Valid values: **1** to **16**.
      // 
      // >  This parameter is required when you configure the **DBProxyNodes** parameter.
      shared_ptr<string> cpuCores_ {};
      // The number of proxy nodes in the zone. Valid values: **1** and **2**.
      // 
      // >  This parameter is required when you configure the **DBProxyNodes** parameter.
      shared_ptr<string> nodeCounts_ {};
      // The ID of the zone in which the node resides.
      // 
      // >  This parameter is required when you configure the **DBProxyNodes** parameter.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->configDBProxyService_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBProxyEngineType_ == nullptr && this->DBProxyInstanceNum_ == nullptr && this->DBProxyInstanceType_ == nullptr && this->DBProxyNodes_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->ownerId_ == nullptr && this->persistentConnectionStatus_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
    // configDBProxyService Field Functions 
    bool hasConfigDBProxyService() const { return this->configDBProxyService_ != nullptr;};
    void deleteConfigDBProxyService() { this->configDBProxyService_ = nullptr;};
    inline string getConfigDBProxyService() const { DARABONBA_PTR_GET_DEFAULT(configDBProxyService_, "") };
    inline ModifyDBProxyRequest& setConfigDBProxyService(string configDBProxyService) { DARABONBA_PTR_SET_VALUE(configDBProxyService_, configDBProxyService) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBProxyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDBProxyRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceNum Field Functions 
    bool hasDBProxyInstanceNum() const { return this->DBProxyInstanceNum_ != nullptr;};
    void deleteDBProxyInstanceNum() { this->DBProxyInstanceNum_ = nullptr;};
    inline string getDBProxyInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceNum_, "") };
    inline ModifyDBProxyRequest& setDBProxyInstanceNum(string DBProxyInstanceNum) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceNum_, DBProxyInstanceNum) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string getDBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline ModifyDBProxyRequest& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const vector<ModifyDBProxyRequest::DBProxyNodes> & getDBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, vector<ModifyDBProxyRequest::DBProxyNodes>) };
    inline vector<ModifyDBProxyRequest::DBProxyNodes> getDBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, vector<ModifyDBProxyRequest::DBProxyNodes>) };
    inline ModifyDBProxyRequest& setDBProxyNodes(const vector<ModifyDBProxyRequest::DBProxyNodes> & dBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, dBProxyNodes) };
    inline ModifyDBProxyRequest& setDBProxyNodes(vector<ModifyDBProxyRequest::DBProxyNodes> && dBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, dBProxyNodes) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline ModifyDBProxyRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBProxyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // persistentConnectionStatus Field Functions 
    bool hasPersistentConnectionStatus() const { return this->persistentConnectionStatus_ != nullptr;};
    void deletePersistentConnectionStatus() { this->persistentConnectionStatus_ = nullptr;};
    inline string getPersistentConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(persistentConnectionStatus_, "") };
    inline ModifyDBProxyRequest& setPersistentConnectionStatus(string persistentConnectionStatus) { DARABONBA_PTR_SET_VALUE(persistentConnectionStatus_, persistentConnectionStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBProxyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDBProxyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBProxyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBProxyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline ModifyDBProxyRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBProxyRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Specifies whether to enable or disable the database proxy feature. Valid values:
    // 
    // *   **Startup**: enables the feature.
    // *   **Shutdown**: disables the feature.
    // *   **Modify**: modifies the configuration of the feature.
    // 
    // This parameter is required.
    shared_ptr<string> configDBProxyService_ {};
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // A deprecated parameter. You do not need to specify this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The number of proxy instances that are enabled. Valid values: **1** to **16**. Default value: **1**.
    // 
    // >  The capability of the database proxy to process requests increases with the number of proxy instances that are enabled. You can monitor the load on the instance and specify an appropriate number of proxy instances based on the load monitoring data.
    shared_ptr<string> DBProxyInstanceNum_ {};
    // The database proxy type. Valid values:
    // 
    // *   **common**: general-purpose database proxy
    // *   **exclusive** (default): dedicated database proxy
    shared_ptr<string> DBProxyInstanceType_ {};
    // The proxy nodes.
    shared_ptr<vector<ModifyDBProxyRequest::DBProxyNodes>> DBProxyNodes_ {};
    // The network type of the instance. Only the VPC network type is supported. Set the value to **VPC**.
    // 
    // >  If you enable the database proxy feature for the instance, you must specify this parameter.
    shared_ptr<string> instanceNetworkType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to enable persistent connections. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    // 
    // > 
    // 
    // *   This parameter is available only for instances that run MySQL.
    // 
    // *   If you want to modify persistent connections, you must set the **ConfigDBProxyService** parameter to **Modify**.
    shared_ptr<string> persistentConnectionStatus_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the virtual private cloud (VPC) to which the instance belongs. You can call the DescribeDBInstanceAttribute operation to query the ID.
    // 
    // >  If you enable the database proxy feature for the instance, you must specify this parameter.
    shared_ptr<string> VPCId_ {};
    // The ID of the vSwitch to which the instance belongs. You can call the DescribeDBInstanceAttribute operation to query the ID.
    // 
    // >  If you enable the database proxy feature for the instance, you must specify this parameter.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
