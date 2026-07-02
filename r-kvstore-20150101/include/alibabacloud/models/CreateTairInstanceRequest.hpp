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
      // The key of the tag.
      // 
      // > A single request can contain up to five key-value pairs.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // > **N** specifies the Nth tag in the request. For example, **Tag.1.Value** specifies the value of the first tag, and **Tag.2.Value** specifies the value of the second tag.
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
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // - **true**: Enable auto-renewal.
    // 
    // - **false** (default): Disable auto-renewal.
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal duration. Unit: month. Valid values: **1**, **2**, **3**, **6**, and **12**.
    // 
    // > This parameter is required only when the **AutoRenew** parameter is set to **true**.
    shared_ptr<string> autoRenewPeriod_ {};
    // Specifies whether to use a coupon. Valid values:
    // 
    // - **true**: Use a coupon.
    // 
    // - **false** (default): Do not use a coupon.
    shared_ptr<string> autoUseCoupon_ {};
    // The ID of the backup set from the source instance. The system creates a new instance based on the data in this backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query the backup set ID. If the source instance is a cluster instance, you must specify the backup ID for each shard, separated by commas, for example, "10\\*\\*,11\\*\\*,15\\*\\*".
    // 
    // > If your instance is a cloud-native cluster instance, we recommend that you call the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation to query the cluster backup ID, such as `cb-xx`. Then, specify the cluster backup ID for the `ClusterBackupId` parameter to clone the cluster instance. This avoids the need to specify the backup ID of each shard.
    shared_ptr<string> backupId_ {};
    // The business information. This can be the ID of a promotion or a business context.
    shared_ptr<string> businessInfo_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **PrePaid** (default): The subscription billing method.
    // 
    // - **PostPaid**: The pay-as-you-go billing method.
    shared_ptr<string> chargeType_ {};
    // A client-generated token that ensures the idempotence of the request. The token must be unique among different requests. It is case-sensitive and cannot exceed 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the cluster backup set. Some instances that use the cluster architecture support cluster backup sets. You can call the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation to query for cluster backup set IDs.
    // 
    // - If this feature is supported, you can specify this parameter and leave the **BackupId** parameter empty.
    // 
    // - If this feature is not supported, you must specify the backup ID of each shard of the source instance for the `BackupId` parameter. Separate the backup IDs with commas, for example, "2158\\*\\*\\*\\*20,2158\\*\\*\\*\\*22".
    shared_ptr<string> clusterBackupId_ {};
    // The prefix of the connection string. It must start with a lowercase letter, consist of lowercase letters and digits, and be 8 to 40 characters in length.
    // 
    // > The full connection string is in the format of `<prefix>-<instance ID>.redis.rds.aliyuncs.com`.
    shared_ptr<string> connectionStringPrefix_ {};
    // The coupon code.
    shared_ptr<string> couponNo_ {};
    // Specifies whether to perform a precheck for this request. Valid values:
    // 
    // - **true**: Performs a precheck and does not create the instance. The system checks the request parameters, request format, service limits, and available inventory. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): Sends a normal request and creates the instance after the request passes the precheck.
    shared_ptr<bool> dryRun_ {};
    // The database version. Default value: **1.0**. The valid values depend on the Tair instance series:
    // 
    // - **tair_rdb**: Tair memory-enhanced instances are compatible with Redis 5.0, Redis 6.0, and Redis 7.0. Set the value to **5.0**, **6.0**, or **7.0**.
    // 
    // - **tair_scm**: Tair persistent memory-optimized instances are compatible with Redis 6.0. Set the value to **1.0**.
    // 
    // - **tair_essd**: Tair disk-based instances (ESSD/SSD) are compatible with Redis 6.0. Set the value to **1.0** to create an ESSD-based instance or **2.0** to create an SSD-based instance.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether to create the instance as a child instance in a distributed instance. By using this parameter, you can create a distributed instance.
    // 
    // - To create the first child instance, set this parameter to **true**.
    // 
    // - To create the second or third child instance, specify the ID of the distributed instance, such as `gr-bp14rkqrhac****`.
    // 
    // - If you do not want to create a distributed instance, do not specify this parameter.
    // 
    // > To be created as a child instance of a distributed instance, the new instance must be a Tair memory-enhanced instance.
    shared_ptr<string> globalInstanceId_ {};
    // The IDs of the global IP whitelist templates for the instance. To specify multiple template IDs, separate them with commas. The IDs cannot be repeated.
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The instance type. For more information, see the following topics:
    // 
    // - [Memory-enhanced instance types](https://help.aliyun.com/document_detail/2527112.html)
    // 
    // - [Persistent memory-optimized instance types](https://help.aliyun.com/document_detail/2527110.html)
    // 
    // - [Disk-based instance types](https://help.aliyun.com/document_detail/2527111.html)
    // 
    // This parameter is required.
    shared_ptr<string> instanceClass_ {};
    // The type of connection string to use when creating a cloud-native, dual-zone instance with the read/write splitting architecture. If you do not specify this parameter, the default value `AzIndependentEndpoint` is used.
    // 
    // - **AzIndependentEndpoint** (**default**): Zone-specific connection string. The primary and secondary zones each provide an independent connection string, allowing clients to connect to the nearest zone.
    // 
    // - **UnifiedEndpoint**: Unified connection string. A single connection string is provided to access nodes in both the primary and secondary zones, but this may cause cross-zone access.
    // 
    // >Notice: 
    // 
    // This parameter applies only to cloud-native, dual-zone instances with the read/write splitting architecture. Other instance types support only zone-specific connection strings.
    // 
    // 
    // 
    // >Notice: 
    // 
    // The `UnifiedEndpoint` option is available only to users on a whitelist. If a non-whitelisted user specifies this value, the request fails. To request access, submit a ticket.
    shared_ptr<string> instanceEndpointType_ {};
    // The name of the instance. The name must meet the following requirements:
    // 
    // - It must be 2 to 80 characters in length.
    // 
    // - It must start with an uppercase or lowercase letter or a Chinese character. It cannot contain spaces or the following special characters: `@/:=”<>{[]}`.
    shared_ptr<string> instanceName_ {};
    // The Tair instance series, which determines the storage medium. Valid values:
    // 
    // - **tair_rdb**: memory-enhanced
    // 
    // - **tair_scm**: persistent memory-optimized
    // 
    // - **tair_essd**: disk-based
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The end time of the maintenance window. Specify the time in the *HH:mm*Z format (UTC). For example, to end the maintenance at 02:00 (UTC+8), set this parameter to `18:00Z`.
    // 
    // > The maintenance window must be at least one hour long.
    // 
    // > If this parameter is not specified, the maintenance window ends at 22:00 UTC (06:00 UTC+8) by default.
    shared_ptr<string> maintainEndTime_ {};
    // The start time of the maintenance window. Specify the time in the *HH:mm*Z format (UTC). For example, to start the maintenance at 01:00 (UTC+8), set this parameter to `17:00Z`.
    // 
    // > If this parameter is not specified, the maintenance window starts at 18:00 UTC (02:00 UTC+8) by default.
    shared_ptr<string> maintainStartTime_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the parameter template. The instance is created by using the parameters defined in this template.
    shared_ptr<string> paramGroupId_ {};
    // The password of the instance. The password must meet the following requirements:
    // 
    // - It must be 8 to 32 characters in length.
    // 
    // - It must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The supported special characters are `!@#$%^&*()_+-=`.
    shared_ptr<string> password_ {};
    // The subscription duration, in months. Valid values: **1**, **2**, **3**, **4**, **5**, **6**, 7, 8, 9, 12, 24, 36, and 60.
    // 
    // > This parameter is required only when you set the `ChargeType` parameter to `PrePaid`.
    shared_ptr<int32_t> period_ {};
    // The service port of the instance. Valid values: 1 to 65535. Default value: 6379.
    shared_ptr<int32_t> port_ {};
    // The private IP address of the instance.
    // 
    // > The IP address must be within the CIDR block of the vSwitch to which the instance belongs. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query the CIDR block information.
    shared_ptr<string> privateIpAddress_ {};
    // The number of read-only nodes in the primary zone. This parameter is applicable only to cloud-native instances that use the read/write splitting architecture.
    // 
    // - If the instance uses the standard architecture, the valid values are 1 to 9.
    // 
    // - If the instance uses the cluster architecture, specify the number of read-only nodes per shard. The valid values are 1 to 4.
    // 
    // > If you create a multi-zone instance, you can use this parameter and the `SlaveReadOnlyCount` parameter to customize the number of read-only nodes in the primary and secondary zones.
    // >
    // > - If the instance uses the standard architecture, the sum of `ReadOnlyCount` and `SlaveReadOnlyCount` cannot exceed 9.
    // >
    // > - If the instance uses the cluster architecture, the sum of `ReadOnlyCount` and `SlaveReadOnlyCount` cannot exceed 4.
    shared_ptr<int32_t> readOnlyCount_ {};
    // When creating an instance from a backup set, specifies whether to restore configurations such as account information (`account`), kernel parameters (`config`), and whitelists (`whitelist`) from the source backup set. To restore a specific configuration, specify its keyword. To restore multiple configurations, separate the keywords with commas.
    // 
    // If this parameter is not specified, no configurations are restored from the source backup set.
    // 
    // > This parameter applies only to cloud-native instances, and the source backup set must contain the specified configuration information. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation and check the `RecoverConfigMode` parameter in the response to check if the backup set contains the information.
    shared_ptr<string> recoverConfigMode_ {};
    // The ID of the region where you want to create the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of replica nodes in the primary zone. This parameter is applicable only to cloud-native, multi-replica cluster instances. You can use this parameter to customize the number of replica nodes. Valid values: 1 to 4.
    // 
    // > If you create a multi-zone instance, you can use this parameter and the `SlaveReplicaCount` parameter to customize the number of replica nodes in the primary and secondary zones. The sum of `ReplicaCount` and `SlaveReplicaCount` cannot exceed 4.
    shared_ptr<int32_t> replicaCount_ {};
    // The ID of the resource group to which the instance belongs.
    // 
    // > - You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation or use the Resource Management console to query the IDs of resource groups. For more information, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    // >
    // > - Before you change the resource group of an instance, you can call the [ListResources](https://help.aliyun.com/document_detail/158866.html) operation to view the current resource group of the instance.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // If point-in-time recovery (PITR) is enabled for the source instance, you can specify a point in time within the backup retention period. The system creates a new instance by using the backup data of the source instance at that point in time. Specify the time in the *yyyy-MM-dd*T*HH:mm:ss*Z format (UTC).
    shared_ptr<string> restoreTime_ {};
    // The ID of the secondary zone. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query available zones.
    // 
    // > The value of this parameter cannot be the same as the value of the `ZoneId` parameter. You cannot specify a multi-zone ID.
    shared_ptr<string> secondaryZoneId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of shards in the instance. Valid values:
    // 
    // - **1** (default): Creates a standard architecture instance with a single shard.
    // 
    // - From **2** to **32**: Creates a cluster architecture instance with the specified number of shards.
    // 
    // > You can specify a value from **2** to **32** for this parameter only when you set the **InstanceType** parameter to `tair_rdb` or `tair_scm`. Only memory-enhanced and persistent memory-optimized instances support the cluster architecture.
    shared_ptr<int32_t> shardCount_ {};
    // The architecture type of the instance. Valid values:
    // 
    // - **MASTER_SLAVE** (default): The primary/replica architecture, which provides high availability.
    // 
    // - **STAND_ALONE**: single-replica. This architecture uses a single node. If the node fails, data is lost, and the system automatically creates a new, empty instance. This architecture is supported only for **single-zone** deployments and does not support cluster or read/write splitting architectures.
    shared_ptr<string> shardType_ {};
    // The number of read-only nodes in the secondary zone.
    shared_ptr<int32_t> slaveReadOnlyCount_ {};
    // The number of replica nodes in the secondary zone.
    shared_ptr<int32_t> slaveReplicaCount_ {};
    // To create an instance from a backup set of an existing instance, specify the ID of the source instance.
    // 
    // > You must also specify the backup data by using one of the following parameters: **BackupId**, **ClusterBackupId**, or **RestoreTime**. We recommend that you use `ClusterBackupId` for cloud-native instances that use a cluster architecture.
    shared_ptr<string> srcDBInstanceId_ {};
    // The storage space of the disk-based instance. The valid values of this parameter vary based on the instance type. For more information, see [Disk-based instance types](https://help.aliyun.com/document_detail/2527111.html).
    // 
    // > This parameter is required only when you set the **InstanceType** parameter to `tair_essd` to create a Tair instance that uses an ESSD. For Tair instances that use standard `SSD`s, the storage capacity is determined by the instance type and you do not need to specify this parameter.
    shared_ptr<int32_t> storage_ {};
    // The storage type. Valid values: **essd_pl1**, **essd_pl2**, and **essd_pl3**.
    // 
    // > This parameter is required only when you set the **InstanceType** parameter to `tair_essd` to create a Tair instance that uses an Enhanced SSD (ESSD).
    shared_ptr<string> storageType_ {};
    // The tags of the instance.
    shared_ptr<vector<CreateTairInstanceRequest::Tag>> tag_ {};
    // The ID of the vSwitch in the specified VPC. You can call the VPC API operation [DescribeVSwitches](https://help.aliyun.com/document_detail/35739.html) to obtain the vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the Virtual Private Cloud (VPC) where you want to create the instance. You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation to query available VPCs.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the primary zone where you want to create the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/473763.html) operation to query available zones.
    // 
    // > You can also specify a secondary zone by using the `SecondaryZoneId` parameter. This deploys the primary and replica nodes in different zones within the same region for a high-availability primary/replica architecture. For example, you can set `ZoneId` to `cn-hangzhou-h` and `SecondaryZoneId` to `cn-hangzhou-g`.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
