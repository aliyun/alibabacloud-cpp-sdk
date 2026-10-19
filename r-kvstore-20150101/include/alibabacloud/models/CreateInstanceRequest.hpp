// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Appendonly, appendonly_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterBackupId, clusterBackupId_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(GlobalInstance, globalInstance_);
      DARABONBA_PTR_TO_JSON(GlobalInstanceId, globalInstanceId_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceEndpointType, instanceEndpointType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamGroupId, paramGroupId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ReadOnlyCount, readOnlyCount_);
      DARABONBA_PTR_TO_JSON(RecoverConfigMode, recoverConfigMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaCount, replicaCount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
      DARABONBA_PTR_TO_JSON(SlaveReplicaCount, slaveReplicaCount_);
      DARABONBA_PTR_TO_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Appendonly, appendonly_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterBackupId, clusterBackupId_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(GlobalInstance, globalInstance_);
      DARABONBA_PTR_FROM_JSON(GlobalInstanceId, globalInstanceId_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceEndpointType, instanceEndpointType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamGroupId, paramGroupId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyCount, readOnlyCount_);
      DARABONBA_PTR_FROM_JSON(RecoverConfigMode, recoverConfigMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaCount, replicaCount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
      DARABONBA_PTR_FROM_JSON(SlaveReplicaCount, slaveReplicaCount_);
      DARABONBA_PTR_FROM_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      // 
      // > * **N** indicates the sequence number of the tag key. You can attach up to 20 tags to a single instance. For example, Tag.1.Key indicates the key of the first tag, and Tag.2.Key indicates the key of the second tag.
      // > * If the key of the tag does not exist, the system performs automatic creation.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // > **N** indicates the sequence number of the tag value. For example, **Tag.1.Value** indicates the value of the first tag, and **Tag.2.Value** indicates the value of the second tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->appendonly_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->autoUseCoupon_ == nullptr && this->backupId_ == nullptr && this->businessInfo_ == nullptr
        && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->clusterBackupId_ == nullptr && this->connectionStringPrefix_ == nullptr && this->couponNo_ == nullptr
        && this->dedicatedHostGroupId_ == nullptr && this->dryRun_ == nullptr && this->engineVersion_ == nullptr && this->globalInstance_ == nullptr && this->globalInstanceId_ == nullptr
        && this->globalSecurityGroupIds_ == nullptr && this->instanceClass_ == nullptr && this->instanceEndpointType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->networkType_ == nullptr && this->nodeType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->paramGroupId_ == nullptr && this->password_ == nullptr && this->period_ == nullptr && this->port_ == nullptr
        && this->privateIpAddress_ == nullptr && this->readOnlyCount_ == nullptr && this->recoverConfigMode_ == nullptr && this->regionId_ == nullptr && this->replicaCount_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr && this->secondaryZoneId_ == nullptr
        && this->securityToken_ == nullptr && this->shardCount_ == nullptr && this->slaveReadOnlyCount_ == nullptr && this->slaveReplicaCount_ == nullptr && this->srcDBInstanceId_ == nullptr
        && this->tag_ == nullptr && this->token_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // appendonly Field Functions 
    bool hasAppendonly() const { return this->appendonly_ != nullptr;};
    void deleteAppendonly() { this->appendonly_ = nullptr;};
    inline string getAppendonly() const { DARABONBA_PTR_GET_DEFAULT(appendonly_, "") };
    inline CreateInstanceRequest& setAppendonly(string appendonly) { DARABONBA_PTR_SET_VALUE(appendonly_, appendonly) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateInstanceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline CreateInstanceRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateInstanceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline CreateInstanceRequest& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterBackupId Field Functions 
    bool hasClusterBackupId() const { return this->clusterBackupId_ != nullptr;};
    void deleteClusterBackupId() { this->clusterBackupId_ = nullptr;};
    inline string getClusterBackupId() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupId_, "") };
    inline CreateInstanceRequest& setClusterBackupId(string clusterBackupId) { DARABONBA_PTR_SET_VALUE(clusterBackupId_, clusterBackupId) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline CreateInstanceRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateInstanceRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline CreateInstanceRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // globalInstance Field Functions 
    bool hasGlobalInstance() const { return this->globalInstance_ != nullptr;};
    void deleteGlobalInstance() { this->globalInstance_ = nullptr;};
    inline bool getGlobalInstance() const { DARABONBA_PTR_GET_DEFAULT(globalInstance_, false) };
    inline CreateInstanceRequest& setGlobalInstance(bool globalInstance) { DARABONBA_PTR_SET_VALUE(globalInstance_, globalInstance) };


    // globalInstanceId Field Functions 
    bool hasGlobalInstanceId() const { return this->globalInstanceId_ != nullptr;};
    void deleteGlobalInstanceId() { this->globalInstanceId_ = nullptr;};
    inline string getGlobalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalInstanceId_, "") };
    inline CreateInstanceRequest& setGlobalInstanceId(string globalInstanceId) { DARABONBA_PTR_SET_VALUE(globalInstanceId_, globalInstanceId) };


    // globalSecurityGroupIds Field Functions 
    bool hasGlobalSecurityGroupIds() const { return this->globalSecurityGroupIds_ != nullptr;};
    void deleteGlobalSecurityGroupIds() { this->globalSecurityGroupIds_ = nullptr;};
    inline string getGlobalSecurityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupIds_, "") };
    inline CreateInstanceRequest& setGlobalSecurityGroupIds(string globalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupIds_, globalSecurityGroupIds) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateInstanceRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceEndpointType Field Functions 
    bool hasInstanceEndpointType() const { return this->instanceEndpointType_ != nullptr;};
    void deleteInstanceEndpointType() { this->instanceEndpointType_ = nullptr;};
    inline string getInstanceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpointType_, "") };
    inline CreateInstanceRequest& setInstanceEndpointType(string instanceEndpointType) { DARABONBA_PTR_SET_VALUE(instanceEndpointType_, instanceEndpointType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline CreateInstanceRequest& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline CreateInstanceRequest& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline CreateInstanceRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramGroupId Field Functions 
    bool hasParamGroupId() const { return this->paramGroupId_ != nullptr;};
    void deleteParamGroupId() { this->paramGroupId_ = nullptr;};
    inline string getParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(paramGroupId_, "") };
    inline CreateInstanceRequest& setParamGroupId(string paramGroupId) { DARABONBA_PTR_SET_VALUE(paramGroupId_, paramGroupId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateInstanceRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // readOnlyCount Field Functions 
    bool hasReadOnlyCount() const { return this->readOnlyCount_ != nullptr;};
    void deleteReadOnlyCount() { this->readOnlyCount_ = nullptr;};
    inline int32_t getReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(readOnlyCount_, 0) };
    inline CreateInstanceRequest& setReadOnlyCount(int32_t readOnlyCount) { DARABONBA_PTR_SET_VALUE(readOnlyCount_, readOnlyCount) };


    // recoverConfigMode Field Functions 
    bool hasRecoverConfigMode() const { return this->recoverConfigMode_ != nullptr;};
    void deleteRecoverConfigMode() { this->recoverConfigMode_ = nullptr;};
    inline string getRecoverConfigMode() const { DARABONBA_PTR_GET_DEFAULT(recoverConfigMode_, "") };
    inline CreateInstanceRequest& setRecoverConfigMode(string recoverConfigMode) { DARABONBA_PTR_SET_VALUE(recoverConfigMode_, recoverConfigMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaCount Field Functions 
    bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
    void deleteReplicaCount() { this->replicaCount_ = nullptr;};
    inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
    inline CreateInstanceRequest& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CreateInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline CreateInstanceRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline CreateInstanceRequest& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // slaveReadOnlyCount Field Functions 
    bool hasSlaveReadOnlyCount() const { return this->slaveReadOnlyCount_ != nullptr;};
    void deleteSlaveReadOnlyCount() { this->slaveReadOnlyCount_ = nullptr;};
    inline int32_t getSlaveReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReadOnlyCount_, 0) };
    inline CreateInstanceRequest& setSlaveReadOnlyCount(int32_t slaveReadOnlyCount) { DARABONBA_PTR_SET_VALUE(slaveReadOnlyCount_, slaveReadOnlyCount) };


    // slaveReplicaCount Field Functions 
    bool hasSlaveReplicaCount() const { return this->slaveReplicaCount_ != nullptr;};
    void deleteSlaveReplicaCount() { this->slaveReplicaCount_ = nullptr;};
    inline int32_t getSlaveReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReplicaCount_, 0) };
    inline CreateInstanceRequest& setSlaveReplicaCount(int32_t slaveReplicaCount) { DARABONBA_PTR_SET_VALUE(slaveReplicaCount_, slaveReplicaCount) };


    // srcDBInstanceId Field Functions 
    bool hasSrcDBInstanceId() const { return this->srcDBInstanceId_ != nullptr;};
    void deleteSrcDBInstanceId() { this->srcDBInstanceId_ = nullptr;};
    inline string getSrcDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcDBInstanceId_, "") };
    inline CreateInstanceRequest& setSrcDBInstanceId(string srcDBInstanceId) { DARABONBA_PTR_SET_VALUE(srcDBInstanceId_, srcDBInstanceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateInstanceRequest::Tag>) };
    inline vector<CreateInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateInstanceRequest::Tag>) };
    inline CreateInstanceRequest& setTag(const vector<CreateInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateInstanceRequest& setTag(vector<CreateInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateInstanceRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The AOF parameter settings of the new instance. Valid values:
    // - **yes** (default): enables AOF persistence.
    // - **no**: shutdown AOF persistence.
    // > This parameter applies to classic instances. Cloud-native instances do not support specifying the AOF parameter.
    shared_ptr<string> appendonly_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // * **true**: enables auto-renewal.
    // * **false** (default): disables auto-renewal.
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal epoch. Unit: months. Valid values: **1**, **2**, **3**, **6**, and **12**.
    // 
    // > This parameter is required when the AutoRenew parameter is set to **true**.
    shared_ptr<string> autoRenewPeriod_ {};
    // Specifies whether to use a voucher. Valid values:
    // * **true**: uses a voucher.
    // * **false** (default): does not use a voucher.
    shared_ptr<string> autoUseCoupon_ {};
    // You can specify the backup set ID of the source instance in this parameter. The system uses the data saved in the backup set to create the new instance. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query the BackupId. If the source instance is a cluster instance, you must enter the backup set IDs of all shards in the source instance and separate them with commas, such as "10**,11**,15**".
    // > If your instance is a cloud-native architecture instance and a cluster instance, we recommend that you call the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation to query the cluster backup set ID, such as "cb-xx", and then enter it in the ClusterBackupId request parameter to clone the cluster instance. This saves you the trouble of entering the backup set ID of each shard.
    shared_ptr<string> backupId_ {};
    // The ID of the promotional event or business information.
    shared_ptr<string> businessInfo_ {};
    // The storage capacity of the instance. Unit: MB.
    // 
    // > When you call this operation, you must specify at least one of the Capacity and InstanceClass parameters.
    shared_ptr<int64_t> capacity_ {};
    // The billing method. Valid values:
    // * **PrePaid**: subscription.
    // * **PostPaid** (default): pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The ID of the cluster backup set. Some new cluster architectures support cluster backup set IDs. You can call the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation to obtain the ID.
    // * If the architecture supports cluster backup sets, you can enter the specified cluster backup set ID without specifying the BackupId parameter.
    // * If the architecture does not support cluster backup sets, specify the backup set IDs of all shards in the source instance in the BackupId parameter and separate them with commas, such as "2158\\*\\*\\*\\*20,2158\\*\\*\\*\\*22".
    shared_ptr<string> clusterBackupId_ {};
    // The prefix of the endpoint. The prefix must be 8 to 40 characters in length and can contain lowercase letters and digits. It must start with a lowercase letter.
    // 
    // > 
    // > The endpoint format is: <Prefix>.redis.rds.aliyuncs.com.
    shared_ptr<string> connectionStringPrefix_ {};
    // The coupon code. Default value: `default`.
    shared_ptr<string> couponNo_ {};
    // The ID of the dedicated cluster. This parameter is required when you create an ApsaraDB for Redis instance in a dedicated cluster.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // Specifies whether to perform a dry run on the instance creation request. Valid values:
    // * **true**: performs a dry run without creating the instance. The system checks the request parameters, request format, service limits, and available resources. If the request fails the dry run, the system returns an error. If the request passes the dry run, the system returns the DryRunOperation error code.
    // * **false** (default): sends the normal request and creates the instance after the request passes the check.
    shared_ptr<bool> dryRun_ {};
    // The engine version of the Redis **classic instance**. Valid values:
    // * **2.8** (Not recommended. [End-of-life is planned](https://help.aliyun.com/document_detail/2674657.html).)
    // * **4.0** (Not recommended)
    // * **5.0**
    // 
    // The engine version of the Redis **cloud-native instance**. Valid values:
    // * **5.0**
    // * **6.0** (Recommended)
    // * **7.0**
    // 
    // > Default value: **5.0**.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether to use the new instance as the first child instance of a distributed instance. You can create a distributed instance in this way. Valid values:
    // 
    // * **true**: uses the new instance as the first child instance.
    // * **false** (default): does not use the new instance as the first child instance.
    // 
    // > * If you set this parameter to **true**, the new instance must be a Tair memory-optimized instance and the DPI engine version must be 5.0.
    // > * This parameter applies only to the China site.
    shared_ptr<bool> globalInstance_ {};
    // The distributed instance ID. This parameter applies only to the China site.
    // 
    // <props="china"> If you want to append the new ApsaraDB for Redis instance as a new child instance to a distributed instance, this parameter is active and required. For more information and console operations, see [Add a child instance to a distributed instance](https://help.aliyun.com/document_detail/106885.html).
    shared_ptr<string> globalInstanceId_ {};
    // The global IP address whitelist templates of the instance. Separate multiple templates with commas (,). Duplicate templates are not allowed.
    // >Notice: This parameter applies only to cloud-native instances. Classic instances do not support the whitelist template feature.</notice>
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The instance type. For example, redis.master.small.default indicates a 1 GB Community Edition (classic architecture) instance with the standard architecture and two replicas. For more information, see [Overview of instance types](https://help.aliyun.com/document_detail/26350.html). 
    // 
    // > When you call this operation, you must specify at least one of the Capacity and InstanceClass parameters.
    shared_ptr<string> instanceClass_ {};
    // The type of the endpoint used when you create a cloud-native dual-zone deployment read/write splitting instance. If you do not explicitly specify this parameter, the default value is AzIndependentEndpoint.
    // 
    // - **AzIndependentEndpoint**: **Default value**. Active zone-independent endpoints. The primary and secondary active zones provide independent endpoints. You can use different endpoints to implement nearest access for active zones.
    // - **UnifiedEndpoint**: Unified endpoint. A unified endpoint is provided to access nodes in both the primary and secondary active zones, but cross-zone access may occur.
    // 
    // >Notice: This parameter applies only to cloud-native dual-zone deployment read/write splitting instances. For other types of instances, only active zone-independent endpoints are supported. Even if you specify UnifiedEndpoint, it does not take effect.</notice>
    // 
    // >Notice: The UnifiedEndpoint parameter is currently available only to whitelisted users. If a non-whitelisted user specifies this parameter, an invocation error is returned. To apply for the permissions, submit a ticket.</notice>
    shared_ptr<string> instanceEndpointType_ {};
    // The name of the instance. The name must be 2 to 80 characters in length, and must start with a letter or a Chinese character. It cannot contain the following special characters: `@/:=”<>{[]}` and spaces.
    shared_ptr<string> instanceName_ {};
    // The instance type. Valid values:
    // * **Redis** (default)
    // * **Memcache**
    shared_ptr<string> instanceType_ {};
    // The end time of the maintenance window for the instance. Specify the time in the <i>HH:mm</i>Z format. The time must be in UTC. For example, if you want the maintenance window to end at 02:00 (UTC+8), set the value to `18:00Z`.
    // 
    // > The interval between the start time and the end time must be at least 1 hour.
    // 
    // > If you do not specify this parameter, the default value is 22:00 (UTC), which is 06:00 (UTC+8).
    shared_ptr<string> maintainEndTime_ {};
    // The start time of the maintenance window for the instance. Specify the time in the <i>HH:mm</i>Z format. The time must be in UTC. For example, if you want the maintenance window to start at 01:00 (UTC+8), set the value to `17:00Z`.
    // 
    // > If you do not specify this parameter, the default value is 18:00 (UTC), which is 02:00 (UTC+8).
    shared_ptr<string> maintainStartTime_ {};
    // The network type. Valid values:
    // * **VPC**: Virtual Private Cloud (VPC). This is the default value.
    shared_ptr<string> networkType_ {};
    // The node type. Valid values:
    // * **MASTER_SLAVE**: high-availability (two replicas)
    // * **STAND_ALONE**: single replica
    // * **double**: two replicas
    // * **single**: single replica
    // > For cloud-native instances, select **MASTER_SLAVE** or **STAND_ALONE**. For classic instances, select **double** or **single**.
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The globally unique ID of the parameter template.>Notice: This parameter applies only to cloud-native instances.</notice>
    shared_ptr<string> paramGroupId_ {};
    // The password of the instance. The password must be 8 to 32 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, special characters, and digits. The allowed special characters include `!@#$%^&*()_+-=`.
    shared_ptr<string> password_ {};
    // The subscription duration. Unit: months. Valid values: **1** to **9**, **12**, **24**, **36**, and **60**.
    // 
    // > This parameter is required and takes effect only when the ChargeType parameter is set to **PrePaid**.
    shared_ptr<string> period_ {};
    // The service port of the instance. Valid values: **1** to **65535**. Default value: **6379**.
    shared_ptr<string> port_ {};
    // The internal network IP address of the new instance.
    // 
    // > The internal network IP address must be within the vSwitch CIDR block to which the instance belongs.
    shared_ptr<string> privateIpAddress_ {};
    // The number of read-only nodes in the primary zone. This parameter applies only to cloud-native read/write splitting instances.
    // * If the instance uses the standard architecture, valid values are 1 to 9.
    // * If the instance uses the cluster architecture, valid values are 1 to 4, which indicates the number of read-only nodes per shard.
    // > If you create a multi-zone instance, you can use this parameter and the SlaveReadOnlyCount parameter to specify the number of read-only nodes in the primary and secondary zones.
    // > - If the instance uses the standard architecture, the sum of this parameter and the SlaveReadOnlyCount parameter cannot exceed 9.
    // > - If the instance uses the cluster architecture, the sum of this parameter and the SlaveReadOnlyCount parameter cannot exceed 4.
    shared_ptr<int32_t> readOnlyCount_ {};
    // Specifies whether to restore the account, kernel parameters, and whitelist information from the original backup set when you create an instance by using a specified backup set. For example, to restore the account information, set the value to `account`.
    // 
    // Default value: empty, which indicates that the account, kernel parameters, and whitelist information are not restored from the original backup set.
    // > This parameter applies only to cloud-native instances, and the original backup set must contain the account, kernel parameters, and whitelist information. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query whether the RecoverConfigMode parameter of the specified backup set contains the preceding information.
    shared_ptr<string> recoverConfigMode_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of secondary nodes in the primary zone. This parameter applies only to cloud-native cluster instances with multiple replicas. You can use this parameter to specify a custom number of secondary nodes. Valid values: 1 to 4.
    // 
    // > If you create a multi-zone instance, you can use this parameter and the SlaveReplicaCount parameter to specify the number of secondary nodes in the primary and secondary zones. The sum of this parameter and the SlaveReplicaCount parameter cannot exceed 4.
    shared_ptr<int32_t> replicaCount_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore the source instance. If the data flashback feature is enabled for the source instance, you can specify any point in time within the backup retention period of the source instance. The system uses the backup data of the source instance at the specified point in time to create the new instance. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    shared_ptr<string> restoreTime_ {};
    // The secondary zone ID. You can call the [DescribeZones](https://help.aliyun.com/document_detail/473764.html) operation to query the most recent zone list.
    // > The value of this parameter cannot be the same as the value of the ZoneId parameter, and cannot be the ID of a multi-zone deployment.
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of shards. This parameter applies only to cloud-native instances. You can use this parameter to specify a custom number of shards.
    // 
    // - 1: creates a non-cluster architecture.
    // - A value greater than 1: creates a cluster architecture.
    shared_ptr<int32_t> shardCount_ {};
    // The number of read-only nodes in the secondary zone.
    shared_ptr<int32_t> slaveReadOnlyCount_ {};
    // The number of secondary nodes in the secondary zone.
    shared_ptr<int32_t> slaveReplicaCount_ {};
    // If you want to create a new instance based on the backup set of an instance, specify the source instance ID in this parameter first.
    // > Then, specify the backup set or point in time by using the BackupId, ClusterBackupId (recommended for cloud-native cluster architecture), or RestoreTime parameter. This parameter must be used in combination with one of the preceding three parameters.
    shared_ptr<string> srcDBInstanceId_ {};
    // The tag information of the instance.
    shared_ptr<vector<CreateInstanceRequest::Tag>> tag_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token is case-sensitive and can be up to 64 ASCII characters in length.
    shared_ptr<string> token_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The primary active zone ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query the most recent active zone list, and use this parameter to specify the active zone where you want to create the instance.
    // > You can also specify the SecondaryZoneId parameter to set the secondary active zone. The deployment of the primary and secondary nodes is in the specified primary and secondary active zones to implement a primary/secondary architecture. For example, you can set the ZoneId parameter to "cn-hangzhou-h" and the SecondaryZoneId parameter to "cn-hangzhou-g".
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
