// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableInfoResponseBodyDataClusterInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetTableInfoResponseBodyDataNativeColumns.hpp>
#include <alibabacloud/models/GetTableInfoResponseBodyDataPartitionColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetTableInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(autoRefreshEnabled, autoRefreshEnabled_);
      DARABONBA_PTR_TO_JSON(clusterInfo, clusterInfo_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(createTableDDL, createTableDDL_);
      DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(fileNum, fileNum_);
      DARABONBA_PTR_TO_JSON(isExternalTable, isExternalTable_);
      DARABONBA_PTR_TO_JSON(isOutdated, isOutdated_);
      DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(lastDDLTime, lastDDLTime_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(materializedView, materializedView_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nativeColumns, nativeColumns_);
      DARABONBA_PTR_TO_JSON(odpsPropertiesRolearn, odpsPropertiesRolearn_);
      DARABONBA_PTR_TO_JSON(odpsSqlTextOptionFlushHeader, odpsSqlTextOptionFlushHeader_);
      DARABONBA_PTR_TO_JSON(odpsTextOptionHeaderLinesCount, odpsTextOptionHeaderLinesCount_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(partitionColumns, partitionColumns_);
      DARABONBA_PTR_TO_JSON(physicalSize, physicalSize_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(rewriteEnabled, rewriteEnabled_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(storageHandler, storageHandler_);
      DARABONBA_PTR_TO_JSON(tableLabel, tableLabel_);
      DARABONBA_PTR_TO_JSON(tablesotreTableName, tablesotreTableName_);
      DARABONBA_PTR_TO_JSON(tablestoreColumnsMapping, tablestoreColumnsMapping_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(viewText, viewText_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRefreshEnabled, autoRefreshEnabled_);
      DARABONBA_PTR_FROM_JSON(clusterInfo, clusterInfo_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(createTableDDL, createTableDDL_);
      DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(fileNum, fileNum_);
      DARABONBA_PTR_FROM_JSON(isExternalTable, isExternalTable_);
      DARABONBA_PTR_FROM_JSON(isOutdated, isOutdated_);
      DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(lastDDLTime, lastDDLTime_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(materializedView, materializedView_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nativeColumns, nativeColumns_);
      DARABONBA_PTR_FROM_JSON(odpsPropertiesRolearn, odpsPropertiesRolearn_);
      DARABONBA_PTR_FROM_JSON(odpsSqlTextOptionFlushHeader, odpsSqlTextOptionFlushHeader_);
      DARABONBA_PTR_FROM_JSON(odpsTextOptionHeaderLinesCount, odpsTextOptionHeaderLinesCount_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(partitionColumns, partitionColumns_);
      DARABONBA_PTR_FROM_JSON(physicalSize, physicalSize_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(rewriteEnabled, rewriteEnabled_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(storageHandler, storageHandler_);
      DARABONBA_PTR_FROM_JSON(tableLabel, tableLabel_);
      DARABONBA_PTR_FROM_JSON(tablesotreTableName, tablesotreTableName_);
      DARABONBA_PTR_FROM_JSON(tablestoreColumnsMapping, tablestoreColumnsMapping_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(viewText, viewText_);
    };
    GetTableInfoResponseBodyData() = default ;
    GetTableInfoResponseBodyData(const GetTableInfoResponseBodyData &) = default ;
    GetTableInfoResponseBodyData(GetTableInfoResponseBodyData &&) = default ;
    GetTableInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInfoResponseBodyData() = default ;
    GetTableInfoResponseBodyData& operator=(const GetTableInfoResponseBodyData &) = default ;
    GetTableInfoResponseBodyData& operator=(GetTableInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRefreshEnabled_ != nullptr
        && this->clusterInfo_ != nullptr && this->comment_ != nullptr && this->createTableDDL_ != nullptr && this->creationTime_ != nullptr && this->displayName_ != nullptr
        && this->fileNum_ != nullptr && this->isExternalTable_ != nullptr && this->isOutdated_ != nullptr && this->lastAccessTime_ != nullptr && this->lastDDLTime_ != nullptr
        && this->lastModifiedTime_ != nullptr && this->lifecycle_ != nullptr && this->location_ != nullptr && this->materializedView_ != nullptr && this->name_ != nullptr
        && this->nativeColumns_ != nullptr && this->odpsPropertiesRolearn_ != nullptr && this->odpsSqlTextOptionFlushHeader_ != nullptr && this->odpsTextOptionHeaderLinesCount_ != nullptr && this->owner_ != nullptr
        && this->partitionColumns_ != nullptr && this->physicalSize_ != nullptr && this->projectName_ != nullptr && this->rewriteEnabled_ != nullptr && this->schema_ != nullptr
        && this->size_ != nullptr && this->storageHandler_ != nullptr && this->tableLabel_ != nullptr && this->tablesotreTableName_ != nullptr && this->tablestoreColumnsMapping_ != nullptr
        && this->type_ != nullptr && this->viewText_ != nullptr; };
    // autoRefreshEnabled Field Functions 
    bool hasAutoRefreshEnabled() const { return this->autoRefreshEnabled_ != nullptr;};
    void deleteAutoRefreshEnabled() { this->autoRefreshEnabled_ = nullptr;};
    inline bool autoRefreshEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshEnabled_, false) };
    inline GetTableInfoResponseBodyData& setAutoRefreshEnabled(bool autoRefreshEnabled) { DARABONBA_PTR_SET_VALUE(autoRefreshEnabled_, autoRefreshEnabled) };


    // clusterInfo Field Functions 
    bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
    void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
    inline const Models::GetTableInfoResponseBodyDataClusterInfo & clusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, Models::GetTableInfoResponseBodyDataClusterInfo) };
    inline Models::GetTableInfoResponseBodyDataClusterInfo clusterInfo() { DARABONBA_PTR_GET(clusterInfo_, Models::GetTableInfoResponseBodyDataClusterInfo) };
    inline GetTableInfoResponseBodyData& setClusterInfo(const Models::GetTableInfoResponseBodyDataClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
    inline GetTableInfoResponseBodyData& setClusterInfo(Models::GetTableInfoResponseBodyDataClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetTableInfoResponseBodyData& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTableDDL Field Functions 
    bool hasCreateTableDDL() const { return this->createTableDDL_ != nullptr;};
    void deleteCreateTableDDL() { this->createTableDDL_ = nullptr;};
    inline string createTableDDL() const { DARABONBA_PTR_GET_DEFAULT(createTableDDL_, "") };
    inline GetTableInfoResponseBodyData& setCreateTableDDL(string createTableDDL) { DARABONBA_PTR_SET_VALUE(createTableDDL_, createTableDDL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline GetTableInfoResponseBodyData& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetTableInfoResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // fileNum Field Functions 
    bool hasFileNum() const { return this->fileNum_ != nullptr;};
    void deleteFileNum() { this->fileNum_ = nullptr;};
    inline int64_t fileNum() const { DARABONBA_PTR_GET_DEFAULT(fileNum_, 0L) };
    inline GetTableInfoResponseBodyData& setFileNum(int64_t fileNum) { DARABONBA_PTR_SET_VALUE(fileNum_, fileNum) };


    // isExternalTable Field Functions 
    bool hasIsExternalTable() const { return this->isExternalTable_ != nullptr;};
    void deleteIsExternalTable() { this->isExternalTable_ = nullptr;};
    inline bool isExternalTable() const { DARABONBA_PTR_GET_DEFAULT(isExternalTable_, false) };
    inline GetTableInfoResponseBodyData& setIsExternalTable(bool isExternalTable) { DARABONBA_PTR_SET_VALUE(isExternalTable_, isExternalTable) };


    // isOutdated Field Functions 
    bool hasIsOutdated() const { return this->isOutdated_ != nullptr;};
    void deleteIsOutdated() { this->isOutdated_ = nullptr;};
    inline bool isOutdated() const { DARABONBA_PTR_GET_DEFAULT(isOutdated_, false) };
    inline GetTableInfoResponseBodyData& setIsOutdated(bool isOutdated) { DARABONBA_PTR_SET_VALUE(isOutdated_, isOutdated) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline GetTableInfoResponseBodyData& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastDDLTime Field Functions 
    bool hasLastDDLTime() const { return this->lastDDLTime_ != nullptr;};
    void deleteLastDDLTime() { this->lastDDLTime_ = nullptr;};
    inline int64_t lastDDLTime() const { DARABONBA_PTR_GET_DEFAULT(lastDDLTime_, 0L) };
    inline GetTableInfoResponseBodyData& setLastDDLTime(int64_t lastDDLTime) { DARABONBA_PTR_SET_VALUE(lastDDLTime_, lastDDLTime) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline GetTableInfoResponseBodyData& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string lifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline GetTableInfoResponseBodyData& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetTableInfoResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // materializedView Field Functions 
    bool hasMaterializedView() const { return this->materializedView_ != nullptr;};
    void deleteMaterializedView() { this->materializedView_ = nullptr;};
    inline bool materializedView() const { DARABONBA_PTR_GET_DEFAULT(materializedView_, false) };
    inline GetTableInfoResponseBodyData& setMaterializedView(bool materializedView) { DARABONBA_PTR_SET_VALUE(materializedView_, materializedView) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTableInfoResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nativeColumns Field Functions 
    bool hasNativeColumns() const { return this->nativeColumns_ != nullptr;};
    void deleteNativeColumns() { this->nativeColumns_ = nullptr;};
    inline const vector<Models::GetTableInfoResponseBodyDataNativeColumns> & nativeColumns() const { DARABONBA_PTR_GET_CONST(nativeColumns_, vector<Models::GetTableInfoResponseBodyDataNativeColumns>) };
    inline vector<Models::GetTableInfoResponseBodyDataNativeColumns> nativeColumns() { DARABONBA_PTR_GET(nativeColumns_, vector<Models::GetTableInfoResponseBodyDataNativeColumns>) };
    inline GetTableInfoResponseBodyData& setNativeColumns(const vector<Models::GetTableInfoResponseBodyDataNativeColumns> & nativeColumns) { DARABONBA_PTR_SET_VALUE(nativeColumns_, nativeColumns) };
    inline GetTableInfoResponseBodyData& setNativeColumns(vector<Models::GetTableInfoResponseBodyDataNativeColumns> && nativeColumns) { DARABONBA_PTR_SET_RVALUE(nativeColumns_, nativeColumns) };


    // odpsPropertiesRolearn Field Functions 
    bool hasOdpsPropertiesRolearn() const { return this->odpsPropertiesRolearn_ != nullptr;};
    void deleteOdpsPropertiesRolearn() { this->odpsPropertiesRolearn_ = nullptr;};
    inline string odpsPropertiesRolearn() const { DARABONBA_PTR_GET_DEFAULT(odpsPropertiesRolearn_, "") };
    inline GetTableInfoResponseBodyData& setOdpsPropertiesRolearn(string odpsPropertiesRolearn) { DARABONBA_PTR_SET_VALUE(odpsPropertiesRolearn_, odpsPropertiesRolearn) };


    // odpsSqlTextOptionFlushHeader Field Functions 
    bool hasOdpsSqlTextOptionFlushHeader() const { return this->odpsSqlTextOptionFlushHeader_ != nullptr;};
    void deleteOdpsSqlTextOptionFlushHeader() { this->odpsSqlTextOptionFlushHeader_ = nullptr;};
    inline bool odpsSqlTextOptionFlushHeader() const { DARABONBA_PTR_GET_DEFAULT(odpsSqlTextOptionFlushHeader_, false) };
    inline GetTableInfoResponseBodyData& setOdpsSqlTextOptionFlushHeader(bool odpsSqlTextOptionFlushHeader) { DARABONBA_PTR_SET_VALUE(odpsSqlTextOptionFlushHeader_, odpsSqlTextOptionFlushHeader) };


    // odpsTextOptionHeaderLinesCount Field Functions 
    bool hasOdpsTextOptionHeaderLinesCount() const { return this->odpsTextOptionHeaderLinesCount_ != nullptr;};
    void deleteOdpsTextOptionHeaderLinesCount() { this->odpsTextOptionHeaderLinesCount_ = nullptr;};
    inline int64_t odpsTextOptionHeaderLinesCount() const { DARABONBA_PTR_GET_DEFAULT(odpsTextOptionHeaderLinesCount_, 0L) };
    inline GetTableInfoResponseBodyData& setOdpsTextOptionHeaderLinesCount(int64_t odpsTextOptionHeaderLinesCount) { DARABONBA_PTR_SET_VALUE(odpsTextOptionHeaderLinesCount_, odpsTextOptionHeaderLinesCount) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetTableInfoResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // partitionColumns Field Functions 
    bool hasPartitionColumns() const { return this->partitionColumns_ != nullptr;};
    void deletePartitionColumns() { this->partitionColumns_ = nullptr;};
    inline const vector<Models::GetTableInfoResponseBodyDataPartitionColumns> & partitionColumns() const { DARABONBA_PTR_GET_CONST(partitionColumns_, vector<Models::GetTableInfoResponseBodyDataPartitionColumns>) };
    inline vector<Models::GetTableInfoResponseBodyDataPartitionColumns> partitionColumns() { DARABONBA_PTR_GET(partitionColumns_, vector<Models::GetTableInfoResponseBodyDataPartitionColumns>) };
    inline GetTableInfoResponseBodyData& setPartitionColumns(const vector<Models::GetTableInfoResponseBodyDataPartitionColumns> & partitionColumns) { DARABONBA_PTR_SET_VALUE(partitionColumns_, partitionColumns) };
    inline GetTableInfoResponseBodyData& setPartitionColumns(vector<Models::GetTableInfoResponseBodyDataPartitionColumns> && partitionColumns) { DARABONBA_PTR_SET_RVALUE(partitionColumns_, partitionColumns) };


    // physicalSize Field Functions 
    bool hasPhysicalSize() const { return this->physicalSize_ != nullptr;};
    void deletePhysicalSize() { this->physicalSize_ = nullptr;};
    inline int64_t physicalSize() const { DARABONBA_PTR_GET_DEFAULT(physicalSize_, 0L) };
    inline GetTableInfoResponseBodyData& setPhysicalSize(int64_t physicalSize) { DARABONBA_PTR_SET_VALUE(physicalSize_, physicalSize) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetTableInfoResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // rewriteEnabled Field Functions 
    bool hasRewriteEnabled() const { return this->rewriteEnabled_ != nullptr;};
    void deleteRewriteEnabled() { this->rewriteEnabled_ = nullptr;};
    inline bool rewriteEnabled() const { DARABONBA_PTR_GET_DEFAULT(rewriteEnabled_, false) };
    inline GetTableInfoResponseBodyData& setRewriteEnabled(bool rewriteEnabled) { DARABONBA_PTR_SET_VALUE(rewriteEnabled_, rewriteEnabled) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetTableInfoResponseBodyData& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetTableInfoResponseBodyData& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // storageHandler Field Functions 
    bool hasStorageHandler() const { return this->storageHandler_ != nullptr;};
    void deleteStorageHandler() { this->storageHandler_ = nullptr;};
    inline string storageHandler() const { DARABONBA_PTR_GET_DEFAULT(storageHandler_, "") };
    inline GetTableInfoResponseBodyData& setStorageHandler(string storageHandler) { DARABONBA_PTR_SET_VALUE(storageHandler_, storageHandler) };


    // tableLabel Field Functions 
    bool hasTableLabel() const { return this->tableLabel_ != nullptr;};
    void deleteTableLabel() { this->tableLabel_ = nullptr;};
    inline string tableLabel() const { DARABONBA_PTR_GET_DEFAULT(tableLabel_, "") };
    inline GetTableInfoResponseBodyData& setTableLabel(string tableLabel) { DARABONBA_PTR_SET_VALUE(tableLabel_, tableLabel) };


    // tablesotreTableName Field Functions 
    bool hasTablesotreTableName() const { return this->tablesotreTableName_ != nullptr;};
    void deleteTablesotreTableName() { this->tablesotreTableName_ = nullptr;};
    inline string tablesotreTableName() const { DARABONBA_PTR_GET_DEFAULT(tablesotreTableName_, "") };
    inline GetTableInfoResponseBodyData& setTablesotreTableName(string tablesotreTableName) { DARABONBA_PTR_SET_VALUE(tablesotreTableName_, tablesotreTableName) };


    // tablestoreColumnsMapping Field Functions 
    bool hasTablestoreColumnsMapping() const { return this->tablestoreColumnsMapping_ != nullptr;};
    void deleteTablestoreColumnsMapping() { this->tablestoreColumnsMapping_ = nullptr;};
    inline string tablestoreColumnsMapping() const { DARABONBA_PTR_GET_DEFAULT(tablestoreColumnsMapping_, "") };
    inline GetTableInfoResponseBodyData& setTablestoreColumnsMapping(string tablestoreColumnsMapping) { DARABONBA_PTR_SET_VALUE(tablestoreColumnsMapping_, tablestoreColumnsMapping) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTableInfoResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // viewText Field Functions 
    bool hasViewText() const { return this->viewText_ != nullptr;};
    void deleteViewText() { this->viewText_ = nullptr;};
    inline string viewText() const { DARABONBA_PTR_GET_DEFAULT(viewText_, "") };
    inline GetTableInfoResponseBodyData& setViewText(string viewText) { DARABONBA_PTR_SET_VALUE(viewText_, viewText) };


  protected:
    // Indicates whether the materialized view is automatically refreshed. This response parameter is returned when type is set to materializedView.
    std::shared_ptr<bool> autoRefreshEnabled_ = nullptr;
    // The clustering attribute. This response parameter is returned when the table is a clustered table.
    std::shared_ptr<Models::GetTableInfoResponseBodyDataClusterInfo> clusterInfo_ = nullptr;
    // The comments of the table.
    std::shared_ptr<string> comment_ = nullptr;
    // DDL statement to create a table.
    std::shared_ptr<string> createTableDDL_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The display name.
    std::shared_ptr<string> displayName_ = nullptr;
    // The number of file of the table.
    std::shared_ptr<int64_t> fileNum_ = nullptr;
    // Indicates whether the table is an external table. This response parameter is returned when type is set to external.
    std::shared_ptr<bool> isExternalTable_ = nullptr;
    // Indicates whether data of the materialized view is invalid due to changes in the data of the source table. This response parameter is returned when type is set to materializedView.
    std::shared_ptr<bool> isOutdated_ = nullptr;
    // The time when data of the table or view was last accessed.
    std::shared_ptr<int64_t> lastAccessTime_ = nullptr;
    // The time when the data definition language (DDL) statement of the table or view was last modified.
    std::shared_ptr<int64_t> lastDDLTime_ = nullptr;
    // The time when data of the table or view was last modified.
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    // The lifecycle. Unit: days.
    std::shared_ptr<string> lifecycle_ = nullptr;
    // The path of the external table. This response parameter is returned when type is set to external.
    std::shared_ptr<string> location_ = nullptr;
    // Indicates whether the table or view is a [materialize view](https://www.alibabacloud.com/help/maxcompute/user-guide/materialized-view-operations).
    std::shared_ptr<bool> materializedView_ = nullptr;
    // The name of the table or view.
    std::shared_ptr<string> name_ = nullptr;
    // The field information.
    std::shared_ptr<vector<Models::GetTableInfoResponseBodyDataNativeColumns>> nativeColumns_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the role AliyunODPSDefaultRole in Resource Access Management (RAM). This response parameter is returned when type is set to external.
    std::shared_ptr<string> odpsPropertiesRolearn_ = nullptr;
    // Indicates whether the table header is ignored. This response parameter is returned when type is set to external.
    std::shared_ptr<bool> odpsSqlTextOptionFlushHeader_ = nullptr;
    // The first N rows that were ignored in the table header. This response parameter is returned when type is set to external.
    std::shared_ptr<int64_t> odpsTextOptionHeaderLinesCount_ = nullptr;
    // The account information of the table or view owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The information about partition key columns. This response parameter is returned only for partitioned tables.
    std::shared_ptr<vector<Models::GetTableInfoResponseBodyDataPartitionColumns>> partitionColumns_ = nullptr;
    // The physical size of the table.
    std::shared_ptr<int64_t> physicalSize_ = nullptr;
    // The name of the project to which the table or view belongs.
    std::shared_ptr<string> projectName_ = nullptr;
    // Indicates whether the query rewrite operation can be performed by using the materialized view. This response parameter is returned when type is set to materializedView.
    std::shared_ptr<bool> rewriteEnabled_ = nullptr;
    // The name of the schema to which the table or the view belongs.
    std::shared_ptr<string> schema_ = nullptr;
    // The data size of the non-partitioned table. If the table is a partitioned table, the system does not calculate the data size of the table. In this case, the value of this parameter is NULL. The PARTITIONS view includes the data size of each partition in a partitioned table. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The storage handler of the external table. This response parameter is returned when type is set to external.
    std::shared_ptr<string> storageHandler_ = nullptr;
    // The sensitivity-level label of the table. For more information, see [Label-based access control](https://www.alibabacloud.com/help/maxcompute/user-guide/label-based-access-control).
    std::shared_ptr<string> tableLabel_ = nullptr;
    // The name of the Tablestore table to be accessed. This response parameter is returned when type is set to external.
    std::shared_ptr<string> tablesotreTableName_ = nullptr;
    // The columns of the Tablestore table to be accessed, including the primary key column and attribute column. This response parameter is returned when type is set to external.
    std::shared_ptr<string> tablestoreColumnsMapping_ = nullptr;
    // The type of the table or view. Valid values:
    // 
    // *   **internal**: internal table
    // *   **external**: external table
    // *   **view**: view
    // *   **materializedView**: [materialize view](https://www.alibabacloud.com/help/maxcompute/user-guide/materialized-view-operations)
    std::shared_ptr<string> type_ = nullptr;
    // The statement that generates the view. This response parameter is returned when type is set to view.
    std::shared_ptr<string> viewText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
