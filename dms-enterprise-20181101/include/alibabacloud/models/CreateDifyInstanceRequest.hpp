// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIFYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIFYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDifyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDifyInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdbpgInstanceMode, adbpgInstanceMode_);
      DARABONBA_PTR_TO_JSON(BackupVSwitchId, backupVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DatabaseOption, databaseOption_);
      DARABONBA_PTR_TO_JSON(DbEngineType, dbEngineType_);
      DARABONBA_PTR_TO_JSON(DbEngineVersion, dbEngineVersion_);
      DARABONBA_PTR_TO_JSON(DbInstanceAccount, dbInstanceAccount_);
      DARABONBA_PTR_TO_JSON(DbInstanceCategory, dbInstanceCategory_);
      DARABONBA_PTR_TO_JSON(DbInstanceClass, dbInstanceClass_);
      DARABONBA_PTR_TO_JSON(DbInstancePassword, dbInstancePassword_);
      DARABONBA_PTR_TO_JSON(DbResourceId, dbResourceId_);
      DARABONBA_PTR_TO_JSON(DbStorageSize, dbStorageSize_);
      DARABONBA_PTR_TO_JSON(DbStorageType, dbStorageType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EnableExtraEndpoint, enableExtraEndpoint_);
      DARABONBA_PTR_TO_JSON(GpuNodeSpec, gpuNodeSpec_);
      DARABONBA_PTR_TO_JSON(KvStoreAccount, kvStoreAccount_);
      DARABONBA_PTR_TO_JSON(KvStoreEngineVersion, kvStoreEngineVersion_);
      DARABONBA_PTR_TO_JSON(KvStoreInstanceClass, kvStoreInstanceClass_);
      DARABONBA_PTR_TO_JSON(KvStoreNodeType, kvStoreNodeType_);
      DARABONBA_PTR_TO_JSON(KvStoreOption, kvStoreOption_);
      DARABONBA_PTR_TO_JSON(KvStorePassword, kvStorePassword_);
      DARABONBA_PTR_TO_JSON(KvStoreResourceId, kvStoreResourceId_);
      DARABONBA_PTR_TO_JSON(KvStoreType, kvStoreType_);
      DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelOption, modelOption_);
      DARABONBA_PTR_TO_JSON(NatGatewayOption, natGatewayOption_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(OssResourceId, ossResourceId_);
      DARABONBA_PTR_TO_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_TO_JSON(PayPeriodType, payPeriodType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ResourceQuota, resourceQuota_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VectordbAccount, vectordbAccount_);
      DARABONBA_PTR_TO_JSON(VectordbCategory, vectordbCategory_);
      DARABONBA_PTR_TO_JSON(VectordbEngineVersion, vectordbEngineVersion_);
      DARABONBA_PTR_TO_JSON(VectordbInstanceSpec, vectordbInstanceSpec_);
      DARABONBA_PTR_TO_JSON(VectordbOption, vectordbOption_);
      DARABONBA_PTR_TO_JSON(VectordbPassword, vectordbPassword_);
      DARABONBA_PTR_TO_JSON(VectordbResourceId, vectordbResourceId_);
      DARABONBA_PTR_TO_JSON(VectordbStorageSize, vectordbStorageSize_);
      DARABONBA_PTR_TO_JSON(VectordbStorageType, vectordbStorageType_);
      DARABONBA_PTR_TO_JSON(VectordbType, vectordbType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceDescription, workspaceDescription_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(WorkspaceOption, workspaceOption_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDifyInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdbpgInstanceMode, adbpgInstanceMode_);
      DARABONBA_PTR_FROM_JSON(BackupVSwitchId, backupVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DatabaseOption, databaseOption_);
      DARABONBA_PTR_FROM_JSON(DbEngineType, dbEngineType_);
      DARABONBA_PTR_FROM_JSON(DbEngineVersion, dbEngineVersion_);
      DARABONBA_PTR_FROM_JSON(DbInstanceAccount, dbInstanceAccount_);
      DARABONBA_PTR_FROM_JSON(DbInstanceCategory, dbInstanceCategory_);
      DARABONBA_PTR_FROM_JSON(DbInstanceClass, dbInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DbInstancePassword, dbInstancePassword_);
      DARABONBA_PTR_FROM_JSON(DbResourceId, dbResourceId_);
      DARABONBA_PTR_FROM_JSON(DbStorageSize, dbStorageSize_);
      DARABONBA_PTR_FROM_JSON(DbStorageType, dbStorageType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EnableExtraEndpoint, enableExtraEndpoint_);
      DARABONBA_PTR_FROM_JSON(GpuNodeSpec, gpuNodeSpec_);
      DARABONBA_PTR_FROM_JSON(KvStoreAccount, kvStoreAccount_);
      DARABONBA_PTR_FROM_JSON(KvStoreEngineVersion, kvStoreEngineVersion_);
      DARABONBA_PTR_FROM_JSON(KvStoreInstanceClass, kvStoreInstanceClass_);
      DARABONBA_PTR_FROM_JSON(KvStoreNodeType, kvStoreNodeType_);
      DARABONBA_PTR_FROM_JSON(KvStoreOption, kvStoreOption_);
      DARABONBA_PTR_FROM_JSON(KvStorePassword, kvStorePassword_);
      DARABONBA_PTR_FROM_JSON(KvStoreResourceId, kvStoreResourceId_);
      DARABONBA_PTR_FROM_JSON(KvStoreType, kvStoreType_);
      DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelOption, modelOption_);
      DARABONBA_PTR_FROM_JSON(NatGatewayOption, natGatewayOption_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(OssResourceId, ossResourceId_);
      DARABONBA_PTR_FROM_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_FROM_JSON(PayPeriodType, payPeriodType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ResourceQuota, resourceQuota_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SegDiskPerformanceLevel, segDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SegNodeNum, segNodeNum_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VectordbAccount, vectordbAccount_);
      DARABONBA_PTR_FROM_JSON(VectordbCategory, vectordbCategory_);
      DARABONBA_PTR_FROM_JSON(VectordbEngineVersion, vectordbEngineVersion_);
      DARABONBA_PTR_FROM_JSON(VectordbInstanceSpec, vectordbInstanceSpec_);
      DARABONBA_PTR_FROM_JSON(VectordbOption, vectordbOption_);
      DARABONBA_PTR_FROM_JSON(VectordbPassword, vectordbPassword_);
      DARABONBA_PTR_FROM_JSON(VectordbResourceId, vectordbResourceId_);
      DARABONBA_PTR_FROM_JSON(VectordbStorageSize, vectordbStorageSize_);
      DARABONBA_PTR_FROM_JSON(VectordbStorageType, vectordbStorageType_);
      DARABONBA_PTR_FROM_JSON(VectordbType, vectordbType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceDescription, workspaceDescription_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceOption, workspaceOption_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDifyInstanceRequest() = default ;
    CreateDifyInstanceRequest(const CreateDifyInstanceRequest &) = default ;
    CreateDifyInstanceRequest(CreateDifyInstanceRequest &&) = default ;
    CreateDifyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDifyInstanceRequest() = default ;
    CreateDifyInstanceRequest& operator=(const CreateDifyInstanceRequest &) = default ;
    CreateDifyInstanceRequest& operator=(CreateDifyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adbpgInstanceMode_ == nullptr
        && return this->backupVSwitchId_ == nullptr && return this->clientToken_ == nullptr && return this->dataRegion_ == nullptr && return this->databaseOption_ == nullptr && return this->dbEngineType_ == nullptr
        && return this->dbEngineVersion_ == nullptr && return this->dbInstanceAccount_ == nullptr && return this->dbInstanceCategory_ == nullptr && return this->dbInstanceClass_ == nullptr && return this->dbInstancePassword_ == nullptr
        && return this->dbResourceId_ == nullptr && return this->dbStorageSize_ == nullptr && return this->dbStorageType_ == nullptr && return this->dryRun_ == nullptr && return this->edition_ == nullptr
        && return this->enableExtraEndpoint_ == nullptr && return this->gpuNodeSpec_ == nullptr && return this->kvStoreAccount_ == nullptr && return this->kvStoreEngineVersion_ == nullptr && return this->kvStoreInstanceClass_ == nullptr
        && return this->kvStoreNodeType_ == nullptr && return this->kvStoreOption_ == nullptr && return this->kvStorePassword_ == nullptr && return this->kvStoreResourceId_ == nullptr && return this->kvStoreType_ == nullptr
        && return this->majorVersion_ == nullptr && return this->modelId_ == nullptr && return this->modelOption_ == nullptr && return this->natGatewayOption_ == nullptr && return this->ossPath_ == nullptr
        && return this->ossResourceId_ == nullptr && return this->payPeriod_ == nullptr && return this->payPeriodType_ == nullptr && return this->payType_ == nullptr && return this->replicas_ == nullptr
        && return this->resourceQuota_ == nullptr && return this->securityGroupId_ == nullptr && return this->segDiskPerformanceLevel_ == nullptr && return this->segNodeNum_ == nullptr && return this->storageType_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vectordbAccount_ == nullptr && return this->vectordbCategory_ == nullptr && return this->vectordbEngineVersion_ == nullptr && return this->vectordbInstanceSpec_ == nullptr
        && return this->vectordbOption_ == nullptr && return this->vectordbPassword_ == nullptr && return this->vectordbResourceId_ == nullptr && return this->vectordbStorageSize_ == nullptr && return this->vectordbStorageType_ == nullptr
        && return this->vectordbType_ == nullptr && return this->vpcId_ == nullptr && return this->workspaceDescription_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr
        && return this->workspaceOption_ == nullptr && return this->zoneId_ == nullptr; };
    // adbpgInstanceMode Field Functions 
    bool hasAdbpgInstanceMode() const { return this->adbpgInstanceMode_ != nullptr;};
    void deleteAdbpgInstanceMode() { this->adbpgInstanceMode_ = nullptr;};
    inline string adbpgInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(adbpgInstanceMode_, "") };
    inline CreateDifyInstanceRequest& setAdbpgInstanceMode(string adbpgInstanceMode) { DARABONBA_PTR_SET_VALUE(adbpgInstanceMode_, adbpgInstanceMode) };


    // backupVSwitchId Field Functions 
    bool hasBackupVSwitchId() const { return this->backupVSwitchId_ != nullptr;};
    void deleteBackupVSwitchId() { this->backupVSwitchId_ = nullptr;};
    inline string backupVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(backupVSwitchId_, "") };
    inline CreateDifyInstanceRequest& setBackupVSwitchId(string backupVSwitchId) { DARABONBA_PTR_SET_VALUE(backupVSwitchId_, backupVSwitchId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDifyInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline CreateDifyInstanceRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // databaseOption Field Functions 
    bool hasDatabaseOption() const { return this->databaseOption_ != nullptr;};
    void deleteDatabaseOption() { this->databaseOption_ = nullptr;};
    inline string databaseOption() const { DARABONBA_PTR_GET_DEFAULT(databaseOption_, "") };
    inline CreateDifyInstanceRequest& setDatabaseOption(string databaseOption) { DARABONBA_PTR_SET_VALUE(databaseOption_, databaseOption) };


    // dbEngineType Field Functions 
    bool hasDbEngineType() const { return this->dbEngineType_ != nullptr;};
    void deleteDbEngineType() { this->dbEngineType_ = nullptr;};
    inline string dbEngineType() const { DARABONBA_PTR_GET_DEFAULT(dbEngineType_, "") };
    inline CreateDifyInstanceRequest& setDbEngineType(string dbEngineType) { DARABONBA_PTR_SET_VALUE(dbEngineType_, dbEngineType) };


    // dbEngineVersion Field Functions 
    bool hasDbEngineVersion() const { return this->dbEngineVersion_ != nullptr;};
    void deleteDbEngineVersion() { this->dbEngineVersion_ = nullptr;};
    inline string dbEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(dbEngineVersion_, "") };
    inline CreateDifyInstanceRequest& setDbEngineVersion(string dbEngineVersion) { DARABONBA_PTR_SET_VALUE(dbEngineVersion_, dbEngineVersion) };


    // dbInstanceAccount Field Functions 
    bool hasDbInstanceAccount() const { return this->dbInstanceAccount_ != nullptr;};
    void deleteDbInstanceAccount() { this->dbInstanceAccount_ = nullptr;};
    inline string dbInstanceAccount() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceAccount_, "") };
    inline CreateDifyInstanceRequest& setDbInstanceAccount(string dbInstanceAccount) { DARABONBA_PTR_SET_VALUE(dbInstanceAccount_, dbInstanceAccount) };


    // dbInstanceCategory Field Functions 
    bool hasDbInstanceCategory() const { return this->dbInstanceCategory_ != nullptr;};
    void deleteDbInstanceCategory() { this->dbInstanceCategory_ = nullptr;};
    inline string dbInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceCategory_, "") };
    inline CreateDifyInstanceRequest& setDbInstanceCategory(string dbInstanceCategory) { DARABONBA_PTR_SET_VALUE(dbInstanceCategory_, dbInstanceCategory) };


    // dbInstanceClass Field Functions 
    bool hasDbInstanceClass() const { return this->dbInstanceClass_ != nullptr;};
    void deleteDbInstanceClass() { this->dbInstanceClass_ = nullptr;};
    inline string dbInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceClass_, "") };
    inline CreateDifyInstanceRequest& setDbInstanceClass(string dbInstanceClass) { DARABONBA_PTR_SET_VALUE(dbInstanceClass_, dbInstanceClass) };


    // dbInstancePassword Field Functions 
    bool hasDbInstancePassword() const { return this->dbInstancePassword_ != nullptr;};
    void deleteDbInstancePassword() { this->dbInstancePassword_ = nullptr;};
    inline string dbInstancePassword() const { DARABONBA_PTR_GET_DEFAULT(dbInstancePassword_, "") };
    inline CreateDifyInstanceRequest& setDbInstancePassword(string dbInstancePassword) { DARABONBA_PTR_SET_VALUE(dbInstancePassword_, dbInstancePassword) };


    // dbResourceId Field Functions 
    bool hasDbResourceId() const { return this->dbResourceId_ != nullptr;};
    void deleteDbResourceId() { this->dbResourceId_ = nullptr;};
    inline int32_t dbResourceId() const { DARABONBA_PTR_GET_DEFAULT(dbResourceId_, 0) };
    inline CreateDifyInstanceRequest& setDbResourceId(int32_t dbResourceId) { DARABONBA_PTR_SET_VALUE(dbResourceId_, dbResourceId) };


    // dbStorageSize Field Functions 
    bool hasDbStorageSize() const { return this->dbStorageSize_ != nullptr;};
    void deleteDbStorageSize() { this->dbStorageSize_ = nullptr;};
    inline string dbStorageSize() const { DARABONBA_PTR_GET_DEFAULT(dbStorageSize_, "") };
    inline CreateDifyInstanceRequest& setDbStorageSize(string dbStorageSize) { DARABONBA_PTR_SET_VALUE(dbStorageSize_, dbStorageSize) };


    // dbStorageType Field Functions 
    bool hasDbStorageType() const { return this->dbStorageType_ != nullptr;};
    void deleteDbStorageType() { this->dbStorageType_ = nullptr;};
    inline string dbStorageType() const { DARABONBA_PTR_GET_DEFAULT(dbStorageType_, "") };
    inline CreateDifyInstanceRequest& setDbStorageType(string dbStorageType) { DARABONBA_PTR_SET_VALUE(dbStorageType_, dbStorageType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDifyInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateDifyInstanceRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enableExtraEndpoint Field Functions 
    bool hasEnableExtraEndpoint() const { return this->enableExtraEndpoint_ != nullptr;};
    void deleteEnableExtraEndpoint() { this->enableExtraEndpoint_ = nullptr;};
    inline bool enableExtraEndpoint() const { DARABONBA_PTR_GET_DEFAULT(enableExtraEndpoint_, false) };
    inline CreateDifyInstanceRequest& setEnableExtraEndpoint(bool enableExtraEndpoint) { DARABONBA_PTR_SET_VALUE(enableExtraEndpoint_, enableExtraEndpoint) };


    // gpuNodeSpec Field Functions 
    bool hasGpuNodeSpec() const { return this->gpuNodeSpec_ != nullptr;};
    void deleteGpuNodeSpec() { this->gpuNodeSpec_ = nullptr;};
    inline string gpuNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuNodeSpec_, "") };
    inline CreateDifyInstanceRequest& setGpuNodeSpec(string gpuNodeSpec) { DARABONBA_PTR_SET_VALUE(gpuNodeSpec_, gpuNodeSpec) };


    // kvStoreAccount Field Functions 
    bool hasKvStoreAccount() const { return this->kvStoreAccount_ != nullptr;};
    void deleteKvStoreAccount() { this->kvStoreAccount_ = nullptr;};
    inline string kvStoreAccount() const { DARABONBA_PTR_GET_DEFAULT(kvStoreAccount_, "") };
    inline CreateDifyInstanceRequest& setKvStoreAccount(string kvStoreAccount) { DARABONBA_PTR_SET_VALUE(kvStoreAccount_, kvStoreAccount) };


    // kvStoreEngineVersion Field Functions 
    bool hasKvStoreEngineVersion() const { return this->kvStoreEngineVersion_ != nullptr;};
    void deleteKvStoreEngineVersion() { this->kvStoreEngineVersion_ = nullptr;};
    inline string kvStoreEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(kvStoreEngineVersion_, "") };
    inline CreateDifyInstanceRequest& setKvStoreEngineVersion(string kvStoreEngineVersion) { DARABONBA_PTR_SET_VALUE(kvStoreEngineVersion_, kvStoreEngineVersion) };


    // kvStoreInstanceClass Field Functions 
    bool hasKvStoreInstanceClass() const { return this->kvStoreInstanceClass_ != nullptr;};
    void deleteKvStoreInstanceClass() { this->kvStoreInstanceClass_ = nullptr;};
    inline string kvStoreInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(kvStoreInstanceClass_, "") };
    inline CreateDifyInstanceRequest& setKvStoreInstanceClass(string kvStoreInstanceClass) { DARABONBA_PTR_SET_VALUE(kvStoreInstanceClass_, kvStoreInstanceClass) };


    // kvStoreNodeType Field Functions 
    bool hasKvStoreNodeType() const { return this->kvStoreNodeType_ != nullptr;};
    void deleteKvStoreNodeType() { this->kvStoreNodeType_ = nullptr;};
    inline string kvStoreNodeType() const { DARABONBA_PTR_GET_DEFAULT(kvStoreNodeType_, "") };
    inline CreateDifyInstanceRequest& setKvStoreNodeType(string kvStoreNodeType) { DARABONBA_PTR_SET_VALUE(kvStoreNodeType_, kvStoreNodeType) };


    // kvStoreOption Field Functions 
    bool hasKvStoreOption() const { return this->kvStoreOption_ != nullptr;};
    void deleteKvStoreOption() { this->kvStoreOption_ = nullptr;};
    inline string kvStoreOption() const { DARABONBA_PTR_GET_DEFAULT(kvStoreOption_, "") };
    inline CreateDifyInstanceRequest& setKvStoreOption(string kvStoreOption) { DARABONBA_PTR_SET_VALUE(kvStoreOption_, kvStoreOption) };


    // kvStorePassword Field Functions 
    bool hasKvStorePassword() const { return this->kvStorePassword_ != nullptr;};
    void deleteKvStorePassword() { this->kvStorePassword_ = nullptr;};
    inline string kvStorePassword() const { DARABONBA_PTR_GET_DEFAULT(kvStorePassword_, "") };
    inline CreateDifyInstanceRequest& setKvStorePassword(string kvStorePassword) { DARABONBA_PTR_SET_VALUE(kvStorePassword_, kvStorePassword) };


    // kvStoreResourceId Field Functions 
    bool hasKvStoreResourceId() const { return this->kvStoreResourceId_ != nullptr;};
    void deleteKvStoreResourceId() { this->kvStoreResourceId_ = nullptr;};
    inline int32_t kvStoreResourceId() const { DARABONBA_PTR_GET_DEFAULT(kvStoreResourceId_, 0) };
    inline CreateDifyInstanceRequest& setKvStoreResourceId(int32_t kvStoreResourceId) { DARABONBA_PTR_SET_VALUE(kvStoreResourceId_, kvStoreResourceId) };


    // kvStoreType Field Functions 
    bool hasKvStoreType() const { return this->kvStoreType_ != nullptr;};
    void deleteKvStoreType() { this->kvStoreType_ = nullptr;};
    inline string kvStoreType() const { DARABONBA_PTR_GET_DEFAULT(kvStoreType_, "") };
    inline CreateDifyInstanceRequest& setKvStoreType(string kvStoreType) { DARABONBA_PTR_SET_VALUE(kvStoreType_, kvStoreType) };


    // majorVersion Field Functions 
    bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
    void deleteMajorVersion() { this->majorVersion_ = nullptr;};
    inline string majorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
    inline CreateDifyInstanceRequest& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateDifyInstanceRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelOption Field Functions 
    bool hasModelOption() const { return this->modelOption_ != nullptr;};
    void deleteModelOption() { this->modelOption_ = nullptr;};
    inline string modelOption() const { DARABONBA_PTR_GET_DEFAULT(modelOption_, "") };
    inline CreateDifyInstanceRequest& setModelOption(string modelOption) { DARABONBA_PTR_SET_VALUE(modelOption_, modelOption) };


    // natGatewayOption Field Functions 
    bool hasNatGatewayOption() const { return this->natGatewayOption_ != nullptr;};
    void deleteNatGatewayOption() { this->natGatewayOption_ = nullptr;};
    inline string natGatewayOption() const { DARABONBA_PTR_GET_DEFAULT(natGatewayOption_, "") };
    inline CreateDifyInstanceRequest& setNatGatewayOption(string natGatewayOption) { DARABONBA_PTR_SET_VALUE(natGatewayOption_, natGatewayOption) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline CreateDifyInstanceRequest& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // ossResourceId Field Functions 
    bool hasOssResourceId() const { return this->ossResourceId_ != nullptr;};
    void deleteOssResourceId() { this->ossResourceId_ = nullptr;};
    inline int32_t ossResourceId() const { DARABONBA_PTR_GET_DEFAULT(ossResourceId_, 0) };
    inline CreateDifyInstanceRequest& setOssResourceId(int32_t ossResourceId) { DARABONBA_PTR_SET_VALUE(ossResourceId_, ossResourceId) };


    // payPeriod Field Functions 
    bool hasPayPeriod() const { return this->payPeriod_ != nullptr;};
    void deletePayPeriod() { this->payPeriod_ = nullptr;};
    inline int32_t payPeriod() const { DARABONBA_PTR_GET_DEFAULT(payPeriod_, 0) };
    inline CreateDifyInstanceRequest& setPayPeriod(int32_t payPeriod) { DARABONBA_PTR_SET_VALUE(payPeriod_, payPeriod) };


    // payPeriodType Field Functions 
    bool hasPayPeriodType() const { return this->payPeriodType_ != nullptr;};
    void deletePayPeriodType() { this->payPeriodType_ = nullptr;};
    inline string payPeriodType() const { DARABONBA_PTR_GET_DEFAULT(payPeriodType_, "") };
    inline CreateDifyInstanceRequest& setPayPeriodType(string payPeriodType) { DARABONBA_PTR_SET_VALUE(payPeriodType_, payPeriodType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDifyInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateDifyInstanceRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceQuota Field Functions 
    bool hasResourceQuota() const { return this->resourceQuota_ != nullptr;};
    void deleteResourceQuota() { this->resourceQuota_ = nullptr;};
    inline string resourceQuota() const { DARABONBA_PTR_GET_DEFAULT(resourceQuota_, "") };
    inline CreateDifyInstanceRequest& setResourceQuota(string resourceQuota) { DARABONBA_PTR_SET_VALUE(resourceQuota_, resourceQuota) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateDifyInstanceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // segDiskPerformanceLevel Field Functions 
    bool hasSegDiskPerformanceLevel() const { return this->segDiskPerformanceLevel_ != nullptr;};
    void deleteSegDiskPerformanceLevel() { this->segDiskPerformanceLevel_ = nullptr;};
    inline string segDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(segDiskPerformanceLevel_, "") };
    inline CreateDifyInstanceRequest& setSegDiskPerformanceLevel(string segDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(segDiskPerformanceLevel_, segDiskPerformanceLevel) };


    // segNodeNum Field Functions 
    bool hasSegNodeNum() const { return this->segNodeNum_ != nullptr;};
    void deleteSegNodeNum() { this->segNodeNum_ = nullptr;};
    inline int32_t segNodeNum() const { DARABONBA_PTR_GET_DEFAULT(segNodeNum_, 0) };
    inline CreateDifyInstanceRequest& setSegNodeNum(int32_t segNodeNum) { DARABONBA_PTR_SET_VALUE(segNodeNum_, segNodeNum) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDifyInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDifyInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vectordbAccount Field Functions 
    bool hasVectordbAccount() const { return this->vectordbAccount_ != nullptr;};
    void deleteVectordbAccount() { this->vectordbAccount_ = nullptr;};
    inline string vectordbAccount() const { DARABONBA_PTR_GET_DEFAULT(vectordbAccount_, "") };
    inline CreateDifyInstanceRequest& setVectordbAccount(string vectordbAccount) { DARABONBA_PTR_SET_VALUE(vectordbAccount_, vectordbAccount) };


    // vectordbCategory Field Functions 
    bool hasVectordbCategory() const { return this->vectordbCategory_ != nullptr;};
    void deleteVectordbCategory() { this->vectordbCategory_ = nullptr;};
    inline string vectordbCategory() const { DARABONBA_PTR_GET_DEFAULT(vectordbCategory_, "") };
    inline CreateDifyInstanceRequest& setVectordbCategory(string vectordbCategory) { DARABONBA_PTR_SET_VALUE(vectordbCategory_, vectordbCategory) };


    // vectordbEngineVersion Field Functions 
    bool hasVectordbEngineVersion() const { return this->vectordbEngineVersion_ != nullptr;};
    void deleteVectordbEngineVersion() { this->vectordbEngineVersion_ = nullptr;};
    inline string vectordbEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(vectordbEngineVersion_, "") };
    inline CreateDifyInstanceRequest& setVectordbEngineVersion(string vectordbEngineVersion) { DARABONBA_PTR_SET_VALUE(vectordbEngineVersion_, vectordbEngineVersion) };


    // vectordbInstanceSpec Field Functions 
    bool hasVectordbInstanceSpec() const { return this->vectordbInstanceSpec_ != nullptr;};
    void deleteVectordbInstanceSpec() { this->vectordbInstanceSpec_ = nullptr;};
    inline string vectordbInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(vectordbInstanceSpec_, "") };
    inline CreateDifyInstanceRequest& setVectordbInstanceSpec(string vectordbInstanceSpec) { DARABONBA_PTR_SET_VALUE(vectordbInstanceSpec_, vectordbInstanceSpec) };


    // vectordbOption Field Functions 
    bool hasVectordbOption() const { return this->vectordbOption_ != nullptr;};
    void deleteVectordbOption() { this->vectordbOption_ = nullptr;};
    inline string vectordbOption() const { DARABONBA_PTR_GET_DEFAULT(vectordbOption_, "") };
    inline CreateDifyInstanceRequest& setVectordbOption(string vectordbOption) { DARABONBA_PTR_SET_VALUE(vectordbOption_, vectordbOption) };


    // vectordbPassword Field Functions 
    bool hasVectordbPassword() const { return this->vectordbPassword_ != nullptr;};
    void deleteVectordbPassword() { this->vectordbPassword_ = nullptr;};
    inline string vectordbPassword() const { DARABONBA_PTR_GET_DEFAULT(vectordbPassword_, "") };
    inline CreateDifyInstanceRequest& setVectordbPassword(string vectordbPassword) { DARABONBA_PTR_SET_VALUE(vectordbPassword_, vectordbPassword) };


    // vectordbResourceId Field Functions 
    bool hasVectordbResourceId() const { return this->vectordbResourceId_ != nullptr;};
    void deleteVectordbResourceId() { this->vectordbResourceId_ = nullptr;};
    inline int32_t vectordbResourceId() const { DARABONBA_PTR_GET_DEFAULT(vectordbResourceId_, 0) };
    inline CreateDifyInstanceRequest& setVectordbResourceId(int32_t vectordbResourceId) { DARABONBA_PTR_SET_VALUE(vectordbResourceId_, vectordbResourceId) };


    // vectordbStorageSize Field Functions 
    bool hasVectordbStorageSize() const { return this->vectordbStorageSize_ != nullptr;};
    void deleteVectordbStorageSize() { this->vectordbStorageSize_ = nullptr;};
    inline string vectordbStorageSize() const { DARABONBA_PTR_GET_DEFAULT(vectordbStorageSize_, "") };
    inline CreateDifyInstanceRequest& setVectordbStorageSize(string vectordbStorageSize) { DARABONBA_PTR_SET_VALUE(vectordbStorageSize_, vectordbStorageSize) };


    // vectordbStorageType Field Functions 
    bool hasVectordbStorageType() const { return this->vectordbStorageType_ != nullptr;};
    void deleteVectordbStorageType() { this->vectordbStorageType_ = nullptr;};
    inline string vectordbStorageType() const { DARABONBA_PTR_GET_DEFAULT(vectordbStorageType_, "") };
    inline CreateDifyInstanceRequest& setVectordbStorageType(string vectordbStorageType) { DARABONBA_PTR_SET_VALUE(vectordbStorageType_, vectordbStorageType) };


    // vectordbType Field Functions 
    bool hasVectordbType() const { return this->vectordbType_ != nullptr;};
    void deleteVectordbType() { this->vectordbType_ = nullptr;};
    inline string vectordbType() const { DARABONBA_PTR_GET_DEFAULT(vectordbType_, "") };
    inline CreateDifyInstanceRequest& setVectordbType(string vectordbType) { DARABONBA_PTR_SET_VALUE(vectordbType_, vectordbType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDifyInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workspaceDescription Field Functions 
    bool hasWorkspaceDescription() const { return this->workspaceDescription_ != nullptr;};
    void deleteWorkspaceDescription() { this->workspaceDescription_ = nullptr;};
    inline string workspaceDescription() const { DARABONBA_PTR_GET_DEFAULT(workspaceDescription_, "") };
    inline CreateDifyInstanceRequest& setWorkspaceDescription(string workspaceDescription) { DARABONBA_PTR_SET_VALUE(workspaceDescription_, workspaceDescription) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDifyInstanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateDifyInstanceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceOption Field Functions 
    bool hasWorkspaceOption() const { return this->workspaceOption_ != nullptr;};
    void deleteWorkspaceOption() { this->workspaceOption_ = nullptr;};
    inline string workspaceOption() const { DARABONBA_PTR_GET_DEFAULT(workspaceOption_, "") };
    inline CreateDifyInstanceRequest& setWorkspaceOption(string workspaceOption) { DARABONBA_PTR_SET_VALUE(workspaceOption_, workspaceOption) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDifyInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> adbpgInstanceMode_ = nullptr;
    std::shared_ptr<string> backupVSwitchId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataRegion_ = nullptr;
    std::shared_ptr<string> databaseOption_ = nullptr;
    std::shared_ptr<string> dbEngineType_ = nullptr;
    std::shared_ptr<string> dbEngineVersion_ = nullptr;
    std::shared_ptr<string> dbInstanceAccount_ = nullptr;
    std::shared_ptr<string> dbInstanceCategory_ = nullptr;
    std::shared_ptr<string> dbInstanceClass_ = nullptr;
    std::shared_ptr<string> dbInstancePassword_ = nullptr;
    std::shared_ptr<int32_t> dbResourceId_ = nullptr;
    std::shared_ptr<string> dbStorageSize_ = nullptr;
    std::shared_ptr<string> dbStorageType_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    std::shared_ptr<bool> enableExtraEndpoint_ = nullptr;
    std::shared_ptr<string> gpuNodeSpec_ = nullptr;
    std::shared_ptr<string> kvStoreAccount_ = nullptr;
    std::shared_ptr<string> kvStoreEngineVersion_ = nullptr;
    std::shared_ptr<string> kvStoreInstanceClass_ = nullptr;
    std::shared_ptr<string> kvStoreNodeType_ = nullptr;
    std::shared_ptr<string> kvStoreOption_ = nullptr;
    std::shared_ptr<string> kvStorePassword_ = nullptr;
    std::shared_ptr<int32_t> kvStoreResourceId_ = nullptr;
    std::shared_ptr<string> kvStoreType_ = nullptr;
    std::shared_ptr<string> majorVersion_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelOption_ = nullptr;
    std::shared_ptr<string> natGatewayOption_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<int32_t> ossResourceId_ = nullptr;
    std::shared_ptr<int32_t> payPeriod_ = nullptr;
    std::shared_ptr<string> payPeriodType_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceQuota_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> segDiskPerformanceLevel_ = nullptr;
    std::shared_ptr<int32_t> segNodeNum_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vectordbAccount_ = nullptr;
    std::shared_ptr<string> vectordbCategory_ = nullptr;
    std::shared_ptr<string> vectordbEngineVersion_ = nullptr;
    std::shared_ptr<string> vectordbInstanceSpec_ = nullptr;
    std::shared_ptr<string> vectordbOption_ = nullptr;
    std::shared_ptr<string> vectordbPassword_ = nullptr;
    std::shared_ptr<int32_t> vectordbResourceId_ = nullptr;
    std::shared_ptr<string> vectordbStorageSize_ = nullptr;
    std::shared_ptr<string> vectordbStorageType_ = nullptr;
    std::shared_ptr<string> vectordbType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> workspaceDescription_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
    std::shared_ptr<string> workspaceOption_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
