// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsSlsADBJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsSlsADBJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DirtyDataHandleMode, dirtyDataHandleMode_);
      DARABONBA_PTR_TO_JSON(DirtyDataProcessPattern, dirtyDataProcessPattern_);
      DARABONBA_PTR_TO_JSON(ExactlyOnce, exactlyOnce_);
      DARABONBA_PTR_TO_JSON(FullComputeUnit, fullComputeUnit_);
      DARABONBA_PTR_TO_JSON(HudiAdvancedConfig, hudiAdvancedConfig_);
      DARABONBA_PTR_TO_JSON(IncrementalComputeUnit, incrementalComputeUnit_);
      DARABONBA_PTR_TO_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_TO_JSON(MaxOffsetsPerTrigger, maxOffsetsPerTrigger_);
      DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(PartitionSpecs, partitionSpecsShrink_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyDefinition, primaryKeyDefinition_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(StartingOffsets, startingOffsets_);
      DARABONBA_PTR_TO_JSON(Store, store_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TargetGenerateRule, targetGenerateRule_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UnixTimestampConvert, unixTimestampConvertShrink_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsSlsADBJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DirtyDataHandleMode, dirtyDataHandleMode_);
      DARABONBA_PTR_FROM_JSON(DirtyDataProcessPattern, dirtyDataProcessPattern_);
      DARABONBA_PTR_FROM_JSON(ExactlyOnce, exactlyOnce_);
      DARABONBA_PTR_FROM_JSON(FullComputeUnit, fullComputeUnit_);
      DARABONBA_PTR_FROM_JSON(HudiAdvancedConfig, hudiAdvancedConfig_);
      DARABONBA_PTR_FROM_JSON(IncrementalComputeUnit, incrementalComputeUnit_);
      DARABONBA_PTR_FROM_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_FROM_JSON(MaxOffsetsPerTrigger, maxOffsetsPerTrigger_);
      DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(PartitionSpecs, partitionSpecsShrink_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyDefinition, primaryKeyDefinition_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(StartingOffsets, startingOffsets_);
      DARABONBA_PTR_FROM_JSON(Store, store_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TargetGenerateRule, targetGenerateRule_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(UnixTimestampConvert, unixTimestampConvertShrink_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    CreateApsSlsADBJobShrinkRequest() = default ;
    CreateApsSlsADBJobShrinkRequest(const CreateApsSlsADBJobShrinkRequest &) = default ;
    CreateApsSlsADBJobShrinkRequest(CreateApsSlsADBJobShrinkRequest &&) = default ;
    CreateApsSlsADBJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsSlsADBJobShrinkRequest() = default ;
    CreateApsSlsADBJobShrinkRequest& operator=(const CreateApsSlsADBJobShrinkRequest &) = default ;
    CreateApsSlsADBJobShrinkRequest& operator=(CreateApsSlsADBJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acrossRole_ != nullptr
        && this->acrossUid_ != nullptr && this->advancedConfig_ != nullptr && this->columnsShrink_ != nullptr && this->DBClusterId_ != nullptr && this->datasourceId_ != nullptr
        && this->dbName_ != nullptr && this->dirtyDataHandleMode_ != nullptr && this->dirtyDataProcessPattern_ != nullptr && this->exactlyOnce_ != nullptr && this->fullComputeUnit_ != nullptr
        && this->hudiAdvancedConfig_ != nullptr && this->incrementalComputeUnit_ != nullptr && this->lakehouseId_ != nullptr && this->maxOffsetsPerTrigger_ != nullptr && this->ossLocation_ != nullptr
        && this->outputFormat_ != nullptr && this->partitionSpecsShrink_ != nullptr && this->password_ != nullptr && this->primaryKeyDefinition_ != nullptr && this->project_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroup_ != nullptr && this->sourceRegionId_ != nullptr && this->startingOffsets_ != nullptr && this->store_ != nullptr
        && this->tableName_ != nullptr && this->targetGenerateRule_ != nullptr && this->targetType_ != nullptr && this->unixTimestampConvertShrink_ != nullptr && this->userName_ != nullptr
        && this->workloadName_ != nullptr; };
    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string acrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string acrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string advancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string columnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsSlsADBJobShrinkRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dirtyDataHandleMode Field Functions 
    bool hasDirtyDataHandleMode() const { return this->dirtyDataHandleMode_ != nullptr;};
    void deleteDirtyDataHandleMode() { this->dirtyDataHandleMode_ = nullptr;};
    inline string dirtyDataHandleMode() const { DARABONBA_PTR_GET_DEFAULT(dirtyDataHandleMode_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setDirtyDataHandleMode(string dirtyDataHandleMode) { DARABONBA_PTR_SET_VALUE(dirtyDataHandleMode_, dirtyDataHandleMode) };


    // dirtyDataProcessPattern Field Functions 
    bool hasDirtyDataProcessPattern() const { return this->dirtyDataProcessPattern_ != nullptr;};
    void deleteDirtyDataProcessPattern() { this->dirtyDataProcessPattern_ = nullptr;};
    inline string dirtyDataProcessPattern() const { DARABONBA_PTR_GET_DEFAULT(dirtyDataProcessPattern_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setDirtyDataProcessPattern(string dirtyDataProcessPattern) { DARABONBA_PTR_SET_VALUE(dirtyDataProcessPattern_, dirtyDataProcessPattern) };


    // exactlyOnce Field Functions 
    bool hasExactlyOnce() const { return this->exactlyOnce_ != nullptr;};
    void deleteExactlyOnce() { this->exactlyOnce_ = nullptr;};
    inline string exactlyOnce() const { DARABONBA_PTR_GET_DEFAULT(exactlyOnce_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setExactlyOnce(string exactlyOnce) { DARABONBA_PTR_SET_VALUE(exactlyOnce_, exactlyOnce) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string fullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // hudiAdvancedConfig Field Functions 
    bool hasHudiAdvancedConfig() const { return this->hudiAdvancedConfig_ != nullptr;};
    void deleteHudiAdvancedConfig() { this->hudiAdvancedConfig_ = nullptr;};
    inline string hudiAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(hudiAdvancedConfig_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setHudiAdvancedConfig(string hudiAdvancedConfig) { DARABONBA_PTR_SET_VALUE(hudiAdvancedConfig_, hudiAdvancedConfig) };


    // incrementalComputeUnit Field Functions 
    bool hasIncrementalComputeUnit() const { return this->incrementalComputeUnit_ != nullptr;};
    void deleteIncrementalComputeUnit() { this->incrementalComputeUnit_ = nullptr;};
    inline string incrementalComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(incrementalComputeUnit_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setIncrementalComputeUnit(string incrementalComputeUnit) { DARABONBA_PTR_SET_VALUE(incrementalComputeUnit_, incrementalComputeUnit) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline int64_t lakehouseId() const { DARABONBA_PTR_GET_DEFAULT(lakehouseId_, 0L) };
    inline CreateApsSlsADBJobShrinkRequest& setLakehouseId(int64_t lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };


    // maxOffsetsPerTrigger Field Functions 
    bool hasMaxOffsetsPerTrigger() const { return this->maxOffsetsPerTrigger_ != nullptr;};
    void deleteMaxOffsetsPerTrigger() { this->maxOffsetsPerTrigger_ = nullptr;};
    inline int64_t maxOffsetsPerTrigger() const { DARABONBA_PTR_GET_DEFAULT(maxOffsetsPerTrigger_, 0L) };
    inline CreateApsSlsADBJobShrinkRequest& setMaxOffsetsPerTrigger(int64_t maxOffsetsPerTrigger) { DARABONBA_PTR_SET_VALUE(maxOffsetsPerTrigger_, maxOffsetsPerTrigger) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // partitionSpecsShrink Field Functions 
    bool hasPartitionSpecsShrink() const { return this->partitionSpecsShrink_ != nullptr;};
    void deletePartitionSpecsShrink() { this->partitionSpecsShrink_ = nullptr;};
    inline string partitionSpecsShrink() const { DARABONBA_PTR_GET_DEFAULT(partitionSpecsShrink_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setPartitionSpecsShrink(string partitionSpecsShrink) { DARABONBA_PTR_SET_VALUE(partitionSpecsShrink_, partitionSpecsShrink) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // primaryKeyDefinition Field Functions 
    bool hasPrimaryKeyDefinition() const { return this->primaryKeyDefinition_ != nullptr;};
    void deletePrimaryKeyDefinition() { this->primaryKeyDefinition_ = nullptr;};
    inline string primaryKeyDefinition() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyDefinition_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setPrimaryKeyDefinition(string primaryKeyDefinition) { DARABONBA_PTR_SET_VALUE(primaryKeyDefinition_, primaryKeyDefinition) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string startingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // store Field Functions 
    bool hasStore() const { return this->store_ != nullptr;};
    void deleteStore() { this->store_ = nullptr;};
    inline string store() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetGenerateRule Field Functions 
    bool hasTargetGenerateRule() const { return this->targetGenerateRule_ != nullptr;};
    void deleteTargetGenerateRule() { this->targetGenerateRule_ = nullptr;};
    inline string targetGenerateRule() const { DARABONBA_PTR_GET_DEFAULT(targetGenerateRule_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setTargetGenerateRule(string targetGenerateRule) { DARABONBA_PTR_SET_VALUE(targetGenerateRule_, targetGenerateRule) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // unixTimestampConvertShrink Field Functions 
    bool hasUnixTimestampConvertShrink() const { return this->unixTimestampConvertShrink_ != nullptr;};
    void deleteUnixTimestampConvertShrink() { this->unixTimestampConvertShrink_ = nullptr;};
    inline string unixTimestampConvertShrink() const { DARABONBA_PTR_GET_DEFAULT(unixTimestampConvertShrink_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setUnixTimestampConvertShrink(string unixTimestampConvertShrink) { DARABONBA_PTR_SET_VALUE(unixTimestampConvertShrink_, unixTimestampConvertShrink) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsSlsADBJobShrinkRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The name of the cross-account role.
    std::shared_ptr<string> acrossRole_ = nullptr;
    // The cross-account UID.
    std::shared_ptr<string> acrossUid_ = nullptr;
    // The advanced configurations.
    std::shared_ptr<string> advancedConfig_ = nullptr;
    // The information about columns.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnsShrink_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The data source ID.
    std::shared_ptr<int64_t> datasourceId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The dirty data processing mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> dirtyDataHandleMode_ = nullptr;
    // The dirty data processing mode.
    std::shared_ptr<string> dirtyDataProcessPattern_ = nullptr;
    // Specifies whether to enable the consistency check.
    std::shared_ptr<string> exactlyOnce_ = nullptr;
    // The number of full AnalyticDB compute units (ACUs).
    std::shared_ptr<string> fullComputeUnit_ = nullptr;
    // The advanced configurations of Hudi.
    std::shared_ptr<string> hudiAdvancedConfig_ = nullptr;
    // The number of increment ACUs.
    std::shared_ptr<string> incrementalComputeUnit_ = nullptr;
    // The lakehouse ID.
    std::shared_ptr<int64_t> lakehouseId_ = nullptr;
    // The latest offset.
    std::shared_ptr<int64_t> maxOffsetsPerTrigger_ = nullptr;
    // The Object Storage Service (OSS) URL.
    std::shared_ptr<string> ossLocation_ = nullptr;
    // The format of the output file.
    std::shared_ptr<string> outputFormat_ = nullptr;
    // The information about partition.
    std::shared_ptr<string> partitionSpecsShrink_ = nullptr;
    // The password of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // The definition of the primary key.
    std::shared_ptr<string> primaryKeyDefinition_ = nullptr;
    // The name of the SLS project.
    std::shared_ptr<string> project_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The region ID of the source cluster.
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    // The start offset.
    // 
    // This parameter is required.
    std::shared_ptr<string> startingOffsets_ = nullptr;
    // The SLS Logstore.
    std::shared_ptr<string> store_ = nullptr;
    // The name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The rules for generating the destination database.
    std::shared_ptr<string> targetGenerateRule_ = nullptr;
    // The destination type.
    std::shared_ptr<string> targetType_ = nullptr;
    // The timestamp conversion.
    std::shared_ptr<string> unixTimestampConvertShrink_ = nullptr;
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
    // The name of the workload.
    // 
    // This parameter is required.
    std::shared_ptr<string> workloadName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
