// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CausalConsistReadTimeout, causalConsistReadTimeout_);
      DARABONBA_PTR_TO_JSON(ConfigDBProxyFeatures, configDBProxyFeatures_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DbEndpointAliases, dbEndpointAliases_);
      DARABONBA_PTR_TO_JSON(DbEndpointMinSlaveCount, dbEndpointMinSlaveCount_);
      DARABONBA_PTR_TO_JSON(DbEndpointOperator, dbEndpointOperator_);
      DARABONBA_PTR_TO_JSON(DbEndpointReadWriteMode, dbEndpointReadWriteMode_);
      DARABONBA_PTR_TO_JSON(DbEndpointType, dbEndpointType_);
      DARABONBA_PTR_TO_JSON(EffectiveSpecificTime, effectiveSpecificTime_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceDistributionType, readOnlyInstanceDistributionType_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceMaxDelayTime, readOnlyInstanceMaxDelayTime_);
      DARABONBA_PTR_TO_JSON(ReadOnlyInstanceWeight, readOnlyInstanceWeight_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CausalConsistReadTimeout, causalConsistReadTimeout_);
      DARABONBA_PTR_FROM_JSON(ConfigDBProxyFeatures, configDBProxyFeatures_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DbEndpointAliases, dbEndpointAliases_);
      DARABONBA_PTR_FROM_JSON(DbEndpointMinSlaveCount, dbEndpointMinSlaveCount_);
      DARABONBA_PTR_FROM_JSON(DbEndpointOperator, dbEndpointOperator_);
      DARABONBA_PTR_FROM_JSON(DbEndpointReadWriteMode, dbEndpointReadWriteMode_);
      DARABONBA_PTR_FROM_JSON(DbEndpointType, dbEndpointType_);
      DARABONBA_PTR_FROM_JSON(EffectiveSpecificTime, effectiveSpecificTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceDistributionType, readOnlyInstanceDistributionType_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceMaxDelayTime, readOnlyInstanceMaxDelayTime_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyInstanceWeight, readOnlyInstanceWeight_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyDBProxyEndpointRequest() = default ;
    ModifyDBProxyEndpointRequest(const ModifyDBProxyEndpointRequest &) = default ;
    ModifyDBProxyEndpointRequest(ModifyDBProxyEndpointRequest &&) = default ;
    ModifyDBProxyEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyEndpointRequest() = default ;
    ModifyDBProxyEndpointRequest& operator=(const ModifyDBProxyEndpointRequest &) = default ;
    ModifyDBProxyEndpointRequest& operator=(ModifyDBProxyEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->causalConsistReadTimeout_ == nullptr
        && this->configDBProxyFeatures_ == nullptr && this->DBInstanceId_ == nullptr && this->DBProxyEndpointId_ == nullptr && this->DBProxyEngineType_ == nullptr && this->dbEndpointAliases_ == nullptr
        && this->dbEndpointMinSlaveCount_ == nullptr && this->dbEndpointOperator_ == nullptr && this->dbEndpointReadWriteMode_ == nullptr && this->dbEndpointType_ == nullptr && this->effectiveSpecificTime_ == nullptr
        && this->effectiveTime_ == nullptr && this->ownerId_ == nullptr && this->readOnlyInstanceDistributionType_ == nullptr && this->readOnlyInstanceMaxDelayTime_ == nullptr && this->readOnlyInstanceWeight_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // causalConsistReadTimeout Field Functions 
    bool hasCausalConsistReadTimeout() const { return this->causalConsistReadTimeout_ != nullptr;};
    void deleteCausalConsistReadTimeout() { this->causalConsistReadTimeout_ = nullptr;};
    inline string getCausalConsistReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(causalConsistReadTimeout_, "") };
    inline ModifyDBProxyEndpointRequest& setCausalConsistReadTimeout(string causalConsistReadTimeout) { DARABONBA_PTR_SET_VALUE(causalConsistReadTimeout_, causalConsistReadTimeout) };


    // configDBProxyFeatures Field Functions 
    bool hasConfigDBProxyFeatures() const { return this->configDBProxyFeatures_ != nullptr;};
    void deleteConfigDBProxyFeatures() { this->configDBProxyFeatures_ = nullptr;};
    inline string getConfigDBProxyFeatures() const { DARABONBA_PTR_GET_DEFAULT(configDBProxyFeatures_, "") };
    inline ModifyDBProxyEndpointRequest& setConfigDBProxyFeatures(string configDBProxyFeatures) { DARABONBA_PTR_SET_VALUE(configDBProxyFeatures_, configDBProxyFeatures) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBProxyEndpointRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyEndpointId Field Functions 
    bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
    void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
    inline string getDBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
    inline ModifyDBProxyEndpointRequest& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDBProxyEndpointRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // dbEndpointAliases Field Functions 
    bool hasDbEndpointAliases() const { return this->dbEndpointAliases_ != nullptr;};
    void deleteDbEndpointAliases() { this->dbEndpointAliases_ = nullptr;};
    inline string getDbEndpointAliases() const { DARABONBA_PTR_GET_DEFAULT(dbEndpointAliases_, "") };
    inline ModifyDBProxyEndpointRequest& setDbEndpointAliases(string dbEndpointAliases) { DARABONBA_PTR_SET_VALUE(dbEndpointAliases_, dbEndpointAliases) };


    // dbEndpointMinSlaveCount Field Functions 
    bool hasDbEndpointMinSlaveCount() const { return this->dbEndpointMinSlaveCount_ != nullptr;};
    void deleteDbEndpointMinSlaveCount() { this->dbEndpointMinSlaveCount_ = nullptr;};
    inline string getDbEndpointMinSlaveCount() const { DARABONBA_PTR_GET_DEFAULT(dbEndpointMinSlaveCount_, "") };
    inline ModifyDBProxyEndpointRequest& setDbEndpointMinSlaveCount(string dbEndpointMinSlaveCount) { DARABONBA_PTR_SET_VALUE(dbEndpointMinSlaveCount_, dbEndpointMinSlaveCount) };


    // dbEndpointOperator Field Functions 
    bool hasDbEndpointOperator() const { return this->dbEndpointOperator_ != nullptr;};
    void deleteDbEndpointOperator() { this->dbEndpointOperator_ = nullptr;};
    inline string getDbEndpointOperator() const { DARABONBA_PTR_GET_DEFAULT(dbEndpointOperator_, "") };
    inline ModifyDBProxyEndpointRequest& setDbEndpointOperator(string dbEndpointOperator) { DARABONBA_PTR_SET_VALUE(dbEndpointOperator_, dbEndpointOperator) };


    // dbEndpointReadWriteMode Field Functions 
    bool hasDbEndpointReadWriteMode() const { return this->dbEndpointReadWriteMode_ != nullptr;};
    void deleteDbEndpointReadWriteMode() { this->dbEndpointReadWriteMode_ = nullptr;};
    inline string getDbEndpointReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(dbEndpointReadWriteMode_, "") };
    inline ModifyDBProxyEndpointRequest& setDbEndpointReadWriteMode(string dbEndpointReadWriteMode) { DARABONBA_PTR_SET_VALUE(dbEndpointReadWriteMode_, dbEndpointReadWriteMode) };


    // dbEndpointType Field Functions 
    bool hasDbEndpointType() const { return this->dbEndpointType_ != nullptr;};
    void deleteDbEndpointType() { this->dbEndpointType_ = nullptr;};
    inline string getDbEndpointType() const { DARABONBA_PTR_GET_DEFAULT(dbEndpointType_, "") };
    inline ModifyDBProxyEndpointRequest& setDbEndpointType(string dbEndpointType) { DARABONBA_PTR_SET_VALUE(dbEndpointType_, dbEndpointType) };


    // effectiveSpecificTime Field Functions 
    bool hasEffectiveSpecificTime() const { return this->effectiveSpecificTime_ != nullptr;};
    void deleteEffectiveSpecificTime() { this->effectiveSpecificTime_ = nullptr;};
    inline string getEffectiveSpecificTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecificTime_, "") };
    inline ModifyDBProxyEndpointRequest& setEffectiveSpecificTime(string effectiveSpecificTime) { DARABONBA_PTR_SET_VALUE(effectiveSpecificTime_, effectiveSpecificTime) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBProxyEndpointRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBProxyEndpointRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readOnlyInstanceDistributionType Field Functions 
    bool hasReadOnlyInstanceDistributionType() const { return this->readOnlyInstanceDistributionType_ != nullptr;};
    void deleteReadOnlyInstanceDistributionType() { this->readOnlyInstanceDistributionType_ = nullptr;};
    inline string getReadOnlyInstanceDistributionType() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceDistributionType_, "") };
    inline ModifyDBProxyEndpointRequest& setReadOnlyInstanceDistributionType(string readOnlyInstanceDistributionType) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceDistributionType_, readOnlyInstanceDistributionType) };


    // readOnlyInstanceMaxDelayTime Field Functions 
    bool hasReadOnlyInstanceMaxDelayTime() const { return this->readOnlyInstanceMaxDelayTime_ != nullptr;};
    void deleteReadOnlyInstanceMaxDelayTime() { this->readOnlyInstanceMaxDelayTime_ = nullptr;};
    inline string getReadOnlyInstanceMaxDelayTime() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceMaxDelayTime_, "") };
    inline ModifyDBProxyEndpointRequest& setReadOnlyInstanceMaxDelayTime(string readOnlyInstanceMaxDelayTime) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceMaxDelayTime_, readOnlyInstanceMaxDelayTime) };


    // readOnlyInstanceWeight Field Functions 
    bool hasReadOnlyInstanceWeight() const { return this->readOnlyInstanceWeight_ != nullptr;};
    void deleteReadOnlyInstanceWeight() { this->readOnlyInstanceWeight_ = nullptr;};
    inline string getReadOnlyInstanceWeight() const { DARABONBA_PTR_GET_DEFAULT(readOnlyInstanceWeight_, "") };
    inline ModifyDBProxyEndpointRequest& setReadOnlyInstanceWeight(string readOnlyInstanceWeight) { DARABONBA_PTR_SET_VALUE(readOnlyInstanceWeight_, readOnlyInstanceWeight) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBProxyEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBProxyEndpointRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBProxyEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBProxyEndpointRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyDBProxyEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The consistency read timeout period. Unit: milliseconds. Default value: **10** Unit: milliseconds. Valid values: **0 to 60000**
    shared_ptr<string> causalConsistReadTimeout_ {};
    // The capabilities that you want to enable for the proxy endpoint. If you specify more than one capability, separate the capabilities with semicolons (;). Format: `Capability 1:Status;Capability 2:Status;...`. Do not add a semicolon (;) at the end of the value.
    // 
    // Valid capability values:
    // 
    // *   **ReadWriteSpliting**: read/write splitting
    // *   **ConnectionPersist**: connection pooling
    // *   **TransactionReadSqlRouteOptimizeStatus**: transaction splitting
    // *   **AZProximityAccess**: nearest access
    // *   **CausalConsistRead**: read consistency
    // 
    // Valid status values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    // 
    // > 
    // 
    // *   If the instance runs PostgreSQL, you can enable only read/write splitting, which is specified by **ReadWriteSpliting**.
    // 
    // *   Nearest access is supported only by dedicated database proxies for RDS instances that run MySQL.
    shared_ptr<string> configDBProxyFeatures_ {};
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The ID of the proxy endpoint. You can call the DescribeDBProxyEndpoint operation to query the proxy endpoint ID.
    // 
    // > *   If the instance runs MySQL and you set **DbEndpointOperator** to **Delete** or **Modify**, you must specify DBProxyEndpointId.
    // > *   If the instance runs PostgreSQL and you set **DbEndpointOperator** to **Delete**, **Modify**, or **Create**, you must specify DBProxyEndpointId.
    shared_ptr<string> DBProxyEndpointId_ {};
    // A deprecated parameter. You do not need to specify this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The description of the proxy terminal.
    shared_ptr<string> dbEndpointAliases_ {};
    // The minimum number of reserved instances.
    shared_ptr<string> dbEndpointMinSlaveCount_ {};
    // The type of operation that you want to perform. Valid values:
    // 
    // *   **Modify**: Modify a proxy terminal. This is the default value.
    // *   **Create**: Create a proxy terminal.
    // *   **Delete**: Delete a proxy terminal.
    shared_ptr<string> dbEndpointOperator_ {};
    // The read and write attributes of the proxy terminal. Valid values:
    // 
    // *   **ReadWrite**: The proxy terminal connects to the primary instance and can receive both read and write requests.
    // *   **ReadOnly**: The proxy terminal does not connect to the primary instance and can receive only read requests. This is the default value.
    // 
    // > *   If you set **DbEndpointOperator** to **Create**, you must also specify DbEndpointReadWriteMode.
    // > *   If the instance runs MySQL and you change the value of this parameter from **ReadWrite** to **ReadOnly**, the transaction splitting feature is disabled.
    shared_ptr<string> dbEndpointReadWriteMode_ {};
    // The type of the proxy terminal. This is a reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> dbEndpointType_ {};
    // The point in time that you want to specify. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  If **EffectiveTime** is set to **SpecificTime**, you must specify this parameter.
    shared_ptr<string> effectiveSpecificTime_ {};
    // The effective time. Valid values:
    // 
    // *   **Immediate**: The effective time is immediate.
    // *   **MaintainTime**: The effective time is within the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // *   **SpecificTime**: The effective time is a specified point in time.
    // 
    // Default value: **MaintainTime**.
    shared_ptr<string> effectiveTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy that is used to allocate read weights. Valid values:
    // 
    // *   **Standard** (default): The system automatically assigns read weights to the primary and read-only instances based on the specifications of these instances.
    // *   **Custom**: You must manually allocate read weights to the primary and read-only instances.
    // 
    // >  You must specify this parameter when read/write splitting is enabled. For more information about the permission allocation policy, see [Modify the latency threshold and read weights of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/96076.html) and [Enable and configure the database proxy feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418272.html).
    shared_ptr<string> readOnlyInstanceDistributionType_ {};
    // The maximum latency threshold that is allowed for read/write splitting. If the latency on a read-only instance exceeds the threshold that you specified, the system no longer forwards read requests to the read-only instance. If you do not specify this parameter, the original value of this parameter is retained. Valid values: **0** to **3600**.
    // 
    // > 
    // 
    // *   You must specify this parameter only when read/write splitting is enabled.
    // 
    // *   If the database proxy endpoint has the read and write attributes, the default value of this parameter is **30** and read/write splitting is supported. If the database proxy endpoint has the read-only attribute, the default value of this parameter is **-1** and read/write splitting is not supported. Unit: seconds.
    shared_ptr<string> readOnlyInstanceMaxDelayTime_ {};
    // The read weights of the instance and its read-only instances. A read weight must be a multiple of 100 and cannot exceed 10000. Formats:
    // 
    // *   Standard instance: `{"ID of the primary instance":"Weight","ID of the read-only instance":"Weight"...}`
    // 
    //     Example: `{"rm-uf6wjk5****":"500","rr-tfhfgk5xxx":"200"...}`
    // 
    // *   Instance on RDS Cluster Edition: `{"ID of the read-only instance":"Weight","DBClusterNode":{"ID of the primary node":"Weight","ID of the secondary node":"Weight","ID of the secondary node":"Weight"...}}`
    // 
    //     Example: `{"rr-tfhfgk5****":"200","DBClusterNode":{"rn-2z****":"0","rn-2z****":"400","rn-2z****":"400"...}}`
    // 
    //     > **DBClusterNode** is required if the instance runs RDS Cluster Edition. The DBClusterNode parameter includes information about **IDs** and **weights** of the primary and secondary nodes..
    shared_ptr<string> readOnlyInstanceWeight_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the vSwitch in the zone in which the proxy endpoint is specified. The default value is the ID of the vSwitch that corresponds to the default terminal of the database proxy. You can call the DescribeVSwitches operation to query existing vSwitches.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID of the zone in which the proxy endpoint is specified. The default value is the VPC ID that corresponds to the default terminal of the database proxy. You can call the DescribeDBInstanceAttribute operation to query the default VPC of an instance.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
