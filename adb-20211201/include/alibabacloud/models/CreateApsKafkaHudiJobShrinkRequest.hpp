// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsKafkaHudiJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsKafkaHudiJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DataOutputFormat, dataOutputFormat_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FullComputeUnit, fullComputeUnit_);
      DARABONBA_PTR_TO_JSON(HudiAdvancedConfig, hudiAdvancedConfig_);
      DARABONBA_PTR_TO_JSON(IncrementalComputeUnit, incrementalComputeUnit_);
      DARABONBA_PTR_TO_JSON(JsonParseLevel, jsonParseLevel_);
      DARABONBA_PTR_TO_JSON(KafkaClusterId, kafkaClusterId_);
      DARABONBA_PTR_TO_JSON(KafkaTopic, kafkaTopic_);
      DARABONBA_PTR_TO_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_TO_JSON(MaxOffsetsPerTrigger, maxOffsetsPerTrigger_);
      DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(PartitionSpecs, partitionSpecsShrink_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyDefinition, primaryKeyDefinition_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(StartingOffsets, startingOffsets_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TargetGenerateRule, targetGenerateRule_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsKafkaHudiJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DataOutputFormat, dataOutputFormat_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FullComputeUnit, fullComputeUnit_);
      DARABONBA_PTR_FROM_JSON(HudiAdvancedConfig, hudiAdvancedConfig_);
      DARABONBA_PTR_FROM_JSON(IncrementalComputeUnit, incrementalComputeUnit_);
      DARABONBA_PTR_FROM_JSON(JsonParseLevel, jsonParseLevel_);
      DARABONBA_PTR_FROM_JSON(KafkaClusterId, kafkaClusterId_);
      DARABONBA_PTR_FROM_JSON(KafkaTopic, kafkaTopic_);
      DARABONBA_PTR_FROM_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_FROM_JSON(MaxOffsetsPerTrigger, maxOffsetsPerTrigger_);
      DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(PartitionSpecs, partitionSpecsShrink_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyDefinition, primaryKeyDefinition_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(StartingOffsets, startingOffsets_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TargetGenerateRule, targetGenerateRule_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    CreateApsKafkaHudiJobShrinkRequest() = default ;
    CreateApsKafkaHudiJobShrinkRequest(const CreateApsKafkaHudiJobShrinkRequest &) = default ;
    CreateApsKafkaHudiJobShrinkRequest(CreateApsKafkaHudiJobShrinkRequest &&) = default ;
    CreateApsKafkaHudiJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsKafkaHudiJobShrinkRequest() = default ;
    CreateApsKafkaHudiJobShrinkRequest& operator=(const CreateApsKafkaHudiJobShrinkRequest &) = default ;
    CreateApsKafkaHudiJobShrinkRequest& operator=(CreateApsKafkaHudiJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acrossRole_ != nullptr
        && this->acrossUid_ != nullptr && this->advancedConfig_ != nullptr && this->columnsShrink_ != nullptr && this->DBClusterId_ != nullptr && this->dataOutputFormat_ != nullptr
        && this->datasourceId_ != nullptr && this->dbName_ != nullptr && this->fullComputeUnit_ != nullptr && this->hudiAdvancedConfig_ != nullptr && this->incrementalComputeUnit_ != nullptr
        && this->jsonParseLevel_ != nullptr && this->kafkaClusterId_ != nullptr && this->kafkaTopic_ != nullptr && this->lakehouseId_ != nullptr && this->maxOffsetsPerTrigger_ != nullptr
        && this->ossLocation_ != nullptr && this->outputFormat_ != nullptr && this->partitionSpecsShrink_ != nullptr && this->primaryKeyDefinition_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroup_ != nullptr && this->sourceRegionId_ != nullptr && this->startingOffsets_ != nullptr && this->tableName_ != nullptr && this->targetGenerateRule_ != nullptr
        && this->targetType_ != nullptr && this->workloadName_ != nullptr; };
    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string acrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string acrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string advancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string columnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataOutputFormat Field Functions 
    bool hasDataOutputFormat() const { return this->dataOutputFormat_ != nullptr;};
    void deleteDataOutputFormat() { this->dataOutputFormat_ = nullptr;};
    inline string dataOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(dataOutputFormat_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDataOutputFormat(string dataOutputFormat) { DARABONBA_PTR_SET_VALUE(dataOutputFormat_, dataOutputFormat) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsKafkaHudiJobShrinkRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string fullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // hudiAdvancedConfig Field Functions 
    bool hasHudiAdvancedConfig() const { return this->hudiAdvancedConfig_ != nullptr;};
    void deleteHudiAdvancedConfig() { this->hudiAdvancedConfig_ = nullptr;};
    inline string hudiAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(hudiAdvancedConfig_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setHudiAdvancedConfig(string hudiAdvancedConfig) { DARABONBA_PTR_SET_VALUE(hudiAdvancedConfig_, hudiAdvancedConfig) };


    // incrementalComputeUnit Field Functions 
    bool hasIncrementalComputeUnit() const { return this->incrementalComputeUnit_ != nullptr;};
    void deleteIncrementalComputeUnit() { this->incrementalComputeUnit_ = nullptr;};
    inline string incrementalComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(incrementalComputeUnit_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setIncrementalComputeUnit(string incrementalComputeUnit) { DARABONBA_PTR_SET_VALUE(incrementalComputeUnit_, incrementalComputeUnit) };


    // jsonParseLevel Field Functions 
    bool hasJsonParseLevel() const { return this->jsonParseLevel_ != nullptr;};
    void deleteJsonParseLevel() { this->jsonParseLevel_ = nullptr;};
    inline int32_t jsonParseLevel() const { DARABONBA_PTR_GET_DEFAULT(jsonParseLevel_, 0) };
    inline CreateApsKafkaHudiJobShrinkRequest& setJsonParseLevel(int32_t jsonParseLevel) { DARABONBA_PTR_SET_VALUE(jsonParseLevel_, jsonParseLevel) };


    // kafkaClusterId Field Functions 
    bool hasKafkaClusterId() const { return this->kafkaClusterId_ != nullptr;};
    void deleteKafkaClusterId() { this->kafkaClusterId_ = nullptr;};
    inline string kafkaClusterId() const { DARABONBA_PTR_GET_DEFAULT(kafkaClusterId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setKafkaClusterId(string kafkaClusterId) { DARABONBA_PTR_SET_VALUE(kafkaClusterId_, kafkaClusterId) };


    // kafkaTopic Field Functions 
    bool hasKafkaTopic() const { return this->kafkaTopic_ != nullptr;};
    void deleteKafkaTopic() { this->kafkaTopic_ = nullptr;};
    inline string kafkaTopic() const { DARABONBA_PTR_GET_DEFAULT(kafkaTopic_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setKafkaTopic(string kafkaTopic) { DARABONBA_PTR_SET_VALUE(kafkaTopic_, kafkaTopic) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline int64_t lakehouseId() const { DARABONBA_PTR_GET_DEFAULT(lakehouseId_, 0L) };
    inline CreateApsKafkaHudiJobShrinkRequest& setLakehouseId(int64_t lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };


    // maxOffsetsPerTrigger Field Functions 
    bool hasMaxOffsetsPerTrigger() const { return this->maxOffsetsPerTrigger_ != nullptr;};
    void deleteMaxOffsetsPerTrigger() { this->maxOffsetsPerTrigger_ = nullptr;};
    inline int64_t maxOffsetsPerTrigger() const { DARABONBA_PTR_GET_DEFAULT(maxOffsetsPerTrigger_, 0L) };
    inline CreateApsKafkaHudiJobShrinkRequest& setMaxOffsetsPerTrigger(int64_t maxOffsetsPerTrigger) { DARABONBA_PTR_SET_VALUE(maxOffsetsPerTrigger_, maxOffsetsPerTrigger) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // partitionSpecsShrink Field Functions 
    bool hasPartitionSpecsShrink() const { return this->partitionSpecsShrink_ != nullptr;};
    void deletePartitionSpecsShrink() { this->partitionSpecsShrink_ = nullptr;};
    inline string partitionSpecsShrink() const { DARABONBA_PTR_GET_DEFAULT(partitionSpecsShrink_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setPartitionSpecsShrink(string partitionSpecsShrink) { DARABONBA_PTR_SET_VALUE(partitionSpecsShrink_, partitionSpecsShrink) };


    // primaryKeyDefinition Field Functions 
    bool hasPrimaryKeyDefinition() const { return this->primaryKeyDefinition_ != nullptr;};
    void deletePrimaryKeyDefinition() { this->primaryKeyDefinition_ = nullptr;};
    inline string primaryKeyDefinition() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyDefinition_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setPrimaryKeyDefinition(string primaryKeyDefinition) { DARABONBA_PTR_SET_VALUE(primaryKeyDefinition_, primaryKeyDefinition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string startingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetGenerateRule Field Functions 
    bool hasTargetGenerateRule() const { return this->targetGenerateRule_ != nullptr;};
    void deleteTargetGenerateRule() { this->targetGenerateRule_ = nullptr;};
    inline string targetGenerateRule() const { DARABONBA_PTR_GET_DEFAULT(targetGenerateRule_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setTargetGenerateRule(string targetGenerateRule) { DARABONBA_PTR_SET_VALUE(targetGenerateRule_, targetGenerateRule) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    std::shared_ptr<string> acrossRole_ = nullptr;
    std::shared_ptr<string> acrossUid_ = nullptr;
    std::shared_ptr<string> advancedConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> columnsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> dataOutputFormat_ = nullptr;
    std::shared_ptr<int64_t> datasourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> fullComputeUnit_ = nullptr;
    std::shared_ptr<string> hudiAdvancedConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> incrementalComputeUnit_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> jsonParseLevel_ = nullptr;
    std::shared_ptr<string> kafkaClusterId_ = nullptr;
    std::shared_ptr<string> kafkaTopic_ = nullptr;
    std::shared_ptr<int64_t> lakehouseId_ = nullptr;
    std::shared_ptr<int64_t> maxOffsetsPerTrigger_ = nullptr;
    std::shared_ptr<string> ossLocation_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<string> partitionSpecsShrink_ = nullptr;
    std::shared_ptr<string> primaryKeyDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startingOffsets_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> targetGenerateRule_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workloadName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
