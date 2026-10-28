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
      DARABONBA_PTR_TO_JSON(DataFormatType, dataFormatType_);
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
      DARABONBA_PTR_FROM_JSON(DataFormatType, dataFormatType_);
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
    virtual bool empty() const override { return this->acrossRole_ == nullptr
        && this->acrossUid_ == nullptr && this->advancedConfig_ == nullptr && this->columnsShrink_ == nullptr && this->DBClusterId_ == nullptr && this->dataFormatType_ == nullptr
        && this->dataOutputFormat_ == nullptr && this->datasourceId_ == nullptr && this->dbName_ == nullptr && this->fullComputeUnit_ == nullptr && this->hudiAdvancedConfig_ == nullptr
        && this->incrementalComputeUnit_ == nullptr && this->jsonParseLevel_ == nullptr && this->kafkaClusterId_ == nullptr && this->kafkaTopic_ == nullptr && this->lakehouseId_ == nullptr
        && this->maxOffsetsPerTrigger_ == nullptr && this->ossLocation_ == nullptr && this->outputFormat_ == nullptr && this->partitionSpecsShrink_ == nullptr && this->primaryKeyDefinition_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroup_ == nullptr && this->sourceRegionId_ == nullptr && this->startingOffsets_ == nullptr && this->tableName_ == nullptr
        && this->targetGenerateRule_ == nullptr && this->targetType_ == nullptr && this->workloadName_ == nullptr; };
    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string getAcrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string getAcrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string getAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string getColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataFormatType Field Functions 
    bool hasDataFormatType() const { return this->dataFormatType_ != nullptr;};
    void deleteDataFormatType() { this->dataFormatType_ = nullptr;};
    inline string getDataFormatType() const { DARABONBA_PTR_GET_DEFAULT(dataFormatType_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDataFormatType(string dataFormatType) { DARABONBA_PTR_SET_VALUE(dataFormatType_, dataFormatType) };


    // dataOutputFormat Field Functions 
    bool hasDataOutputFormat() const { return this->dataOutputFormat_ != nullptr;};
    void deleteDataOutputFormat() { this->dataOutputFormat_ = nullptr;};
    inline string getDataOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(dataOutputFormat_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDataOutputFormat(string dataOutputFormat) { DARABONBA_PTR_SET_VALUE(dataOutputFormat_, dataOutputFormat) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsKafkaHudiJobShrinkRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string getFullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // hudiAdvancedConfig Field Functions 
    bool hasHudiAdvancedConfig() const { return this->hudiAdvancedConfig_ != nullptr;};
    void deleteHudiAdvancedConfig() { this->hudiAdvancedConfig_ = nullptr;};
    inline string getHudiAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(hudiAdvancedConfig_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setHudiAdvancedConfig(string hudiAdvancedConfig) { DARABONBA_PTR_SET_VALUE(hudiAdvancedConfig_, hudiAdvancedConfig) };


    // incrementalComputeUnit Field Functions 
    bool hasIncrementalComputeUnit() const { return this->incrementalComputeUnit_ != nullptr;};
    void deleteIncrementalComputeUnit() { this->incrementalComputeUnit_ = nullptr;};
    inline string getIncrementalComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(incrementalComputeUnit_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setIncrementalComputeUnit(string incrementalComputeUnit) { DARABONBA_PTR_SET_VALUE(incrementalComputeUnit_, incrementalComputeUnit) };


    // jsonParseLevel Field Functions 
    bool hasJsonParseLevel() const { return this->jsonParseLevel_ != nullptr;};
    void deleteJsonParseLevel() { this->jsonParseLevel_ = nullptr;};
    inline int32_t getJsonParseLevel() const { DARABONBA_PTR_GET_DEFAULT(jsonParseLevel_, 0) };
    inline CreateApsKafkaHudiJobShrinkRequest& setJsonParseLevel(int32_t jsonParseLevel) { DARABONBA_PTR_SET_VALUE(jsonParseLevel_, jsonParseLevel) };


    // kafkaClusterId Field Functions 
    bool hasKafkaClusterId() const { return this->kafkaClusterId_ != nullptr;};
    void deleteKafkaClusterId() { this->kafkaClusterId_ = nullptr;};
    inline string getKafkaClusterId() const { DARABONBA_PTR_GET_DEFAULT(kafkaClusterId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setKafkaClusterId(string kafkaClusterId) { DARABONBA_PTR_SET_VALUE(kafkaClusterId_, kafkaClusterId) };


    // kafkaTopic Field Functions 
    bool hasKafkaTopic() const { return this->kafkaTopic_ != nullptr;};
    void deleteKafkaTopic() { this->kafkaTopic_ = nullptr;};
    inline string getKafkaTopic() const { DARABONBA_PTR_GET_DEFAULT(kafkaTopic_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setKafkaTopic(string kafkaTopic) { DARABONBA_PTR_SET_VALUE(kafkaTopic_, kafkaTopic) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline int64_t getLakehouseId() const { DARABONBA_PTR_GET_DEFAULT(lakehouseId_, 0L) };
    inline CreateApsKafkaHudiJobShrinkRequest& setLakehouseId(int64_t lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };


    // maxOffsetsPerTrigger Field Functions 
    bool hasMaxOffsetsPerTrigger() const { return this->maxOffsetsPerTrigger_ != nullptr;};
    void deleteMaxOffsetsPerTrigger() { this->maxOffsetsPerTrigger_ = nullptr;};
    inline int64_t getMaxOffsetsPerTrigger() const { DARABONBA_PTR_GET_DEFAULT(maxOffsetsPerTrigger_, 0L) };
    inline CreateApsKafkaHudiJobShrinkRequest& setMaxOffsetsPerTrigger(int64_t maxOffsetsPerTrigger) { DARABONBA_PTR_SET_VALUE(maxOffsetsPerTrigger_, maxOffsetsPerTrigger) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string getOssLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // partitionSpecsShrink Field Functions 
    bool hasPartitionSpecsShrink() const { return this->partitionSpecsShrink_ != nullptr;};
    void deletePartitionSpecsShrink() { this->partitionSpecsShrink_ = nullptr;};
    inline string getPartitionSpecsShrink() const { DARABONBA_PTR_GET_DEFAULT(partitionSpecsShrink_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setPartitionSpecsShrink(string partitionSpecsShrink) { DARABONBA_PTR_SET_VALUE(partitionSpecsShrink_, partitionSpecsShrink) };


    // primaryKeyDefinition Field Functions 
    bool hasPrimaryKeyDefinition() const { return this->primaryKeyDefinition_ != nullptr;};
    void deletePrimaryKeyDefinition() { this->primaryKeyDefinition_ = nullptr;};
    inline string getPrimaryKeyDefinition() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyDefinition_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setPrimaryKeyDefinition(string primaryKeyDefinition) { DARABONBA_PTR_SET_VALUE(primaryKeyDefinition_, primaryKeyDefinition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string getStartingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetGenerateRule Field Functions 
    bool hasTargetGenerateRule() const { return this->targetGenerateRule_ != nullptr;};
    void deleteTargetGenerateRule() { this->targetGenerateRule_ = nullptr;};
    inline string getTargetGenerateRule() const { DARABONBA_PTR_GET_DEFAULT(targetGenerateRule_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setTargetGenerateRule(string targetGenerateRule) { DARABONBA_PTR_SET_VALUE(targetGenerateRule_, targetGenerateRule) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsKafkaHudiJobShrinkRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The RAM role whose trusted entity is an Alibaba Cloud account. For more information about how to create a RAM role, see Create a RAM role for a trusted Alibaba Cloud account.
    // In the RAM role, the Alibaba Cloud account to which AnalyticDB for MySQL belongs must be configured as a trusted account for the Alibaba Cloud account to which the Kafka instance belongs.
    shared_ptr<string> acrossRole_ {};
    // The ID of the Alibaba Cloud account to which the source Kafka instance belongs.
    shared_ptr<string> acrossUid_ {};
    // The advanced configurations.
    shared_ptr<string> advancedConfig_ {};
    // The column information.
    // 
    // This parameter is required.
    shared_ptr<string> columnsShrink_ {};
    // The cluster ID.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition (3.0) clusters in the specified region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The Kafka message type. Valid values: json, general_canal_json, mongo_canal_json, dataworks_json, and shareplex_json.
    shared_ptr<string> dataFormatType_ {};
    // The data output format. Valid values:
    // - Single: The source is a single-line JSON record.
    // - Multi: The source is a JSON array. A single JSON record must be output.
    shared_ptr<string> dataOutputFormat_ {};
    // The data source ID.
    shared_ptr<int64_t> datasourceId_ {};
    // The custom database name.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // The full synchronization configurations.
    shared_ptr<string> fullComputeUnit_ {};
    // The destination Hudi configurations.
    shared_ptr<string> hudiAdvancedConfig_ {};
    // The incremental synchronization configurations.
    // 
    // This parameter is required.
    shared_ptr<string> incrementalComputeUnit_ {};
    // The nesting parse level for JSON. Valid values:
    // - 0: No parsing.
    // - 1: Parse one level.
    // - 2: Parse two levels.
    // - 3: Parse three levels.
    // - 4: Parse four levels.
    // Default value: 1. For more information about the JSON nesting parse strategy, see JSON parse levels and schema field inference examples.
    shared_ptr<int32_t> jsonParseLevel_ {};
    // Instance ID of the Kafka instance. You can obtain instance ID in the Kafka console.
    shared_ptr<string> kafkaClusterId_ {};
    // The ID of the Kafka topic. You can obtain the ID in the Kafka console.
    shared_ptr<string> kafkaTopic_ {};
    // The ID of the lakehouse.
    shared_ptr<int64_t> lakehouseId_ {};
    // The maximum number of messages to consume per trigger.
    shared_ptr<int64_t> maxOffsetsPerTrigger_ {};
    // The destination lakehouse address, which is a complete OSS path.
    shared_ptr<string> ossLocation_ {};
    // The output data format.
    shared_ptr<string> outputFormat_ {};
    // The partition information.
    shared_ptr<string> partitionSpecsShrink_ {};
    // The primary key settings, including the UUID strategy and the mapping strategy. Details:
    // UUID strategy: "Strategy": "uuid".
    // Mapping strategy:
    // "Strategy": "mapping",
    // "Values":[
    //  "f1",
    //  "f2"
    // ],
    // "RecordVersionField","xxx"
    // RecordVersionField specifies the Hudi record version.
    shared_ptr<string> primaryKeyDefinition_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroup_ {};
    // The region ID.
    shared_ptr<string> sourceRegionId_ {};
    // The starting consumption offset for Kafka. Valid values:
    // - begin_cursor: The earliest offset.
    // - end_cursor: The latest offset.
    // - timestamp: A specified time.
    // 
    // This parameter is required.
    shared_ptr<string> startingOffsets_ {};
    // The custom table name.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The destination generation rule.
    shared_ptr<string> targetGenerateRule_ {};
    // The destination type.
    shared_ptr<string> targetType_ {};
    // The name of the workload.
    // 
    // This parameter is required.
    shared_ptr<string> workloadName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
