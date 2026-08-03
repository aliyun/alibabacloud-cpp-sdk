// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      // The tag key. The following limits apply:
      // 
      // - The tag key cannot be an empty string.
      // - The tag key can be up to 128 characters in length.
      // - The tag key cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The following limits apply:
      // 
      // - The tag value can be an empty string.
      // - The tag value can be up to 128 characters in length.
      // - The tag value cannot start with `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class AINodeSpecInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AINodeSpecInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AINodeNum, AINodeNum_);
        DARABONBA_PTR_TO_JSON(AINodeSpec, AINodeSpec_);
      };
      friend void from_json(const Darabonba::Json& j, AINodeSpecInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AINodeNum, AINodeNum_);
        DARABONBA_PTR_FROM_JSON(AINodeSpec, AINodeSpec_);
      };
      AINodeSpecInfos() = default ;
      AINodeSpecInfos(const AINodeSpecInfos &) = default ;
      AINodeSpecInfos(AINodeSpecInfos &&) = default ;
      AINodeSpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AINodeSpecInfos() = default ;
      AINodeSpecInfos& operator=(const AINodeSpecInfos &) = default ;
      AINodeSpecInfos& operator=(AINodeSpecInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->AINodeNum_ == nullptr
        && this->AINodeSpec_ == nullptr; };
      // AINodeNum Field Functions 
      bool hasAINodeNum() const { return this->AINodeNum_ != nullptr;};
      void deleteAINodeNum() { this->AINodeNum_ = nullptr;};
      inline string getAINodeNum() const { DARABONBA_PTR_GET_DEFAULT(AINodeNum_, "") };
      inline AINodeSpecInfos& setAINodeNum(string AINodeNum) { DARABONBA_PTR_SET_VALUE(AINodeNum_, AINodeNum) };


      // AINodeSpec Field Functions 
      bool hasAINodeSpec() const { return this->AINodeSpec_ != nullptr;};
      void deleteAINodeSpec() { this->AINodeSpec_ = nullptr;};
      inline string getAINodeSpec() const { DARABONBA_PTR_GET_DEFAULT(AINodeSpec_, "") };
      inline AINodeSpecInfos& setAINodeSpec(string AINodeSpec) { DARABONBA_PTR_SET_VALUE(AINodeSpec_, AINodeSpec) };


    protected:
      // The number of AI nodes.
      shared_ptr<string> AINodeNum_ {};
      // The AI node specifications.
      shared_ptr<string> AINodeSpec_ {};
    };

    virtual bool empty() const override { return this->AINodeSpecInfos_ == nullptr
        && this->backupId_ == nullptr && this->cacheStorageSize_ == nullptr && this->clientToken_ == nullptr && this->createSampleData_ == nullptr && this->DBInstanceCategory_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceGroupCount_ == nullptr && this->DBInstanceMode_ == nullptr && this->deployMode_ == nullptr
        && this->enableSSL_ == nullptr && this->encryptionKey_ == nullptr && this->encryptionType_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->idleTime_ == nullptr && this->instanceNetworkType_ == nullptr && this->instanceSpec_ == nullptr && this->masterAISpec_ == nullptr && this->masterCU_ == nullptr
        && this->masterNodeNum_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->privateIpAddress_ == nullptr
        && this->prodType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityIPList_ == nullptr && this->segDiskPerformanceLevel_ == nullptr
        && this->segNodeNum_ == nullptr && this->segStorageType_ == nullptr && this->serverlessMode_ == nullptr && this->serverlessResource_ == nullptr && this->srcDbInstanceName_ == nullptr
        && this->standbyVSwitchId_ == nullptr && this->standbyZoneId_ == nullptr && this->storageSize_ == nullptr && this->storageType_ == nullptr && this->tag_ == nullptr
        && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->vectorConfigurationStatus_ == nullptr && this->zoneId_ == nullptr; };
    // AINodeSpecInfos Field Functions 
    bool hasAINodeSpecInfos() const { return this->AINodeSpecInfos_ != nullptr;};
    void deleteAINodeSpecInfos() { this->AINodeSpecInfos_ = nullptr;};
    inline const vector<CreateDBInstanceRequest::AINodeSpecInfos> & getAINodeSpecInfos() const { DARABONBA_PTR_GET_CONST(AINodeSpecInfos_, vector<CreateDBInstanceRequest::AINodeSpecInfos>) };
    inline vector<CreateDBInstanceRequest::AINodeSpecInfos> getAINodeSpecInfos() { DARABONBA_PTR_GET(AINodeSpecInfos_, vector<CreateDBInstanceRequest::AINodeSpecInfos>) };
    inline CreateDBInstanceRequest& setAINodeSpecInfos(const vector<CreateDBInstanceRequest::AINodeSpecInfos> & aINodeSpecInfos) { DARABONBA_PTR_SET_VALUE(AINodeSpecInfos_, aINodeSpecInfos) };
    inline CreateDBInstanceRequest& setAINodeSpecInfos(vector<CreateDBInstanceRequest::AINodeSpecInfos> && aINodeSpecInfos) { DARABONBA_PTR_SET_RVALUE(AINodeSpecInfos_, aINodeSpecInfos) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // cacheStorageSize Field Functions 
    bool hasCacheStorageSize() const { return this->cacheStorageSize_ != nullptr;};
    void deleteCacheStorageSize() { this->cacheStorageSize_ = nullptr;};
    inline string getCacheStorageSize() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageSize_, "") };
    inline CreateDBInstanceRequest& setCacheStorageSize(string cacheStorageSize) { DARABONBA_PTR_SET_VALUE(cacheStorageSize_, cacheStorageSize) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createSampleData Field Functions 
    bool hasCreateSampleData() const { return this->createSampleData_ != nullptr;};
    void deleteCreateSampleData() { this->createSampleData_ = nullptr;};
    inline bool getCreateSampleData() const { DARABONBA_PTR_GET_DEFAULT(createSampleData_, false) };
    inline CreateDBInstanceRequest& setCreateSampleData(bool createSampleData) { DARABONBA_PTR_SET_VALUE(createSampleData_, createSampleData) };


    // DBInstanceCategory Field Functions 
    bool hasDBInstanceCategory() const { return this->DBInstanceCategory_ != nullptr;};
    void deleteDBInstanceCategory() { this->DBInstanceCategory_ = nullptr;};
    inline string getDBInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCategory_, "") };
    inline CreateDBInstanceRequest& setDBInstanceCategory(string DBInstanceCategory) { DARABONBA_PTR_SET_VALUE(DBInstanceCategory_, DBInstanceCategory) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceGroupCount Field Functions 
    bool hasDBInstanceGroupCount() const { return this->DBInstanceGroupCount_ != nullptr;};
    void deleteDBInstanceGroupCount() { this->DBInstanceGroupCount_ = nullptr;};
    inline string getDBInstanceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceGroupCount_, "") };
    inline CreateDBInstanceRequest& setDBInstanceGroupCount(string DBInstanceGroupCount) { DARABONBA_PTR_SET_VALUE(DBInstanceGroupCount_, DBInstanceGroupCount) };


    // DBInstanceMode Field Functions 
    bool hasDBInstanceMode() const { return this->DBInstanceMode_ != nullptr;};
    void deleteDBInstanceMode() { this->DBInstanceMode_ = nullptr;};
    inline string getDBInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMode_, "") };
    inline CreateDBInstanceRequest& setDBInstanceMode(string DBInstanceMode) { DARABONBA_PTR_SET_VALUE(DBInstanceMode_, DBInstanceMode) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline CreateDBInstanceRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline CreateDBInstanceRequest& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline CreateDBInstanceRequest& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // idleTime Field Functions 
    bool hasIdleTime() const { return this->idleTime_ != nullptr;};
    void deleteIdleTime() { this->idleTime_ = nullptr;};
    inline int32_t getIdleTime() const { DARABONBA_PTR_GET_DEFAULT(idleTime_, 0) };
    inline CreateDBInstanceRequest& setIdleTime(int32_t idleTime) { DARABONBA_PTR_SET_VALUE(idleTime_, idleTime) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline CreateDBInstanceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline CreateDBInstanceRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // masterAISpec Field Functions 
    bool hasMasterAISpec() const { return this->masterAISpec_ != nullptr;};
    void deleteMasterAISpec() { this->masterAISpec_ = nullptr;};
    inline string getMasterAISpec() const { DARABONBA_PTR_GET_DEFAULT(masterAISpec_, "") };
    inline CreateDBInstanceRequest& setMasterAISpec(string masterAISpec) { DARABONBA_PTR_SET_VALUE(masterAISpec_, masterAISpec) };


    // masterCU Field Functions 
    bool hasMasterCU() const { return this->masterCU_ != nullptr;};
    void deleteMasterCU() { this->masterCU_ = nullptr;};
    inline int32_t getMasterCU() const { DARABONBA_PTR_GET_DEFAULT(masterCU_, 0) };
    inline CreateDBInstanceRequest& setMasterCU(int32_t masterCU) { DARABONBA_PTR_SET_VALUE(masterCU_, masterCU) };


    // masterNodeNum Field Functions 
    bool hasMasterNodeNum() const { return this->masterNodeNum_ != nullptr;};
    void deleteMasterNodeNum() { this->masterNodeNum_ = nullptr;};
    inline string getMasterNodeNum() const { DARABONBA_PTR_GET_DEFAULT(masterNodeNum_, "") };
    inline CreateDBInstanceRequest& setMasterNodeNum(string masterNodeNum) { DARABONBA_PTR_SET_VALUE(masterNodeNum_, masterNodeNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateDBInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // prodType Field Functions 
    bool hasProdType() const { return this->prodType_ != nullptr;};
    void deleteProdType() { this->prodType_ = nullptr;};
    inline string getProdType() const { DARABONBA_PTR_GET_DEFAULT(prodType_, "") };
    inline CreateDBInstanceRequest& setProdType(string prodType) { DARABONBA_PTR_SET_VALUE(prodType_, prodType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBInstanceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // segDiskPerformanceLevel Field Functions 
    bool hasSegDiskPerformanceLevel() const { return this->segDiskPerformanceLevel_ != nullptr;};
    void deleteSegDiskPerformanceLevel() { this->segDiskPerformanceLevel_ = nullptr;};
    inline string getSegDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(segDiskPerformanceLevel_, "") };
    inline CreateDBInstanceRequest& setSegDiskPerformanceLevel(string segDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(segDiskPerformanceLevel_, segDiskPerformanceLevel) };


    // segNodeNum Field Functions 
    bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
    void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
    inline string getSegNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, "") };
    inline CreateDBInstanceRequest& setSegNodeNum(string segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


    // segStorageType Field Functions 
    bool hasSegStorageType() const { return this->segStorageType_ != nullptr;};
    void deleteSegStorageType() { this->segStorageType_ = nullptr;};
    inline string getSegStorageType() const { DARABONBA_PTR_GET_DEFAULT(segStorageType_, "") };
    inline CreateDBInstanceRequest& setSegStorageType(string segStorageType) { DARABONBA_PTR_SET_VALUE(segStorageType_, segStorageType) };


    // serverlessMode Field Functions 
    bool hasServerlessMode() const { return this->serverlessMode_ != nullptr;};
    void deleteServerlessMode() { this->serverlessMode_ = nullptr;};
    inline string getServerlessMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessMode_, "") };
    inline CreateDBInstanceRequest& setServerlessMode(string serverlessMode) { DARABONBA_PTR_SET_VALUE(serverlessMode_, serverlessMode) };


    // serverlessResource Field Functions 
    bool hasServerlessResource() const { return this->serverlessResource_ != nullptr;};
    void deleteServerlessResource() { this->serverlessResource_ = nullptr;};
    inline int32_t getServerlessResource() const { DARABONBA_PTR_GET_DEFAULT(serverlessResource_, 0) };
    inline CreateDBInstanceRequest& setServerlessResource(int32_t serverlessResource) { DARABONBA_PTR_SET_VALUE(serverlessResource_, serverlessResource) };


    // srcDbInstanceName Field Functions 
    bool hasSrcDbInstanceName() const { return this->srcDbInstanceName_ != nullptr;};
    void deleteSrcDbInstanceName() { this->srcDbInstanceName_ = nullptr;};
    inline string getSrcDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(srcDbInstanceName_, "") };
    inline CreateDBInstanceRequest& setSrcDbInstanceName(string srcDbInstanceName) { DARABONBA_PTR_SET_VALUE(srcDbInstanceName_, srcDbInstanceName) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline CreateDBInstanceRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline CreateDBInstanceRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreateDBInstanceRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBInstanceRequest::Tag>) };
    inline vector<CreateDBInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDBInstanceRequest::Tag>) };
    inline CreateDBInstanceRequest& setTag(const vector<CreateDBInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBInstanceRequest& setTag(vector<CreateDBInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vectorConfigurationStatus Field Functions 
    bool hasVectorConfigurationStatus() const { return this->vectorConfigurationStatus_ != nullptr;};
    void deleteVectorConfigurationStatus() { this->vectorConfigurationStatus_ = nullptr;};
    inline string getVectorConfigurationStatus() const { DARABONBA_PTR_GET_DEFAULT(vectorConfigurationStatus_, "") };
    inline CreateDBInstanceRequest& setVectorConfigurationStatus(string vectorConfigurationStatus) { DARABONBA_PTR_SET_VALUE(vectorConfigurationStatus_, vectorConfigurationStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The AI node specifications information.
    shared_ptr<vector<CreateDBInstanceRequest::AINodeSpecInfos>> AINodeSpecInfos_ {};
    // The backup set ID.
    // 
    // > You can call the [DescribeDataBackups](https://help.aliyun.com/document_detail/210093.html) operation to query the backup set IDs of all backup sets for the target instance.
    shared_ptr<string> backupId_ {};
    // The Serverless cache storage size. Valid values: 800 to 102400. The step size is 32 GB. Unit: GB.
    shared_ptr<string> cacheStorageSize_ {};
    // The client token used for idempotence checks. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/327176.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to load a sample dataset after the instance is created. Valid values:
    // 
    // - **true**: Load a sample dataset.
    // - **false**: Do not load a sample dataset.
    // 
    // > If you do not specify this parameter, the default value is false.
    shared_ptr<bool> createSampleData_ {};
    // The instance edition. Valid values:
    // 
    // - **HighAvailability**: high-availability edition.
    // - **Basic**: basic edition.
    // 
    // > This parameter is required when you create a storage elastic mode instance.
    shared_ptr<string> DBInstanceCategory_ {};
    // The instance specifications. For more information, see the supplementary description of the DBInstanceClass parameter.
    // 
    // > This parameter is required when you create a storage reservation mode instance.
    shared_ptr<string> DBInstanceClass_ {};
    // The description of the instance.
    shared_ptr<string> DBInstanceDescription_ {};
    // The number of compute groups. Valid values: 2, 4, 8, 12, 16, 24, 32, 64, 96, and 128.
    // 
    // > This parameter is required when you create a storage reservation mode instance.
    shared_ptr<string> DBInstanceGroupCount_ {};
    // The resource type of the instance. Valid values:
    // 
    // - **StorageElastic**: storage elastic mode.
    // - **Serverless**: Serverless mode.
    // - **ServerlessPro**: Serverless Pro mode.
    // - **Classic**: storage reservation mode.
    // 
    // > This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceMode_ {};
    // The deployment mode. Valid values:
    // - multiple: multi-zone deployment.
    // - single: single-zone deployment.
    // 
    // > 
    // > - If you do not specify this parameter, the default value is single-zone deployment.
    // > - Currently, only single-zone deployment is supported.
    shared_ptr<string> deployMode_ {};
    // Indicates whether to enable Secure Sockets Layer (SSL) encryption. Valid values:
    // - **true**: Enable SSL encryption.
    // - **false** (default): Do not enable SSL encryption.
    shared_ptr<bool> enableSSL_ {};
    // The encryption key ID.
    // 
    // > If the **EncryptionType** parameter is set to **CloudDisk**, specify the encryption key ID in the same region. Otherwise, leave this parameter empty.
    shared_ptr<string> encryptionKey_ {};
    // The encryption type. Valid values:
    // 
    // - **NULL**: Encryption is not enabled. This is the default value.
    // - **CloudDisk**: Cloud disk encryption is enabled. Use the **EncryptionKey** parameter to specify the encryption key.
    // 
    // > Cloud disk encryption cannot be disabled after it is enabled.
    shared_ptr<string> encryptionType_ {};
    // The database engine. Set the value to **gpdb**.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database engine version. Valid values:
    // - **6.0**: version 6.0.
    // - **7.0**: version 7.0.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The idle release wait time. The instance transitions to an idle state after no service traffic is detected for the specified duration. Unit: seconds. Minimum value: 60. Default value: 600.
    // 
    // > This parameter is required only for Serverless instances in automatic scheduling mode.
    shared_ptr<int32_t> idleTime_ {};
    // The network type of the instance. Set the value to **VPC**.
    // 
    // > - Only VPC is supported on the public cloud.
    // > - If you do not specify this parameter, the default value is VPC.
    shared_ptr<string> instanceNetworkType_ {};
    // The node specifications of compute nodes.
    // 
    // Valid values for storage elastic mode (high-availability edition):
    // - **2C16G**
    // - **4C32G**
    // - **16C128G**
    // 
    // Valid values for storage elastic mode (basic edition):
    // - **2C8G**
    // - **4C16G**
    // - **8C32G**
    // - **16C64G**
    // 
    // Valid values for Serverless mode:
    // - **4C16G**
    // - **8C32G**
    // 
    // > This parameter is required when you create a storage elastic mode instance or a Serverless mode instance.
    shared_ptr<string> instanceSpec_ {};
    // Specify this parameter if you want to change the master node to a MasterAI node.
    // > - This parameter and MasterCU cannot be specified at the same time.
    // > - Only specific regions and zones support changing the master node to a MasterAI node.
    // > - Only basic edition instances of AnalyticDB for PostgreSQL 7.0 support MasterAI nodes.
    // > - You can view all valid values of this parameter on the specification change page for the master node.
    shared_ptr<string> masterAISpec_ {};
    // The master resources. Valid values: 
    // - 2 CU 
    // - 4 CU 
    // - 8 CU 
    // - 16 CU 
    // - 32 CU 
    // > Master resources above 8 CU incur additional fees.
    shared_ptr<int32_t> masterCU_ {};
    // **[Deprecated]** This parameter is deprecated. You do not need to specify this parameter.
    shared_ptr<string> masterNodeNum_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    // 
    // > - If you do not specify this parameter, the default value is pay-as-you-go.
    // > - Discounts are available for subscription instances when you purchase them for one year or longer. Select a billing method based on your business requirements.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration. Valid values:
    // - **Month**: month.
    // - **Year**: year.
    // 
    // > This parameter is required when you create a subscription instance.
    shared_ptr<string> period_ {};
    // **[Deprecated]** This parameter is deprecated. You do not need to specify this parameter.
    shared_ptr<string> privateIpAddress_ {};
    // The product type. Valid values:
    // - **standard**: Standard Edition.
    // - **cost-effective**: Economy Edition.
    // 
    // > If you do not specify this parameter, the default value is Standard Edition.
    shared_ptr<string> prodType_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the enterprise resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The IP address whitelist.
    // 
    // A value of 127.0.0.1 indicates that no external IP addresses are allowed to access the instance. After the instance is created, you can call the [ModifySecurityIps](https://help.aliyun.com/document_detail/86928.html) operation to modify the IP address whitelist.
    shared_ptr<string> securityIPList_ {};
    // The performance level (PL) of the ESSD cloud disk. Valid values:
    // 
    // - **pl0**: PL0.
    // - **pl1**: PL1.
    // - **pl2**: PL2.
    // 
    // > - This parameter takes effect only when the cloud disk storage type is ESSD cloud disk.
    // > - If you do not specify this parameter, the default value is PL1.
    shared_ptr<string> segDiskPerformanceLevel_ {};
    // The number of compute nodes. Valid values:
    // 
    // - Storage elastic mode (high-availability edition): 4 to 512. The value must be a multiple of 4.
    // - Storage elastic mode (basic edition): 2 to 512. The value must be a multiple of 2.
    // - Serverless mode: 2 to 512. The value must be a multiple of 2.
    // 
    // > This parameter is required when you create a storage elastic mode instance or a Serverless mode instance.
    shared_ptr<string> segNodeNum_ {};
    // The cloud disk storage type. Currently, only ESSD cloud disks are supported. Set the value to **cloud_essd**.
    // 
    // > This parameter is required when you create a storage elastic mode instance.
    shared_ptr<string> segStorageType_ {};
    // The mode of the Serverless instance. Valid values:
    // 
    // - **Manual**: manual scheduling. This is the default value.
    // - **Auto**: automatic scheduling.
    // 
    // > - This parameter is required only for Serverless mode instances.
    // > - The automatic scheduling mode for AnalyticDB for PostgreSQL Serverless is in invitational preview. To use this feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?product=rds) to apply for access.
    shared_ptr<string> serverlessMode_ {};
    // The compute resource threshold. Valid values: 16 to 1024. The step size is 8. Unit: ACU.
    // 
    // > This parameter is required only for Serverless instances in automatic scheduling mode.
    shared_ptr<int32_t> serverlessResource_ {};
    // The ID of the source instance to clone.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in the target region, including instance IDs.
    shared_ptr<string> srcDbInstanceName_ {};
    // The vSwitch ID in the secondary zone.
    // 
    // > 
    // > - This parameter is required only for multi-zone deployment.
    // > - The vSwitch must be in the same zone as the value specified by StandbyZoneId.
    shared_ptr<string> standbyVSwitchId_ {};
    // The secondary zone ID.
    // 
    // > 
    // > - This parameter is required only for multi-zone deployment.
    // > - You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available zone IDs.
    // > - The secondary zone ID must be different from the primary zone ID.
    shared_ptr<string> standbyZoneId_ {};
    // The storage capacity. Unit: GB. Valid values: <props="china">50 to 8000<props="intl">50 to 6000.
    // 
    // > This parameter is required when you create a storage elastic mode instance.
    shared_ptr<int64_t> storageSize_ {};
    // **[Deprecated]** This parameter is deprecated. You do not need to specify this parameter.
    shared_ptr<string> storageType_ {};
    // The Nth tag. Valid values of N: 1 to 20.
    shared_ptr<vector<CreateDBInstanceRequest::Tag>> tag_ {};
    // The subscription duration. Valid values:
    // - If **Period** is set to **Month**, valid values are 1 to 9.
    // - If **Period** is set to **Year**, valid values are 1 to 3.
    // 
    // > This parameter is required when you create a subscription instance.
    shared_ptr<string> usedTime_ {};
    // The VPC ID.
    // 
    // > - **VPCId** is required.
    // > - The VPC must be in the same region as the value specified by **RegionId**.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    // 
    // > - **vSwitchId** is required.
    // > - The vSwitch must be in the same zone as the value specified by **ZoneId**.
    shared_ptr<string> vSwitchId_ {};
    // Specifies whether to enable vector engine optimization. Valid values:
    // - **enabled**: Enable vector engine optimization.
    // - **disabled** (default): Do not enable vector engine optimization.
    // 
    // > - For mainstream analytics, data warehousing, and real-time data warehouse scenarios, **do not enable** vector engine optimization.
    // > - For scenarios that use the vector analysis engine for AIGC and AISearch, **enable** vector engine optimization.
    shared_ptr<string> vectorConfigurationStatus_ {};
    // The zone ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available zone IDs.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
