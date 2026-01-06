// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlTableMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlTableMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlTableMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
    };
    DescribeAdbMySqlTableMetaResponseBody() = default ;
    DescribeAdbMySqlTableMetaResponseBody(const DescribeAdbMySqlTableMetaResponseBody &) = default ;
    DescribeAdbMySqlTableMetaResponseBody(DescribeAdbMySqlTableMetaResponseBody &&) = default ;
    DescribeAdbMySqlTableMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlTableMetaResponseBody() = default ;
    DescribeAdbMySqlTableMetaResponseBody& operator=(const DescribeAdbMySqlTableMetaResponseBody &) = default ;
    DescribeAdbMySqlTableMetaResponseBody& operator=(DescribeAdbMySqlTableMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableMeta& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DistributeColumn, distributeColumn_);
        DARABONBA_PTR_TO_JSON(DistributeType, distributeType_);
        DARABONBA_PTR_TO_JSON(IsAllIndex, isAllIndex_);
        DARABONBA_PTR_TO_JSON(IsDictEncode, isDictEncode_);
        DARABONBA_PTR_TO_JSON(IsFullTextDict, isFullTextDict_);
        DARABONBA_PTR_TO_JSON(IsHidden, isHidden_);
        DARABONBA_PTR_TO_JSON(PartitionColumn, partitionColumn_);
        DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
        DARABONBA_PTR_TO_JSON(PrimaryKeyColumn, primaryKeyColumn_);
        DARABONBA_PTR_TO_JSON(TableEngine, tableEngine_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
        DARABONBA_PTR_TO_JSON(TableType, tableType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TableMeta& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DistributeColumn, distributeColumn_);
        DARABONBA_PTR_FROM_JSON(DistributeType, distributeType_);
        DARABONBA_PTR_FROM_JSON(IsAllIndex, isAllIndex_);
        DARABONBA_PTR_FROM_JSON(IsDictEncode, isDictEncode_);
        DARABONBA_PTR_FROM_JSON(IsFullTextDict, isFullTextDict_);
        DARABONBA_PTR_FROM_JSON(IsHidden, isHidden_);
        DARABONBA_PTR_FROM_JSON(PartitionColumn, partitionColumn_);
        DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
        DARABONBA_PTR_FROM_JSON(PrimaryKeyColumn, primaryKeyColumn_);
        DARABONBA_PTR_FROM_JSON(TableEngine, tableEngine_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
        DARABONBA_PTR_FROM_JSON(TableType, tableType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TableMeta() = default ;
      TableMeta(const TableMeta &) = default ;
      TableMeta(TableMeta &&) = default ;
      TableMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableMeta() = default ;
      TableMeta& operator=(const TableMeta &) = default ;
      TableMeta& operator=(TableMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->distributeColumn_ == nullptr && this->distributeType_ == nullptr && this->isAllIndex_ == nullptr && this->isDictEncode_ == nullptr && this->isFullTextDict_ == nullptr
        && this->isHidden_ == nullptr && this->partitionColumn_ == nullptr && this->partitionType_ == nullptr && this->primaryKeyColumn_ == nullptr && this->tableEngine_ == nullptr
        && this->tableName_ == nullptr && this->tableSchema_ == nullptr && this->tableType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TableMeta& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // distributeColumn Field Functions 
      bool hasDistributeColumn() const { return this->distributeColumn_ != nullptr;};
      void deleteDistributeColumn() { this->distributeColumn_ = nullptr;};
      inline string getDistributeColumn() const { DARABONBA_PTR_GET_DEFAULT(distributeColumn_, "") };
      inline TableMeta& setDistributeColumn(string distributeColumn) { DARABONBA_PTR_SET_VALUE(distributeColumn_, distributeColumn) };


      // distributeType Field Functions 
      bool hasDistributeType() const { return this->distributeType_ != nullptr;};
      void deleteDistributeType() { this->distributeType_ = nullptr;};
      inline string getDistributeType() const { DARABONBA_PTR_GET_DEFAULT(distributeType_, "") };
      inline TableMeta& setDistributeType(string distributeType) { DARABONBA_PTR_SET_VALUE(distributeType_, distributeType) };


      // isAllIndex Field Functions 
      bool hasIsAllIndex() const { return this->isAllIndex_ != nullptr;};
      void deleteIsAllIndex() { this->isAllIndex_ = nullptr;};
      inline bool getIsAllIndex() const { DARABONBA_PTR_GET_DEFAULT(isAllIndex_, false) };
      inline TableMeta& setIsAllIndex(bool isAllIndex) { DARABONBA_PTR_SET_VALUE(isAllIndex_, isAllIndex) };


      // isDictEncode Field Functions 
      bool hasIsDictEncode() const { return this->isDictEncode_ != nullptr;};
      void deleteIsDictEncode() { this->isDictEncode_ = nullptr;};
      inline bool getIsDictEncode() const { DARABONBA_PTR_GET_DEFAULT(isDictEncode_, false) };
      inline TableMeta& setIsDictEncode(bool isDictEncode) { DARABONBA_PTR_SET_VALUE(isDictEncode_, isDictEncode) };


      // isFullTextDict Field Functions 
      bool hasIsFullTextDict() const { return this->isFullTextDict_ != nullptr;};
      void deleteIsFullTextDict() { this->isFullTextDict_ = nullptr;};
      inline bool getIsFullTextDict() const { DARABONBA_PTR_GET_DEFAULT(isFullTextDict_, false) };
      inline TableMeta& setIsFullTextDict(bool isFullTextDict) { DARABONBA_PTR_SET_VALUE(isFullTextDict_, isFullTextDict) };


      // isHidden Field Functions 
      bool hasIsHidden() const { return this->isHidden_ != nullptr;};
      void deleteIsHidden() { this->isHidden_ = nullptr;};
      inline bool getIsHidden() const { DARABONBA_PTR_GET_DEFAULT(isHidden_, false) };
      inline TableMeta& setIsHidden(bool isHidden) { DARABONBA_PTR_SET_VALUE(isHidden_, isHidden) };


      // partitionColumn Field Functions 
      bool hasPartitionColumn() const { return this->partitionColumn_ != nullptr;};
      void deletePartitionColumn() { this->partitionColumn_ = nullptr;};
      inline string getPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(partitionColumn_, "") };
      inline TableMeta& setPartitionColumn(string partitionColumn) { DARABONBA_PTR_SET_VALUE(partitionColumn_, partitionColumn) };


      // partitionType Field Functions 
      bool hasPartitionType() const { return this->partitionType_ != nullptr;};
      void deletePartitionType() { this->partitionType_ = nullptr;};
      inline string getPartitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
      inline TableMeta& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


      // primaryKeyColumn Field Functions 
      bool hasPrimaryKeyColumn() const { return this->primaryKeyColumn_ != nullptr;};
      void deletePrimaryKeyColumn() { this->primaryKeyColumn_ = nullptr;};
      inline string getPrimaryKeyColumn() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyColumn_, "") };
      inline TableMeta& setPrimaryKeyColumn(string primaryKeyColumn) { DARABONBA_PTR_SET_VALUE(primaryKeyColumn_, primaryKeyColumn) };


      // tableEngine Field Functions 
      bool hasTableEngine() const { return this->tableEngine_ != nullptr;};
      void deleteTableEngine() { this->tableEngine_ = nullptr;};
      inline string getTableEngine() const { DARABONBA_PTR_GET_DEFAULT(tableEngine_, "") };
      inline TableMeta& setTableEngine(string tableEngine) { DARABONBA_PTR_SET_VALUE(tableEngine_, tableEngine) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline TableMeta& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableSchema Field Functions 
      bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
      void deleteTableSchema() { this->tableSchema_ = nullptr;};
      inline string getTableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
      inline TableMeta& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


      // tableType Field Functions 
      bool hasTableType() const { return this->tableType_ != nullptr;};
      void deleteTableType() { this->tableType_ = nullptr;};
      inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
      inline TableMeta& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TableMeta& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the table was created.
      shared_ptr<string> createTime_ {};
      // The distribution key column.
      shared_ptr<string> distributeColumn_ {};
      // The distribution type.
      shared_ptr<string> distributeType_ {};
      // Indicates whether full-column indexes are used.
      shared_ptr<bool> isAllIndex_ {};
      // Indicates whether dictionary encoding is used.
      shared_ptr<bool> isDictEncode_ {};
      // Indicates whether full-text indexes are used.
      shared_ptr<bool> isFullTextDict_ {};
      // Indicates whether pages are hidden.
      // 
      // *   **false**
      // *   **true**
      shared_ptr<bool> isHidden_ {};
      // The partition key column.
      shared_ptr<string> partitionColumn_ {};
      // The type of the partition.
      shared_ptr<string> partitionType_ {};
      // The primary key column.
      shared_ptr<string> primaryKeyColumn_ {};
      // The table engine.
      shared_ptr<string> tableEngine_ {};
      // The name of the table.
      // 
      // **
      // 
      // ****
      shared_ptr<string> tableName_ {};
      // The database to which the table belongs.
      shared_ptr<string> tableSchema_ {};
      // The type of the table.
      shared_ptr<string> tableType_ {};
      // The time when the table was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->tableMeta_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlTableMetaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlTableMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlTableMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline const DescribeAdbMySqlTableMetaResponseBody::TableMeta & getTableMeta() const { DARABONBA_PTR_GET_CONST(tableMeta_, DescribeAdbMySqlTableMetaResponseBody::TableMeta) };
    inline DescribeAdbMySqlTableMetaResponseBody::TableMeta getTableMeta() { DARABONBA_PTR_GET(tableMeta_, DescribeAdbMySqlTableMetaResponseBody::TableMeta) };
    inline DescribeAdbMySqlTableMetaResponseBody& setTableMeta(const DescribeAdbMySqlTableMetaResponseBody::TableMeta & tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };
    inline DescribeAdbMySqlTableMetaResponseBody& setTableMeta(DescribeAdbMySqlTableMetaResponseBody::TableMeta && tableMeta) { DARABONBA_PTR_SET_RVALUE(tableMeta_, tableMeta) };


  protected:
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The queried table metadata.
    shared_ptr<DescribeAdbMySqlTableMetaResponseBody::TableMeta> tableMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
