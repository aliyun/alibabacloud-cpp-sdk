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
      DARABONBA_PTR_TO_JSON(DbEndpointCostThresholdForDuckdb, dbEndpointCostThresholdForDuckdb_);
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
      DARABONBA_PTR_FROM_JSON(DbEndpointCostThresholdForDuckdb, dbEndpointCostThresholdForDuckdb_);
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
        && this->dbEndpointCostThresholdForDuckdb_ == nullptr && this->dbEndpointMinSlaveCount_ == nullptr && this->dbEndpointOperator_ == nullptr && this->dbEndpointReadWriteMode_ == nullptr && this->dbEndpointType_ == nullptr
        && this->effectiveSpecificTime_ == nullptr && this->effectiveTime_ == nullptr && this->ownerId_ == nullptr && this->readOnlyInstanceDistributionType_ == nullptr && this->readOnlyInstanceMaxDelayTime_ == nullptr
        && this->readOnlyInstanceWeight_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
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


    // dbEndpointCostThresholdForDuckdb Field Functions 
    bool hasDbEndpointCostThresholdForDuckdb() const { return this->dbEndpointCostThresholdForDuckdb_ != nullptr;};
    void deleteDbEndpointCostThresholdForDuckdb() { this->dbEndpointCostThresholdForDuckdb_ = nullptr;};
    inline string getDbEndpointCostThresholdForDuckdb() const { DARABONBA_PTR_GET_DEFAULT(dbEndpointCostThresholdForDuckdb_, "") };
    inline ModifyDBProxyEndpointRequest& setDbEndpointCostThresholdForDuckdb(string dbEndpointCostThresholdForDuckdb) { DARABONBA_PTR_SET_VALUE(dbEndpointCostThresholdForDuckdb_, dbEndpointCostThresholdForDuckdb) };


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
    // The timeout period for read consistency. Unit: milliseconds. Default value: **10**. Valid values: **0 to 60000**.
    shared_ptr<string> causalConsistReadTimeout_ {};
    // The proxy features that you want to enable for the proxy endpoint. Separate multiple features with semicolons (;). Format: `Feature 1:Status;Feature 2:Status;...`. Do not add a semicolon (;) at the end.
    // 
    // Valid values for features:
    // * **ReadWriteSpliting**: Read/write splitting.
    // * **ConnectionPersist**: Connection pool.
    // * **TransactionReadSqlRouteOptimizeStatus**: Transaction splitting.
    // * **AZProximityAccess**: Nearest access.
    // * **CausalConsistRead**: Read consistency.
    // * **HtapFilter**: HTAP automatic request distribution among row store and column store nodes.
    // 
    // Valid values for status:
    // * **1**: Enabled.
    // * **0**: Disabled.
    // 
    // > - ApsaraDB RDS for PostgreSQL supports only **ReadWriteSpliting**.
    // > - The nearest access feature is supported only by the dedicated database proxy for MySQL.
    shared_ptr<string> configDBProxyFeatures_ {};
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The ID of the proxy endpoint. You can call DescribeDBProxyEndpoint to query the ID.
    // 
    // > - MySQL: This parameter is required when **DbEndpointOperator** is set to **Delete** or **Modify**.
    // > - PostgreSQL: This parameter is required when **DbEndpointOperator** is set to **Delete**, **Modify**, or **Create**.
    shared_ptr<string> DBProxyEndpointId_ {};
    // A deprecated parameter. You do not need to specify this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The description of the proxy endpoint.
    shared_ptr<string> dbEndpointAliases_ {};
    shared_ptr<string> dbEndpointCostThresholdForDuckdb_ {};
    // The minimum number of reserved instances.
    shared_ptr<string> dbEndpointMinSlaveCount_ {};
    // The type of operation. Valid values:
    // * **Modify**: The default value. Modifies the proxy endpoint.
    // * **Create**: Creates a proxy endpoint.
    // * **Delete**: Deletes a proxy endpoint.
    shared_ptr<string> dbEndpointOperator_ {};
    // The read/write mode. Valid values:
    // * **ReadWrite**: Connects to the primary instance and can accept write requests.
    // * **ReadOnly**: The default value. Does not connect to the primary instance and cannot accept write requests.
    // 
    // > * This parameter is required when **DbEndpointOperator** is set to **Create**.
    // > * For ApsaraDB RDS for MySQL instances, if you change this parameter from **ReadWrite** to **ReadOnly**, the transaction splitting feature is disabled.
    shared_ptr<string> dbEndpointReadWriteMode_ {};
    // The type of the proxy endpoint. This is a reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> dbEndpointType_ {};
    // The specified time at which the change takes effect. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // > This parameter is required when **EffectiveTime** is set to **SpecificTime**.
    shared_ptr<string> effectiveSpecificTime_ {};
    // The effective period. Valid values:
    // 
    // * **Immediate**: The change takes effect immediately.
    // * **MaintainTime**: The change takes effect during the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    // * **SpecificTime**: The change takes effect at a specified time.
    // 
    // Default value: **MaintainTime**.
    shared_ptr<string> effectiveTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The mode used to allocate read weights. Valid values:
    // 
    // * **Standard**: The default value. Read weights are automatically allocated based on instance specifications.
    // * **Custom**: Custom read weights.
    // 
    // > This parameter is required only when read/write splitting is enabled. For more information about read weight allocation, see [Read weight allocation](https://help.aliyun.com/document_detail/96076.html) for MySQL and [Enable and configure the database proxy service](https://help.aliyun.com/document_detail/418272.html) for PostgreSQL.
    shared_ptr<string> readOnlyInstanceDistributionType_ {};
    // The maximum latency threshold for read-only instances in read/write splitting. If the latency of a read-only instance exceeds this value, read traffic is not routed to the instance. Unit: seconds. If you do not specify this parameter, the current value is retained. Valid values: **0** to **3600**.
    // 
    // >- This parameter is required only when read/write splitting is enabled.
    // >- Default value: **30** seconds when the read/write mode is set to read/write (read/write splitting), and **-1** (disabled) when the read/write mode is set to read-only.
    shared_ptr<string> readOnlyInstanceMaxDelayTime_ {};
    // The custom read weights to allocate to the primary instance and read-only instances. The value must be in increments of 100. Maximum value: 10000. Format:
    // 
    // - Regular instance: `{"PrimaryInstanceID":"Weight","ReadOnlyInstanceID":"Weight"...}`
    // 
    //     Example: `{"rm-uf6wjk5****":"500","rr-tfhfgk5xxx":"200"...}`
    // - ApsaraDB RDS for MySQL cluster instance: `{"ReadOnlyInstanceID":"Weight","DBClusterNode":{"PrimaryNodeID":"Weight","SecondaryNodeID":"Weight","SecondaryNodeID":"Weight"...}}`
    // 
    //     Example: `{"rr-tfhfgk5****":"200","DBClusterNode":{"rn-2z****":"0","rn-2z****":"400","rn-2z****":"400"...}}`
    //     > **DBClusterNode** is a request parameter specific to cluster instances. It contains the **NodeID** and **Weight** of the primary and secondary nodes.
    shared_ptr<string> readOnlyInstanceWeight_ {};
    // The region ID. You can call DescribeRegions to query the region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The vSwitch ID that corresponds to the zone of the proxy endpoint. Default value: the vSwitch ID of the default endpoint of the proxy instance. You can call DescribeVSwitches to query available vSwitches.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID that corresponds to the zone of the proxy endpoint. Default value: the VPC ID of the default endpoint of the proxy instance. You can call DescribeDBInstanceAttribute to query the default VPC of the instance.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
