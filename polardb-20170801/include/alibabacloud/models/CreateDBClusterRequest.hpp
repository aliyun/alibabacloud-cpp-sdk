// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgenticDbClusterDescription, agenticDbClusterDescription_);
      DARABONBA_PTR_TO_JSON(AgenticDbClusterId, agenticDbClusterId_);
      DARABONBA_PTR_TO_JSON(AgenticDbType, agenticDbType_);
      DARABONBA_PTR_TO_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloneDataPoint, cloneDataPoint_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_TO_JSON(CreationOption, creationOption_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBMinorVersion, DBMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeNum, DBNodeNum_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(DefaultTimeZone, defaultTimeZone_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_TO_JSON(LoosePolarLogBin, loosePolarLogBin_);
      DARABONBA_PTR_TO_JSON(LooseXEngine, looseXEngine_);
      DARABONBA_PTR_TO_JSON(LooseXEngineUseMemoryPct, looseXEngineUseMemoryPct_);
      DARABONBA_PTR_TO_JSON(LowerCaseTableNames, lowerCaseTableNames_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(ProxyClass, proxyClass_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_TO_JSON(SourceResourceId, sourceResourceId_);
      DARABONBA_PTR_TO_JSON(SourceUid, sourceUid_);
      DARABONBA_PTR_TO_JSON(StandbyAZ, standbyAZ_);
      DARABONBA_PTR_TO_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_TO_JSON(StorageEncryption, storageEncryption_);
      DARABONBA_PTR_TO_JSON(StorageEncryptionKey, storageEncryptionKey_);
      DARABONBA_PTR_TO_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_TO_JSON(StrictConsistency, strictConsistency_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgenticDbClusterDescription, agenticDbClusterDescription_);
      DARABONBA_PTR_FROM_JSON(AgenticDbClusterId, agenticDbClusterId_);
      DARABONBA_PTR_FROM_JSON(AgenticDbType, agenticDbType_);
      DARABONBA_PTR_FROM_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloneDataPoint, cloneDataPoint_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(CreationCategory, creationCategory_);
      DARABONBA_PTR_FROM_JSON(CreationOption, creationOption_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBMinorVersion, DBMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeNum, DBNodeNum_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(DefaultTimeZone, defaultTimeZone_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_FROM_JSON(LoosePolarLogBin, loosePolarLogBin_);
      DARABONBA_PTR_FROM_JSON(LooseXEngine, looseXEngine_);
      DARABONBA_PTR_FROM_JSON(LooseXEngineUseMemoryPct, looseXEngineUseMemoryPct_);
      DARABONBA_PTR_FROM_JSON(LowerCaseTableNames, lowerCaseTableNames_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(ProxyClass, proxyClass_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_FROM_JSON(SourceResourceId, sourceResourceId_);
      DARABONBA_PTR_FROM_JSON(SourceUid, sourceUid_);
      DARABONBA_PTR_FROM_JSON(StandbyAZ, standbyAZ_);
      DARABONBA_PTR_FROM_JSON(StorageAutoScale, storageAutoScale_);
      DARABONBA_PTR_FROM_JSON(StorageEncryption, storageEncryption_);
      DARABONBA_PTR_FROM_JSON(StorageEncryptionKey, storageEncryptionKey_);
      DARABONBA_PTR_FROM_JSON(StoragePayType, storagePayType_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUpperBound, storageUpperBound_);
      DARABONBA_PTR_FROM_JSON(StrictConsistency, strictConsistency_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBClusterRequest() = default ;
    CreateDBClusterRequest(const CreateDBClusterRequest &) = default ;
    CreateDBClusterRequest(CreateDBClusterRequest &&) = default ;
    CreateDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterRequest() = default ;
    CreateDBClusterRequest& operator=(const CreateDBClusterRequest &) = default ;
    CreateDBClusterRequest& operator=(CreateDBClusterRequest &&) = default ;
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
      // The tag key. To add multiple tags to the cluster at a time, click **Add** to add tag keys.
      shared_ptr<string> key_ {};
      // The tag value. To add multiple tags to the cluster at a time, click **Add** to add tag values.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->agenticDbClusterDescription_ == nullptr
        && this->agenticDbClusterId_ == nullptr && this->agenticDbType_ == nullptr && this->allowShutDown_ == nullptr && this->architecture_ == nullptr && this->autoRenew_ == nullptr
        && this->autoUseCoupon_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->burstingEnabled_ == nullptr && this->clientToken_ == nullptr && this->cloneDataPoint_ == nullptr
        && this->cloudProvider_ == nullptr && this->clusterNetworkType_ == nullptr && this->creationCategory_ == nullptr && this->creationOption_ == nullptr && this->DBClusterDescription_ == nullptr
        && this->DBMinorVersion_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeNum_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr
        && this->defaultTimeZone_ == nullptr && this->ensRegionId_ == nullptr && this->GDNId_ == nullptr && this->hotStandbyCluster_ == nullptr && this->loosePolarLogBin_ == nullptr
        && this->looseXEngine_ == nullptr && this->looseXEngineUseMemoryPct_ == nullptr && this->lowerCaseTableNames_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->parameterGroupId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->promotionCode_ == nullptr && this->provisionedIops_ == nullptr
        && this->proxyClass_ == nullptr && this->proxyType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr && this->scaleRoNumMax_ == nullptr && this->scaleRoNumMin_ == nullptr
        && this->securityIPList_ == nullptr && this->serverlessType_ == nullptr && this->sourceResourceId_ == nullptr && this->sourceUid_ == nullptr && this->standbyAZ_ == nullptr
        && this->storageAutoScale_ == nullptr && this->storageEncryption_ == nullptr && this->storageEncryptionKey_ == nullptr && this->storagePayType_ == nullptr && this->storageSpace_ == nullptr
        && this->storageType_ == nullptr && this->storageUpperBound_ == nullptr && this->strictConsistency_ == nullptr && this->TDEStatus_ == nullptr && this->tag_ == nullptr
        && this->targetMinorVersion_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // agenticDbClusterDescription Field Functions 
    bool hasAgenticDbClusterDescription() const { return this->agenticDbClusterDescription_ != nullptr;};
    void deleteAgenticDbClusterDescription() { this->agenticDbClusterDescription_ = nullptr;};
    inline string getAgenticDbClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(agenticDbClusterDescription_, "") };
    inline CreateDBClusterRequest& setAgenticDbClusterDescription(string agenticDbClusterDescription) { DARABONBA_PTR_SET_VALUE(agenticDbClusterDescription_, agenticDbClusterDescription) };


    // agenticDbClusterId Field Functions 
    bool hasAgenticDbClusterId() const { return this->agenticDbClusterId_ != nullptr;};
    void deleteAgenticDbClusterId() { this->agenticDbClusterId_ = nullptr;};
    inline string getAgenticDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(agenticDbClusterId_, "") };
    inline CreateDBClusterRequest& setAgenticDbClusterId(string agenticDbClusterId) { DARABONBA_PTR_SET_VALUE(agenticDbClusterId_, agenticDbClusterId) };


    // agenticDbType Field Functions 
    bool hasAgenticDbType() const { return this->agenticDbType_ != nullptr;};
    void deleteAgenticDbType() { this->agenticDbType_ = nullptr;};
    inline string getAgenticDbType() const { DARABONBA_PTR_GET_DEFAULT(agenticDbType_, "") };
    inline CreateDBClusterRequest& setAgenticDbType(string agenticDbType) { DARABONBA_PTR_SET_VALUE(agenticDbType_, agenticDbType) };


    // allowShutDown Field Functions 
    bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
    void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
    inline string getAllowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
    inline CreateDBClusterRequest& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline CreateDBClusterRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDBClusterRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateDBClusterRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline CreateDBClusterRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline string getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, "") };
    inline CreateDBClusterRequest& setBurstingEnabled(string burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloneDataPoint Field Functions 
    bool hasCloneDataPoint() const { return this->cloneDataPoint_ != nullptr;};
    void deleteCloneDataPoint() { this->cloneDataPoint_ = nullptr;};
    inline string getCloneDataPoint() const { DARABONBA_PTR_GET_DEFAULT(cloneDataPoint_, "") };
    inline CreateDBClusterRequest& setCloneDataPoint(string cloneDataPoint) { DARABONBA_PTR_SET_VALUE(cloneDataPoint_, cloneDataPoint) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline CreateDBClusterRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string getClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline CreateDBClusterRequest& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // creationCategory Field Functions 
    bool hasCreationCategory() const { return this->creationCategory_ != nullptr;};
    void deleteCreationCategory() { this->creationCategory_ = nullptr;};
    inline string getCreationCategory() const { DARABONBA_PTR_GET_DEFAULT(creationCategory_, "") };
    inline CreateDBClusterRequest& setCreationCategory(string creationCategory) { DARABONBA_PTR_SET_VALUE(creationCategory_, creationCategory) };


    // creationOption Field Functions 
    bool hasCreationOption() const { return this->creationOption_ != nullptr;};
    void deleteCreationOption() { this->creationOption_ = nullptr;};
    inline string getCreationOption() const { DARABONBA_PTR_GET_DEFAULT(creationOption_, "") };
    inline CreateDBClusterRequest& setCreationOption(string creationOption) { DARABONBA_PTR_SET_VALUE(creationOption_, creationOption) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateDBClusterRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBMinorVersion Field Functions 
    bool hasDBMinorVersion() const { return this->DBMinorVersion_ != nullptr;};
    void deleteDBMinorVersion() { this->DBMinorVersion_ = nullptr;};
    inline string getDBMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBMinorVersion_, "") };
    inline CreateDBClusterRequest& setDBMinorVersion(string DBMinorVersion) { DARABONBA_PTR_SET_VALUE(DBMinorVersion_, DBMinorVersion) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateDBClusterRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeNum Field Functions 
    bool hasDBNodeNum() const { return this->DBNodeNum_ != nullptr;};
    void deleteDBNodeNum() { this->DBNodeNum_ = nullptr;};
    inline int32_t getDBNodeNum() const { DARABONBA_PTR_GET_DEFAULT(DBNodeNum_, 0) };
    inline CreateDBClusterRequest& setDBNodeNum(int32_t DBNodeNum) { DARABONBA_PTR_SET_VALUE(DBNodeNum_, DBNodeNum) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline CreateDBClusterRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline CreateDBClusterRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // defaultTimeZone Field Functions 
    bool hasDefaultTimeZone() const { return this->defaultTimeZone_ != nullptr;};
    void deleteDefaultTimeZone() { this->defaultTimeZone_ = nullptr;};
    inline string getDefaultTimeZone() const { DARABONBA_PTR_GET_DEFAULT(defaultTimeZone_, "") };
    inline CreateDBClusterRequest& setDefaultTimeZone(string defaultTimeZone) { DARABONBA_PTR_SET_VALUE(defaultTimeZone_, defaultTimeZone) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateDBClusterRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string getGDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline CreateDBClusterRequest& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string getHotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline CreateDBClusterRequest& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // loosePolarLogBin Field Functions 
    bool hasLoosePolarLogBin() const { return this->loosePolarLogBin_ != nullptr;};
    void deleteLoosePolarLogBin() { this->loosePolarLogBin_ = nullptr;};
    inline string getLoosePolarLogBin() const { DARABONBA_PTR_GET_DEFAULT(loosePolarLogBin_, "") };
    inline CreateDBClusterRequest& setLoosePolarLogBin(string loosePolarLogBin) { DARABONBA_PTR_SET_VALUE(loosePolarLogBin_, loosePolarLogBin) };


    // looseXEngine Field Functions 
    bool hasLooseXEngine() const { return this->looseXEngine_ != nullptr;};
    void deleteLooseXEngine() { this->looseXEngine_ = nullptr;};
    inline string getLooseXEngine() const { DARABONBA_PTR_GET_DEFAULT(looseXEngine_, "") };
    inline CreateDBClusterRequest& setLooseXEngine(string looseXEngine) { DARABONBA_PTR_SET_VALUE(looseXEngine_, looseXEngine) };


    // looseXEngineUseMemoryPct Field Functions 
    bool hasLooseXEngineUseMemoryPct() const { return this->looseXEngineUseMemoryPct_ != nullptr;};
    void deleteLooseXEngineUseMemoryPct() { this->looseXEngineUseMemoryPct_ = nullptr;};
    inline string getLooseXEngineUseMemoryPct() const { DARABONBA_PTR_GET_DEFAULT(looseXEngineUseMemoryPct_, "") };
    inline CreateDBClusterRequest& setLooseXEngineUseMemoryPct(string looseXEngineUseMemoryPct) { DARABONBA_PTR_SET_VALUE(looseXEngineUseMemoryPct_, looseXEngineUseMemoryPct) };


    // lowerCaseTableNames Field Functions 
    bool hasLowerCaseTableNames() const { return this->lowerCaseTableNames_ != nullptr;};
    void deleteLowerCaseTableNames() { this->lowerCaseTableNames_ = nullptr;};
    inline string getLowerCaseTableNames() const { DARABONBA_PTR_GET_DEFAULT(lowerCaseTableNames_, "") };
    inline CreateDBClusterRequest& setLowerCaseTableNames(string lowerCaseTableNames) { DARABONBA_PTR_SET_VALUE(lowerCaseTableNames_, lowerCaseTableNames) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline CreateDBClusterRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBClusterRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateDBClusterRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateDBClusterRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // proxyClass Field Functions 
    bool hasProxyClass() const { return this->proxyClass_ != nullptr;};
    void deleteProxyClass() { this->proxyClass_ = nullptr;};
    inline string getProxyClass() const { DARABONBA_PTR_GET_DEFAULT(proxyClass_, "") };
    inline CreateDBClusterRequest& setProxyClass(string proxyClass) { DARABONBA_PTR_SET_VALUE(proxyClass_, proxyClass) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string getProxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline CreateDBClusterRequest& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline CreateDBClusterRequest& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline CreateDBClusterRequest& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleRoNumMax Field Functions 
    bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
    void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
    inline string getScaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
    inline CreateDBClusterRequest& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


    // scaleRoNumMin Field Functions 
    bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
    void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
    inline string getScaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
    inline CreateDBClusterRequest& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBClusterRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string getServerlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline CreateDBClusterRequest& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // sourceResourceId Field Functions 
    bool hasSourceResourceId() const { return this->sourceResourceId_ != nullptr;};
    void deleteSourceResourceId() { this->sourceResourceId_ = nullptr;};
    inline string getSourceResourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceId_, "") };
    inline CreateDBClusterRequest& setSourceResourceId(string sourceResourceId) { DARABONBA_PTR_SET_VALUE(sourceResourceId_, sourceResourceId) };


    // sourceUid Field Functions 
    bool hasSourceUid() const { return this->sourceUid_ != nullptr;};
    void deleteSourceUid() { this->sourceUid_ = nullptr;};
    inline int64_t getSourceUid() const { DARABONBA_PTR_GET_DEFAULT(sourceUid_, 0L) };
    inline CreateDBClusterRequest& setSourceUid(int64_t sourceUid) { DARABONBA_PTR_SET_VALUE(sourceUid_, sourceUid) };


    // standbyAZ Field Functions 
    bool hasStandbyAZ() const { return this->standbyAZ_ != nullptr;};
    void deleteStandbyAZ() { this->standbyAZ_ = nullptr;};
    inline string getStandbyAZ() const { DARABONBA_PTR_GET_DEFAULT(standbyAZ_, "") };
    inline CreateDBClusterRequest& setStandbyAZ(string standbyAZ) { DARABONBA_PTR_SET_VALUE(standbyAZ_, standbyAZ) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string getStorageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline CreateDBClusterRequest& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageEncryption Field Functions 
    bool hasStorageEncryption() const { return this->storageEncryption_ != nullptr;};
    void deleteStorageEncryption() { this->storageEncryption_ = nullptr;};
    inline bool getStorageEncryption() const { DARABONBA_PTR_GET_DEFAULT(storageEncryption_, false) };
    inline CreateDBClusterRequest& setStorageEncryption(bool storageEncryption) { DARABONBA_PTR_SET_VALUE(storageEncryption_, storageEncryption) };


    // storageEncryptionKey Field Functions 
    bool hasStorageEncryptionKey() const { return this->storageEncryptionKey_ != nullptr;};
    void deleteStorageEncryptionKey() { this->storageEncryptionKey_ = nullptr;};
    inline string getStorageEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(storageEncryptionKey_, "") };
    inline CreateDBClusterRequest& setStorageEncryptionKey(string storageEncryptionKey) { DARABONBA_PTR_SET_VALUE(storageEncryptionKey_, storageEncryptionKey) };


    // storagePayType Field Functions 
    bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
    void deleteStoragePayType() { this->storagePayType_ = nullptr;};
    inline string getStoragePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
    inline CreateDBClusterRequest& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline CreateDBClusterRequest& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBClusterRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int64_t getStorageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0L) };
    inline CreateDBClusterRequest& setStorageUpperBound(int64_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string getStrictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline CreateDBClusterRequest& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline bool getTDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, false) };
    inline CreateDBClusterRequest& setTDEStatus(bool TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBClusterRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBClusterRequest::Tag>) };
    inline vector<CreateDBClusterRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDBClusterRequest::Tag>) };
    inline CreateDBClusterRequest& setTag(const vector<CreateDBClusterRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBClusterRequest& setTag(vector<CreateDBClusterRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline CreateDBClusterRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBClusterRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBClusterRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The Agentic cluster description.
    shared_ptr<string> agenticDbClusterDescription_ {};
    // The Agentic cluster ID.
    shared_ptr<string> agenticDbClusterId_ {};
    // The Agentic database engine type. Valid values:
    shared_ptr<string> agenticDbType_ {};
    // Specifies whether to enable No-activity Suspension. Valid values:
    shared_ptr<string> allowShutDown_ {};
    // The CPU architecture. Valid values:
    shared_ptr<string> architecture_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    shared_ptr<bool> autoRenew_ {};
    // Specifies whether to automatically use coupons. Valid values:
    shared_ptr<bool> autoUseCoupon_ {};
    // The data retention policy for backups when the cluster is deleted. Valid values:
    shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
    // Specifies whether to enable I/O performance burst for the ESSD AutoPL cloud disk. Valid values:
    shared_ptr<string> burstingEnabled_ {};
    // The client token that is used to ensure the idempotence of the request. The value of this parameter is generated by the client and is unique among different requests. The value is case-sensitive and cannot exceed 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The point in time at which data is cloned. Valid values:
    shared_ptr<string> cloneDataPoint_ {};
    // The cloud service provider to which the instance belongs.
    shared_ptr<string> cloudProvider_ {};
    // The network type of the cluster. Currently, only Virtual Private Cloud (VPC) is supported. Set the value to **VPC**.
    shared_ptr<string> clusterNetworkType_ {};
    // The edition of the cluster. Valid values:
    shared_ptr<string> creationCategory_ {};
    // The method used to create the cluster. Valid values:
    shared_ptr<string> creationOption_ {};
    // The cluster name. The cluster name must meet the following requirements:
    shared_ptr<string> DBClusterDescription_ {};
    // The minor version of the database engine. Valid values:
    shared_ptr<string> DBMinorVersion_ {};
    // The node specifications. For details, see the following topics:
    shared_ptr<string> DBNodeClass_ {};
    // The number of nodes for Standard Edition and Enterprise Edition. Valid values:
    shared_ptr<int32_t> DBNodeNum_ {};
    // The database engine type. Valid values:
    // 
    // This parameter is required.
    shared_ptr<string> DBType_ {};
    // The database engine version.
    // 
    // This parameter is required.
    shared_ptr<string> DBVersion_ {};
    // The time zone of the cluster (UTC). The value can be set to any time frame within the range of **-12:00 to +13:00**, such as **00:00**. Default value: **SYSTEM**. The default time zone is the same as the time zone of the region.
    shared_ptr<string> defaultTimeZone_ {};
    // The ENS node ID required when creating an ENS database.
    shared_ptr<string> ensRegionId_ {};
    // The global database network (GDN) ID.
    shared_ptr<string> GDNId_ {};
    // Specifies whether the hot standby cluster is enabled. Valid values:
    shared_ptr<string> hotStandbyCluster_ {};
    // Specifies whether to enable the Binlog feature. Valid values:
    shared_ptr<string> loosePolarLogBin_ {};
    // Specifies whether to enable the X-Engine storage engine. Valid values:
    shared_ptr<string> looseXEngine_ {};
    // The percentage of memory allocated to the X-Engine storage engine. Valid values: integers from 10 to 90.
    shared_ptr<string> looseXEngineUseMemoryPct_ {};
    // Specifies whether table names are case-sensitive. Valid values:
    shared_ptr<string> lowerCaseTableNames_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The parameter template ID.
    shared_ptr<string> parameterGroupId_ {};
    // The billing method. Valid values:
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // This parameter is required when PayType is set to **Prepaid**. Specifies whether the subscription cluster uses a yearly or monthly billing cycle.
    shared_ptr<string> period_ {};
    // The coupon code. If not specified, the default coupon is used.
    shared_ptr<string> promotionCode_ {};
    // <p id="p_wyg_t4a_glm" props="china" icmsditafragmentmagic=1>The provisioned read/write IOPS of the ESSD AutoPL cloud disk. Valid values: 0 to min{50,000, 1000 × capacity - baseline performance}.</p>
    shared_ptr<int64_t> provisionedIops_ {};
    // The specification of the database proxy for Standard Edition. Valid values:
    shared_ptr<string> proxyClass_ {};
    // The database proxy type. Valid values:
    shared_ptr<string> proxyType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The maximum scaling limit per node. Valid values: 1 PCU to 32 PCUs.
    shared_ptr<string> scaleMax_ {};
    // The minimum scaling limit per node. Valid values: 1 PCU to 31 PCUs.
    shared_ptr<string> scaleMin_ {};
    // The maximum number of read-only nodes for scaling. Valid values: 0 to 15.
    shared_ptr<string> scaleRoNumMax_ {};
    // The minimum number of read-only nodes for scaling. Valid values: 0 to 15.
    shared_ptr<string> scaleRoNumMin_ {};
    // The IP whitelist of the PolarDB cluster.
    shared_ptr<string> securityIPList_ {};
    // The serverless type. The value is fixed as **AgileServerless**.
    shared_ptr<string> serverlessType_ {};
    // The instance ID of the source ApsaraDB RDS instance or the source PolarDB cluster. This parameter is required only when **CreationOption** is set to **MigrationFromRDS**, **CloneFromRDS**, **CloneFromPolarDB**, or **RecoverFromRecyclebin**.
    shared_ptr<string> sourceResourceId_ {};
    // The UID of the account that owns the source backup set in cross-account backup restoration scenarios.
    shared_ptr<int64_t> sourceUid_ {};
    // The zone of the hot standby cluster.
    shared_ptr<string> standbyAZ_ {};
    // Specifies whether to enable automatic storage scaling for the Standard Edition cluster. Valid values:
    shared_ptr<string> storageAutoScale_ {};
    // Specifies whether to enable cloud disk encryption. Valid values:
    shared_ptr<bool> storageEncryption_ {};
    // The key ID of the custom Key Management Service (KMS) key for cloud disk encryption in the same region as the instance. Specifying this parameter automatically enables cloud disk encryption, which cannot be disabled after being enabled. Leave this parameter empty to use the default service key for cloud disk encryption.
    shared_ptr<string> storageEncryptionKey_ {};
    // The billing type for storage. Valid values:
    shared_ptr<string> storagePayType_ {};
    // The storage space for the space-based billing (subscription) plan. Unit: GB.
    shared_ptr<int64_t> storageSpace_ {};
    // The storage type for Enterprise Edition. Valid values:
    shared_ptr<string> storageType_ {};
    // The upper limit of automatic storage scaling for the Standard Edition cluster. Unit: GB.
    shared_ptr<int64_t> storageUpperBound_ {};
    // Specifies whether to enable multi-zone strong data consistency for the cluster. Valid values:
    shared_ptr<string> strictConsistency_ {};
    // Specifies whether to enable Transparent Data Encryption (TDE). Valid values:
    shared_ptr<bool> TDEStatus_ {};
    // The list of tags.
    shared_ptr<vector<CreateDBClusterRequest::Tag>> tag_ {};
    // The target minor engine version.
    shared_ptr<string> targetMinorVersion_ {};
    // This parameter is required when PayType is set to **Prepaid**.
    shared_ptr<string> usedTime_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
