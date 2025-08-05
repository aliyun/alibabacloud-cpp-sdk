// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBInstanceRequestAINodeSpecInfos.hpp>
#include <alibabacloud/models/CreateDBInstanceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AINodeSpecInfos, AINodeSpecInfos_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(CacheStorageSize, cacheStorageSize_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateSampleData, createSampleData_);
      DARABONBA_PTR_TO_JSON(DBInstanceCategory, DBInstanceCategory_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceGroupCount, DBInstanceGroupCount_);
      DARABONBA_PTR_TO_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(IdleTime, idleTime_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(MasterAISpec, masterAISpec_);
      DARABONBA_PTR_TO_JSON(MasterCU, masterCU_);
      DARABONBA_PTR_TO_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ProdType, prodType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_TO_JSON(SegStorageType, segStorageType_);
      DARABONBA_PTR_TO_JSON(ServerlessMode, serverlessMode_);
      DARABONBA_PTR_TO_JSON(ServerlessResource, serverlessResource_);
      DARABONBA_PTR_TO_JSON(SrcDbInstanceName, srcDbInstanceName_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VectorConfigurationStatus, vectorConfigurationStatus_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodeSpecInfos, AINodeSpecInfos_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(CacheStorageSize, cacheStorageSize_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateSampleData, createSampleData_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCategory, DBInstanceCategory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceGroupCount, DBInstanceGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(IdleTime, idleTime_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(MasterAISpec, masterAISpec_);
      DARABONBA_PTR_FROM_JSON(MasterCU, masterCU_);
      DARABONBA_PTR_FROM_JSON(MasterNodeNum, masterNodeNum_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ProdType, prodType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_FROM_JSON(SegStorageType, segStorageType_);
      DARABONBA_PTR_FROM_JSON(ServerlessMode, serverlessMode_);
      DARABONBA_PTR_FROM_JSON(ServerlessResource, serverlessResource_);
      DARABONBA_PTR_FROM_JSON(SrcDbInstanceName, srcDbInstanceName_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VectorConfigurationStatus, vectorConfigurationStatus_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBInstanceRequest() = default ;
    CreateDBInstanceRequest(const CreateDBInstanceRequest &) = default ;
    CreateDBInstanceRequest(CreateDBInstanceRequest &&) = default ;
    CreateDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceRequest() = default ;
    CreateDBInstanceRequest& operator=(const CreateDBInstanceRequest &) = default ;
    CreateDBInstanceRequest& operator=(CreateDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AINodeSpecInfos_ != nullptr
        && this->backupId_ != nullptr && this->cacheStorageSize_ != nullptr && this->clientToken_ != nullptr && this->createSampleData_ != nullptr && this->DBInstanceCategory_ != nullptr
        && this->DBInstanceClass_ != nullptr && this->DBInstanceDescription_ != nullptr && this->DBInstanceGroupCount_ != nullptr && this->DBInstanceMode_ != nullptr && this->deployMode_ != nullptr
        && this->enableSSL_ != nullptr && this->encryptionKey_ != nullptr && this->encryptionType_ != nullptr && this->engine_ != nullptr && this->engineVersion_ != nullptr
        && this->idleTime_ != nullptr && this->instanceNetworkType_ != nullptr && this->instanceSpec_ != nullptr && this->masterAISpec_ != nullptr && this->masterCU_ != nullptr
        && this->masterNodeNum_ != nullptr && this->ownerId_ != nullptr && this->payType_ != nullptr && this->period_ != nullptr && this->privateIpAddress_ != nullptr
        && this->prodType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityIPList_ != nullptr && this->segDiskPerformanceLevel_ != nullptr
        && this->segNodeNum_ != nullptr && this->segStorageType_ != nullptr && this->serverlessMode_ != nullptr && this->serverlessResource_ != nullptr && this->srcDbInstanceName_ != nullptr
        && this->standbyVSwitchId_ != nullptr && this->standbyZoneId_ != nullptr && this->storageSize_ != nullptr && this->storageType_ != nullptr && this->tag_ != nullptr
        && this->usedTime_ != nullptr && this->VPCId_ != nullptr && this->vSwitchId_ != nullptr && this->vectorConfigurationStatus_ != nullptr && this->zoneId_ != nullptr; };
    // AINodeSpecInfos Field Functions 
    bool hasAINodeSpecInfos() const { return this->AINodeSpecInfos_ != nullptr;};
    void deleteAINodeSpecInfos() { this->AINodeSpecInfos_ = nullptr;};
    inline const vector<CreateDBInstanceRequestAINodeSpecInfos> & AINodeSpecInfos() const { DARABONBA_PTR_GET_CONST(AINodeSpecInfos_, vector<CreateDBInstanceRequestAINodeSpecInfos>) };
    inline vector<CreateDBInstanceRequestAINodeSpecInfos> AINodeSpecInfos() { DARABONBA_PTR_GET(AINodeSpecInfos_, vector<CreateDBInstanceRequestAINodeSpecInfos>) };
    inline CreateDBInstanceRequest& setAINodeSpecInfos(const vector<CreateDBInstanceRequestAINodeSpecInfos> & AINodeSpecInfos) { DARABONBA_PTR_SET_VALUE(AINodeSpecInfos_, AINodeSpecInfos) };
    inline CreateDBInstanceRequest& setAINodeSpecInfos(vector<CreateDBInstanceRequestAINodeSpecInfos> && AINodeSpecInfos) { DARABONBA_PTR_SET_RVALUE(AINodeSpecInfos_, AINodeSpecInfos) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // cacheStorageSize Field Functions 
    bool hasCacheStorageSize() const { return this->cacheStorageSize_ != nullptr;};
    void deleteCacheStorageSize() { this->cacheStorageSize_ = nullptr;};
    inline string cacheStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageSize_, "") };
    inline CreateDBInstanceRequest& setCacheStorageSize(string cacheStorageSize) { DARABONBA_PTR_SET_VALUE(cacheStorageSize_, cacheStorageSize) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createSampleData Field Functions 
    bool hasCreateSampleData() const { return this->createSampleData_ != nullptr;};
    void deleteCreateSampleData() { this->createSampleData_ = nullptr;};
    inline bool createSampleData() const { DARABONBA_PTR_GET_DEFAULT(createSampleData_, false) };
    inline CreateDBInstanceRequest& setCreateSampleData(bool createSampleData) { DARABONBA_PTR_SET_VALUE(createSampleData_, createSampleData) };


    // DBInstanceCategory Field Functions 
    bool hasDBInstanceCategory() const { return this->DBInstanceCategory_ != nullptr;};
    void deleteDBInstanceCategory() { this->DBInstanceCategory_ = nullptr;};
    inline string DBInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCategory_, "") };
    inline CreateDBInstanceRequest& setDBInstanceCategory(string DBInstanceCategory) { DARABONBA_PTR_SET_VALUE(DBInstanceCategory_, DBInstanceCategory) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceGroupCount Field Functions 
    bool hasDBInstanceGroupCount() const { return this->DBInstanceGroupCount_ != nullptr;};
    void deleteDBInstanceGroupCount() { this->DBInstanceGroupCount_ = nullptr;};
    inline string DBInstanceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceGroupCount_, "") };
    inline CreateDBInstanceRequest& setDBInstanceGroupCount(string DBInstanceGroupCount) { DARABONBA_PTR_SET_VALUE(DBInstanceGroupCount_, DBInstanceGroupCount) };


    // DBInstanceMode Field Functions 
    bool hasDBInstanceMode() const { return this->DBInstanceMode_ != nullptr;};
    void deleteDBInstanceMode() { this->DBInstanceMode_ = nullptr;};
    inline string DBInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMode_, "") };
    inline CreateDBInstanceRequest& setDBInstanceMode(string DBInstanceMode) { DARABONBA_PTR_SET_VALUE(DBInstanceMode_, DBInstanceMode) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string deployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline CreateDBInstanceRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline CreateDBInstanceRequest& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string encryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline CreateDBInstanceRequest& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // idleTime Field Functions 
    bool hasIdleTime() const { return this->idleTime_ != nullptr;};
    void deleteIdleTime() { this->idleTime_ = nullptr;};
    inline int32_t idleTime() const { DARABONBA_PTR_GET_DEFAULT(idleTime_, 0) };
    inline CreateDBInstanceRequest& setIdleTime(int32_t idleTime) { DARABONBA_PTR_SET_VALUE(idleTime_, idleTime) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateDBInstanceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline CreateDBInstanceRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // masterAISpec Field Functions 
    bool hasMasterAISpec() const { return this->masterAISpec_ != nullptr;};
    void deleteMasterAISpec() { this->masterAISpec_ = nullptr;};
    inline string masterAISpec() const { DARABONBA_PTR_GET_DEFAULT(masterAISpec_, "") };
    inline CreateDBInstanceRequest& setMasterAISpec(string masterAISpec) { DARABONBA_PTR_SET_VALUE(masterAISpec_, masterAISpec) };


    // masterCU Field Functions 
    bool hasMasterCU() const { return this->masterCU_ != nullptr;};
    void deleteMasterCU() { this->masterCU_ = nullptr;};
    inline int32_t masterCU() const { DARABONBA_PTR_GET_DEFAULT(masterCU_, 0) };
    inline CreateDBInstanceRequest& setMasterCU(int32_t masterCU) { DARABONBA_PTR_SET_VALUE(masterCU_, masterCU) };


    // masterNodeNum Field Functions 
    bool hasMasterNodeNum() const { return this->masterNodeNum_ != nullptr;};
    void deleteMasterNodeNum() { this->masterNodeNum_ = nullptr;};
    inline string masterNodeNum() const { DARABONBA_PTR_GET_DEFAULT(masterNodeNum_, "") };
    inline CreateDBInstanceRequest& setMasterNodeNum(string masterNodeNum) { DARABONBA_PTR_SET_VALUE(masterNodeNum_, masterNodeNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // prodType Field Functions 
    bool hasProdType() const { return this->prodType_ != nullptr;};
    void deleteProdType() { this->prodType_ = nullptr;};
    inline string prodType() const { DARABONBA_PTR_GET_DEFAULT(prodType_, "") };
    inline CreateDBInstanceRequest& setProdType(string prodType) { DARABONBA_PTR_SET_VALUE(prodType_, prodType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBInstanceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // segDiskPerformanceLevel Field Functions 
    bool hasSegDiskPerformanceLevel() const { return this->segDiskPerformanceLevel_ != nullptr;};
    void deleteSegDiskPerformanceLevel() { this->segDiskPerformanceLevel_ = nullptr;};
    inline string segDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(segDiskPerformanceLevel_, "") };
    inline CreateDBInstanceRequest& setSegDiskPerformanceLevel(string segDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(segDiskPerformanceLevel_, segDiskPerformanceLevel) };


    // segNodeNum Field Functions 
    bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
    void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
    inline string segNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, "") };
    inline CreateDBInstanceRequest& setSegNodeNum(string segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


    // segStorageType Field Functions 
    bool hasSegStorageType() const { return this->segStorageType_ != nullptr;};
    void deleteSegStorageType() { this->segStorageType_ = nullptr;};
    inline string segStorageType() const { DARABONBA_PTR_GET_DEFAULT(segStorageType_, "") };
    inline CreateDBInstanceRequest& setSegStorageType(string segStorageType) { DARABONBA_PTR_SET_VALUE(segStorageType_, segStorageType) };


    // serverlessMode Field Functions 
    bool hasServerlessMode() const { return this->serverlessMode_ != nullptr;};
    void deleteServerlessMode() { this->serverlessMode_ = nullptr;};
    inline string serverlessMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessMode_, "") };
    inline CreateDBInstanceRequest& setServerlessMode(string serverlessMode) { DARABONBA_PTR_SET_VALUE(serverlessMode_, serverlessMode) };


    // serverlessResource Field Functions 
    bool hasServerlessResource() const { return this->serverlessResource_ != nullptr;};
    void deleteServerlessResource() { this->serverlessResource_ = nullptr;};
    inline int32_t serverlessResource() const { DARABONBA_PTR_GET_DEFAULT(serverlessResource_, 0) };
    inline CreateDBInstanceRequest& setServerlessResource(int32_t serverlessResource) { DARABONBA_PTR_SET_VALUE(serverlessResource_, serverlessResource) };


    // srcDbInstanceName Field Functions 
    bool hasSrcDbInstanceName() const { return this->srcDbInstanceName_ != nullptr;};
    void deleteSrcDbInstanceName() { this->srcDbInstanceName_ = nullptr;};
    inline string srcDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(srcDbInstanceName_, "") };
    inline CreateDBInstanceRequest& setSrcDbInstanceName(string srcDbInstanceName) { DARABONBA_PTR_SET_VALUE(srcDbInstanceName_, srcDbInstanceName) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string standbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline CreateDBInstanceRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline CreateDBInstanceRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreateDBInstanceRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBInstanceRequestTag>) };
    inline vector<CreateDBInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDBInstanceRequestTag>) };
    inline CreateDBInstanceRequest& setTag(const vector<CreateDBInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBInstanceRequest& setTag(vector<CreateDBInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vectorConfigurationStatus Field Functions 
    bool hasVectorConfigurationStatus() const { return this->vectorConfigurationStatus_ != nullptr;};
    void deleteVectorConfigurationStatus() { this->vectorConfigurationStatus_ = nullptr;};
    inline string vectorConfigurationStatus() const { DARABONBA_PTR_GET_DEFAULT(vectorConfigurationStatus_, "") };
    inline CreateDBInstanceRequest& setVectorConfigurationStatus(string vectorConfigurationStatus) { DARABONBA_PTR_SET_VALUE(vectorConfigurationStatus_, vectorConfigurationStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<CreateDBInstanceRequestAINodeSpecInfos>> AINodeSpecInfos_ = nullptr;
    // Backup set ID.
    // 
    // > You can call the [DescribeDataBackups](https://help.aliyun.com/document_detail/210093.html) interface to view the backup set IDs of all backup sets under the target instance.
    std::shared_ptr<string> backupId_ = nullptr;
    std::shared_ptr<string> cacheStorageSize_ = nullptr;
    // Idempotence check. For more information, see [How to Ensure Idempotence](https://help.aliyun.com/document_detail/327176.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Whether to load sample datasets after the instance is created. The values are as follows:
    // 
    // - **true**: Load sample datasets.
    // - **false**: Do not load sample datasets.
    // 
    // > If this parameter is not specified, it defaults to not loading sample datasets.
    std::shared_ptr<bool> createSampleData_ = nullptr;
    // Instance series. The value description is as follows:
    // 
    // - **HighAvailability**: High availability version.
    // - **Basic**: Basic version.
    // 
    // > This parameter is required when creating an instance in the storage elastic mode.
    std::shared_ptr<string> DBInstanceCategory_ = nullptr;
    // Instance type. For more details, see the supplementary description of the DBInstanceClass parameter.
    // 
    // > This parameter is required when creating a reserved storage mode instance.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // Instance description.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // Number of compute groups. The values are: 2, 4, 8, 12, 16, 24, 32, 64, 96, 128.
    // 
    // > This parameter is required when creating a reserved storage mode instance.
    std::shared_ptr<string> DBInstanceGroupCount_ = nullptr;
    // Instance resource type. The value description is as follows:
    // 
    // - **StorageElastic**: Storage elastic mode.
    // - **Serverless**: Serverless mode.
    // - **Classic**: Storage reserved mode.
    // 
    // > This parameter is required.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceMode_ = nullptr;
    // Deployment mode. The values are as follows:
    // - multiple: Multi-zone deployment.
    // - single: Single-zone deployment.
    // 
    // > 
    // > - If this parameter is not specified, the default value is single-zone deployment.
    // > - Currently, only single-zone deployment is supported.
    std::shared_ptr<string> deployMode_ = nullptr;
    // Specifies whether to enable SSL encryption. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enableSSL_ = nullptr;
    // Key ID.
    // 
    // > If the value of the **EncryptionType** parameter is **CloudDisk**, you need to specify the encryption key ID within the same region through this parameter; otherwise, it should be empty.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // Encryption type. The value description is as follows:
    // 
    // - **NULL**: No encryption (default).
    // - **CloudDisk**: Enable cloud disk encryption and specify the key through the **EncryptionKey** parameter.
    // 
    // > Once cloud disk encryption is enabled, it cannot be disabled.
    std::shared_ptr<string> encryptionType_ = nullptr;
    // Database engine, with the value **gpdb**.
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // Engine version. The values are as follows:
    // - **6.0**: Version 6.0.
    // - **7.0**: Version 7.0.
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The idle release wait time. When the duration without business traffic reaches the specified time, the instance will enter the idle state. The unit is seconds, with a minimum value of 60, and the default value is 600.
    // 
    // > This parameter is required only for Serverless auto-scheduling mode instances.
    std::shared_ptr<int32_t> idleTime_ = nullptr;
    // Instance network type, with the value **VPC**.
    // 
    // > - Only VPC networks are supported in public cloud.
    // > - If not specified, it defaults to VPC type.
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // Compute node specifications.
    // 
    // For high-availability versions of the elastic storage mode, the values are as follows:
    // - **2C16G**
    // - **4C32G**
    // - **16C128G**
    // 
    // For basic versions of the elastic storage mode, the values are as follows:
    // - **2C8G**
    // - **4C16G**
    // - **8C32G**
    // - **16C64G**
    // 
    // For Serverless mode, the values are as follows:
    // - **4C16G**
    // - **8C32G**
    // 
    // > This parameter is required when creating an elastic storage mode instance or a Serverless mode instance.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // This parameter must be specified if you want to change coordinator nodes to AI coordinator nodes.
    // 
    // >-  You cannot specify the MasterAISpec and MasterCU parameters at the same time.
    // >- You can change coordinator nodes to AI coordinator nodes only in specific regions and zones.
    // >- Only AnalyticDB for PostgreSQL V7.0 instances of Basic Edition support AI coordinator nodes.
    // >- You can view the valid values of this parameter on the configuration change page of coordinator nodes.
    std::shared_ptr<string> masterAISpec_ = nullptr;
    // Master resources, with the following values: 
    // - 2 CU 
    // - 4 CU 
    // - 8 CU 
    // - 16 CU 
    // - 32 CU 
    // > Master resources above 8 CU will incur charges.
    std::shared_ptr<int32_t> masterCU_ = nullptr;
    // This parameter is deprecated and should not be passed.
    std::shared_ptr<string> masterNodeNum_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    // 
    // > 
    // 
    // *   If you do not specify this parameter, Postpaid is used.
    // 
    // *   You can obtain more cost savings if you create a subscription instance for one year or longer. We recommend that you select the billing method that best suits your needs.
    std::shared_ptr<string> payType_ = nullptr;
    // Unit of the duration for which resources are purchased. The values are as follows:
    // - **Month**: Month
    // - **Year**: Year
    // 
    // > This parameter is required when creating a subscription-billed instance.
    std::shared_ptr<string> period_ = nullptr;
    // This parameter is deprecated and should not be passed.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // Product type. The values are as follows:
    // - **standard**: Standard Edition.
    // - **cost-effective**: Cost-Effective Edition.
    // 
    // > If this parameter is not specified, the default value is Standard Edition.
    std::shared_ptr<string> prodType_ = nullptr;
    // Region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) interface to view available region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the enterprise resource group where the instance is located.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IP address whitelist of the instance.
    // 
    // A value of 127.0.0.1 denies access from any external IP address. You can call the [ModifySecurityIps](https://help.aliyun.com/document_detail/86928.html) operation to modify the IP address whitelist after you create an instance.
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The performance level of ESSDs. Valid values:
    // 
    // *   **pl0**
    // *   **pl1**
    // *   **pl2**
    // 
    // > 
    // 
    // *   This parameter takes effect only when SegStorageType is set to cloud_essd.
    // 
    // *   If you do not specify this parameter, pl1 is used.
    std::shared_ptr<string> segDiskPerformanceLevel_ = nullptr;
    // The number of compute nodes. The value description is as follows:
    // 
    // - For the high-availability version of the storage elastic mode, the value range is 4 to 512, and the value must be a multiple of 4.
    // - For the basic version of the storage elastic mode, the value range is 2 to 512, and the value must be a multiple of 2.
    // - For the Serverless mode, the value range is 2 to 512, and the value must be a multiple of 2.
    // 
    // > This parameter is required when creating instances in the storage elastic mode or Serverless mode.
    std::shared_ptr<string> segNodeNum_ = nullptr;
    // Disk storage type, currently only ESSD cloud disks are supported, with the value **cloud_essd**.
    // 
    // > This parameter is required when creating an elastic storage mode instance.
    std::shared_ptr<string> segStorageType_ = nullptr;
    // The mode of the Serverless instance. The values are as follows:
    // 
    // - **Manual**: Manual scheduling (default).
    // - **Auto**: Auto scheduling.
    // 
    // > This parameter is required only for Serverless mode instances.
    std::shared_ptr<string> serverlessMode_ = nullptr;
    // The threshold for computing resources. The value range is 8 to 32, with a step of 8, and the unit is ACU. The default value is 32.
    // 
    // > This parameter is required only for Serverless auto-scheduling mode instances.
    std::shared_ptr<int32_t> serverlessResource_ = nullptr;
    // ID of the source instance to be cloned.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) interface to view details of all AnalyticDB for PostgreSQL instances in the target region, including the instance ID.
    std::shared_ptr<string> srcDbInstanceName_ = nullptr;
    // VSwitch ID of the standby zone.
    // 
    // > 
    // > - This parameter is required for multi-zone deployment.
    // > - The VSwitch ID of the standby zone must be in the same zone as the StandbyZoneId.
    std::shared_ptr<string> standbyVSwitchId_ = nullptr;
    // ID of the standby zone.
    // 
    // > 
    // > - This parameter is required for multi-zone deployment.
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) interface to view available zone IDs.
    // > - The ID of the standby zone must be different from the ID of the primary zone.
    std::shared_ptr<string> standbyZoneId_ = nullptr;
    // The size of the storage space, in GB, with a value range of <props="china">50~8000<props="intl">50~6000.
    // 
    // > This parameter is required when creating an instance in the storage elastic mode.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // This parameter is deprecated and should not be passed.
    std::shared_ptr<string> storageType_ = nullptr;
    // The Nth tag. The value of N ranges from 1 to 20.
    std::shared_ptr<vector<CreateDBInstanceRequestTag>> tag_ = nullptr;
    // Duration for which resources are purchased. The values are as follows:
    // - When **Period** is **Month**, the value ranges from 1 to 9.
    // - When **Period** is **Year**, the value ranges from 1 to 3.
    // 
    // > This parameter is required when creating a subscription-billed instance.
    std::shared_ptr<string> usedTime_ = nullptr;
    // VPC ID.
    // 
    // > - **VPCId** is required.
    // > - The region of the **VPC** must be consistent with **RegionId**.
    std::shared_ptr<string> VPCId_ = nullptr;
    // vSwitch ID.
    // 
    // > - **vSwitchId** is required.
    // > - The availability zone of the **vSwitch** must be consistent with **ZoneId**.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // Whether to enable vector engine optimization. The value description is as follows:
    // - **enabled**: Enable vector engine optimization.
    // - **disabled** (default): Do not enable vector engine optimization.
    // 
    // > - For mainstream analysis scenarios, data warehouse scenarios, and real-time data warehouse scenarios, it is recommended to **not enable** vector engine optimization.
    // > - For users using the vector analysis engine for AIGC, vector retrieval, and other scenarios, it is recommended to **enable** vector engine optimization.
    std::shared_ptr<string> vectorConfigurationStatus_ = nullptr;
    // Zone ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) interface to view available zone IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
