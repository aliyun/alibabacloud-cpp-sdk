// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(aiFunction, aiFunction_);
      DARABONBA_PTR_TO_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_TO_JSON(autoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(backupRestoreInfo, backupRestoreInfo_);
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(dbAdminPassword, dbAdminPassword_);
      DARABONBA_PTR_TO_JSON(dbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ha, ha_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(isMultiAzStorage, isMultiAzStorage_);
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(loadReplicas, loadReplicas_);
      DARABONBA_PTR_TO_JSON(multiZoneMode, multiZoneMode_);
      DARABONBA_PTR_TO_JSON(paymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(promotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(aiFunction, aiFunction_);
      DARABONBA_PTR_FROM_JSON(autoBackup, autoBackup_);
      DARABONBA_PTR_FROM_JSON(autoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(backupRestoreInfo, backupRestoreInfo_);
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(dbAdminPassword, dbAdminPassword_);
      DARABONBA_PTR_FROM_JSON(dbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ha, ha_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(isMultiAzStorage, isMultiAzStorage_);
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(loadReplicas, loadReplicas_);
      DARABONBA_PTR_FROM_JSON(multiZoneMode, multiZoneMode_);
      DARABONBA_PTR_FROM_JSON(paymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(promotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
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
    class VSwitchIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
        DARABONBA_PTR_TO_JSON(vswId, vswId_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
        DARABONBA_PTR_FROM_JSON(vswId, vswId_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      VSwitchIds() = default ;
      VSwitchIds(const VSwitchIds &) = default ;
      VSwitchIds(VSwitchIds &&) = default ;
      VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchIds() = default ;
      VSwitchIds& operator=(const VSwitchIds &) = default ;
      VSwitchIds& operator=(VSwitchIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vswId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline VSwitchIds& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VSwitchIds& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> vswId_ {};
      shared_ptr<string> zoneId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(cuNum, cuNum_);
        DARABONBA_PTR_TO_JSON(cuType, cuType_);
        DARABONBA_PTR_TO_JSON(diskSizeType, diskSizeType_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(cuNum, cuNum_);
        DARABONBA_PTR_FROM_JSON(cuType, cuType_);
        DARABONBA_PTR_FROM_JSON(diskSizeType, diskSizeType_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cuNum_ == nullptr
        && this->cuType_ == nullptr && this->diskSizeType_ == nullptr && this->replica_ == nullptr && this->type_ == nullptr; };
      // cuNum Field Functions 
      bool hasCuNum() const { return this->cuNum_ != nullptr;};
      void deleteCuNum() { this->cuNum_ = nullptr;};
      inline int32_t getCuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
      inline Components& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


      // cuType Field Functions 
      bool hasCuType() const { return this->cuType_ != nullptr;};
      void deleteCuType() { this->cuType_ = nullptr;};
      inline string getCuType() const { DARABONBA_PTR_GET_DEFAULT(cuType_, "") };
      inline Components& setCuType(string cuType) { DARABONBA_PTR_SET_VALUE(cuType_, cuType) };


      // diskSizeType Field Functions 
      bool hasDiskSizeType() const { return this->diskSizeType_ != nullptr;};
      void deleteDiskSizeType() { this->diskSizeType_ = nullptr;};
      inline string getDiskSizeType() const { DARABONBA_PTR_GET_DEFAULT(diskSizeType_, "") };
      inline Components& setDiskSizeType(string diskSizeType) { DARABONBA_PTR_SET_VALUE(diskSizeType_, diskSizeType) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Components& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Components& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> cuNum_ {};
      shared_ptr<string> cuType_ {};
      shared_ptr<string> diskSizeType_ {};
      // This parameter is required.
      shared_ptr<int32_t> replica_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class BackupRestoreInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupRestoreInfo& obj) { 
        DARABONBA_PTR_TO_JSON(backupId, backupId_);
        DARABONBA_PTR_TO_JSON(backupName, backupName_);
        DARABONBA_PTR_TO_JSON(sourceClusterId, sourceClusterId_);
      };
      friend void from_json(const Darabonba::Json& j, BackupRestoreInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(backupId, backupId_);
        DARABONBA_PTR_FROM_JSON(backupName, backupName_);
        DARABONBA_PTR_FROM_JSON(sourceClusterId, sourceClusterId_);
      };
      BackupRestoreInfo() = default ;
      BackupRestoreInfo(const BackupRestoreInfo &) = default ;
      BackupRestoreInfo(BackupRestoreInfo &&) = default ;
      BackupRestoreInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupRestoreInfo() = default ;
      BackupRestoreInfo& operator=(const BackupRestoreInfo &) = default ;
      BackupRestoreInfo& operator=(BackupRestoreInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupId_ == nullptr
        && this->backupName_ == nullptr && this->sourceClusterId_ == nullptr; };
      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline BackupRestoreInfo& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // backupName Field Functions 
      bool hasBackupName() const { return this->backupName_ != nullptr;};
      void deleteBackupName() { this->backupName_ = nullptr;};
      inline string getBackupName() const { DARABONBA_PTR_GET_DEFAULT(backupName_, "") };
      inline BackupRestoreInfo& setBackupName(string backupName) { DARABONBA_PTR_SET_VALUE(backupName_, backupName) };


      // sourceClusterId Field Functions 
      bool hasSourceClusterId() const { return this->sourceClusterId_ != nullptr;};
      void deleteSourceClusterId() { this->sourceClusterId_ = nullptr;};
      inline string getSourceClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceClusterId_, "") };
      inline BackupRestoreInfo& setSourceClusterId(string sourceClusterId) { DARABONBA_PTR_SET_VALUE(sourceClusterId_, sourceClusterId) };


    protected:
      shared_ptr<string> backupId_ {};
      shared_ptr<string> backupName_ {};
      shared_ptr<string> sourceClusterId_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->aiFunction_ == nullptr && this->autoBackup_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->backupRestoreInfo_ == nullptr
        && this->components_ == nullptr && this->configuration_ == nullptr && this->dbAdminPassword_ == nullptr && this->dbVersion_ == nullptr && this->encrypted_ == nullptr
        && this->ha_ == nullptr && this->instanceName_ == nullptr && this->isMultiAzStorage_ == nullptr && this->kmsKeyId_ == nullptr && this->loadReplicas_ == nullptr
        && this->multiZoneMode_ == nullptr && this->paymentDuration_ == nullptr && this->paymentDurationUnit_ == nullptr && this->paymentType_ == nullptr && this->promotionNo_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr
        && this->clientToken_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // aiFunction Field Functions 
    bool hasAiFunction() const { return this->aiFunction_ != nullptr;};
    void deleteAiFunction() { this->aiFunction_ = nullptr;};
    inline bool getAiFunction() const { DARABONBA_PTR_GET_DEFAULT(aiFunction_, false) };
    inline CreateInstanceRequest& setAiFunction(bool aiFunction) { DARABONBA_PTR_SET_VALUE(aiFunction_, aiFunction) };


    // autoBackup Field Functions 
    bool hasAutoBackup() const { return this->autoBackup_ != nullptr;};
    void deleteAutoBackup() { this->autoBackup_ = nullptr;};
    inline bool getAutoBackup() const { DARABONBA_PTR_GET_DEFAULT(autoBackup_, false) };
    inline CreateInstanceRequest& setAutoBackup(bool autoBackup) { DARABONBA_PTR_SET_VALUE(autoBackup_, autoBackup) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupRestoreInfo Field Functions 
    bool hasBackupRestoreInfo() const { return this->backupRestoreInfo_ != nullptr;};
    void deleteBackupRestoreInfo() { this->backupRestoreInfo_ = nullptr;};
    inline const CreateInstanceRequest::BackupRestoreInfo & getBackupRestoreInfo() const { DARABONBA_PTR_GET_CONST(backupRestoreInfo_, CreateInstanceRequest::BackupRestoreInfo) };
    inline CreateInstanceRequest::BackupRestoreInfo getBackupRestoreInfo() { DARABONBA_PTR_GET(backupRestoreInfo_, CreateInstanceRequest::BackupRestoreInfo) };
    inline CreateInstanceRequest& setBackupRestoreInfo(const CreateInstanceRequest::BackupRestoreInfo & backupRestoreInfo) { DARABONBA_PTR_SET_VALUE(backupRestoreInfo_, backupRestoreInfo) };
    inline CreateInstanceRequest& setBackupRestoreInfo(CreateInstanceRequest::BackupRestoreInfo && backupRestoreInfo) { DARABONBA_PTR_SET_RVALUE(backupRestoreInfo_, backupRestoreInfo) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateInstanceRequest::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateInstanceRequest::Components>) };
    inline vector<CreateInstanceRequest::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<CreateInstanceRequest::Components>) };
    inline CreateInstanceRequest& setComponents(const vector<CreateInstanceRequest::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateInstanceRequest& setComponents(vector<CreateInstanceRequest::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline CreateInstanceRequest& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // dbAdminPassword Field Functions 
    bool hasDbAdminPassword() const { return this->dbAdminPassword_ != nullptr;};
    void deleteDbAdminPassword() { this->dbAdminPassword_ = nullptr;};
    inline string getDbAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(dbAdminPassword_, "") };
    inline CreateInstanceRequest& setDbAdminPassword(string dbAdminPassword) { DARABONBA_PTR_SET_VALUE(dbAdminPassword_, dbAdminPassword) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline CreateInstanceRequest& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateInstanceRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline CreateInstanceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isMultiAzStorage Field Functions 
    bool hasIsMultiAzStorage() const { return this->isMultiAzStorage_ != nullptr;};
    void deleteIsMultiAzStorage() { this->isMultiAzStorage_ = nullptr;};
    inline bool getIsMultiAzStorage() const { DARABONBA_PTR_GET_DEFAULT(isMultiAzStorage_, false) };
    inline CreateInstanceRequest& setIsMultiAzStorage(bool isMultiAzStorage) { DARABONBA_PTR_SET_VALUE(isMultiAzStorage_, isMultiAzStorage) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateInstanceRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // loadReplicas Field Functions 
    bool hasLoadReplicas() const { return this->loadReplicas_ != nullptr;};
    void deleteLoadReplicas() { this->loadReplicas_ = nullptr;};
    inline int32_t getLoadReplicas() const { DARABONBA_PTR_GET_DEFAULT(loadReplicas_, 0) };
    inline CreateInstanceRequest& setLoadReplicas(int32_t loadReplicas) { DARABONBA_PTR_SET_VALUE(loadReplicas_, loadReplicas) };


    // multiZoneMode Field Functions 
    bool hasMultiZoneMode() const { return this->multiZoneMode_ != nullptr;};
    void deleteMultiZoneMode() { this->multiZoneMode_ = nullptr;};
    inline string getMultiZoneMode() const { DARABONBA_PTR_GET_DEFAULT(multiZoneMode_, "") };
    inline CreateInstanceRequest& setMultiZoneMode(string multiZoneMode) { DARABONBA_PTR_SET_VALUE(multiZoneMode_, multiZoneMode) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t getPaymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline CreateInstanceRequest& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateInstanceRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string getPromotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline CreateInstanceRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequest::Tags>) };
    inline vector<CreateInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequest::Tags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<CreateInstanceRequest::VSwitchIds> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<CreateInstanceRequest::VSwitchIds>) };
    inline vector<CreateInstanceRequest::VSwitchIds> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<CreateInstanceRequest::VSwitchIds>) };
    inline CreateInstanceRequest& setVSwitchIds(const vector<CreateInstanceRequest::VSwitchIds> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateInstanceRequest& setVSwitchIds(vector<CreateInstanceRequest::VSwitchIds> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


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


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> aiFunction_ {};
    shared_ptr<bool> autoBackup_ {};
    shared_ptr<bool> autoPay_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<CreateInstanceRequest::BackupRestoreInfo> backupRestoreInfo_ {};
    shared_ptr<vector<CreateInstanceRequest::Components>> components_ {};
    shared_ptr<string> configuration_ {};
    shared_ptr<string> dbAdminPassword_ {};
    // This parameter is required.
    shared_ptr<string> dbVersion_ {};
    shared_ptr<bool> encrypted_ {};
    shared_ptr<bool> ha_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<bool> isMultiAzStorage_ {};
    shared_ptr<string> kmsKeyId_ {};
    shared_ptr<int32_t> loadReplicas_ {};
    shared_ptr<string> multiZoneMode_ {};
    shared_ptr<int32_t> paymentDuration_ {};
    shared_ptr<string> paymentDurationUnit_ {};
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> promotionNo_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<CreateInstanceRequest::Tags>> tags_ {};
    shared_ptr<vector<CreateInstanceRequest::VSwitchIds>> vSwitchIds_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
