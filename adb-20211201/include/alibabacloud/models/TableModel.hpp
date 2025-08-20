// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEMODEL_HPP_
#define ALIBABACLOUD_MODELS_TABLEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldSchemaModel.hpp>
#include <alibabacloud/models/CstoreIndexModel.hpp>
#include <map>
#include <alibabacloud/models/StorageDescriptorModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class TableModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableModel& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveType, archiveType_);
      DARABONBA_PTR_TO_JSON(BlockSize, blockSize_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_TO_JSON(Cols, cols_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Compression, compression_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DictEncode, dictEncode_);
      DARABONBA_PTR_TO_JSON(DistributeColumns, distributeColumns_);
      DARABONBA_PTR_TO_JSON(DistributeType, distributeType_);
      DARABONBA_PTR_TO_JSON(EnableDfs, enableDfs_);
      DARABONBA_PTR_TO_JSON(HotPartitionCount, hotPartitionCount_);
      DARABONBA_PTR_TO_JSON(Indexes, indexes_);
      DARABONBA_PTR_TO_JSON(IsAllIndex, isAllIndex_);
      DARABONBA_PTR_TO_JSON(IsFulltextDict, isFulltextDict_);
      DARABONBA_PTR_TO_JSON(MaxColumnId, maxColumnId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PartitionColumn, partitionColumn_);
      DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_TO_JSON(PhysicalDatabaseName, physicalDatabaseName_);
      DARABONBA_PTR_TO_JSON(PhysicalTableName, physicalTableName_);
      DARABONBA_PTR_TO_JSON(PreviousVersion, previousVersion_);
      DARABONBA_PTR_TO_JSON(RawTableName, rawTableName_);
      DARABONBA_PTR_TO_JSON(RouteColumns, routeColumns_);
      DARABONBA_PTR_TO_JSON(RouteEffectiveColumn, routeEffectiveColumn_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(RtEngineType, rtEngineType_);
      DARABONBA_PTR_TO_JSON(RtIndexAll, rtIndexAll_);
      DARABONBA_PTR_TO_JSON(RtModeType, rtModeType_);
      DARABONBA_PTR_TO_JSON(Sd, sd_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_TO_JSON(SubpartitionColumn, subpartitionColumn_);
      DARABONBA_PTR_TO_JSON(SubpartitionCount, subpartitionCount_);
      DARABONBA_PTR_TO_JSON(SubpartitionType, subpartitionType_);
      DARABONBA_PTR_TO_JSON(TableEngineName, tableEngineName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(TblId, tblId_);
      DARABONBA_PTR_TO_JSON(Temporary, temporary_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(ViewExpandedText, viewExpandedText_);
      DARABONBA_PTR_TO_JSON(ViewOriginalText, viewOriginalText_);
      DARABONBA_PTR_TO_JSON(ViewSecurityMode, viewSecurityMode_);
    };
    friend void from_json(const Darabonba::Json& j, TableModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveType, archiveType_);
      DARABONBA_PTR_FROM_JSON(BlockSize, blockSize_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_FROM_JSON(Cols, cols_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Compression, compression_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DictEncode, dictEncode_);
      DARABONBA_PTR_FROM_JSON(DistributeColumns, distributeColumns_);
      DARABONBA_PTR_FROM_JSON(DistributeType, distributeType_);
      DARABONBA_PTR_FROM_JSON(EnableDfs, enableDfs_);
      DARABONBA_PTR_FROM_JSON(HotPartitionCount, hotPartitionCount_);
      DARABONBA_PTR_FROM_JSON(Indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(IsAllIndex, isAllIndex_);
      DARABONBA_PTR_FROM_JSON(IsFulltextDict, isFulltextDict_);
      DARABONBA_PTR_FROM_JSON(MaxColumnId, maxColumnId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PartitionColumn, partitionColumn_);
      DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_FROM_JSON(PhysicalDatabaseName, physicalDatabaseName_);
      DARABONBA_PTR_FROM_JSON(PhysicalTableName, physicalTableName_);
      DARABONBA_PTR_FROM_JSON(PreviousVersion, previousVersion_);
      DARABONBA_PTR_FROM_JSON(RawTableName, rawTableName_);
      DARABONBA_PTR_FROM_JSON(RouteColumns, routeColumns_);
      DARABONBA_PTR_FROM_JSON(RouteEffectiveColumn, routeEffectiveColumn_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(RtEngineType, rtEngineType_);
      DARABONBA_PTR_FROM_JSON(RtIndexAll, rtIndexAll_);
      DARABONBA_PTR_FROM_JSON(RtModeType, rtModeType_);
      DARABONBA_PTR_FROM_JSON(Sd, sd_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_FROM_JSON(SubpartitionColumn, subpartitionColumn_);
      DARABONBA_PTR_FROM_JSON(SubpartitionCount, subpartitionCount_);
      DARABONBA_PTR_FROM_JSON(SubpartitionType, subpartitionType_);
      DARABONBA_PTR_FROM_JSON(TableEngineName, tableEngineName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(TblId, tblId_);
      DARABONBA_PTR_FROM_JSON(Temporary, temporary_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(ViewExpandedText, viewExpandedText_);
      DARABONBA_PTR_FROM_JSON(ViewOriginalText, viewOriginalText_);
      DARABONBA_PTR_FROM_JSON(ViewSecurityMode, viewSecurityMode_);
    };
    TableModel() = default ;
    TableModel(const TableModel &) = default ;
    TableModel(TableModel &&) = default ;
    TableModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableModel() = default ;
    TableModel& operator=(const TableModel &) = default ;
    TableModel& operator=(TableModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveType_ != nullptr
        && this->blockSize_ != nullptr && this->bucket_ != nullptr && this->bucketCount_ != nullptr && this->cols_ != nullptr && this->comment_ != nullptr
        && this->compression_ != nullptr && this->createTime_ != nullptr && this->currentVersion_ != nullptr && this->dbName_ != nullptr && this->dictEncode_ != nullptr
        && this->distributeColumns_ != nullptr && this->distributeType_ != nullptr && this->enableDfs_ != nullptr && this->hotPartitionCount_ != nullptr && this->indexes_ != nullptr
        && this->isAllIndex_ != nullptr && this->isFulltextDict_ != nullptr && this->maxColumnId_ != nullptr && this->parameters_ != nullptr && this->partitionColumn_ != nullptr
        && this->partitionCount_ != nullptr && this->partitionKeys_ != nullptr && this->partitionType_ != nullptr && this->physicalDatabaseName_ != nullptr && this->physicalTableName_ != nullptr
        && this->previousVersion_ != nullptr && this->rawTableName_ != nullptr && this->routeColumns_ != nullptr && this->routeEffectiveColumn_ != nullptr && this->routeType_ != nullptr
        && this->rtEngineType_ != nullptr && this->rtIndexAll_ != nullptr && this->rtModeType_ != nullptr && this->sd_ != nullptr && this->storagePolicy_ != nullptr
        && this->subpartitionColumn_ != nullptr && this->subpartitionCount_ != nullptr && this->subpartitionType_ != nullptr && this->tableEngineName_ != nullptr && this->tableName_ != nullptr
        && this->tableType_ != nullptr && this->tblId_ != nullptr && this->temporary_ != nullptr && this->updateTime_ != nullptr && this->viewExpandedText_ != nullptr
        && this->viewOriginalText_ != nullptr && this->viewSecurityMode_ != nullptr; };
    // archiveType Field Functions 
    bool hasArchiveType() const { return this->archiveType_ != nullptr;};
    void deleteArchiveType() { this->archiveType_ = nullptr;};
    inline string archiveType() const { DARABONBA_PTR_GET_DEFAULT(archiveType_, "") };
    inline TableModel& setArchiveType(string archiveType) { DARABONBA_PTR_SET_VALUE(archiveType_, archiveType) };


    // blockSize Field Functions 
    bool hasBlockSize() const { return this->blockSize_ != nullptr;};
    void deleteBlockSize() { this->blockSize_ = nullptr;};
    inline int64_t blockSize() const { DARABONBA_PTR_GET_DEFAULT(blockSize_, 0L) };
    inline TableModel& setBlockSize(int64_t blockSize) { DARABONBA_PTR_SET_VALUE(blockSize_, blockSize) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline int64_t bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, 0L) };
    inline TableModel& setBucket(int64_t bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // bucketCount Field Functions 
    bool hasBucketCount() const { return this->bucketCount_ != nullptr;};
    void deleteBucketCount() { this->bucketCount_ = nullptr;};
    inline int64_t bucketCount() const { DARABONBA_PTR_GET_DEFAULT(bucketCount_, 0L) };
    inline TableModel& setBucketCount(int64_t bucketCount) { DARABONBA_PTR_SET_VALUE(bucketCount_, bucketCount) };


    // cols Field Functions 
    bool hasCols() const { return this->cols_ != nullptr;};
    void deleteCols() { this->cols_ = nullptr;};
    inline const vector<FieldSchemaModel> & cols() const { DARABONBA_PTR_GET_CONST(cols_, vector<FieldSchemaModel>) };
    inline vector<FieldSchemaModel> cols() { DARABONBA_PTR_GET(cols_, vector<FieldSchemaModel>) };
    inline TableModel& setCols(const vector<FieldSchemaModel> & cols) { DARABONBA_PTR_SET_VALUE(cols_, cols) };
    inline TableModel& setCols(vector<FieldSchemaModel> && cols) { DARABONBA_PTR_SET_RVALUE(cols_, cols) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline TableModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // compression Field Functions 
    bool hasCompression() const { return this->compression_ != nullptr;};
    void deleteCompression() { this->compression_ = nullptr;};
    inline string compression() const { DARABONBA_PTR_GET_DEFAULT(compression_, "") };
    inline TableModel& setCompression(string compression) { DARABONBA_PTR_SET_VALUE(compression_, compression) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline TableModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int64_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
    inline TableModel& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline TableModel& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dictEncode Field Functions 
    bool hasDictEncode() const { return this->dictEncode_ != nullptr;};
    void deleteDictEncode() { this->dictEncode_ = nullptr;};
    inline bool dictEncode() const { DARABONBA_PTR_GET_DEFAULT(dictEncode_, false) };
    inline TableModel& setDictEncode(bool dictEncode) { DARABONBA_PTR_SET_VALUE(dictEncode_, dictEncode) };


    // distributeColumns Field Functions 
    bool hasDistributeColumns() const { return this->distributeColumns_ != nullptr;};
    void deleteDistributeColumns() { this->distributeColumns_ = nullptr;};
    inline const vector<FieldSchemaModel> & distributeColumns() const { DARABONBA_PTR_GET_CONST(distributeColumns_, vector<FieldSchemaModel>) };
    inline vector<FieldSchemaModel> distributeColumns() { DARABONBA_PTR_GET(distributeColumns_, vector<FieldSchemaModel>) };
    inline TableModel& setDistributeColumns(const vector<FieldSchemaModel> & distributeColumns) { DARABONBA_PTR_SET_VALUE(distributeColumns_, distributeColumns) };
    inline TableModel& setDistributeColumns(vector<FieldSchemaModel> && distributeColumns) { DARABONBA_PTR_SET_RVALUE(distributeColumns_, distributeColumns) };


    // distributeType Field Functions 
    bool hasDistributeType() const { return this->distributeType_ != nullptr;};
    void deleteDistributeType() { this->distributeType_ = nullptr;};
    inline string distributeType() const { DARABONBA_PTR_GET_DEFAULT(distributeType_, "") };
    inline TableModel& setDistributeType(string distributeType) { DARABONBA_PTR_SET_VALUE(distributeType_, distributeType) };


    // enableDfs Field Functions 
    bool hasEnableDfs() const { return this->enableDfs_ != nullptr;};
    void deleteEnableDfs() { this->enableDfs_ = nullptr;};
    inline bool enableDfs() const { DARABONBA_PTR_GET_DEFAULT(enableDfs_, false) };
    inline TableModel& setEnableDfs(bool enableDfs) { DARABONBA_PTR_SET_VALUE(enableDfs_, enableDfs) };


    // hotPartitionCount Field Functions 
    bool hasHotPartitionCount() const { return this->hotPartitionCount_ != nullptr;};
    void deleteHotPartitionCount() { this->hotPartitionCount_ = nullptr;};
    inline int64_t hotPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(hotPartitionCount_, 0L) };
    inline TableModel& setHotPartitionCount(int64_t hotPartitionCount) { DARABONBA_PTR_SET_VALUE(hotPartitionCount_, hotPartitionCount) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<CstoreIndexModel> & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<CstoreIndexModel>) };
    inline vector<CstoreIndexModel> indexes() { DARABONBA_PTR_GET(indexes_, vector<CstoreIndexModel>) };
    inline TableModel& setIndexes(const vector<CstoreIndexModel> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline TableModel& setIndexes(vector<CstoreIndexModel> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // isAllIndex Field Functions 
    bool hasIsAllIndex() const { return this->isAllIndex_ != nullptr;};
    void deleteIsAllIndex() { this->isAllIndex_ = nullptr;};
    inline bool isAllIndex() const { DARABONBA_PTR_GET_DEFAULT(isAllIndex_, false) };
    inline TableModel& setIsAllIndex(bool isAllIndex) { DARABONBA_PTR_SET_VALUE(isAllIndex_, isAllIndex) };


    // isFulltextDict Field Functions 
    bool hasIsFulltextDict() const { return this->isFulltextDict_ != nullptr;};
    void deleteIsFulltextDict() { this->isFulltextDict_ = nullptr;};
    inline bool isFulltextDict() const { DARABONBA_PTR_GET_DEFAULT(isFulltextDict_, false) };
    inline TableModel& setIsFulltextDict(bool isFulltextDict) { DARABONBA_PTR_SET_VALUE(isFulltextDict_, isFulltextDict) };


    // maxColumnId Field Functions 
    bool hasMaxColumnId() const { return this->maxColumnId_ != nullptr;};
    void deleteMaxColumnId() { this->maxColumnId_ = nullptr;};
    inline int64_t maxColumnId() const { DARABONBA_PTR_GET_DEFAULT(maxColumnId_, 0L) };
    inline TableModel& setMaxColumnId(int64_t maxColumnId) { DARABONBA_PTR_SET_VALUE(maxColumnId_, maxColumnId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline TableModel& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline TableModel& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // partitionColumn Field Functions 
    bool hasPartitionColumn() const { return this->partitionColumn_ != nullptr;};
    void deletePartitionColumn() { this->partitionColumn_ = nullptr;};
    inline string partitionColumn() const { DARABONBA_PTR_GET_DEFAULT(partitionColumn_, "") };
    inline TableModel& setPartitionColumn(string partitionColumn) { DARABONBA_PTR_SET_VALUE(partitionColumn_, partitionColumn) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int64_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0L) };
    inline TableModel& setPartitionCount(int64_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline const vector<FieldSchemaModel> & partitionKeys() const { DARABONBA_PTR_GET_CONST(partitionKeys_, vector<FieldSchemaModel>) };
    inline vector<FieldSchemaModel> partitionKeys() { DARABONBA_PTR_GET(partitionKeys_, vector<FieldSchemaModel>) };
    inline TableModel& setPartitionKeys(const vector<FieldSchemaModel> & partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };
    inline TableModel& setPartitionKeys(vector<FieldSchemaModel> && partitionKeys) { DARABONBA_PTR_SET_RVALUE(partitionKeys_, partitionKeys) };


    // partitionType Field Functions 
    bool hasPartitionType() const { return this->partitionType_ != nullptr;};
    void deletePartitionType() { this->partitionType_ = nullptr;};
    inline string partitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
    inline TableModel& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


    // physicalDatabaseName Field Functions 
    bool hasPhysicalDatabaseName() const { return this->physicalDatabaseName_ != nullptr;};
    void deletePhysicalDatabaseName() { this->physicalDatabaseName_ = nullptr;};
    inline string physicalDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(physicalDatabaseName_, "") };
    inline TableModel& setPhysicalDatabaseName(string physicalDatabaseName) { DARABONBA_PTR_SET_VALUE(physicalDatabaseName_, physicalDatabaseName) };


    // physicalTableName Field Functions 
    bool hasPhysicalTableName() const { return this->physicalTableName_ != nullptr;};
    void deletePhysicalTableName() { this->physicalTableName_ = nullptr;};
    inline string physicalTableName() const { DARABONBA_PTR_GET_DEFAULT(physicalTableName_, "") };
    inline TableModel& setPhysicalTableName(string physicalTableName) { DARABONBA_PTR_SET_VALUE(physicalTableName_, physicalTableName) };


    // previousVersion Field Functions 
    bool hasPreviousVersion() const { return this->previousVersion_ != nullptr;};
    void deletePreviousVersion() { this->previousVersion_ = nullptr;};
    inline int64_t previousVersion() const { DARABONBA_PTR_GET_DEFAULT(previousVersion_, 0L) };
    inline TableModel& setPreviousVersion(int64_t previousVersion) { DARABONBA_PTR_SET_VALUE(previousVersion_, previousVersion) };


    // rawTableName Field Functions 
    bool hasRawTableName() const { return this->rawTableName_ != nullptr;};
    void deleteRawTableName() { this->rawTableName_ = nullptr;};
    inline string rawTableName() const { DARABONBA_PTR_GET_DEFAULT(rawTableName_, "") };
    inline TableModel& setRawTableName(string rawTableName) { DARABONBA_PTR_SET_VALUE(rawTableName_, rawTableName) };


    // routeColumns Field Functions 
    bool hasRouteColumns() const { return this->routeColumns_ != nullptr;};
    void deleteRouteColumns() { this->routeColumns_ = nullptr;};
    inline const vector<FieldSchemaModel> & routeColumns() const { DARABONBA_PTR_GET_CONST(routeColumns_, vector<FieldSchemaModel>) };
    inline vector<FieldSchemaModel> routeColumns() { DARABONBA_PTR_GET(routeColumns_, vector<FieldSchemaModel>) };
    inline TableModel& setRouteColumns(const vector<FieldSchemaModel> & routeColumns) { DARABONBA_PTR_SET_VALUE(routeColumns_, routeColumns) };
    inline TableModel& setRouteColumns(vector<FieldSchemaModel> && routeColumns) { DARABONBA_PTR_SET_RVALUE(routeColumns_, routeColumns) };


    // routeEffectiveColumn Field Functions 
    bool hasRouteEffectiveColumn() const { return this->routeEffectiveColumn_ != nullptr;};
    void deleteRouteEffectiveColumn() { this->routeEffectiveColumn_ = nullptr;};
    inline const FieldSchemaModel & routeEffectiveColumn() const { DARABONBA_PTR_GET_CONST(routeEffectiveColumn_, FieldSchemaModel) };
    inline FieldSchemaModel routeEffectiveColumn() { DARABONBA_PTR_GET(routeEffectiveColumn_, FieldSchemaModel) };
    inline TableModel& setRouteEffectiveColumn(const FieldSchemaModel & routeEffectiveColumn) { DARABONBA_PTR_SET_VALUE(routeEffectiveColumn_, routeEffectiveColumn) };
    inline TableModel& setRouteEffectiveColumn(FieldSchemaModel && routeEffectiveColumn) { DARABONBA_PTR_SET_RVALUE(routeEffectiveColumn_, routeEffectiveColumn) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline TableModel& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // rtEngineType Field Functions 
    bool hasRtEngineType() const { return this->rtEngineType_ != nullptr;};
    void deleteRtEngineType() { this->rtEngineType_ = nullptr;};
    inline string rtEngineType() const { DARABONBA_PTR_GET_DEFAULT(rtEngineType_, "") };
    inline TableModel& setRtEngineType(string rtEngineType) { DARABONBA_PTR_SET_VALUE(rtEngineType_, rtEngineType) };


    // rtIndexAll Field Functions 
    bool hasRtIndexAll() const { return this->rtIndexAll_ != nullptr;};
    void deleteRtIndexAll() { this->rtIndexAll_ = nullptr;};
    inline bool rtIndexAll() const { DARABONBA_PTR_GET_DEFAULT(rtIndexAll_, false) };
    inline TableModel& setRtIndexAll(bool rtIndexAll) { DARABONBA_PTR_SET_VALUE(rtIndexAll_, rtIndexAll) };


    // rtModeType Field Functions 
    bool hasRtModeType() const { return this->rtModeType_ != nullptr;};
    void deleteRtModeType() { this->rtModeType_ = nullptr;};
    inline string rtModeType() const { DARABONBA_PTR_GET_DEFAULT(rtModeType_, "") };
    inline TableModel& setRtModeType(string rtModeType) { DARABONBA_PTR_SET_VALUE(rtModeType_, rtModeType) };


    // sd Field Functions 
    bool hasSd() const { return this->sd_ != nullptr;};
    void deleteSd() { this->sd_ = nullptr;};
    inline const StorageDescriptorModel & sd() const { DARABONBA_PTR_GET_CONST(sd_, StorageDescriptorModel) };
    inline StorageDescriptorModel sd() { DARABONBA_PTR_GET(sd_, StorageDescriptorModel) };
    inline TableModel& setSd(const StorageDescriptorModel & sd) { DARABONBA_PTR_SET_VALUE(sd_, sd) };
    inline TableModel& setSd(StorageDescriptorModel && sd) { DARABONBA_PTR_SET_RVALUE(sd_, sd) };


    // storagePolicy Field Functions 
    bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
    void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
    inline string storagePolicy() const { DARABONBA_PTR_GET_DEFAULT(storagePolicy_, "") };
    inline TableModel& setStoragePolicy(string storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };


    // subpartitionColumn Field Functions 
    bool hasSubpartitionColumn() const { return this->subpartitionColumn_ != nullptr;};
    void deleteSubpartitionColumn() { this->subpartitionColumn_ = nullptr;};
    inline string subpartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(subpartitionColumn_, "") };
    inline TableModel& setSubpartitionColumn(string subpartitionColumn) { DARABONBA_PTR_SET_VALUE(subpartitionColumn_, subpartitionColumn) };


    // subpartitionCount Field Functions 
    bool hasSubpartitionCount() const { return this->subpartitionCount_ != nullptr;};
    void deleteSubpartitionCount() { this->subpartitionCount_ = nullptr;};
    inline int64_t subpartitionCount() const { DARABONBA_PTR_GET_DEFAULT(subpartitionCount_, 0L) };
    inline TableModel& setSubpartitionCount(int64_t subpartitionCount) { DARABONBA_PTR_SET_VALUE(subpartitionCount_, subpartitionCount) };


    // subpartitionType Field Functions 
    bool hasSubpartitionType() const { return this->subpartitionType_ != nullptr;};
    void deleteSubpartitionType() { this->subpartitionType_ = nullptr;};
    inline string subpartitionType() const { DARABONBA_PTR_GET_DEFAULT(subpartitionType_, "") };
    inline TableModel& setSubpartitionType(string subpartitionType) { DARABONBA_PTR_SET_VALUE(subpartitionType_, subpartitionType) };


    // tableEngineName Field Functions 
    bool hasTableEngineName() const { return this->tableEngineName_ != nullptr;};
    void deleteTableEngineName() { this->tableEngineName_ = nullptr;};
    inline string tableEngineName() const { DARABONBA_PTR_GET_DEFAULT(tableEngineName_, "") };
    inline TableModel& setTableEngineName(string tableEngineName) { DARABONBA_PTR_SET_VALUE(tableEngineName_, tableEngineName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline TableModel& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // tblId Field Functions 
    bool hasTblId() const { return this->tblId_ != nullptr;};
    void deleteTblId() { this->tblId_ = nullptr;};
    inline int64_t tblId() const { DARABONBA_PTR_GET_DEFAULT(tblId_, 0L) };
    inline TableModel& setTblId(int64_t tblId) { DARABONBA_PTR_SET_VALUE(tblId_, tblId) };


    // temporary Field Functions 
    bool hasTemporary() const { return this->temporary_ != nullptr;};
    void deleteTemporary() { this->temporary_ = nullptr;};
    inline bool temporary() const { DARABONBA_PTR_GET_DEFAULT(temporary_, false) };
    inline TableModel& setTemporary(bool temporary) { DARABONBA_PTR_SET_VALUE(temporary_, temporary) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline TableModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // viewExpandedText Field Functions 
    bool hasViewExpandedText() const { return this->viewExpandedText_ != nullptr;};
    void deleteViewExpandedText() { this->viewExpandedText_ = nullptr;};
    inline string viewExpandedText() const { DARABONBA_PTR_GET_DEFAULT(viewExpandedText_, "") };
    inline TableModel& setViewExpandedText(string viewExpandedText) { DARABONBA_PTR_SET_VALUE(viewExpandedText_, viewExpandedText) };


    // viewOriginalText Field Functions 
    bool hasViewOriginalText() const { return this->viewOriginalText_ != nullptr;};
    void deleteViewOriginalText() { this->viewOriginalText_ = nullptr;};
    inline string viewOriginalText() const { DARABONBA_PTR_GET_DEFAULT(viewOriginalText_, "") };
    inline TableModel& setViewOriginalText(string viewOriginalText) { DARABONBA_PTR_SET_VALUE(viewOriginalText_, viewOriginalText) };


    // viewSecurityMode Field Functions 
    bool hasViewSecurityMode() const { return this->viewSecurityMode_ != nullptr;};
    void deleteViewSecurityMode() { this->viewSecurityMode_ = nullptr;};
    inline string viewSecurityMode() const { DARABONBA_PTR_GET_DEFAULT(viewSecurityMode_, "") };
    inline TableModel& setViewSecurityMode(string viewSecurityMode) { DARABONBA_PTR_SET_VALUE(viewSecurityMode_, viewSecurityMode) };


  protected:
    std::shared_ptr<string> archiveType_ = nullptr;
    std::shared_ptr<int64_t> blockSize_ = nullptr;
    std::shared_ptr<int64_t> bucket_ = nullptr;
    std::shared_ptr<int64_t> bucketCount_ = nullptr;
    std::shared_ptr<vector<FieldSchemaModel>> cols_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> compression_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> currentVersion_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<bool> dictEncode_ = nullptr;
    std::shared_ptr<vector<FieldSchemaModel>> distributeColumns_ = nullptr;
    std::shared_ptr<string> distributeType_ = nullptr;
    std::shared_ptr<bool> enableDfs_ = nullptr;
    std::shared_ptr<int64_t> hotPartitionCount_ = nullptr;
    std::shared_ptr<vector<CstoreIndexModel>> indexes_ = nullptr;
    std::shared_ptr<bool> isAllIndex_ = nullptr;
    std::shared_ptr<bool> isFulltextDict_ = nullptr;
    std::shared_ptr<int64_t> maxColumnId_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<string> partitionColumn_ = nullptr;
    std::shared_ptr<int64_t> partitionCount_ = nullptr;
    std::shared_ptr<vector<FieldSchemaModel>> partitionKeys_ = nullptr;
    std::shared_ptr<string> partitionType_ = nullptr;
    std::shared_ptr<string> physicalDatabaseName_ = nullptr;
    std::shared_ptr<string> physicalTableName_ = nullptr;
    std::shared_ptr<int64_t> previousVersion_ = nullptr;
    std::shared_ptr<string> rawTableName_ = nullptr;
    std::shared_ptr<vector<FieldSchemaModel>> routeColumns_ = nullptr;
    std::shared_ptr<FieldSchemaModel> routeEffectiveColumn_ = nullptr;
    std::shared_ptr<string> routeType_ = nullptr;
    std::shared_ptr<string> rtEngineType_ = nullptr;
    std::shared_ptr<bool> rtIndexAll_ = nullptr;
    std::shared_ptr<string> rtModeType_ = nullptr;
    std::shared_ptr<StorageDescriptorModel> sd_ = nullptr;
    std::shared_ptr<string> storagePolicy_ = nullptr;
    std::shared_ptr<string> subpartitionColumn_ = nullptr;
    std::shared_ptr<int64_t> subpartitionCount_ = nullptr;
    std::shared_ptr<string> subpartitionType_ = nullptr;
    std::shared_ptr<string> tableEngineName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<int64_t> tblId_ = nullptr;
    std::shared_ptr<bool> temporary_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> viewExpandedText_ = nullptr;
    std::shared_ptr<string> viewOriginalText_ = nullptr;
    std::shared_ptr<string> viewSecurityMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
