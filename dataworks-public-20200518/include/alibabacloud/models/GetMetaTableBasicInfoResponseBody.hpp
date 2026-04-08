// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEBASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEBASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableBasicInfoResponseBody() = default ;
    GetMetaTableBasicInfoResponseBody(const GetMetaTableBasicInfoResponseBody &) = default ;
    GetMetaTableBasicInfoResponseBody(GetMetaTableBasicInfoResponseBody &&) = default ;
    GetMetaTableBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableBasicInfoResponseBody() = default ;
    GetMetaTableBasicInfoResponseBody& operator=(const GetMetaTableBasicInfoResponseBody &) = default ;
    GetMetaTableBasicInfoResponseBody& operator=(GetMetaTableBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->caption_ == nullptr
        && this->clusterId_ == nullptr && this->columnCount_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->dataSize_ == nullptr
        && this->databaseName_ == nullptr && this->envType_ == nullptr && this->favoriteCount_ == nullptr && this->isPartitionTable_ == nullptr && this->isView_ == nullptr
        && this->isVisible_ == nullptr && this->lastAccessTime_ == nullptr && this->lastDdlTime_ == nullptr && this->lastModifyTime_ == nullptr && this->lifeCycle_ == nullptr
        && this->location_ == nullptr && this->ownerId_ == nullptr && this->partitionKeys_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->readCount_ == nullptr && this->schema_ == nullptr && this->tableGuid_ == nullptr && this->tableName_ == nullptr && this->tenantId_ == nullptr
        && this->viewCount_ == nullptr; };
      // caption Field Functions 
      bool hasCaption() const { return this->caption_ != nullptr;};
      void deleteCaption() { this->caption_ = nullptr;};
      inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
      inline Data& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // columnCount Field Functions 
      bool hasColumnCount() const { return this->columnCount_ != nullptr;};
      void deleteColumnCount() { this->columnCount_ = nullptr;};
      inline int32_t getColumnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0) };
      inline Data& setColumnCount(int32_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSize Field Functions 
      bool hasDataSize() const { return this->dataSize_ != nullptr;};
      void deleteDataSize() { this->dataSize_ = nullptr;};
      inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
      inline Data& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Data& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline int32_t getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
      inline Data& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // favoriteCount Field Functions 
      bool hasFavoriteCount() const { return this->favoriteCount_ != nullptr;};
      void deleteFavoriteCount() { this->favoriteCount_ = nullptr;};
      inline int64_t getFavoriteCount() const { DARABONBA_PTR_GET_DEFAULT(favoriteCount_, 0L) };
      inline Data& setFavoriteCount(int64_t favoriteCount) { DARABONBA_PTR_SET_VALUE(favoriteCount_, favoriteCount) };


      // isPartitionTable Field Functions 
      bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
      void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
      inline bool getIsPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
      inline Data& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


      // isView Field Functions 
      bool hasIsView() const { return this->isView_ != nullptr;};
      void deleteIsView() { this->isView_ = nullptr;};
      inline bool getIsView() const { DARABONBA_PTR_GET_DEFAULT(isView_, false) };
      inline Data& setIsView(bool isView) { DARABONBA_PTR_SET_VALUE(isView_, isView) };


      // isVisible Field Functions 
      bool hasIsVisible() const { return this->isVisible_ != nullptr;};
      void deleteIsVisible() { this->isVisible_ = nullptr;};
      inline int32_t getIsVisible() const { DARABONBA_PTR_GET_DEFAULT(isVisible_, 0) };
      inline Data& setIsVisible(int32_t isVisible) { DARABONBA_PTR_SET_VALUE(isVisible_, isVisible) };


      // lastAccessTime Field Functions 
      bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
      void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
      inline int64_t getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
      inline Data& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


      // lastDdlTime Field Functions 
      bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
      void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
      inline int64_t getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, 0L) };
      inline Data& setLastDdlTime(int64_t lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline int64_t getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
      inline Data& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // lifeCycle Field Functions 
      bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
      void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
      inline int32_t getLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0) };
      inline Data& setLifeCycle(int32_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Data& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Data& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // partitionKeys Field Functions 
      bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
      void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
      inline string getPartitionKeys() const { DARABONBA_PTR_GET_DEFAULT(partitionKeys_, "") };
      inline Data& setPartitionKeys(string partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // readCount Field Functions 
      bool hasReadCount() const { return this->readCount_ != nullptr;};
      void deleteReadCount() { this->readCount_ = nullptr;};
      inline int64_t getReadCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
      inline Data& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Data& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // tableGuid Field Functions 
      bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
      void deleteTableGuid() { this->tableGuid_ = nullptr;};
      inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
      inline Data& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // viewCount Field Functions 
      bool hasViewCount() const { return this->viewCount_ != nullptr;};
      void deleteViewCount() { this->viewCount_ = nullptr;};
      inline int64_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
      inline Data& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


    protected:
      // The display name of the metatable.
      shared_ptr<string> caption_ {};
      // The ID of the EMR cluster.
      shared_ptr<string> clusterId_ {};
      // The number of fields.
      shared_ptr<int32_t> columnCount_ {};
      // The comment of the metatable.
      shared_ptr<string> comment_ {};
      // The time when the metatable was created.
      shared_ptr<int64_t> createTime_ {};
      // The size of storage space that is occupied by the metatable. Unit: bytes.
      shared_ptr<int64_t> dataSize_ {};
      // The name of the metadatabase.
      shared_ptr<string> databaseName_ {};
      // The type of the environment. Valid values:
      // 
      // *   0: development environment
      // *   1: production environment
      shared_ptr<int32_t> envType_ {};
      // The number of times the metatable was added to a favorite list. This parameter is returned only if you set the Extension parameter to true and takes effect only if you set the DataSourceType parameter to odps.
      shared_ptr<int64_t> favoriteCount_ {};
      // Indicates whether the metatable is a partitioned table. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> isPartitionTable_ {};
      // Indicates whether the metatable is a view. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> isView_ {};
      // The scope in which the metatable is visible. Valid values:
      // 
      // *   0: The metatable is visible to workspace members.
      // *   1: The metatable is visible to users within the tenant.
      // *   2: The metatable is visible to all tenants.
      // *   3: The metatable is visible only to the metatable owner.
      shared_ptr<int32_t> isVisible_ {};
      // The time when the metatable was last accessed.
      shared_ptr<int64_t> lastAccessTime_ {};
      // The time when the schema of the metatable was last changed.
      shared_ptr<int64_t> lastDdlTime_ {};
      // The time when the metatable was last updated.
      shared_ptr<int64_t> lastModifyTime_ {};
      // The lifecycle of the table. Unit: day.
      // 
      // >  If the lifecycle is not set for a MaxCompute table, the return value is 0, indicating that the table is permanently valid.
      shared_ptr<int32_t> lifeCycle_ {};
      // The storage path of the Hive metadatabase.
      shared_ptr<string> location_ {};
      // The ID of the metatable owner.
      shared_ptr<string> ownerId_ {};
      // The partition key of the Hive metatable.
      shared_ptr<string> partitionKeys_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The name of the workspace.
      shared_ptr<string> projectName_ {};
      // The number of times the metatable was read. This parameter is returned only if you set the Extension parameter to true and takes effect only if you set the DataSourceType parameter to odps.
      shared_ptr<int64_t> readCount_ {};
      // The schema information of the metatable. This parameter is returned if the three-layer model of MaxCompute is enabled.
      shared_ptr<string> schema_ {};
      // The GUID of the metatable.
      shared_ptr<string> tableGuid_ {};
      // The name of the metatable.
      shared_ptr<string> tableName_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
      // The number of times the metatable was viewed. This parameter is returned only if you set the Extension parameter to true and takes effect only if you set the DataSourceType parameter to odps.
      shared_ptr<int64_t> viewCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaTableBasicInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaTableBasicInfoResponseBody::Data) };
    inline GetMetaTableBasicInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaTableBasicInfoResponseBody::Data) };
    inline GetMetaTableBasicInfoResponseBody& setData(const GetMetaTableBasicInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaTableBasicInfoResponseBody& setData(GetMetaTableBasicInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableBasicInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableBasicInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaTableBasicInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableBasicInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business data.
    shared_ptr<GetMetaTableBasicInfoResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
