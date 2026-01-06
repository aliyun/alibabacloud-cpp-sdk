// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBREQUEST_HPP_
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
  class CreateApsSlsADBJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsSlsADBJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
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
      DARABONBA_PTR_TO_JSON(PartitionSpecs, partitionSpecs_);
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
      DARABONBA_PTR_TO_JSON(UnixTimestampConvert, unixTimestampConvert_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsSlsADBJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(AdvancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
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
      DARABONBA_PTR_FROM_JSON(PartitionSpecs, partitionSpecs_);
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
      DARABONBA_PTR_FROM_JSON(UnixTimestampConvert, unixTimestampConvert_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    CreateApsSlsADBJobRequest() = default ;
    CreateApsSlsADBJobRequest(const CreateApsSlsADBJobRequest &) = default ;
    CreateApsSlsADBJobRequest(CreateApsSlsADBJobRequest &&) = default ;
    CreateApsSlsADBJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsSlsADBJobRequest() = default ;
    CreateApsSlsADBJobRequest& operator=(const CreateApsSlsADBJobRequest &) = default ;
    CreateApsSlsADBJobRequest& operator=(CreateApsSlsADBJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnixTimestampConvert : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnixTimestampConvert& obj) { 
        DARABONBA_PTR_TO_JSON(Convert, convert_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Transform, transform_);
      };
      friend void from_json(const Darabonba::Json& j, UnixTimestampConvert& obj) { 
        DARABONBA_PTR_FROM_JSON(Convert, convert_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Transform, transform_);
      };
      UnixTimestampConvert() = default ;
      UnixTimestampConvert(const UnixTimestampConvert &) = default ;
      UnixTimestampConvert(UnixTimestampConvert &&) = default ;
      UnixTimestampConvert(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnixTimestampConvert() = default ;
      UnixTimestampConvert& operator=(const UnixTimestampConvert &) = default ;
      UnixTimestampConvert& operator=(UnixTimestampConvert &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->convert_ == nullptr
        && this->format_ == nullptr && this->transform_ == nullptr; };
      // convert Field Functions 
      bool hasConvert() const { return this->convert_ != nullptr;};
      void deleteConvert() { this->convert_ = nullptr;};
      inline string getConvert() const { DARABONBA_PTR_GET_DEFAULT(convert_, "") };
      inline UnixTimestampConvert& setConvert(string convert) { DARABONBA_PTR_SET_VALUE(convert_, convert) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline UnixTimestampConvert& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // transform Field Functions 
      bool hasTransform() const { return this->transform_ != nullptr;};
      void deleteTransform() { this->transform_ = nullptr;};
      inline bool getTransform() const { DARABONBA_PTR_GET_DEFAULT(transform_, false) };
      inline UnixTimestampConvert& setTransform(bool transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };


    protected:
      // Specifies whether to enable the conversion of timestamps.
      shared_ptr<string> convert_ {};
      // The format of the timestamp.
      shared_ptr<string> format_ {};
      // Specifies whether to enable the timestamp conversion.
      shared_ptr<bool> transform_ {};
    };

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
      // The name of the mapping.
      shared_ptr<string> mapName_ {};
      // The type of the mapping.
      shared_ptr<string> mapType_ {};
      // The name of the column.
      shared_ptr<string> name_ {};
      // The data type of the column.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->acrossRole_ == nullptr
        && this->acrossUid_ == nullptr && this->advancedConfig_ == nullptr && this->columns_ == nullptr && this->DBClusterId_ == nullptr && this->datasourceId_ == nullptr
        && this->dbName_ == nullptr && this->dirtyDataHandleMode_ == nullptr && this->dirtyDataProcessPattern_ == nullptr && this->exactlyOnce_ == nullptr && this->fullComputeUnit_ == nullptr
        && this->hudiAdvancedConfig_ == nullptr && this->incrementalComputeUnit_ == nullptr && this->lakehouseId_ == nullptr && this->maxOffsetsPerTrigger_ == nullptr && this->ossLocation_ == nullptr
        && this->outputFormat_ == nullptr && this->partitionSpecs_ == nullptr && this->password_ == nullptr && this->primaryKeyDefinition_ == nullptr && this->project_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroup_ == nullptr && this->sourceRegionId_ == nullptr && this->startingOffsets_ == nullptr && this->store_ == nullptr
        && this->tableName_ == nullptr && this->targetGenerateRule_ == nullptr && this->targetType_ == nullptr && this->unixTimestampConvert_ == nullptr && this->userName_ == nullptr
        && this->workloadName_ == nullptr; };
    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string getAcrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsSlsADBJobRequest& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string getAcrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsSlsADBJobRequest& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string getAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateApsSlsADBJobRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<CreateApsSlsADBJobRequest::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<CreateApsSlsADBJobRequest::Columns>) };
    inline vector<CreateApsSlsADBJobRequest::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<CreateApsSlsADBJobRequest::Columns>) };
    inline CreateApsSlsADBJobRequest& setColumns(const vector<CreateApsSlsADBJobRequest::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateApsSlsADBJobRequest& setColumns(vector<CreateApsSlsADBJobRequest::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsSlsADBJobRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline CreateApsSlsADBJobRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateApsSlsADBJobRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dirtyDataHandleMode Field Functions 
    bool hasDirtyDataHandleMode() const { return this->dirtyDataHandleMode_ != nullptr;};
    void deleteDirtyDataHandleMode() { this->dirtyDataHandleMode_ = nullptr;};
    inline string getDirtyDataHandleMode() const { DARABONBA_PTR_GET_DEFAULT(dirtyDataHandleMode_, "") };
    inline CreateApsSlsADBJobRequest& setDirtyDataHandleMode(string dirtyDataHandleMode) { DARABONBA_PTR_SET_VALUE(dirtyDataHandleMode_, dirtyDataHandleMode) };


    // dirtyDataProcessPattern Field Functions 
    bool hasDirtyDataProcessPattern() const { return this->dirtyDataProcessPattern_ != nullptr;};
    void deleteDirtyDataProcessPattern() { this->dirtyDataProcessPattern_ = nullptr;};
    inline string getDirtyDataProcessPattern() const { DARABONBA_PTR_GET_DEFAULT(dirtyDataProcessPattern_, "") };
    inline CreateApsSlsADBJobRequest& setDirtyDataProcessPattern(string dirtyDataProcessPattern) { DARABONBA_PTR_SET_VALUE(dirtyDataProcessPattern_, dirtyDataProcessPattern) };


    // exactlyOnce Field Functions 
    bool hasExactlyOnce() const { return this->exactlyOnce_ != nullptr;};
    void deleteExactlyOnce() { this->exactlyOnce_ = nullptr;};
    inline string getExactlyOnce() const { DARABONBA_PTR_GET_DEFAULT(exactlyOnce_, "") };
    inline CreateApsSlsADBJobRequest& setExactlyOnce(string exactlyOnce) { DARABONBA_PTR_SET_VALUE(exactlyOnce_, exactlyOnce) };


    // fullComputeUnit Field Functions 
    bool hasFullComputeUnit() const { return this->fullComputeUnit_ != nullptr;};
    void deleteFullComputeUnit() { this->fullComputeUnit_ = nullptr;};
    inline string getFullComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(fullComputeUnit_, "") };
    inline CreateApsSlsADBJobRequest& setFullComputeUnit(string fullComputeUnit) { DARABONBA_PTR_SET_VALUE(fullComputeUnit_, fullComputeUnit) };


    // hudiAdvancedConfig Field Functions 
    bool hasHudiAdvancedConfig() const { return this->hudiAdvancedConfig_ != nullptr;};
    void deleteHudiAdvancedConfig() { this->hudiAdvancedConfig_ = nullptr;};
    inline string getHudiAdvancedConfig() const { DARABONBA_PTR_GET_DEFAULT(hudiAdvancedConfig_, "") };
    inline CreateApsSlsADBJobRequest& setHudiAdvancedConfig(string hudiAdvancedConfig) { DARABONBA_PTR_SET_VALUE(hudiAdvancedConfig_, hudiAdvancedConfig) };


    // incrementalComputeUnit Field Functions 
    bool hasIncrementalComputeUnit() const { return this->incrementalComputeUnit_ != nullptr;};
    void deleteIncrementalComputeUnit() { this->incrementalComputeUnit_ = nullptr;};
    inline string getIncrementalComputeUnit() const { DARABONBA_PTR_GET_DEFAULT(incrementalComputeUnit_, "") };
    inline CreateApsSlsADBJobRequest& setIncrementalComputeUnit(string incrementalComputeUnit) { DARABONBA_PTR_SET_VALUE(incrementalComputeUnit_, incrementalComputeUnit) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline int64_t getLakehouseId() const { DARABONBA_PTR_GET_DEFAULT(lakehouseId_, 0L) };
    inline CreateApsSlsADBJobRequest& setLakehouseId(int64_t lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };


    // maxOffsetsPerTrigger Field Functions 
    bool hasMaxOffsetsPerTrigger() const { return this->maxOffsetsPerTrigger_ != nullptr;};
    void deleteMaxOffsetsPerTrigger() { this->maxOffsetsPerTrigger_ = nullptr;};
    inline int64_t getMaxOffsetsPerTrigger() const { DARABONBA_PTR_GET_DEFAULT(maxOffsetsPerTrigger_, 0L) };
    inline CreateApsSlsADBJobRequest& setMaxOffsetsPerTrigger(int64_t maxOffsetsPerTrigger) { DARABONBA_PTR_SET_VALUE(maxOffsetsPerTrigger_, maxOffsetsPerTrigger) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string getOssLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline CreateApsSlsADBJobRequest& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateApsSlsADBJobRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // partitionSpecs Field Functions 
    bool hasPartitionSpecs() const { return this->partitionSpecs_ != nullptr;};
    void deletePartitionSpecs() { this->partitionSpecs_ = nullptr;};
    inline const vector<Darabonba::Json> & getPartitionSpecs() const { DARABONBA_PTR_GET_CONST(partitionSpecs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getPartitionSpecs() { DARABONBA_PTR_GET(partitionSpecs_, vector<Darabonba::Json>) };
    inline CreateApsSlsADBJobRequest& setPartitionSpecs(const vector<Darabonba::Json> & partitionSpecs) { DARABONBA_PTR_SET_VALUE(partitionSpecs_, partitionSpecs) };
    inline CreateApsSlsADBJobRequest& setPartitionSpecs(vector<Darabonba::Json> && partitionSpecs) { DARABONBA_PTR_SET_RVALUE(partitionSpecs_, partitionSpecs) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateApsSlsADBJobRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // primaryKeyDefinition Field Functions 
    bool hasPrimaryKeyDefinition() const { return this->primaryKeyDefinition_ != nullptr;};
    void deletePrimaryKeyDefinition() { this->primaryKeyDefinition_ = nullptr;};
    inline string getPrimaryKeyDefinition() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyDefinition_, "") };
    inline CreateApsSlsADBJobRequest& setPrimaryKeyDefinition(string primaryKeyDefinition) { DARABONBA_PTR_SET_VALUE(primaryKeyDefinition_, primaryKeyDefinition) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateApsSlsADBJobRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsSlsADBJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline CreateApsSlsADBJobRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsSlsADBJobRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string getStartingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline CreateApsSlsADBJobRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // store Field Functions 
    bool hasStore() const { return this->store_ != nullptr;};
    void deleteStore() { this->store_ = nullptr;};
    inline string getStore() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
    inline CreateApsSlsADBJobRequest& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateApsSlsADBJobRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // targetGenerateRule Field Functions 
    bool hasTargetGenerateRule() const { return this->targetGenerateRule_ != nullptr;};
    void deleteTargetGenerateRule() { this->targetGenerateRule_ = nullptr;};
    inline string getTargetGenerateRule() const { DARABONBA_PTR_GET_DEFAULT(targetGenerateRule_, "") };
    inline CreateApsSlsADBJobRequest& setTargetGenerateRule(string targetGenerateRule) { DARABONBA_PTR_SET_VALUE(targetGenerateRule_, targetGenerateRule) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateApsSlsADBJobRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // unixTimestampConvert Field Functions 
    bool hasUnixTimestampConvert() const { return this->unixTimestampConvert_ != nullptr;};
    void deleteUnixTimestampConvert() { this->unixTimestampConvert_ = nullptr;};
    inline const CreateApsSlsADBJobRequest::UnixTimestampConvert & getUnixTimestampConvert() const { DARABONBA_PTR_GET_CONST(unixTimestampConvert_, CreateApsSlsADBJobRequest::UnixTimestampConvert) };
    inline CreateApsSlsADBJobRequest::UnixTimestampConvert getUnixTimestampConvert() { DARABONBA_PTR_GET(unixTimestampConvert_, CreateApsSlsADBJobRequest::UnixTimestampConvert) };
    inline CreateApsSlsADBJobRequest& setUnixTimestampConvert(const CreateApsSlsADBJobRequest::UnixTimestampConvert & unixTimestampConvert) { DARABONBA_PTR_SET_VALUE(unixTimestampConvert_, unixTimestampConvert) };
    inline CreateApsSlsADBJobRequest& setUnixTimestampConvert(CreateApsSlsADBJobRequest::UnixTimestampConvert && unixTimestampConvert) { DARABONBA_PTR_SET_RVALUE(unixTimestampConvert_, unixTimestampConvert) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateApsSlsADBJobRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline CreateApsSlsADBJobRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The name of the cross-account role.
    shared_ptr<string> acrossRole_ {};
    // The cross-account UID.
    shared_ptr<string> acrossUid_ {};
    // The advanced configurations.
    shared_ptr<string> advancedConfig_ {};
    // The information about columns.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateApsSlsADBJobRequest::Columns>> columns_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The data source ID.
    shared_ptr<int64_t> datasourceId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // The dirty data processing mode.
    // 
    // This parameter is required.
    shared_ptr<string> dirtyDataHandleMode_ {};
    // The dirty data processing mode.
    shared_ptr<string> dirtyDataProcessPattern_ {};
    // Specifies whether to enable the consistency check.
    shared_ptr<string> exactlyOnce_ {};
    // The number of full AnalyticDB compute units (ACUs).
    shared_ptr<string> fullComputeUnit_ {};
    // The advanced configurations of Hudi.
    shared_ptr<string> hudiAdvancedConfig_ {};
    // The number of increment ACUs.
    shared_ptr<string> incrementalComputeUnit_ {};
    // The lakehouse ID.
    shared_ptr<int64_t> lakehouseId_ {};
    // The latest offset.
    shared_ptr<int64_t> maxOffsetsPerTrigger_ {};
    // The Object Storage Service (OSS) URL.
    shared_ptr<string> ossLocation_ {};
    // The format of the output file.
    shared_ptr<string> outputFormat_ {};
    // The information about partition.
    shared_ptr<vector<Darabonba::Json>> partitionSpecs_ {};
    // The password of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    // The definition of the primary key.
    shared_ptr<string> primaryKeyDefinition_ {};
    // The name of the SLS project.
    shared_ptr<string> project_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the resource group.
    shared_ptr<string> resourceGroup_ {};
    // The region ID of the source cluster.
    shared_ptr<string> sourceRegionId_ {};
    // The start offset.
    // 
    // This parameter is required.
    shared_ptr<string> startingOffsets_ {};
    // The SLS Logstore.
    shared_ptr<string> store_ {};
    // The name of the table.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The rules for generating the destination database.
    shared_ptr<string> targetGenerateRule_ {};
    // The destination type.
    shared_ptr<string> targetType_ {};
    // The timestamp conversion.
    shared_ptr<CreateApsSlsADBJobRequest::UnixTimestampConvert> unixTimestampConvert_ {};
    // The name of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
    // The name of the workload.
    // 
    // This parameter is required.
    shared_ptr<string> workloadName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
