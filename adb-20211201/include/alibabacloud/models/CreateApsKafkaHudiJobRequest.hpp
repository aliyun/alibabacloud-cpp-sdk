// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateApsKafkaHudiJobRequestColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsKafkaHudiJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsKafkaHudiJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
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
      DARABONBA_PTR_TO_JSON(PartitionSpecs, partitionSpecs_);
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
    friend void from_json(const Darabonba::Json& j, CreateApsKafkaHudiJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
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
      DARABONBA_PTR_FROM_JSON(PartitionSpecs, partitionSpecs_);
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
    CreateApsKafkaHudiJobRequest() = default ;
    CreateApsKafkaHudiJobRequest(const CreateApsKafkaHudiJobRequest &) = default ;
    CreateApsKafkaHudiJobRequest(CreateApsKafkaHudiJobRequest &&) = default ;
    CreateApsKafkaHudiJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsKafkaHudiJobRequest() = default ;
    CreateApsKafkaHudiJobRequest& operator=(const CreateApsKafkaHudiJobRequest &) = default ;
    CreateApsKafkaHudiJobRequest& operator=(CreateApsKafkaHudiJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acrossRole_ != nullptr
        && this->acrossUid_ != nullptr && this->advancedConfig_ != nullptr && this->columns_ != nullptr && this->DBClusterId_ != nullptr && this->dataOutputFormat_ != nullptr
        && this->datasourceId_ != nullptr && this->dbName_ != nullptr && this->fullComputeUnit_ != nullptr && this->hudiAdvancedConfig_ != nullptr && this->incrementalComputeUnit_ != nullptr
        && this->jsonParseLevel_ != nullptr && this->kafkaClusterId_ != nullptr && this->kafkaTopic_ != nullptr && this->lakehouseId_ != nullptr && this->maxOffsetsPerTrigger_ != nullptr
        && this->ossLocation_ != nullptr && this->outputFormat_ != nullptr && this->partitionSpecs_ != nullptr && this->primaryKeyDefinition_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroup_ != nullptr && this->sourceRegionId_ != nullptr && this->startingOffsets_ != nullptr && this->tableName_ != nullptr && this->targetGenerateRule_ != nullptr
        && this->targetType_ != nullptr && this->workloadName_ != nullptr; };
    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string acrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsKafkaHudiJobRequest& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string acrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsKafkaHudiJobRequest& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string advancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsKafkaHudiJobRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<CreateApsKafkaHudiJobRequestColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<CreateApsKafkaHudiJobRequestColumns>) };
    inline vector<CreateApsKafkaHudiJobRequestColumns> columns() { DARABONBA_PTR_GET(columns_, vector<CreateApsKafkaHudiJobRequestColumns>) };
    inline CreateApsKafkaHudiJobRequest& setColumns(const vector<CreateApsKafkaHudiJobRequestColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateApsKafkaHudiJobRequest& setColumns(vector<CreateApsKafkaHudiJobRequestColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsKafkaHudiJobRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataOutputFormat Field Functions 
    bool hasDataOutputFormat() const { return this->dataOutputFormat_ != nullptr;};
    void deleteDataOutputFormat() { this->dataOutputFormat_ = nullptr;};
    inline string dataOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(dataOutputFormat_, "") };
    inline CreateApsKafkaHudiJobRequest& setDataOutputFormat(string dataOutputFormat) { DARABONBA_PTR_SET_VALUE(dataOutputFormat_, dataOutputFormat) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsKafkaHudiJobRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateApsKafkaHudiJobRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string fullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsKafkaHudiJobRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // hudiAdvancedConfig Field Functions 
    bool hasHudiAdvancedConfig() const { return this->hudiAdvancedConfig_ != nullptr;};
    void deleteHudiAdvancedConfig() { this->hudiAdvancedConfig_ = nullptr;};
    inline string hudiAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(hudiAdvancedConfig_, "") };
    inline CreateApsKafkaHudiJobRequest& setHudiAdvancedConfig(string hudiAdvancedConfig) { DARABONBA_PTR_SET_VALUE(hudiAdvancedConfig_, hudiAdvancedConfig) };


    // incrementalComputeUnit Field Functions 
    bool hasIncrementalComputeUnit() const { return this->incrementalComputeUnit_ != nullptr;};
    void deleteIncrementalComputeUnit() { this->incrementalComputeUnit_ = nullptr;};
    inline string incrementalComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(incrementalComputeUnit_, "") };
    inline CreateApsKafkaHudiJobRequest& setIncrementalComputeUnit(string incrementalComputeUnit) { DARABONBA_PTR_SET_VALUE(incrementalComputeUnit_, incrementalComputeUnit) };


    // jsonParseLevel Field Functions 
    bool hasJsonParseLevel() const { return this->jsonParseLevel_ != nullptr;};
    void deleteJsonParseLevel() { this->jsonParseLevel_ = nullptr;};
    inline int32_t jsonParseLevel() const { DARABONBA_PTR_GET_DEFAULT(jsonParseLevel_, 0) };
    inline CreateApsKafkaHudiJobRequest& setJsonParseLevel(int32_t jsonParseLevel) { DARABONBA_PTR_SET_VALUE(jsonParseLevel_, jsonParseLevel) };


    // kafkaClusterId Field Functions 
    bool hasKafkaClusterId() const { return this->kafkaClusterId_ != nullptr;};
    void deleteKafkaClusterId() { this->kafkaClusterId_ = nullptr;};
    inline string kafkaClusterId() const { DARABONBA_PTR_GET_DEFAULT(kafkaClusterId_, "") };
    inline CreateApsKafkaHudiJobRequest& setKafkaClusterId(string kafkaClusterId) { DARABONBA_PTR_SET_VALUE(kafkaClusterId_, kafkaClusterId) };


    // kafkaTopic Field Functions 
    bool hasKafkaTopic() const { return this->kafkaTopic_ != nullptr;};
    void deleteKafkaTopic() { this->kafkaTopic_ = nullptr;};
    inline string kafkaTopic() const { DARABONBA_PTR_GET_DEFAULT(kafkaTopic_, "") };
    inline CreateApsKafkaHudiJobRequest& setKafkaTopic(string kafkaTopic) { DARABONBA_PTR_SET_VALUE(kafkaTopic_, kafkaTopic) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline int64_t lakehouseId() const { DARABONBA_PTR_GET_DEFAULT(lakehouseId_, 0L) };
    inline CreateApsKafkaHudiJobRequest& setLakehouseId(int64_t lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };


    // maxOffsetsPerTrigger Field Functions 
    bool hasMaxOffsetsPerTrigger() const { return this->maxOffsetsPerTrigger_ != nullptr;};
    void deleteMaxOffsetsPerTrigger() { this->maxOffsetsPerTrigger_ = nullptr;};
    inline int64_t maxOffsetsPerTrigger() const { DARABONBA_PTR_GET_DEFAULT(maxOffsetsPerTrigger_, 0L) };
    inline CreateApsKafkaHudiJobRequest& setMaxOffsetsPerTrigger(int64_t maxOffsetsPerTrigger) { DARABONBA_PTR_SET_VALUE(maxOffsetsPerTrigger_, maxOffsetsPerTrigger) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsKafkaHudiJobRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateApsKafkaHudiJobRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // partitionSpecs Field Functions 
    bool hasPartitionSpecs() const { return this->partitionSpecs_ != nullptr;};
    void deletePartitionSpecs() { this->partitionSpecs_ = nullptr;};
    inline const vector<Darabonba::Json> & partitionSpecs() const { DARABONBA_PTR_GET_CONST(partitionSpecs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> partitionSpecs() { DARABONBA_PTR_GET(partitionSpecs_, vector<Darabonba::Json>) };
    inline CreateApsKafkaHudiJobRequest& setPartitionSpecs(const vector<Darabonba::Json> & partitionSpecs) { DARABONBA_PTR_SET_VALUE(partitionSpecs_, partitionSpecs) };
    inline CreateApsKafkaHudiJobRequest& setPartitionSpecs(vector<Darabonba::Json> && partitionSpecs) { DARABONBA_PTR_SET_RVALUE(partitionSpecs_, partitionSpecs) };


    // primaryKeyDefinition Field Functions 
    bool hasPrimaryKeyDefinition() const { return this->primaryKeyDefinition_ != nullptr;};
    void deletePrimaryKeyDefinition() { this->primaryKeyDefinition_ = nullptr;};
    inline string primaryKeyDefinition() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyDefinition_, "") };
    inline CreateApsKafkaHudiJobRequest& setPrimaryKeyDefinition(string primaryKeyDefinition) { DARABONBA_PTR_SET_VALUE(primaryKeyDefinition_, primaryKeyDefinition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsKafkaHudiJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsKafkaHudiJobRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsKafkaHudiJobRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string startingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline CreateApsKafkaHudiJobRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateApsKafkaHudiJobRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetGenerateRule Field Functions 
    bool hasTargetGenerateRule() const { return this->targetGenerateRule_ != nullptr;};
    void deleteTargetGenerateRule() { this->targetGenerateRule_ = nullptr;};
    inline string targetGenerateRule() const { DARABONBA_PTR_GET_DEFAULT(targetGenerateRule_, "") };
    inline CreateApsKafkaHudiJobRequest& setTargetGenerateRule(string targetGenerateRule) { DARABONBA_PTR_SET_VALUE(targetGenerateRule_, targetGenerateRule) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsKafkaHudiJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsKafkaHudiJobRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    std::shared_ptr<string> acrossRole_ = nullptr;
    std::shared_ptr<string> acrossUid_ = nullptr;
    std::shared_ptr<string> advancedConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateApsKafkaHudiJobRequestColumns>> columns_ = nullptr;
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
    std::shared_ptr<vector<Darabonba::Json>> partitionSpecs_ = nullptr;
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
