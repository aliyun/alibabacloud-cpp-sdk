// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAIRINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAIRINSTANCEREQUEST_HPP_
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
  class CreateTairInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTairInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterBackupId, clusterBackupId_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(GlobalInstanceId, globalInstanceId_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceEndpointType, instanceEndpointType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
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
      DARABONBA_PTR_TO_JSON(ShardType, shardType_);
      DARABONBA_PTR_TO_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
      DARABONBA_PTR_TO_JSON(SlaveReplicaCount, slaveReplicaCount_);
      DARABONBA_PTR_TO_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTairInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterBackupId, clusterBackupId_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(GlobalInstanceId, globalInstanceId_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceEndpointType, instanceEndpointType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
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
      DARABONBA_PTR_FROM_JSON(ShardType, shardType_);
      DARABONBA_PTR_FROM_JSON(SlaveReadOnlyCount, slaveReadOnlyCount_);
      DARABONBA_PTR_FROM_JSON(SlaveReplicaCount, slaveReplicaCount_);
      DARABONBA_PTR_FROM_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateTairInstanceRequest() = default ;
    CreateTairInstanceRequest(const CreateTairInstanceRequest &) = default ;
    CreateTairInstanceRequest(CreateTairInstanceRequest &&) = default ;
    CreateTairInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTairInstanceRequest() = default ;
    CreateTairInstanceRequest& operator=(const CreateTairInstanceRequest &) = default ;
    CreateTairInstanceRequest& operator=(CreateTairInstanceRequest &&) = default ;
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
      // The tag key. A tag key and a tag value form a key-value pair.
      // > You can specify up to 5 tag key-value pairs at a time.
      shared_ptr<string> key_ {};
      // The tag value.
      // > **N** indicates the sequence number of the tag. For example, **Tag.1.Value** indicates the value of the first tag, and **Tag.2.Value** indicates the value of the second tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->autoUseCoupon_ == nullptr && this->backupId_ == nullptr && this->businessInfo_ == nullptr
        && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->clusterBackupId_ == nullptr && this->connectionStringPrefix_ == nullptr && this->couponNo_ == nullptr
        && this->dryRun_ == nullptr && this->engineVersion_ == nullptr && this->globalInstanceId_ == nullptr && this->globalSecurityGroupIds_ == nullptr && this->instanceClass_ == nullptr
        && this->instanceEndpointType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->paramGroupId_ == nullptr && this->password_ == nullptr && this->period_ == nullptr
        && this->port_ == nullptr && this->privateIpAddress_ == nullptr && this->readOnlyCount_ == nullptr && this->recoverConfigMode_ == nullptr && this->regionId_ == nullptr
        && this->replicaCount_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr
        && this->secondaryZoneId_ == nullptr && this->securityToken_ == nullptr && this->shardCount_ == nullptr && this->shardType_ == nullptr && this->slaveReadOnlyCount_ == nullptr
        && this->slaveReplicaCount_ == nullptr && this->srcDBInstanceId_ == nullptr && this->storage_ == nullptr && this->storageType_ == nullptr && this->tag_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateTairInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateTairInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateTairInstanceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline CreateTairInstanceRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateTairInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateTairInstanceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateTairInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTairInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterBackupId Field Functions 
    bool hasClusterBackupId() const { return this->clusterBackupId_ != nullptr;};
    void deleteClusterBackupId() { this->clusterBackupId_ = nullptr;};
    inline string getClusterBackupId() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupId_, "") };
    inline CreateTairInstanceRequest& setClusterBackupId(string clusterBackupId) { DARABONBA_PTR_SET_VALUE(clusterBackupId_, clusterBackupId) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline CreateTairInstanceRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateTairInstanceRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTairInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateTairInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // globalInstanceId Field Functions 
    bool hasGlobalInstanceId() const { return this->globalInstanceId_ != nullptr;};
    void deleteGlobalInstanceId() { this->globalInstanceId_ = nullptr;};
    inline string getGlobalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalInstanceId_, "") };
    inline CreateTairInstanceRequest& setGlobalInstanceId(string globalInstanceId) { DARABONBA_PTR_SET_VALUE(globalInstanceId_, globalInstanceId) };


    // globalSecurityGroupIds Field Functions 
    bool hasGlobalSecurityGroupIds() const { return this->globalSecurityGroupIds_ != nullptr;};
    void deleteGlobalSecurityGroupIds() { this->globalSecurityGroupIds_ = nullptr;};
    inline string getGlobalSecurityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupIds_, "") };
    inline CreateTairInstanceRequest& setGlobalSecurityGroupIds(string globalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupIds_, globalSecurityGroupIds) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateTairInstanceRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceEndpointType Field Functions 
    bool hasInstanceEndpointType() const { return this->instanceEndpointType_ != nullptr;};
    void deleteInstanceEndpointType() { this->instanceEndpointType_ = nullptr;};
    inline string getInstanceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpointType_, "") };
    inline CreateTairInstanceRequest& setInstanceEndpointType(string instanceEndpointType) { DARABONBA_PTR_SET_VALUE(instanceEndpointType_, instanceEndpointType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateTairInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateTairInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline CreateTairInstanceRequest& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline CreateTairInstanceRequest& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTairInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTairInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramGroupId Field Functions 
    bool hasParamGroupId() const { return this->paramGroupId_ != nullptr;};
    void deleteParamGroupId() { this->paramGroupId_ = nullptr;};
    inline string getParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(paramGroupId_, "") };
    inline CreateTairInstanceRequest& setParamGroupId(string paramGroupId) { DARABONBA_PTR_SET_VALUE(paramGroupId_, paramGroupId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateTairInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateTairInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateTairInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateTairInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // readOnlyCount Field Functions 
    bool hasReadOnlyCount() const { return this->readOnlyCount_ != nullptr;};
    void deleteReadOnlyCount() { this->readOnlyCount_ = nullptr;};
    inline int32_t getReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(readOnlyCount_, 0) };
    inline CreateTairInstanceRequest& setReadOnlyCount(int32_t readOnlyCount) { DARABONBA_PTR_SET_VALUE(readOnlyCount_, readOnlyCount) };


    // recoverConfigMode Field Functions 
    bool hasRecoverConfigMode() const { return this->recoverConfigMode_ != nullptr;};
    void deleteRecoverConfigMode() { this->recoverConfigMode_ = nullptr;};
    inline string getRecoverConfigMode() const { DARABONBA_PTR_GET_DEFAULT(recoverConfigMode_, "") };
    inline CreateTairInstanceRequest& setRecoverConfigMode(string recoverConfigMode) { DARABONBA_PTR_SET_VALUE(recoverConfigMode_, recoverConfigMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTairInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaCount Field Functions 
    bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
    void deleteReplicaCount() { this->replicaCount_ = nullptr;};
    inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
    inline CreateTairInstanceRequest& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTairInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTairInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTairInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CreateTairInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline CreateTairInstanceRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateTairInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline CreateTairInstanceRequest& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // shardType Field Functions 
    bool hasShardType() const { return this->shardType_ != nullptr;};
    void deleteShardType() { this->shardType_ = nullptr;};
    inline string getShardType() const { DARABONBA_PTR_GET_DEFAULT(shardType_, "") };
    inline CreateTairInstanceRequest& setShardType(string shardType) { DARABONBA_PTR_SET_VALUE(shardType_, shardType) };


    // slaveReadOnlyCount Field Functions 
    bool hasSlaveReadOnlyCount() const { return this->slaveReadOnlyCount_ != nullptr;};
    void deleteSlaveReadOnlyCount() { this->slaveReadOnlyCount_ = nullptr;};
    inline int32_t getSlaveReadOnlyCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReadOnlyCount_, 0) };
    inline CreateTairInstanceRequest& setSlaveReadOnlyCount(int32_t slaveReadOnlyCount) { DARABONBA_PTR_SET_VALUE(slaveReadOnlyCount_, slaveReadOnlyCount) };


    // slaveReplicaCount Field Functions 
    bool hasSlaveReplicaCount() const { return this->slaveReplicaCount_ != nullptr;};
    void deleteSlaveReplicaCount() { this->slaveReplicaCount_ = nullptr;};
    inline int32_t getSlaveReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(slaveReplicaCount_, 0) };
    inline CreateTairInstanceRequest& setSlaveReplicaCount(int32_t slaveReplicaCount) { DARABONBA_PTR_SET_VALUE(slaveReplicaCount_, slaveReplicaCount) };


    // srcDBInstanceId Field Functions 
    bool hasSrcDBInstanceId() const { return this->srcDBInstanceId_ != nullptr;};
    void deleteSrcDBInstanceId() { this->srcDBInstanceId_ = nullptr;};
    inline string getSrcDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcDBInstanceId_, "") };
    inline CreateTairInstanceRequest& setSrcDBInstanceId(string srcDBInstanceId) { DARABONBA_PTR_SET_VALUE(srcDBInstanceId_, srcDBInstanceId) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
    inline CreateTairInstanceRequest& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateTairInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTairInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTairInstanceRequest::Tag>) };
    inline vector<CreateTairInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTairInstanceRequest::Tag>) };
    inline CreateTairInstanceRequest& setTag(const vector<CreateTairInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTairInstanceRequest& setTag(vector<CreateTairInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateTairInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateTairInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateTairInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable automatic payment. Set the value to **true**.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // * **true**: enables auto-renewal.
    // * **false**: disables auto-renewal. This is the default value.
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal epoch. Unit: months. Valid values: **1**, **2**, **3**, **6**, and **12**.
    // > This parameter is required when the **AutoRenew** parameter is set to **true**.
    shared_ptr<string> autoRenewPeriod_ {};
    // Specifies whether to use a voucher. Valid values:
    // * **true**: uses a voucher.
    // * **false**: does not use a voucher. This is the default value.
    shared_ptr<string> autoUseCoupon_ {};
    // The ID of the backup set of the source instance. The system uses the data in the specified backup set to create the instance. You can invoke the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query the backup set ID. If the source instance is a cluster instance, you must enter the backup set IDs of all shards in the source instance and separate them with commas, such as "10**,11**,15**".
    // > If your instance is a cloud-native architecture instance, we recommend that you invoke the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation to query the cluster backup set ID, such as "cb-xx", and then specify the ClusterBackupId request parameter to clone the cluster instance. This saves you the trouble of entering the backup set ID of each shard.
    shared_ptr<string> backupId_ {};
    // The activity ID and business information.
    shared_ptr<string> businessInfo_ {};
    // The billing method. Valid values:
    // - **PrePaid**: subscription. This is the default value.
    // - **PostPaid**: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token is case-sensitive and can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the cluster backup set. Some new cluster architectures support cluster backup set IDs. You can call the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation to obtain the ID.
    // * If the cluster architecture supports cluster backup sets, you can enter the specified cluster backup set ID. You do not need to specify the **BackupId** parameter.
    // * If the cluster architecture does not support cluster backup sets, enter the backup set IDs of all shards in the source instance in the BackupId parameter and separate them with commas, such as "2158\\*\\*\\*\\*20,2158\\*\\*\\*\\*22".
    shared_ptr<string> clusterBackupId_ {};
    // The prefix of the endpoint. The prefix must be 8 to 40 characters in length and can contain lowercase letters and digits. It must start with a lowercase letter.
    // 
    // > 
    // > The endpoint is in the following format: <Prefix-Instance ID>.redis.rds.aliyuncs.com.
    shared_ptr<string> connectionStringPrefix_ {};
    // The coupon code.
    shared_ptr<string> couponNo_ {};
    // Specifies whether to perform a dry run before you create the instance. Valid values:
    // * **true**: performs a dry run without creating the instance. The system checks the request parameters, request format, service limits, and available resources. If the request fails the dry run, the system returns an error. If the request passes the dry run, the system returns the `DryRunOperation` error code.
    // * **false**: sends the request. If the request passes the check, the instance is created. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The database engine version. Default value: **1.0**. The value varies based on the Tair instance type:
    // - Tair_rdb: Tair memory-enhanced instances are compatible with Redis 5.0, Redis 6.0, and Redis 7.0 protocols. Set the value to **5.0**, **6.0**, or **7.0**.
    // - Tair_scm: Tair persistent memory-optimized instances are compatible with the Redis 6.0 protocol. Set the value to **1.0**.
    // - Tair_essd: Tair disk-based (ESSD/SSD) instances are compatible with the Redis 6.0 protocol. Set the value to **1.0** for ESSD-based instances and **2.0** for SSD-based instances.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether to use the new instance as a child instance in a distributed instance. You can use this parameter to create a distributed instance.
    // * To use the new instance as the first child instance, set the value to **true**.
    // * To use the new instance as the second or third child instance, set the value to the ID of the distributed instance, such as gr-bp14rkqrhac****.
    // * If you do not want to use the new instance as a child instance in a distributed instance, leave this parameter empty.
    // > The new instance must be a Tair memory-enhanced instance if you want to use it as a child instance in a distributed instance.
    shared_ptr<string> globalInstanceId_ {};
    // The global IP address whitelist templates of the instance. Separate multiple whitelist templates with commas (,). Each template must be unique.
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The instance type. For more information, see:
    // - [Memory-enhanced instance types](https://help.aliyun.com/document_detail/2527112.html).
    // - [Persistent memory-optimized instance types](https://help.aliyun.com/document_detail/2527110.html).
    // - [Disk-based instance types](https://help.aliyun.com/document_detail/2527111.html).
    // 
    // This parameter is required.
    shared_ptr<string> instanceClass_ {};
    // The endpoint type used when you create a cloud-native Dual-active-zone deployment read/write splitting instance. If you do not specify this parameter, the default value is AzIndependentEndpoint.
    // 
    // - **AzIndependentEndpoint**: active zone-independent endpoint. This is the **default value**. Independent endpoints are provided for the primary and secondary active zones. You can use different endpoints to achieve nearest access.
    // - **UnifiedEndpoint**: unified endpoint. A unified endpoint is provided to access nodes in both the primary and secondary active zones. However, cross-active-zone access may occur.
    // 
    // >Notice: This parameter applies only to cloud-native Dual-active-zone deployment read/write splitting instances. For other types of instances, only active zone-independent endpoints are supported. Even if you specify UnifiedEndpoint, it does not take effect.
    // 
    // >Notice: The UnifiedEndpoint parameter is currently available only to whitelisted users. If you are not a whitelisted user and specify this parameter, an invoke error is returned. To request access, commit a ticket.
    shared_ptr<string> instanceEndpointType_ {};
    // The instance name. The name must meet the following requirements:
    // * The name must be 2 to 80 characters in length.
    // * The name must start with a letter or a Chinese character. It cannot contain spaces or the following special characters: `@/:=”<>{[]}`.
    shared_ptr<string> instanceName_ {};
    // The storage medium. Valid values:
    // * **tair_rdb**: memory-enhanced.
    // * **tair_scm**: persistent memory-optimized.
    // * **tair_essd**: disk-based.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The end time of the maintenance window. Specify the time in the <i>HH:mm</i>Z format. The time must be in UTC. For example, if you want the maintenance window to end at 02:00 (UTC+8), set the value to `18:00Z`.
    // 
    // > The interval between the start time and the end time must be at least 1 hour.
    // 
    // > If you do not specify this parameter, the default value is 22:00 (UTC), which is 06:00 (UTC+8).
    shared_ptr<string> maintainEndTime_ {};
    // The start time of the maintenance window. Specify the time in the <i>HH:mm</i>Z format. The time must be in UTC. For example, if you want the maintenance window to start at 01:00 (UTC+8), set the value to `17:00Z`.
    // 
    // > If you do not specify this parameter, the default value is 18:00 (UTC), which is 02:00 (UTC+8).
    shared_ptr<string> maintainStartTime_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the parameter template. The instance is created based on the parameters in the specified template. Each template ID must be unique.
    shared_ptr<string> paramGroupId_ {};
    // The instance password. The password must meet the following requirements:
    // * The password must be 8 to 32 characters in length.
    // * The password must contain at least three of the following character types: uppercase letters, lowercase letters, special characters, and digits. Supported special characters are `!@#$%^&*()_+-=`.
    shared_ptr<string> password_ {};
    // The subscription duration. Unit: months. Valid values: **1** to **9**, **12**, **24**, **36**, and **60**.
    // > This parameter is required when the **ChargeType** parameter is set to **PrePaid**.
    shared_ptr<int32_t> period_ {};
    // The service port of the instance. Valid values: 1 to 65535. Default value: 6379.
    shared_ptr<int32_t> port_ {};
    // The internal IP address of the instance.
    // 
    // > The IP address must fall within the CIDR block of the vSwitch to which the instance belongs. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation of the VPC API to query the CIDR block information.
    shared_ptr<string> privateIpAddress_ {};
    // The number of read-only nodes in the primary zone. This parameter applies only when you create a cloud-native read/write splitting instance.
    // * If the instance uses the standard architecture, valid values are 1 to 9.
    // * If the instance uses the cluster architecture, valid values are 1 to 4, which indicate the number of read-only nodes per data shard.
    // > If you create a multi-zone instance, you can use this parameter and the SlaveReadOnlyCount parameter to specify the number of read-only nodes in the primary and secondary zones.
    // > * If the instance uses the standard architecture, the sum of the values of this parameter and the SlaveReadOnlyCount parameter cannot exceed 9.
    // > * If the instance uses the cluster architecture, the sum of the values of this parameter and the SlaveReadOnlyCount parameter cannot exceed 4.
    shared_ptr<int32_t> readOnlyCount_ {};
    // Specifies whether to restore the account, kernel parameters, and whitelist from the original backup set when you create an instance by using a specified backup set. For example, to restore the account information, set the value to account.
    // 
    // Default value: empty. An empty value indicates that the account, kernel parameters, and whitelist are not restored from the original backup set.
    // > This parameter applies only to cloud-native instances and requires that the original backup set contains the account, kernel parameters, and whitelist information. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query whether the RecoverConfigMode parameter of a specified backup set contains the preceding information.
    shared_ptr<string> recoverConfigMode_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query the most recent region list. Use this parameter to specify the region where you want to create the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of secondary nodes in the primary zone. This parameter applies only when you create a cloud-native cluster instance with multiple replicas. You can use this parameter to specify the number of secondary nodes. Valid values: 1 to 4.
    // > If you create a multi-zone instance, you can use this parameter and the SlaveReplicaCount parameter to specify the number of secondary nodes in the primary and secondary zones. The sum of the values of this parameter and the SlaveReplicaCount parameter cannot exceed 4.
    shared_ptr<int32_t> replicaCount_ {};
    // The ID of the destination resource group.
    // 
    // > * You can invoke the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation or use the console to obtain the resource group ID list. For related operations, see [View the basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    // > * Before you change the resource group to which the instance belongs, you can invoke the [ListResources](https://help.aliyun.com/document_detail/158866.html) operation to view the current resource group of the instance.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore the source instance. If the data flashback feature is enabled for the source instance, you can specify a point in time within the backup retention period of the source instance. The system uses the backup data of the source instance at the specified point in time to create the instance. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    shared_ptr<string> restoreTime_ {};
    // The secondary zone ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query the most recent zone list.
    // 
    // > The value of this parameter cannot be the same as the value of the ZoneId parameter, and you cannot specify the ID of a multi-zone deployment.
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of data nodes in the instance. Valid values:
    // * **1**: creates a [standard instance](https://help.aliyun.com/document_detail/52228.html) that has only one data node. This is the default value.
    // * **2** to **32**: creates a [cluster instance](https://help.aliyun.com/document_detail/52228.html) that has the specified number of data nodes.
    // 
    // > You can set this parameter to a value from **2** to **32** only when the **InstanceType** parameter is set to **tair_rdb** or **tair_scm**. This means that only memory-enhanced and persistent memory-optimized instances support the cluster architecture.
    shared_ptr<int32_t> shardCount_ {};
    // The instance edition. Valid values:
    // - **MASTER_SLAVE**: High-availability Edition. This edition uses a primary/secondary architecture to ensure high availability. This is the default value.
    // - **STAND_ALONE**: Standalone Edition. This edition uses a single-node architecture. If a node fails, data is lost and the system automatically creates a new empty instance. This edition is supported only in **single-zone** deployments and does not support cluster or read/write splitting architectures.
    shared_ptr<string> shardType_ {};
    // The number of read-only nodes in the secondary zone.
    shared_ptr<int32_t> slaveReadOnlyCount_ {};
    // The number of secondary nodes in the secondary zone.
    shared_ptr<int32_t> slaveReplicaCount_ {};
    // Instance ID of the source instance. If you want to create an instance based on the backup set of an existing instance, specify instance ID of the source instance in this parameter.
    // > Then, specify the backup set or point in time by using the **BackupId**, **ClusterBackupId** (recommended for cloud-native cluster architectures), or **RestoreTime** parameter. This parameter must be used in combination with one of the preceding three parameters.
    shared_ptr<string> srcDBInstanceId_ {};
    // The storage capacity of the disk-based instance. The valid values vary based on the instance type. For more information, see [Disk-based instance types](https://help.aliyun.com/document_detail/2527111.html).
    // > This parameter is required only when the **InstanceType** parameter is set to **tair_essd** and you create an ESSD-based instance. If you create a Tair disk-based **SSD** instance, the capacity field is defined as a fixed value based on the instance type, and you do not need to specify this field.
    shared_ptr<int32_t> storage_ {};
    // The storage type. Valid values: **essd_pl1**, **essd_pl2**, and **essd_pl3**.
    // > This parameter is required only when the **InstanceType** parameter is set to **tair_essd** and you create an ESSD-based instance.
    shared_ptr<string> storageType_ {};
    // The tag information of the instance.
    shared_ptr<vector<CreateTairInstanceRequest::Tag>> tag_ {};
    // The ID of the vSwitch in the VPC. You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation of the VPC API to obtain the vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC). You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation of the VPC API to query the VPC ID.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The primary active zone ID. You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query the most recent active zone list. Use this parameter to specify the active zone where you want to create the instance.
    // > You can also specify the SecondaryZoneId parameter to set the secondary active zone. The primary and secondary nodes will be placed in the specified primary and secondary active zones to implement a dual-active-zone primary/secondary architecture deployment. For example, set the ZoneId parameter to "cn-hangzhou-h" and the SecondaryZoneId parameter to "cn-hangzhou-g".
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
