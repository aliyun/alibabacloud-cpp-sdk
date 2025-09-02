// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEFULLINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEFULLINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaTableFullInfoResponseBodyDataColumnList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableFullInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableFullInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
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
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TotalColumnCount, totalColumnCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableFullInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
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
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TotalColumnCount, totalColumnCount_);
    };
    GetMetaTableFullInfoResponseBodyData() = default ;
    GetMetaTableFullInfoResponseBodyData(const GetMetaTableFullInfoResponseBodyData &) = default ;
    GetMetaTableFullInfoResponseBodyData(GetMetaTableFullInfoResponseBodyData &&) = default ;
    GetMetaTableFullInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableFullInfoResponseBodyData() = default ;
    GetMetaTableFullInfoResponseBodyData& operator=(const GetMetaTableFullInfoResponseBodyData &) = default ;
    GetMetaTableFullInfoResponseBodyData& operator=(GetMetaTableFullInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->columnList_ != nullptr && this->comment_ != nullptr && this->createTime_ != nullptr && this->dataSize_ != nullptr && this->databaseName_ != nullptr
        && this->envType_ != nullptr && this->isVisible_ != nullptr && this->lastAccessTime_ != nullptr && this->lastDdlTime_ != nullptr && this->lastModifyTime_ != nullptr
        && this->lifeCycle_ != nullptr && this->location_ != nullptr && this->ownerId_ != nullptr && this->partitionKeys_ != nullptr && this->projectId_ != nullptr
        && this->projectName_ != nullptr && this->schema_ != nullptr && this->tableGuid_ != nullptr && this->tableName_ != nullptr && this->tenantId_ != nullptr
        && this->totalColumnCount_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList>) };
    inline vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList> columnList() { DARABONBA_PTR_GET(columnList_, vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList>) };
    inline GetMetaTableFullInfoResponseBodyData& setColumnList(const vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline GetMetaTableFullInfoResponseBodyData& setColumnList(vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline GetMetaTableFullInfoResponseBodyData& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // isVisible Field Functions 
    bool hasIsVisible() const { return this->isVisible_ != nullptr;};
    void deleteIsVisible() { this->isVisible_ = nullptr;};
    inline int32_t isVisible() const { DARABONBA_PTR_GET_DEFAULT(isVisible_, 0) };
    inline GetMetaTableFullInfoResponseBodyData& setIsVisible(int32_t isVisible) { DARABONBA_PTR_SET_VALUE(isVisible_, isVisible) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline int64_t lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setLastDdlTime(int64_t lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline int64_t lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline int32_t lifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0) };
    inline GetMetaTableFullInfoResponseBodyData& setLifeCycle(int32_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline string partitionKeys() const { DARABONBA_PTR_GET_DEFAULT(partitionKeys_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setPartitionKeys(string partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaTableFullInfoResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // totalColumnCount Field Functions 
    bool hasTotalColumnCount() const { return this->totalColumnCount_ != nullptr;};
    void deleteTotalColumnCount() { this->totalColumnCount_ = nullptr;};
    inline int64_t totalColumnCount() const { DARABONBA_PTR_GET_DEFAULT(totalColumnCount_, 0L) };
    inline GetMetaTableFullInfoResponseBodyData& setTotalColumnCount(int64_t totalColumnCount) { DARABONBA_PTR_SET_VALUE(totalColumnCount_, totalColumnCount) };


  protected:
    // The EMR cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The fields in the table.
    std::shared_ptr<vector<Models::GetMetaTableFullInfoResponseBodyDataColumnList>> columnList_ = nullptr;
    // The comment on the table.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the table was created. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The size of the storage space that is consumed by the table. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The type of the environment. Valid values:
    // 
    // *   0: indicates that the table resides in the development environment.
    // *   1: indicates that the table resides in the production environment.
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The scope in which the table is visible. Valid values:
    // 
    // *   0: indicates that the table is visible to workspace members.
    // *   1: indicates that the table is visible to users within a tenant.
    // *   2: indicates that the table is visible to all tenants.
    // *   3: indicates that the table is visible only to the table owner.
    std::shared_ptr<int32_t> isVisible_ = nullptr;
    // The time when the table was last accessed. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
    std::shared_ptr<int64_t> lastAccessTime_ = nullptr;
    // The time when the schema of the table was last changed. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
    std::shared_ptr<int64_t> lastDdlTime_ = nullptr;
    // The time when the table was last updated. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
    std::shared_ptr<int64_t> lastModifyTime_ = nullptr;
    // The lifecycle of the table. Unit: days.
    std::shared_ptr<int32_t> lifeCycle_ = nullptr;
    // The storage path of the Hive table.
    std::shared_ptr<string> location_ = nullptr;
    // The ID of the table owner.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The partition key column.
    std::shared_ptr<string> partitionKeys_ = nullptr;
    // The ID of the workspace to which the table belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the workspace to which the table belongs.
    std::shared_ptr<string> projectName_ = nullptr;
    // The schema information of the table.
    std::shared_ptr<string> schema_ = nullptr;
    // The unique identifier of the table.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The total number of fields.
    std::shared_ptr<int64_t> totalColumnCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
