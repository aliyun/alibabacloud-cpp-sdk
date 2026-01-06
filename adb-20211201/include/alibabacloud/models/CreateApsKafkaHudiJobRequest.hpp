// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(MapName, mapName_);
        DARABONBA_PTR_TO_JSON(MapType, mapType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(MapName, mapName_);
        DARABONBA_PTR_FROM_JSON(MapType, mapType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mapName_ == nullptr
        && this->mapType_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // mapName Field Functions 
      bool hasMapName() const { return this->mapName_ != nullptr;};
      void deleteMapName() { this->mapName_ = nullptr;};
      inline string getMapName() const { DARABONBA_PTR_GET_DEFAULT(mapName_, "") };
      inline Columns& setMapName(string mapName) { DARABONBA_PTR_SET_VALUE(mapName_, mapName) };


      // mapType Field Functions 
      bool hasMapType() const { return this->mapType_ != nullptr;};
      void deleteMapType() { this->mapType_ = nullptr;};
      inline string getMapType() const { DARABONBA_PTR_GET_DEFAULT(mapType_, "") };
      inline Columns& setMapType(string mapType) { DARABONBA_PTR_SET_VALUE(mapType_, mapType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the partition column in the destination table.
      shared_ptr<string> mapName_ {};
      // The desired format for the destination partition column.
      shared_ptr<string> mapType_ {};
      // The name of the source column to use for partitioning.
      shared_ptr<string> name_ {};
      // The format of the source field. See the table below for valid values.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->acrossRole_ == nullptr
        && this->acrossUid_ == nullptr && this->advancedConfig_ == nullptr && this->columns_ == nullptr && this->DBClusterId_ == nullptr && this->dataFormatType_ == nullptr
        && this->dataOutputFormat_ == nullptr && this->datasourceId_ == nullptr && this->dbName_ == nullptr && this->fullComputeUnit_ == nullptr && this->hudiAdvancedConfig_ == nullptr
        && this->incrementalComputeUnit_ == nullptr && this->jsonParseLevel_ == nullptr && this->kafkaClusterId_ == nullptr && this->kafkaTopic_ == nullptr && this->lakehouseId_ == nullptr
        && this->maxOffsetsPerTrigger_ == nullptr && this->ossLocation_ == nullptr && this->outputFormat_ == nullptr && this->partitionSpecs_ == nullptr && this->primaryKeyDefinition_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroup_ == nullptr && this->sourceRegionId_ == nullptr && this->startingOffsets_ == nullptr && this->tableName_ == nullptr
        && this->targetGenerateRule_ == nullptr && this->targetType_ == nullptr && this->workloadName_ == nullptr; };
    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string getAcrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsKafkaHudiJobRequest& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string getAcrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsKafkaHudiJobRequest& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string getAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsKafkaHudiJobRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<CreateApsKafkaHudiJobRequest::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<CreateApsKafkaHudiJobRequest::Columns>) };
    inline vector<CreateApsKafkaHudiJobRequest::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<CreateApsKafkaHudiJobRequest::Columns>) };
    inline CreateApsKafkaHudiJobRequest& setColumns(const vector<CreateApsKafkaHudiJobRequest::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateApsKafkaHudiJobRequest& setColumns(vector<CreateApsKafkaHudiJobRequest::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsKafkaHudiJobRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataFormatType Field Functions 
    bool hasDataFormatType() const { return this->dataFormatType_ != nullptr;};
    void deleteDataFormatType() { this->dataFormatType_ = nullptr;};
    inline string getDataFormatType() const { DARABONBA_PTR_GET_DEFAULT(dataFormatType_, "") };
    inline CreateApsKafkaHudiJobRequest& setDataFormatType(string dataFormatType) { DARABONBA_PTR_SET_VALUE(dataFormatType_, dataFormatType) };


    // dataOutputFormat Field Functions 
    bool hasDataOutputFormat() const { return this->dataOutputFormat_ != nullptr;};
    void deleteDataOutputFormat() { this->dataOutputFormat_ = nullptr;};
    inline string getDataOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(dataOutputFormat_, "") };
    inline CreateApsKafkaHudiJobRequest& setDataOutputFormat(string dataOutputFormat) { DARABONBA_PTR_SET_VALUE(dataOutputFormat_, dataOutputFormat) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsKafkaHudiJobRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateApsKafkaHudiJobRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string getFullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsKafkaHudiJobRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // hudiAdvancedConfig Field Functions 
    bool hasHudiAdvancedConfig() const { return this->hudiAdvancedConfig_ != nullptr;};
    void deleteHudiAdvancedConfig() { this->hudiAdvancedConfig_ = nullptr;};
    inline string getHudiAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(hudiAdvancedConfig_, "") };
    inline CreateApsKafkaHudiJobRequest& setHudiAdvancedConfig(string hudiAdvancedConfig) { DARABONBA_PTR_SET_VALUE(hudiAdvancedConfig_, hudiAdvancedConfig) };


    // incrementalComputeUnit Field Functions 
    bool hasIncrementalComputeUnit() const { return this->incrementalComputeUnit_ != nullptr;};
    void deleteIncrementalComputeUnit() { this->incrementalComputeUnit_ = nullptr;};
    inline string getIncrementalComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(incrementalComputeUnit_, "") };
    inline CreateApsKafkaHudiJobRequest& setIncrementalComputeUnit(string incrementalComputeUnit) { DARABONBA_PTR_SET_VALUE(incrementalComputeUnit_, incrementalComputeUnit) };


    // jsonParseLevel Field Functions 
    bool hasJsonParseLevel() const { return this->jsonParseLevel_ != nullptr;};
    void deleteJsonParseLevel() { this->jsonParseLevel_ = nullptr;};
    inline int32_t getJsonParseLevel() const { DARABONBA_PTR_GET_DEFAULT(jsonParseLevel_, 0) };
    inline CreateApsKafkaHudiJobRequest& setJsonParseLevel(int32_t jsonParseLevel) { DARABONBA_PTR_SET_VALUE(jsonParseLevel_, jsonParseLevel) };


    // kafkaClusterId Field Functions 
    bool hasKafkaClusterId() const { return this->kafkaClusterId_ != nullptr;};
    void deleteKafkaClusterId() { this->kafkaClusterId_ = nullptr;};
    inline string getKafkaClusterId() const { DARABONBA_PTR_GET_DEFAULT(kafkaClusterId_, "") };
    inline CreateApsKafkaHudiJobRequest& setKafkaClusterId(string kafkaClusterId) { DARABONBA_PTR_SET_VALUE(kafkaClusterId_, kafkaClusterId) };


    // kafkaTopic Field Functions 
    bool hasKafkaTopic() const { return this->kafkaTopic_ != nullptr;};
    void deleteKafkaTopic() { this->kafkaTopic_ = nullptr;};
    inline string getKafkaTopic() const { DARABONBA_PTR_GET_DEFAULT(kafkaTopic_, "") };
    inline CreateApsKafkaHudiJobRequest& setKafkaTopic(string kafkaTopic) { DARABONBA_PTR_SET_VALUE(kafkaTopic_, kafkaTopic) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline int64_t getLakehouseId() const { DARABONBA_PTR_GET_DEFAULT(lakehouseId_, 0L) };
    inline CreateApsKafkaHudiJobRequest& setLakehouseId(int64_t lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };


    // maxOffsetsPerTrigger Field Functions 
    bool hasMaxOffsetsPerTrigger() const { return this->maxOffsetsPerTrigger_ != nullptr;};
    void deleteMaxOffsetsPerTrigger() { this->maxOffsetsPerTrigger_ = nullptr;};
    inline int64_t getMaxOffsetsPerTrigger() const { DARABONBA_PTR_GET_DEFAULT(maxOffsetsPerTrigger_, 0L) };
    inline CreateApsKafkaHudiJobRequest& setMaxOffsetsPerTrigger(int64_t maxOffsetsPerTrigger) { DARABONBA_PTR_SET_VALUE(maxOffsetsPerTrigger_, maxOffsetsPerTrigger) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string getOssLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsKafkaHudiJobRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateApsKafkaHudiJobRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // partitionSpecs Field Functions 
    bool hasPartitionSpecs() const { return this->partitionSpecs_ != nullptr;};
    void deletePartitionSpecs() { this->partitionSpecs_ = nullptr;};
    inline const vector<Darabonba::Json> & getPartitionSpecs() const { DARABONBA_PTR_GET_CONST(partitionSpecs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getPartitionSpecs() { DARABONBA_PTR_GET(partitionSpecs_, vector<Darabonba::Json>) };
    inline CreateApsKafkaHudiJobRequest& setPartitionSpecs(const vector<Darabonba::Json> & partitionSpecs) { DARABONBA_PTR_SET_VALUE(partitionSpecs_, partitionSpecs) };
    inline CreateApsKafkaHudiJobRequest& setPartitionSpecs(vector<Darabonba::Json> && partitionSpecs) { DARABONBA_PTR_SET_RVALUE(partitionSpecs_, partitionSpecs) };


    // primaryKeyDefinition Field Functions 
    bool hasPrimaryKeyDefinition() const { return this->primaryKeyDefinition_ != nullptr;};
    void deletePrimaryKeyDefinition() { this->primaryKeyDefinition_ = nullptr;};
    inline string getPrimaryKeyDefinition() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyDefinition_, "") };
    inline CreateApsKafkaHudiJobRequest& setPrimaryKeyDefinition(string primaryKeyDefinition) { DARABONBA_PTR_SET_VALUE(primaryKeyDefinition_, primaryKeyDefinition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsKafkaHudiJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsKafkaHudiJobRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsKafkaHudiJobRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string getStartingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline CreateApsKafkaHudiJobRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateApsKafkaHudiJobRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetGenerateRule Field Functions 
    bool hasTargetGenerateRule() const { return this->targetGenerateRule_ != nullptr;};
    void deleteTargetGenerateRule() { this->targetGenerateRule_ = nullptr;};
    inline string getTargetGenerateRule() const { DARABONBA_PTR_GET_DEFAULT(targetGenerateRule_, "") };
    inline CreateApsKafkaHudiJobRequest& setTargetGenerateRule(string targetGenerateRule) { DARABONBA_PTR_SET_VALUE(targetGenerateRule_, targetGenerateRule) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsKafkaHudiJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsKafkaHudiJobRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The Resource Access Management (RAM) role that is created for the trusted Alibaba Cloud account. For more information, see Create a RAM role for a trusted Alibaba Cloud account. The ARN of the RAM role that grants AnalyticDB for MySQL permission to access resources in the source account. Required for cross-account data ingestion.
    shared_ptr<string> acrossRole_ {};
    // The ID of the Alibaba Cloud account to which the source Kafka belongs.
    shared_ptr<string> acrossUid_ {};
    // The advanced configurations.
    shared_ptr<string> advancedConfig_ {};
    // The column information.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateApsKafkaHudiJobRequest::Columns>> columns_ {};
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all clusters in a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> dataFormatType_ {};
    // Enumeration value and description. Single: The source is a single-row JSON record. Multi: source is a JSON array. Output a single JSON record.
    shared_ptr<string> dataOutputFormat_ {};
    // The data source ID.
    shared_ptr<int64_t> datasourceId_ {};
    // The name of the user-defined database.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // The full synchronization configuration.
    shared_ptr<string> fullComputeUnit_ {};
    // The HUDI configuration of the destination.
    shared_ptr<string> hudiAdvancedConfig_ {};
    // The incremental synchronization configuration.
    // 
    // This parameter is required.
    shared_ptr<string> incrementalComputeUnit_ {};
    // The number of layers that are parsed for nested JSON fields. Valid values: 0: Nested JSON fields are not parsed. 1: parses one layer. 2: Two layers are parsed. 3: Three layers are parsed. 4: Four layers are parsed. By default, one layer is parsed. For more information about how nested JSON fields are parsed, see the Examples of schema fields parsed with different numbers of layers section of this topic.
    shared_ptr<int32_t> jsonParseLevel_ {};
    // The ID of the Apache Kafka instance. You can get it in the Kafka console.
    shared_ptr<string> kafkaClusterId_ {};
    // Kafka Topic ID. You can get it in the Kafka console.
    shared_ptr<string> kafkaTopic_ {};
    // The ID of the lakehouse.
    shared_ptr<int64_t> lakehouseId_ {};
    // The maximum number of records to fetch in a single batch.
    shared_ptr<int64_t> maxOffsetsPerTrigger_ {};
    // The path of the destination data lakehouse in an Object Storage Service (OSS) bucket.
    shared_ptr<string> ossLocation_ {};
    // The format of the output data.
    shared_ptr<string> outputFormat_ {};
    // The partition information.
    shared_ptr<vector<Darabonba::Json>> partitionSpecs_ {};
    // The primary key settings. Contains the uuid policy and mapping policy. The explanation is as follows. Uuid policy: "Strategy": "uuid". Mapping policy: "Strategy": "mapping", "Values":[ "f1", "f2" ], "RecordVersionField","xxx" The meaning of the RecordVersionField is the HUDI record version.
    shared_ptr<string> primaryKeyDefinition_ {};
    // The region ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group name.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroup_ {};
    // 地域ID。
    shared_ptr<string> sourceRegionId_ {};
    // Specifies the position from which to start consuming messages. Valid values: begin_cursor/end_cursor/timestamp Each corresponds to the earliest /latest /specified time respectively.
    // 
    // This parameter is required.
    shared_ptr<string> startingOffsets_ {};
    // The name of the user-defined table.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The rules for generating the destination database.
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
