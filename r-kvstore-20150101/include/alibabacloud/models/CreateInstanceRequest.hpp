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
      // > - `N` represents the sequence number of the tag, from 1 to 20. You can add a maximum of 20 tags to an instance.
      // >
      // > - If the tag key does not exist, it is automatically created.
      shared_ptr<string> key_ {};
      // The value for tag `N`.
      // 
      // > The N in **Tag.N.Value** specifies the sequence number of the tag. For example, **Tag.1.Value** specifies the value of the first tag, and **Tag.2.Value** specifies the value of the second tag.
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
    // Specifies whether to enable AOF persistence for the new instance. Valid values:
    // 
    // - **yes** (default): Enables AOF persistence.
    // 
    // - **no**: Disables AOF persistence.
    // 
    // > This parameter is available only for classic edition instances. AOF persistence cannot be configured for cloud native edition instances at creation.
    shared_ptr<string> appendonly_ {};
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // - **true**: Enables auto-renewal.
    // 
    // - **false** (default): Disables auto-renewal.
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal duration, in months. Valid values: **1**, **2**, **3**, **6**, and **12**.
    // 
    // > This parameter is required when **AutoRenew** is set to **true**.
    shared_ptr<string> autoRenewPeriod_ {};
    // Specifies whether to use a coupon. Valid values:
    // 
    // - **true**: Uses a coupon.
    // 
    // - **false** (default): Does not use a coupon.
    shared_ptr<string> autoUseCoupon_ {};
    // The ID of the backup that you want to use to create the new instance. You can obtain backup IDs by calling the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation. If the source instance has a cluster architecture, you must specify the backup IDs of all its shards, separated by commas (for example, "10\\*\\*,11\\*\\*,15\\*\\*").
    // 
    // > If your source instance is a cloud native cluster instance, it is recommended to call [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) to get a cluster backup ID (for example, "cb-xx") and use the `ClusterBackupId` parameter instead. This avoids the need to specify the backup ID for each shard.
    shared_ptr<string> backupId_ {};
    // The campaign ID or business information.
    shared_ptr<string> businessInfo_ {};
    // The storage capacity of the instance, in MB.
    // 
    // > You must specify either the **Capacity** or the **InstanceClass** parameter.
    shared_ptr<int64_t> capacity_ {};
    // The billing method. Valid values:
    // 
    // - **PrePaid**: subscription.
    // 
    // - **PostPaid** (default): pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The ID of the cluster backup. You can get this ID by calling the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation. This parameter is available for some cloud native cluster instances.
    // 
    // - This parameter is mutually exclusive with `BackupId`.
    // 
    // - If this parameter is not available for your instance, you must specify the backup ID of each shard in the `BackupId` parameter (for example, "2158\\*\\*\\*\\*20,2158\\*\\*\\*\\*22").
    shared_ptr<string> clusterBackupId_ {};
    // The prefix of the connection string. The prefix must be 8 to 40 characters long, start with a lowercase letter, and contain only lowercase letters and digits.
    // 
    // > The full connection string is in the format: \\<prefix>.redis.rds.aliyuncs.com.
    shared_ptr<string> connectionStringPrefix_ {};
    // The coupon code. Default value: `default`.
    shared_ptr<string> couponNo_ {};
    // The ID of the dedicated host group. This parameter is required when you create a Redis instance in a dedicated host group.
    shared_ptr<string> dedicatedHostGroupId_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Checks the request for validity without creating the instance. The system verifies required parameters, request format, and service limits. If the request is valid, the `DryRunOperation` error code is returned. If the request is invalid, an error message is returned.
    // 
    // - **false** (default): Sends the request. If the request is valid, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The Redis engine version. Valid values for **classic edition** instances:
    // 
    // - **2.8** (Not recommended. [Support for this version is scheduled to be discontinued](https://help.aliyun.com/document_detail/2674657.html).)
    // 
    // - **4.0** (Not recommended.)
    // 
    // - **5.0**
    // 
    // Valid values for **cloud native edition** instances:
    // 
    // - **5.0**
    // 
    // - **6.0** (Recommended)
    // 
    // - **7.0**
    // 
    // > The default value is **5.0**.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether to create the new instance as the first child instance of a distributed instance. Valid values:
    // 
    // - **true**: Creates the instance as the first child instance.
    // 
    // - **false** (default): Does not create the instance as the first child instance.
    // 
    // > * If you set this parameter to **true**, the new instance must be a Tair memory-enhanced instance that runs Redis 5.0.
    // >
    // > * This parameter is available only in Chinese mainland.
    shared_ptr<bool> globalInstance_ {};
    // The ID of the distributed instance. This parameter is available only in Chinese mainland.
    // 
    // <props="china">
    // 
    // This parameter is required to add the new instance as a child of a distributed instance. For more information and the console procedure, see [Add a child instance to a distributed instance](https://help.aliyun.com/document_detail/106885.html).
    shared_ptr<string> globalInstanceId_ {};
    // The IDs of the security groups to associate with the instance. You can specify multiple security group IDs, separated by commas (,). IDs cannot be repeated.
    // >Notice: This parameter is available only for cloud native edition instances. Security groups are not supported for classic edition instances.
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The instance type. For example, `redis.master.small.default` specifies a 1 GB Community Edition (classic edition) instance with a standard, dual-replica architecture. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/26350.html).
    // 
    // > You must specify either the **Capacity** or the **InstanceClass** parameter.
    shared_ptr<string> instanceClass_ {};
    // The connection endpoint type. This parameter is applicable only when you create a dual-zone, read/write splitting instance of the cloud native edition. If this parameter is not specified, `AzIndependentEndpoint` is used. Valid values:
    // 
    // - **AzIndependentEndpoint**: (**Default**) Zone-Independent Endpoint. The primary and secondary zones each provide an independent connection string for zone-local access.
    // 
    // - **UnifiedEndpoint**: Unified Endpoint. Provides a single connection string to access nodes in both zones, which may result in cross-zone access.
    // 
    // >Notice: 
    // 
    // This parameter is applicable only to dual-zone, read/write splitting instances of the cloud native edition. For other instance types, only zone-independent endpoints are supported, and specifying `UnifiedEndpoint` has no effect.
    // 
    // 
    // 
    // >Notice: 
    // 
    // The `UnifiedEndpoint` parameter is currently available only to allowlisted users. API calls will fail if you are not on the allowlist. To be added to the allowlist, submit a ticket.
    shared_ptr<string> instanceEndpointType_ {};
    // The name of the instance. The name must be 2 to 80 characters long, start with a letter (uppercase or lowercase) or a Chinese character, and not contain spaces or the characters `@/:=”<>{[]}`.
    shared_ptr<string> instanceName_ {};
    // The instance type. Valid values:
    // 
    // - **Redis** (default)
    // 
    // - **Memcache**
    shared_ptr<string> instanceType_ {};
    // The end time of the maintenance window. Specify the time in the *HH:mm*Z format (UTC). For example, to set the end time to 02:00 (UTC+8), specify `18:00Z`.
    // 
    // > The duration of the maintenance window must be at least one hour.
    // 
    // > If this parameter is not specified, the maintenance window ends at 06:00 (UTC+8), which is 22:00 (UTC).
    shared_ptr<string> maintainEndTime_ {};
    // The start of the maintenance window. Specify the time in the *HH:mm*Z format (UTC). For example, to set the start time to 01:00 (UTC+8), specify `17:00Z`.
    // 
    // > If this parameter is not specified, the maintenance window starts at 02:00 (UTC+8), which is 18:00 (UTC).
    shared_ptr<string> maintainStartTime_ {};
    // The network type. Valid value:
    // 
    // - **VPC**: Deploys the instance in a Virtual Private Cloud. This is the default value.
    shared_ptr<string> networkType_ {};
    // The node type. Valid values:
    // 
    // - **MASTER_SLAVE**: high-availability (primary-replica)
    // 
    // - **STAND_ALONE**: standalone (single-node)
    // 
    // - **double**: primary-replica
    // 
    // - **single**: standalone (single-node)
    // 
    // > Set this parameter to **MASTER_SLAVE** or **STAND_ALONE** for cloud native edition instances. Set this parameter to **double** or **single** for classic edition instances.
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the parameter group. This ID must be globally unique.>Notice:  This parameter is available only for cloud native edition instances.
    shared_ptr<string> paramGroupId_ {};
    // The password for the instance. The password must be 8 to 32 characters long and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The allowed special characters are `!@#$%^&*()_+-=`.
    shared_ptr<string> password_ {};
    // The subscription duration, in months. Valid values: **1** to **9**, **12**, **24**, **36**, and **60**.
    // 
    // > This parameter is available and required only when **ChargeType** is set to **PrePaid**.
    shared_ptr<string> period_ {};
    // The service port of the instance. The port number must be between **1** and **65535**. The default value is **6379**.
    shared_ptr<string> port_ {};
    // The private IP address of the new instance.
    // 
    // > The IP address must be within the CIDR block of the specified vSwitch.
    shared_ptr<string> privateIpAddress_ {};
    // The number of read-only replicas in the primary zone. This parameter is available only when creating a read/write splitting instance of the cloud native edition.
    // 
    // - For a standard-architecture instance, the value must be an integer from 1 to 9.
    // 
    // - For a cluster-architecture instance, the value must be an integer from 1 to 4. This specifies the number of read-only replicas for each data shard.
    // 
    // > If you create a multi-zone instance, you can use this parameter and `SlaveReadOnlyCount` to customize the number of read-only replicas in the primary and secondary zones.
    // >
    // > - The sum of this parameter and `SlaveReadOnlyCount` cannot exceed 9 for a standard-architecture instance.
    // >
    // > - The sum of this parameter and `SlaveReadOnlyCount` cannot exceed 4 for a cluster-architecture instance.
    shared_ptr<int32_t> readOnlyCount_ {};
    // Specifies which configurations to restore from the backup when creating an instance. Valid values include `account`, `config`, and `whitelist`. For example, to restore account settings, specify `account`. To restore multiple configurations, separate them with commas.
    // 
    // By default, this parameter is empty, which means no configurations are restored.
    // 
    // > This parameter is applicable only to cloud native edition instances. The source backup must contain the specified configurations. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation and check the `RecoverConfigMode` field in the response to determine which configurations a backup contains.
    shared_ptr<string> recoverConfigMode_ {};
    // The ID of the region in which to create the instance. Call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to get a list of region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of replicas in the primary zone. This parameter is available only for multi-replica cluster instances of the cloud native edition. You can specify a value from 1 to 4.
    // 
    // > When creating a multi-zone instance, you can use this parameter and `SlaveReplicaCount` to customize the number of replicas in the primary and secondary zones. The sum of `ReplicaCount` and `SlaveReplicaCount` cannot exceed 4.
    shared_ptr<int32_t> replicaCount_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore data, specified in the *yyyy-MM-dd*T*HH:mm:ss*Z (UTC) format.
    shared_ptr<string> restoreTime_ {};
    // The ID of the secondary zone. You can call the [DescribeZones](https://help.aliyun.com/document_detail/473764.html) operation to query the latest list of zones.
    // 
    // > The value of this parameter cannot be the same as the value of the `ZoneId` parameter, and you cannot specify a multi-zone ID.
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of shards. This parameter is available only for cloud native edition instances.
    // 
    // - A value of **1** creates an instance with a standard architecture.
    // 
    // - A value greater than **1** creates an instance with a cluster architecture.
    shared_ptr<int32_t> shardCount_ {};
    // The number of read-only replicas in the secondary zone.
    shared_ptr<int32_t> slaveReadOnlyCount_ {};
    // The number of replicas in the secondary zone.
    shared_ptr<int32_t> slaveReplicaCount_ {};
    // To create an instance from a backup, specify the ID of the source instance.
    // 
    // > This parameter must be used in conjunction with one of the following parameters: **BackupId**, **ClusterBackupId** (recommended for cloud native, cluster-architecture instances), or **RestoreTime**.
    shared_ptr<string> srcDBInstanceId_ {};
    // The tags of the instance.
    shared_ptr<vector<CreateInstanceRequest::Tag>> tag_ {};
    // A client-generated token to ensure the idempotence of the request. The token must be unique across requests, case-sensitive, and cannot exceed 64 ASCII characters.
    shared_ptr<string> token_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The ID of the primary zone for the instance. You can call the [DescribeZones](https://help.aliyun.com/document_detail/473763.html) operation to query available zones.
    // 
    // > You can also specify a secondary zone by using the `SecondaryZoneId` parameter. The primary and replica nodes are then deployed in the specified primary and secondary zones to create a dual-zone architecture for in-city disaster recovery. For example, you can set the `ZoneId` parameter to "cn-hangzhou-h" and the `SecondaryZoneId` parameter to "cn-hangzhou-g".
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
