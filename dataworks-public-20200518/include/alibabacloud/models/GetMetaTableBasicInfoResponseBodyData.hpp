// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEBASICINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEBASICINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableBasicInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableBasicInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(FavoriteCount, favoriteCount_);
      DARABONBA_PTR_TO_JSON(IsPartitionTable, isPartitionTable_);
      DARABONBA_PTR_TO_JSON(IsView, isView_);
      DARABONBA_PTR_TO_JSON(IsVisible, isVisible_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(LastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableBasicInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(FavoriteCount, favoriteCount_);
      DARABONBA_PTR_FROM_JSON(IsPartitionTable, isPartitionTable_);
      DARABONBA_PTR_FROM_JSON(IsView, isView_);
      DARABONBA_PTR_FROM_JSON(IsVisible, isVisible_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(LastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
    };
    GetMetaTableBasicInfoResponseBodyData() = default ;
    GetMetaTableBasicInfoResponseBodyData(const GetMetaTableBasicInfoResponseBodyData &) = default ;
    GetMetaTableBasicInfoResponseBodyData(GetMetaTableBasicInfoResponseBodyData &&) = default ;
    GetMetaTableBasicInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableBasicInfoResponseBodyData() = default ;
    GetMetaTableBasicInfoResponseBodyData& operator=(const GetMetaTableBasicInfoResponseBodyData &) = default ;
    GetMetaTableBasicInfoResponseBodyData& operator=(GetMetaTableBasicInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caption_ != nullptr
        && this->clusterId_ != nullptr && this->columnCount_ != nullptr && this->comment_ != nullptr && this->createTime_ != nullptr && this->dataSize_ != nullptr
        && this->databaseName_ != nullptr && this->envType_ != nullptr && this->favoriteCount_ != nullptr && this->isPartitionTable_ != nullptr && this->isView_ != nullptr
        && this->isVisible_ != nullptr && this->lastAccessTime_ != nullptr && this->lastDdlTime_ != nullptr && this->lastModifyTime_ != nullptr && this->lifeCycle_ != nullptr
        && this->location_ != nullptr && this->ownerId_ != nullptr && this->partitionKeys_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr
        && this->readCount_ != nullptr && this->schema_ != nullptr && this->tableGuid_ != nullptr && this->tableName_ != nullptr && this->tenantId_ != nullptr
        && this->viewCount_ != nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // columnCount Field Functions 
    bool hasColumnCount() const { return this->columnCount_ != nullptr;};
    void deleteColumnCount() { this->columnCount_ = nullptr;};
    inline int32_t columnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0) };
    inline GetMetaTableBasicInfoResponseBodyData& setColumnCount(int32_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline GetMetaTableBasicInfoResponseBodyData& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // favoriteCount Field Functions 
    bool hasFavoriteCount() const { return this->favoriteCount_ != nullptr;};
    void deleteFavoriteCount() { this->favoriteCount_ = nullptr;};
    inline int64_t favoriteCount() const { DARABONBA_PTR_GET_DEFAULT(favoriteCount_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setFavoriteCount(int64_t favoriteCount) { DARABONBA_PTR_SET_VALUE(favoriteCount_, favoriteCount) };


    // isPartitionTable Field Functions 
    bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
    void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
    inline bool isPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
    inline GetMetaTableBasicInfoResponseBodyData& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


    // isView Field Functions 
    bool hasIsView() const { return this->isView_ != nullptr;};
    void deleteIsView() { this->isView_ = nullptr;};
    inline bool isView() const { DARABONBA_PTR_GET_DEFAULT(isView_, false) };
    inline GetMetaTableBasicInfoResponseBodyData& setIsView(bool isView) { DARABONBA_PTR_SET_VALUE(isView_, isView) };


    // isVisible Field Functions 
    bool hasIsVisible() const { return this->isVisible_ != nullptr;};
    void deleteIsVisible() { this->isVisible_ = nullptr;};
    inline int32_t isVisible() const { DARABONBA_PTR_GET_DEFAULT(isVisible_, 0) };
    inline GetMetaTableBasicInfoResponseBodyData& setIsVisible(int32_t isVisible) { DARABONBA_PTR_SET_VALUE(isVisible_, isVisible) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline int64_t lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setLastDdlTime(int64_t lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline int64_t lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline int32_t lifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0) };
    inline GetMetaTableBasicInfoResponseBodyData& setLifeCycle(int32_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline string partitionKeys() const { DARABONBA_PTR_GET_DEFAULT(partitionKeys_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setPartitionKeys(string partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // readCount Field Functions 
    bool hasReadCount() const { return this->readCount_ != nullptr;};
    void deleteReadCount() { this->readCount_ = nullptr;};
    inline int64_t readCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaTableBasicInfoResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // viewCount Field Functions 
    bool hasViewCount() const { return this->viewCount_ != nullptr;};
    void deleteViewCount() { this->viewCount_ = nullptr;};
    inline int64_t viewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
    inline GetMetaTableBasicInfoResponseBodyData& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


  protected:
    // The display name of the metatable.
    std::shared_ptr<string> caption_ = nullptr;
    // The ID of the EMR cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of fields.
    std::shared_ptr<int32_t> columnCount_ = nullptr;
    // The comment of the metatable.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the metatable was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The size of storage space that is occupied by the metatable. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The name of the metadatabase.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The type of the environment. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The number of times the metatable was added to a favorite list. This parameter is returned only if you set the Extension parameter to true and takes effect only if you set the DataSourceType parameter to odps.
    std::shared_ptr<int64_t> favoriteCount_ = nullptr;
    // Indicates whether the metatable is a partitioned table. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isPartitionTable_ = nullptr;
    // Indicates whether the metatable is a view. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isView_ = nullptr;
    // The scope in which the metatable is visible. Valid values:
    // 
    // *   0: The metatable is visible to workspace members.
    // *   1: The metatable is visible to users within the tenant.
    // *   2: The metatable is visible to all tenants.
    // *   3: The metatable is visible only to the metatable owner.
    std::shared_ptr<int32_t> isVisible_ = nullptr;
    // The time when the metatable was last accessed.
    std::shared_ptr<int64_t> lastAccessTime_ = nullptr;
    // The time when the schema of the metatable was last changed.
    std::shared_ptr<int64_t> lastDdlTime_ = nullptr;
    // The time when the metatable was last updated.
    std::shared_ptr<int64_t> lastModifyTime_ = nullptr;
    // The lifecycle of the table. Unit: day.
    // 
    // >  If the lifecycle is not set for a MaxCompute table, the return value is 0, indicating that the table is permanently valid.
    std::shared_ptr<int32_t> lifeCycle_ = nullptr;
    // The storage path of the Hive metadatabase.
    std::shared_ptr<string> location_ = nullptr;
    // The ID of the metatable owner.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The partition key of the Hive metatable.
    std::shared_ptr<string> partitionKeys_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> projectName_ = nullptr;
    // The number of times the metatable was read. This parameter is returned only if you set the Extension parameter to true and takes effect only if you set the DataSourceType parameter to odps.
    std::shared_ptr<int64_t> readCount_ = nullptr;
    // The schema information of the metatable. This parameter is returned if the three-layer model of MaxCompute is enabled.
    std::shared_ptr<string> schema_ = nullptr;
    // The GUID of the metatable.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the metatable.
    std::shared_ptr<string> tableName_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The number of times the metatable was viewed. This parameter is returned only if you set the Extension parameter to true and takes effect only if you set the DataSourceType parameter to odps.
    std::shared_ptr<int64_t> viewCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
