// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBClusterRequestTag.hpp>
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
      DARABONBA_PTR_TO_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
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
      DARABONBA_PTR_FROM_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
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
    virtual bool empty() const override { return this->allowShutDown_ == nullptr
        && return this->architecture_ == nullptr && return this->autoRenew_ == nullptr && return this->backupRetentionPolicyOnClusterDeletion_ == nullptr && return this->burstingEnabled_ == nullptr && return this->clientToken_ == nullptr
        && return this->cloneDataPoint_ == nullptr && return this->cloudProvider_ == nullptr && return this->clusterNetworkType_ == nullptr && return this->creationCategory_ == nullptr && return this->creationOption_ == nullptr
        && return this->DBClusterDescription_ == nullptr && return this->DBMinorVersion_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeNum_ == nullptr && return this->DBType_ == nullptr
        && return this->DBVersion_ == nullptr && return this->defaultTimeZone_ == nullptr && return this->ensRegionId_ == nullptr && return this->GDNId_ == nullptr && return this->hotStandbyCluster_ == nullptr
        && return this->loosePolarLogBin_ == nullptr && return this->looseXEngine_ == nullptr && return this->looseXEngineUseMemoryPct_ == nullptr && return this->lowerCaseTableNames_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->parameterGroupId_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->provisionedIops_ == nullptr
        && return this->proxyClass_ == nullptr && return this->proxyType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->scaleRoNumMax_ == nullptr && return this->scaleRoNumMin_ == nullptr
        && return this->securityIPList_ == nullptr && return this->serverlessType_ == nullptr && return this->sourceResourceId_ == nullptr && return this->sourceUid_ == nullptr && return this->standbyAZ_ == nullptr
        && return this->storageAutoScale_ == nullptr && return this->storageEncryption_ == nullptr && return this->storageEncryptionKey_ == nullptr && return this->storagePayType_ == nullptr && return this->storageSpace_ == nullptr
        && return this->storageType_ == nullptr && return this->storageUpperBound_ == nullptr && return this->strictConsistency_ == nullptr && return this->TDEStatus_ == nullptr && return this->tag_ == nullptr
        && return this->targetMinorVersion_ == nullptr && return this->usedTime_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // allowShutDown Field Functions 
    bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
    void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
    inline string allowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
    inline CreateDBClusterRequest& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline CreateDBClusterRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDBClusterRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string backupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline CreateDBClusterRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline string burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, "") };
    inline CreateDBClusterRequest& setBurstingEnabled(string burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloneDataPoint Field Functions 
    bool hasCloneDataPoint() const { return this->cloneDataPoint_ != nullptr;};
    void deleteCloneDataPoint() { this->cloneDataPoint_ = nullptr;};
    inline string cloneDataPoint() const { DARABONBA_PTR_GET_DEFAULT(cloneDataPoint_, "") };
    inline CreateDBClusterRequest& setCloneDataPoint(string cloneDataPoint) { DARABONBA_PTR_SET_VALUE(cloneDataPoint_, cloneDataPoint) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string cloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline CreateDBClusterRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string clusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline CreateDBClusterRequest& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // creationCategory Field Functions 
    bool hasCreationCategory() const { return this->creationCategory_ != nullptr;};
    void deleteCreationCategory() { this->creationCategory_ = nullptr;};
    inline string creationCategory() const { DARABONBA_PTR_GET_DEFAULT(creationCategory_, "") };
    inline CreateDBClusterRequest& setCreationCategory(string creationCategory) { DARABONBA_PTR_SET_VALUE(creationCategory_, creationCategory) };


    // creationOption Field Functions 
    bool hasCreationOption() const { return this->creationOption_ != nullptr;};
    void deleteCreationOption() { this->creationOption_ = nullptr;};
    inline string creationOption() const { DARABONBA_PTR_GET_DEFAULT(creationOption_, "") };
    inline CreateDBClusterRequest& setCreationOption(string creationOption) { DARABONBA_PTR_SET_VALUE(creationOption_, creationOption) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateDBClusterRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBMinorVersion Field Functions 
    bool hasDBMinorVersion() const { return this->DBMinorVersion_ != nullptr;};
    void deleteDBMinorVersion() { this->DBMinorVersion_ = nullptr;};
    inline string DBMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBMinorVersion_, "") };
    inline CreateDBClusterRequest& setDBMinorVersion(string DBMinorVersion) { DARABONBA_PTR_SET_VALUE(DBMinorVersion_, DBMinorVersion) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateDBClusterRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeNum Field Functions 
    bool hasDBNodeNum() const { return this->DBNodeNum_ != nullptr;};
    void deleteDBNodeNum() { this->DBNodeNum_ = nullptr;};
    inline int32_t DBNodeNum() const { DARABONBA_PTR_GET_DEFAULT(DBNodeNum_, 0) };
    inline CreateDBClusterRequest& setDBNodeNum(int32_t DBNodeNum) { DARABONBA_PTR_SET_VALUE(DBNodeNum_, DBNodeNum) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline CreateDBClusterRequest& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline CreateDBClusterRequest& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // defaultTimeZone Field Functions 
    bool hasDefaultTimeZone() const { return this->defaultTimeZone_ != nullptr;};
    void deleteDefaultTimeZone() { this->defaultTimeZone_ = nullptr;};
    inline string defaultTimeZone() const { DARABONBA_PTR_GET_DEFAULT(defaultTimeZone_, "") };
    inline CreateDBClusterRequest& setDefaultTimeZone(string defaultTimeZone) { DARABONBA_PTR_SET_VALUE(defaultTimeZone_, defaultTimeZone) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateDBClusterRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string GDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline CreateDBClusterRequest& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string hotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline CreateDBClusterRequest& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // loosePolarLogBin Field Functions 
    bool hasLoosePolarLogBin() const { return this->loosePolarLogBin_ != nullptr;};
    void deleteLoosePolarLogBin() { this->loosePolarLogBin_ = nullptr;};
    inline string loosePolarLogBin() const { DARABONBA_PTR_GET_DEFAULT(loosePolarLogBin_, "") };
    inline CreateDBClusterRequest& setLoosePolarLogBin(string loosePolarLogBin) { DARABONBA_PTR_SET_VALUE(loosePolarLogBin_, loosePolarLogBin) };


    // looseXEngine Field Functions 
    bool hasLooseXEngine() const { return this->looseXEngine_ != nullptr;};
    void deleteLooseXEngine() { this->looseXEngine_ = nullptr;};
    inline string looseXEngine() const { DARABONBA_PTR_GET_DEFAULT(looseXEngine_, "") };
    inline CreateDBClusterRequest& setLooseXEngine(string looseXEngine) { DARABONBA_PTR_SET_VALUE(looseXEngine_, looseXEngine) };


    // looseXEngineUseMemoryPct Field Functions 
    bool hasLooseXEngineUseMemoryPct() const { return this->looseXEngineUseMemoryPct_ != nullptr;};
    void deleteLooseXEngineUseMemoryPct() { this->looseXEngineUseMemoryPct_ = nullptr;};
    inline string looseXEngineUseMemoryPct() const { DARABONBA_PTR_GET_DEFAULT(looseXEngineUseMemoryPct_, "") };
    inline CreateDBClusterRequest& setLooseXEngineUseMemoryPct(string looseXEngineUseMemoryPct) { DARABONBA_PTR_SET_VALUE(looseXEngineUseMemoryPct_, looseXEngineUseMemoryPct) };


    // lowerCaseTableNames Field Functions 
    bool hasLowerCaseTableNames() const { return this->lowerCaseTableNames_ != nullptr;};
    void deleteLowerCaseTableNames() { this->lowerCaseTableNames_ = nullptr;};
    inline string lowerCaseTableNames() const { DARABONBA_PTR_GET_DEFAULT(lowerCaseTableNames_, "") };
    inline CreateDBClusterRequest& setLowerCaseTableNames(string lowerCaseTableNames) { DARABONBA_PTR_SET_VALUE(lowerCaseTableNames_, lowerCaseTableNames) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string parameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline CreateDBClusterRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBClusterRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateDBClusterRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // proxyClass Field Functions 
    bool hasProxyClass() const { return this->proxyClass_ != nullptr;};
    void deleteProxyClass() { this->proxyClass_ = nullptr;};
    inline string proxyClass() const { DARABONBA_PTR_GET_DEFAULT(proxyClass_, "") };
    inline CreateDBClusterRequest& setProxyClass(string proxyClass) { DARABONBA_PTR_SET_VALUE(proxyClass_, proxyClass) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline CreateDBClusterRequest& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline CreateDBClusterRequest& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline CreateDBClusterRequest& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleRoNumMax Field Functions 
    bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
    void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
    inline string scaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
    inline CreateDBClusterRequest& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


    // scaleRoNumMin Field Functions 
    bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
    void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
    inline string scaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
    inline CreateDBClusterRequest& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBClusterRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string serverlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline CreateDBClusterRequest& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // sourceResourceId Field Functions 
    bool hasSourceResourceId() const { return this->sourceResourceId_ != nullptr;};
    void deleteSourceResourceId() { this->sourceResourceId_ = nullptr;};
    inline string sourceResourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceId_, "") };
    inline CreateDBClusterRequest& setSourceResourceId(string sourceResourceId) { DARABONBA_PTR_SET_VALUE(sourceResourceId_, sourceResourceId) };


    // sourceUid Field Functions 
    bool hasSourceUid() const { return this->sourceUid_ != nullptr;};
    void deleteSourceUid() { this->sourceUid_ = nullptr;};
    inline int64_t sourceUid() const { DARABONBA_PTR_GET_DEFAULT(sourceUid_, 0L) };
    inline CreateDBClusterRequest& setSourceUid(int64_t sourceUid) { DARABONBA_PTR_SET_VALUE(sourceUid_, sourceUid) };


    // standbyAZ Field Functions 
    bool hasStandbyAZ() const { return this->standbyAZ_ != nullptr;};
    void deleteStandbyAZ() { this->standbyAZ_ = nullptr;};
    inline string standbyAZ() const { DARABONBA_PTR_GET_DEFAULT(standbyAZ_, "") };
    inline CreateDBClusterRequest& setStandbyAZ(string standbyAZ) { DARABONBA_PTR_SET_VALUE(standbyAZ_, standbyAZ) };


    // storageAutoScale Field Functions 
    bool hasStorageAutoScale() const { return this->storageAutoScale_ != nullptr;};
    void deleteStorageAutoScale() { this->storageAutoScale_ = nullptr;};
    inline string storageAutoScale() const { DARABONBA_PTR_GET_DEFAULT(storageAutoScale_, "") };
    inline CreateDBClusterRequest& setStorageAutoScale(string storageAutoScale) { DARABONBA_PTR_SET_VALUE(storageAutoScale_, storageAutoScale) };


    // storageEncryption Field Functions 
    bool hasStorageEncryption() const { return this->storageEncryption_ != nullptr;};
    void deleteStorageEncryption() { this->storageEncryption_ = nullptr;};
    inline bool storageEncryption() const { DARABONBA_PTR_GET_DEFAULT(storageEncryption_, false) };
    inline CreateDBClusterRequest& setStorageEncryption(bool storageEncryption) { DARABONBA_PTR_SET_VALUE(storageEncryption_, storageEncryption) };


    // storageEncryptionKey Field Functions 
    bool hasStorageEncryptionKey() const { return this->storageEncryptionKey_ != nullptr;};
    void deleteStorageEncryptionKey() { this->storageEncryptionKey_ = nullptr;};
    inline string storageEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(storageEncryptionKey_, "") };
    inline CreateDBClusterRequest& setStorageEncryptionKey(string storageEncryptionKey) { DARABONBA_PTR_SET_VALUE(storageEncryptionKey_, storageEncryptionKey) };


    // storagePayType Field Functions 
    bool hasStoragePayType() const { return this->storagePayType_ != nullptr;};
    void deleteStoragePayType() { this->storagePayType_ = nullptr;};
    inline string storagePayType() const { DARABONBA_PTR_GET_DEFAULT(storagePayType_, "") };
    inline CreateDBClusterRequest& setStoragePayType(string storagePayType) { DARABONBA_PTR_SET_VALUE(storagePayType_, storagePayType) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int64_t storageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
    inline CreateDBClusterRequest& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBClusterRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUpperBound Field Functions 
    bool hasStorageUpperBound() const { return this->storageUpperBound_ != nullptr;};
    void deleteStorageUpperBound() { this->storageUpperBound_ = nullptr;};
    inline int64_t storageUpperBound() const { DARABONBA_PTR_GET_DEFAULT(storageUpperBound_, 0L) };
    inline CreateDBClusterRequest& setStorageUpperBound(int64_t storageUpperBound) { DARABONBA_PTR_SET_VALUE(storageUpperBound_, storageUpperBound) };


    // strictConsistency Field Functions 
    bool hasStrictConsistency() const { return this->strictConsistency_ != nullptr;};
    void deleteStrictConsistency() { this->strictConsistency_ = nullptr;};
    inline string strictConsistency() const { DARABONBA_PTR_GET_DEFAULT(strictConsistency_, "") };
    inline CreateDBClusterRequest& setStrictConsistency(string strictConsistency) { DARABONBA_PTR_SET_VALUE(strictConsistency_, strictConsistency) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline bool TDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, false) };
    inline CreateDBClusterRequest& setTDEStatus(bool TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBClusterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBClusterRequestTag>) };
    inline vector<CreateDBClusterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDBClusterRequestTag>) };
    inline CreateDBClusterRequest& setTag(const vector<CreateDBClusterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBClusterRequest& setTag(vector<CreateDBClusterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string targetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline CreateDBClusterRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBClusterRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBClusterRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Whether to enable idle pause. Values:
    // 
    // - **true**: Enabled
    // 
    // - **false**: Disabled (default)
    // 
    // > Only supported by Serverless clusters.
    std::shared_ptr<string> allowShutDown_ = nullptr;
    // CPU architecture. Available values include:
    // - X86
    // - ARM
    std::shared_ptr<string> architecture_ = nullptr;
    // Whether to enable auto-renewal, with available values as follows:
    // 
    // - **true**: Auto-renew.
    // - **false**: Do not auto-renew.
    // 
    // The default is **false**.
    // 
    // > This parameter takes effect only when **PayType** is set to **Prepaid**.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // Backup retention policy upon cluster deletion, with valid values as follows:
    // * **ALL**: Permanently retain all backups.
    // * **LATEST**: Permanently retain the latest backup (automatically backed up before deletion).
    // * **NONE**: Do not retain backup sets upon cluster deletion.
    // 
    // By default, the value is set to **NONE**, indicating no backup sets are retained upon cluster deletion.
    // > This parameter applies only when **DBType** is **MySQL**.
    // > Serverless clusters do not support this parameter.
    std::shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ = nullptr;
    std::shared_ptr<string> burstingEnabled_ = nullptr;
    // Used to ensure idempotency of the request. Generated by the client, ensuring uniqueness across different requests, case-sensitive, and not exceeding 64 ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The point in time to clone data, with the following options:
    // 
    // - **LATEST**: Data from the latest time point.
    // - **BackupID**: Historical backup set ID, please enter the specific backup set ID.
    // - **Timestamp**: Historical time point, please enter the specific time in the format `YYYY-MM-DDThh:mm:ssZ` (UTC time).
    // 
    // The default value is **LATEST**.
    // 
    // > If **CreationOption** is **CloneFromRDS**, this parameter can only be set to **LATEST**.
    std::shared_ptr<string> cloneDataPoint_ = nullptr;
    std::shared_ptr<string> cloudProvider_ = nullptr;
    // Cluster network type, currently only VPC is supported, with a fixed value of **VPC**.
    std::shared_ptr<string> clusterNetworkType_ = nullptr;
    // Product series, with valid values as follows:
    // * **Normal**: Cluster Edition (default)
    // * **Basic**: Single-node
    // * **ArchiveNormal**: High Compression Engine (X-Engine)
    // * **NormalMultimaster**: Multi-master Cluster Edition
    // * **SENormal**: Standard Edition
    // 
    // > * **MySQL** **5.6**, **5.7**, **8.0**, **PostgreSQL** **14**, and **Oracle Syntax Compatible 2.0** support **Basic**.
    // > * **MySQL** **8.0** supports **ArchiveNormal** and **NormalMultimaster**.
    // > * **MySQL** **5.6**, **5.7**, **8.0**, and **PostgreSQL** **14** support **SENormal**.
    // 
    // For more information about product series, see [Product Series](https://help.aliyun.com/document_detail/183258.html).
    std::shared_ptr<string> creationCategory_ = nullptr;
    // Creation method, with the following values supported:
    // 
    // * **Normal**: Creates a brand new PolarDB cluster. For console operations, refer to the following documents:
    //     * [Create a PolarDB MySQL Edition Database Cluster](https://help.aliyun.com/document_detail/58769.html)
    //     * [Create a PolarDB PostgreSQL Edition Database Cluster](https://help.aliyun.com/document_detail/118063.html)
    //     * [Create a PolarDB PostgreSQL Edition (Oracle Compatible) Database Cluster](https://help.aliyun.com/document_detail/118182.html)
    // 
    // * **CloneFromPolarDB**: Clones data from an existing PolarDB cluster to a new PolarDB cluster. For console operations, refer to the following documents:
    //     * [Clone a PolarDB MySQL Edition Cluster](https://help.aliyun.com/document_detail/87966.html)
    //     * [Clone a PolarDB PostgreSQL Edition Cluster](https://help.aliyun.com/document_detail/118108.html)
    //     * [Clone a PolarDB PostgreSQL Edition (Oracle Compatible) Cluster](https://help.aliyun.com/document_detail/118221.html)
    // 
    // * **RecoverFromRecyclebin**: Recovers data from a released PolarDB cluster to a new PolarDB cluster. For console operations, refer to the following documents:
    //     * [Restore a Released PolarDB MySQL Edition Cluster](https://help.aliyun.com/document_detail/164880.html)
    //     * [Restore a Released PolarDB PostgreSQL Edition Cluster](https://help.aliyun.com/document_detail/432844.html)
    //     * [Restore a Released PolarDB PostgreSQL Edition (Oracle Compatible) Cluster](https://help.aliyun.com/document_detail/424632.html)
    // 
    // * **CloneFromRDS**: Clones data from an existing RDS instance to a new PolarDB cluster. Console operation guide is available at [One-click Clone from RDS MySQL to PolarDB MySQL Edition](https://help.aliyun.com/document_detail/121812.html).
    // 
    // * **MigrationFromRDS**: Migrates data from an existing RDS instance to a new PolarDB cluster. The created PolarDB cluster operates in read-only mode with Binlog enabled by default. Console operation guide is at [One-click Upgrade from RDS MySQL to PolarDB MySQL Edition](https://help.aliyun.com/document_detail/121582.html).
    // 
    // * **CreateGdnStandby**: Creates a standby cluster. Console operation guide can be found at [Add Standby Cluster](https://help.aliyun.com/document_detail/160381.html).
    // 
    // * **UpgradeFromPolarDB**: Upgrades and migrates from PolarDB. Console operation guide is detailed in [Major Version Upgrade](https://help.aliyun.com/document_detail/459712.html).
    // 
    // The default value is **Normal**.
    // 
    // > When **DBType** is **MySQL** and **DBVersion** is **8.0**, this parameter can also take the value **CreateGdnStandby**.
    std::shared_ptr<string> creationOption_ = nullptr;
    // Cluster name, which must meet the following requirements:
    // * Cannot start with `http://` or `https://`.
    // * Length should be between 2 and 256 characters.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // Database engine minor version number. Valid values include:
    // 
    // - **8.0.2**
    // - **8.0.1**
    // 
    // > This parameter takes effect only when **DBType** is **MySQL** and **DBVersion** is **8.0**.
    std::shared_ptr<string> DBMinorVersion_ = nullptr;
    // Node specifications. For details, refer to the following documents:
    // 
    // - PolarDB MySQL Edition: [Compute Node Specifications](https://help.aliyun.com/document_detail/102542.html).
    // - PolarDB PostgreSQL Edition (Oracle Compatible): [Compute Node Specifications](https://help.aliyun.com/document_detail/207921.html).
    // - PolarDB PostgreSQL Edition: [Compute Node Specifications](https://help.aliyun.com/document_detail/209380.html).
    // 
    // > - For a Serverless cluster in PolarDB MySQL, enter **polar.mysql.sl.small**.
    // <props="china">> - For a Serverless cluster in both PolarDB PostgreSQL (Oracle Compatible) and PolarDB PostgreSQL, enter **polar.pg.sl.small.c**.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The number of nodes. This parameter is supported for Standard Edition clusters. Valid values:
    // 
    // *   **1** (default): only one primary node.
    // *   **2**: one read-only node and one primary node.
    // 
    // > 
    // 
    // *   By default, an Enterprise Edition cluster has two nodes and a Standard Edition cluster has one node.
    // 
    // *   This parameter is supported only for PolarDB for MySQL clusters.
    std::shared_ptr<int32_t> DBNodeNum_ = nullptr;
    // Database engine type, with available values as follows:
    // 
    // - **MySQL**
    // - **PostgreSQL**
    // - **Oracle**
    // 
    // This parameter is required.
    std::shared_ptr<string> DBType_ = nullptr;
    // Database engine version number.
    // * For MySQL, the version numbers are as follows:
    //     * **5.6**
    //     * **5.7**
    //     * **8.0**
    // * For PostgreSQL, the version numbers are as follows:
    //     * **11**
    //     * **14**
    //     * **15**
    //     <props="china">
    //       
    //       > When creating a Serverless cluster in PolarDB PostgreSQL, only version **14** is supported.
    //     
    //     
    // * For Oracle, the version numbers are as follows:
    //     * **11**
    //     * **14**
    // 
    // This parameter is required.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // Cluster timezone (UTC), with selectable values ranging from **-12:00** to **+13:00** at whole-hour intervals, e.g., **00:00**. The default value is **SYSTEM**, which matches the Region\\"s timezone.
    // > This parameter applies only when **DBType** is **MySQL**.
    std::shared_ptr<string> defaultTimeZone_ = nullptr;
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // Global Database Network (GDN) ID.
    // 
    // > This parameter is required when **CreationOption** is **CreateGdnStandby**.
    std::shared_ptr<string> GDNId_ = nullptr;
    // Specifies whether to enable the hot standby storage cluster feature. Valid values:
    // 
    // *   **ON** (default): enables the hot standby storage cluster feature.
    // *   **OFF**: disables the hot standby storage cluster feature.
    // *   **STANDBY**: enables the hot standby storage cluster feature for Standard Edition clusters.
    // 
    // >  The default value for Standard Edition clusters is **STANDBY**.
    std::shared_ptr<string> hotStandbyCluster_ = nullptr;
    // Enable Binlog feature, valid values are as follows:
    // - **ON**: Cluster enables the Binlog feature. - **OFF**: Cluster disables the Binlog feature. > This parameter takes effect only when the **DBType** parameter is set to **MySQL**.
    std::shared_ptr<string> loosePolarLogBin_ = nullptr;
    // Enable the X-Engine storage engine feature, with valid values as follows:
    // 
    // - **ON**: The cluster enables the X-Engine engine.
    // - **OFF**: The cluster disables the X-Engine engine.
    // > This parameter is effective only when **CreationOption** is not **CreateGdnStandby**, **DBType** is **MySQL**, and **DBVersion** is **8.0**. The memory specification of nodes that enable the X-Engine engine must be at least 8 GB.
    std::shared_ptr<string> looseXEngine_ = nullptr;
    // Set the ratio for enabling the X-Engine storage engine, with a range of integers from 10 to 90.
    // > This parameter takes effect only when **LooseXEngine** is **ON**.
    std::shared_ptr<string> looseXEngineUseMemoryPct_ = nullptr;
    // Whether table names are case-sensitive, with valid values as follows:
    // * **1**: Case-insensitive
    // * **0**: Case-sensitive
    // 
    // The default value is **1**.
    // > This parameter applies only when **DBType** is **MySQL**.
    std::shared_ptr<string> lowerCaseTableNames_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Parameter template ID.
    // 
    // > You can view the list of parameter templates in the target region, including the parameter template ID, by calling the [DescribeParameterGroups](https://help.aliyun.com/document_detail/207178.html) interface.
    std::shared_ptr<string> parameterGroupId_ = nullptr;
    // Payment type, with available values as follows:
    // 
    // - **Postpaid**: Pay-as-you-go.
    // - **Prepaid**: Subscription (monthly or yearly).
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // If the payment type is **Prepaid**, this parameter is required. It specifies whether the prepaid cluster is on a monthly or yearly basis.
    // 
    // - **Year**: Yearly subscription.
    // - **Month**: Monthly subscription.
    std::shared_ptr<string> period_ = nullptr;
    // <p id="p_wyg_t4a_glm">The provisioned read and write IOPS for ESSD AutoPL cloud disks. Possible values: 0 to min{50,000, 1000*capacity-Baseline Performance}.</p>
    // <p id="p_6de_jxy_k2g">Baseline Performance = min{1,800+50*capacity, 50000}.</p>
    // <note id="note_7kj_j0o_rgs">This parameter is supported only when StorageType is ESSDAUTOPL.</note>
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // Standard edition database proxy specifications. Values are as follows:
    // 
    // - **polar.maxscale.g2.medium.c**: 2 cores.
    // - **polar.maxscale.g2.large.c**: 4 cores.
    // - **polar.maxscale.g2.xlarge.c**: 8 cores.
    // - **polar.maxscale.g2.2xlarge.c**: 16 cores.
    // - **polar.maxscale.g2.3xlarge.c**: 24 cores.
    // - **polar.maxscale.g2.4xlarge.c**: 32 cores.
    // - **polar.maxscale.g2.8xlarge.c**: 64 cores.
    std::shared_ptr<string> proxyClass_ = nullptr;
    // Database proxy type, with values including:
    // - **EXCLUSIVE**: Enterprise Exclusive Edition
    // - **GENERAL**: Enterprise General Purpose Edition
    // > The proxy type must match the type of the cluster\\"s node specifications, i.e.,
    // >- If the node specification is general, the proxy type should be Enterprise General Purpose Edition;
    // >- If the node specification is dedicated, the proxy type should be Enterprise Exclusive Edition.
    std::shared_ptr<string> proxyType_ = nullptr;
    // Region ID.
    // 
    // > You can view available regions through the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Maximum scaling limit for a single node. The value range is: 1 PCU~32 PCU.
    // 
    // > Only supported by Serverless clusters.
    std::shared_ptr<string> scaleMax_ = nullptr;
    // Minimum scaling limit for a single node. The value range is: 1 PCU~31 PCU.
    // 
    // > Only supported by Serverless clusters.
    std::shared_ptr<string> scaleMin_ = nullptr;
    // Maximum scaling limit for the number of read-only nodes. The value range is: 0~15.
    // 
    // > Only supported by Serverless clusters.
    std::shared_ptr<string> scaleRoNumMax_ = nullptr;
    // Minimum scaling limit for the number of read-only nodes. The value range is: 0~15.
    // 
    // > Only supported by Serverless clusters.
    std::shared_ptr<string> scaleRoNumMin_ = nullptr;
    // PolarDB cluster whitelist IP address.
    // > Supports configuring multiple whitelist IP addresses, with English commas separating multiple IP addresses.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // Serverless type. The current value is fixed to **AgileServerless** (sensitive mode).
    // > This parameter is only supported by Serverless clusters.
    std::shared_ptr<string> serverlessType_ = nullptr;
    // Source RDS instance ID or source PolarDB cluster ID. This parameter is mandatory only when **CreationOption** is set to **MigrationFromRDS**, **CloneFromRDS**, **CloneFromPolarDB**, or **RecoverFromRecyclebin**.
    // * If **CreationOption** is **MigrationFromRDS** or **CloneFromRDS**, you need to input the source RDS instance ID. The source RDS instance version must be RDS MySQL 5.6, 5.7, or 8.0 High Availability edition.
    // 
    // * If **CreationOption** is **CloneFromPolarDB**, you need to input the source PolarDB cluster ID. The DBType of the cloned cluster will default to match the source cluster. For example, if the source cluster is MySQL 8.0, the cloned cluster must also have **DBType** set to **MySQL** and **DBVersion** to **8.0**.
    // 
    // * If **CreationOption** is **RecoverFromRecyclebin**, you need to input the released source PolarDB cluster ID. The DBType of the cluster being recovered from the recycle bin must match the source cluster. For example, if the source cluster was MySQL 8.0, the recovered cluster must also have **DBType** set to **MySQL** and **DBVersion** to **8.0**.
    std::shared_ptr<string> sourceResourceId_ = nullptr;
    std::shared_ptr<int64_t> sourceUid_ = nullptr;
    // The availability zone where the hot standby cluster is stored. Applicable to the standard edition 3AZ scenario.
    // 
    // > This parameter takes effect only when multi-zone data strong consistency is enabled.
    std::shared_ptr<string> standbyAZ_ = nullptr;
    // Whether to enable automatic storage expansion for standard edition clusters, with valid values as follows:
    // 
    // - Enable: Enables automatic storage expansion.
    // - Disable: Disables automatic storage expansion.
    std::shared_ptr<string> storageAutoScale_ = nullptr;
    // Specifies whether to enable disk encryption. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter takes effect only when **DBType** is set to **MySQL**.
    // 
    // >  This parameter takes effect only when **StorageType** is set to one of the Standard Edition storage types.
    std::shared_ptr<bool> storageEncryption_ = nullptr;
    // The ID of the custom key that is used for disk encryption in the region in which the instance resides. If this parameter is specified, disk encryption is automatically enabled and cannot be disabled afterwards. If you want to use the default service key for disk encryption, leave this parameter empty.
    // 
    // You can obtain the ID of the key in the KMS console or create a key.
    // 
    // >  This parameter takes effect only when **DBType** is set to **MySQL**.
    // 
    // >  This parameter takes effect only when **StorageType** is set to one of the Standard Edition storage types.
    std::shared_ptr<string> storageEncryptionKey_ = nullptr;
    // The storage billing type, with valid values as follows:
    // 
    // - Postpaid: Pay-as-you-go (hourly).
    // - Prepaid: Pay-per-use based on space (subscription).
    std::shared_ptr<string> storagePayType_ = nullptr;
    // The storage that is billed based on the subscription billing method. Unit: GB.
    // 
    // > 
    // 
    // *   Valid values for the subscription storage capacity of a PolarDB for MySQL Standard Edition cluster: 20 to 32000.
    // 
    // *   Valid values for the subscription storage capacity of a Standard Edition cluster that uses the ESSD AUTOPL storage type: 40 to 64000, in increments of 10.
    std::shared_ptr<int64_t> storageSpace_ = nullptr;
    // Enterprise edition storage types include:
    // - **PSL5**
    // - **PSL4**
    // 
    // Standard edition storage types include:
    // - **ESSDPL0**
    // - **ESSDPL1**
    // - **ESSDPL2**
    // - **ESSDPL3**
    // - **ESSDAUTOPL**
    std::shared_ptr<string> storageType_ = nullptr;
    // Set the upper limit for automatic storage expansion of standard edition clusters, in GB.
    // 
    // > The maximum value is 32000.
    std::shared_ptr<int64_t> storageUpperBound_ = nullptr;
    // Whether the cluster has enabled strong data consistency across multiple zones. Values are as follows:
    // 
    // - **ON**: Indicates strong data consistency across multiple zones is enabled, applicable to the standard edition 3AZ scenario.
    // 
    // - **OFF**: Indicates strong data consistency across multiple zones is not enabled.
    std::shared_ptr<string> strictConsistency_ = nullptr;
    // Enables TDE encryption. Valid values are as follows:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled (default).
    // 
    // > * This parameter takes effect only when **DBType** is **PostgreSQL** or **Oracle**.
    // > * You can call the [ModifyDBClusterTDE](https://help.aliyun.com/document_detail/167982.html) interface to enable TDE encryption for a PolarDB MySQL cluster.
    // > * Once the TDE feature is enabled, it cannot be disabled.
    std::shared_ptr<bool> TDEStatus_ = nullptr;
    // List of tags.
    std::shared_ptr<vector<CreateDBClusterRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> targetMinorVersion_ = nullptr;
    // If the payment type is **Prepaid**, this parameter is required.
    // - When **Period** is **Month**, **UsedTime** should be an integer within `[1-9]`.
    // - When **Period** is **Year**, **UsedTime** should be an integer within `[1-3]`.
    std::shared_ptr<string> usedTime_ = nullptr;
    // VPC ID.
    std::shared_ptr<string> VPCId_ = nullptr;
    // Virtual switch ID.
    // 
    // > If VPCId has been selected, VSwitchId is mandatory.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // Availability Zone ID.
    // 
    // > You can view the available zones through the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) interface.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
