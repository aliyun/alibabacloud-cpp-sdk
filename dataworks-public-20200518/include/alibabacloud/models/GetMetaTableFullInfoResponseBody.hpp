// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEFULLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEFULLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableFullInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableFullInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableFullInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableFullInfoResponseBody() = default ;
    GetMetaTableFullInfoResponseBody(const GetMetaTableFullInfoResponseBody &) = default ;
    GetMetaTableFullInfoResponseBody(GetMetaTableFullInfoResponseBody &&) = default ;
    GetMetaTableFullInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableFullInfoResponseBody() = default ;
    GetMetaTableFullInfoResponseBody& operator=(const GetMetaTableFullInfoResponseBody &) = default ;
    GetMetaTableFullInfoResponseBody& operator=(GetMetaTableFullInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      class ColumnList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(ColumnGuid, columnGuid_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(IsForeignKey, isForeignKey_);
          DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
          DARABONBA_PTR_TO_JSON(IsPrimaryKey, isPrimaryKey_);
          DARABONBA_PTR_TO_JSON(Position, position_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(ColumnGuid, columnGuid_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(IsForeignKey, isForeignKey_);
          DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
          DARABONBA_PTR_FROM_JSON(IsPrimaryKey, isPrimaryKey_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
        };
        ColumnList() = default ;
        ColumnList(const ColumnList &) = default ;
        ColumnList(ColumnList &&) = default ;
        ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnList() = default ;
        ColumnList& operator=(const ColumnList &) = default ;
        ColumnList& operator=(ColumnList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caption_ == nullptr
        && this->columnGuid_ == nullptr && this->columnName_ == nullptr && this->columnType_ == nullptr && this->comment_ == nullptr && this->isForeignKey_ == nullptr
        && this->isPartitionColumn_ == nullptr && this->isPrimaryKey_ == nullptr && this->position_ == nullptr; };
        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline ColumnList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // columnGuid Field Functions 
        bool hasColumnGuid() const { return this->columnGuid_ != nullptr;};
        void deleteColumnGuid() { this->columnGuid_ = nullptr;};
        inline string getColumnGuid() const { DARABONBA_PTR_GET_DEFAULT(columnGuid_, "") };
        inline ColumnList& setColumnGuid(string columnGuid) { DARABONBA_PTR_SET_VALUE(columnGuid_, columnGuid) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline ColumnList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline ColumnList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline ColumnList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // isForeignKey Field Functions 
        bool hasIsForeignKey() const { return this->isForeignKey_ != nullptr;};
        void deleteIsForeignKey() { this->isForeignKey_ = nullptr;};
        inline bool getIsForeignKey() const { DARABONBA_PTR_GET_DEFAULT(isForeignKey_, false) };
        inline ColumnList& setIsForeignKey(bool isForeignKey) { DARABONBA_PTR_SET_VALUE(isForeignKey_, isForeignKey) };


        // isPartitionColumn Field Functions 
        bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
        void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
        inline bool getIsPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
        inline ColumnList& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


        // isPrimaryKey Field Functions 
        bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
        void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
        inline bool getIsPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
        inline ColumnList& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
        inline ColumnList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      protected:
        // The description of the field.
        shared_ptr<string> caption_ {};
        // The unique identifier of the field.
        shared_ptr<string> columnGuid_ {};
        // The name of the field.
        shared_ptr<string> columnName_ {};
        // The data type of the field.
        shared_ptr<string> columnType_ {};
        // The remarks of the field.
        shared_ptr<string> comment_ {};
        // Indicates whether the field is a foreign key. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isForeignKey_ {};
        // Indicates whether the field is a partition field. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isPartitionColumn_ {};
        // Indicates whether the field is a primary key. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isPrimaryKey_ {};
        // The sequence number of the field.
        shared_ptr<int32_t> position_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->columnList_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->dataSize_ == nullptr && this->databaseName_ == nullptr
        && this->envType_ == nullptr && this->isVisible_ == nullptr && this->lastAccessTime_ == nullptr && this->lastDdlTime_ == nullptr && this->lastModifyTime_ == nullptr
        && this->lifeCycle_ == nullptr && this->location_ == nullptr && this->ownerId_ == nullptr && this->partitionKeys_ == nullptr && this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->schema_ == nullptr && this->tableGuid_ == nullptr && this->tableName_ == nullptr && this->tenantId_ == nullptr
        && this->totalColumnCount_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // columnList Field Functions 
      bool hasColumnList() const { return this->columnList_ != nullptr;};
      void deleteColumnList() { this->columnList_ = nullptr;};
      inline const vector<Data::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Data::ColumnList>) };
      inline vector<Data::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<Data::ColumnList>) };
      inline Data& setColumnList(const vector<Data::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
      inline Data& setColumnList(vector<Data::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


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


      // totalColumnCount Field Functions 
      bool hasTotalColumnCount() const { return this->totalColumnCount_ != nullptr;};
      void deleteTotalColumnCount() { this->totalColumnCount_ = nullptr;};
      inline int64_t getTotalColumnCount() const { DARABONBA_PTR_GET_DEFAULT(totalColumnCount_, 0L) };
      inline Data& setTotalColumnCount(int64_t totalColumnCount) { DARABONBA_PTR_SET_VALUE(totalColumnCount_, totalColumnCount) };


    protected:
      // The EMR cluster ID.
      shared_ptr<string> clusterId_ {};
      // The fields in the table.
      shared_ptr<vector<Data::ColumnList>> columnList_ {};
      // The comment on the table.
      shared_ptr<string> comment_ {};
      // The time when the table was created. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
      shared_ptr<int64_t> createTime_ {};
      // The size of the storage space that is consumed by the table. Unit: bytes.
      shared_ptr<int64_t> dataSize_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The type of the environment. Valid values:
      // 
      // *   0: indicates that the table resides in the development environment.
      // *   1: indicates that the table resides in the production environment.
      shared_ptr<int32_t> envType_ {};
      // The scope in which the table is visible. Valid values:
      // 
      // *   0: indicates that the table is visible to workspace members.
      // *   1: indicates that the table is visible to users within a tenant.
      // *   2: indicates that the table is visible to all tenants.
      // *   3: indicates that the table is visible only to the table owner.
      shared_ptr<int32_t> isVisible_ {};
      // The time when the table was last accessed. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
      shared_ptr<int64_t> lastAccessTime_ {};
      // The time when the schema of the table was last changed. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
      shared_ptr<int64_t> lastDdlTime_ {};
      // The time when the table was last updated. A timestamp is returned for this parameter. You can convert the timestamp to the related date based on the time zone that you use.
      shared_ptr<int64_t> lastModifyTime_ {};
      // The lifecycle of the table. Unit: days.
      shared_ptr<int32_t> lifeCycle_ {};
      // The storage path of the Hive table.
      shared_ptr<string> location_ {};
      // The ID of the table owner.
      shared_ptr<string> ownerId_ {};
      // The partition key column.
      shared_ptr<string> partitionKeys_ {};
      // The ID of the workspace to which the table belongs.
      shared_ptr<int64_t> projectId_ {};
      // The name of the workspace to which the table belongs.
      shared_ptr<string> projectName_ {};
      // The schema information of the table.
      shared_ptr<string> schema_ {};
      // The unique identifier of the table.
      shared_ptr<string> tableGuid_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
      // The total number of fields.
      shared_ptr<int64_t> totalColumnCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaTableFullInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaTableFullInfoResponseBody::Data) };
    inline GetMetaTableFullInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaTableFullInfoResponseBody::Data) };
    inline GetMetaTableFullInfoResponseBody& setData(const GetMetaTableFullInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaTableFullInfoResponseBody& setData(GetMetaTableFullInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableFullInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableFullInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaTableFullInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableFullInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableFullInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business data.
    shared_ptr<GetMetaTableFullInfoResponseBody::Data> data_ {};
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
