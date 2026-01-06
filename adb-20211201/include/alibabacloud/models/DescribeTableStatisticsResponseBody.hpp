// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESTATISTICSRESPONSEBODY_HPP_
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
  class DescribeTableStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaNames, schemaNames_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaNames, schemaNames_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTableStatisticsResponseBody() = default ;
    DescribeTableStatisticsResponseBody(const DescribeTableStatisticsResponseBody &) = default ;
    DescribeTableStatisticsResponseBody(DescribeTableStatisticsResponseBody &&) = default ;
    DescribeTableStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableStatisticsResponseBody() = default ;
    DescribeTableStatisticsResponseBody& operator=(const DescribeTableStatisticsResponseBody &) = default ;
    DescribeTableStatisticsResponseBody& operator=(DescribeTableStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(TableStatisticRecords, tableStatisticRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(TableStatisticRecords, tableStatisticRecords_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableStatisticRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableStatisticRecords& obj) { 
          DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
          DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
          DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
          DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
          DARABONBA_PTR_TO_JSON(OtherSize, otherSize_);
          DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
          DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
          DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        };
        friend void from_json(const Darabonba::Json& j, TableStatisticRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
          DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
          DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
          DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
          DARABONBA_PTR_FROM_JSON(OtherSize, otherSize_);
          DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
          DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
          DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        };
        TableStatisticRecords() = default ;
        TableStatisticRecords(const TableStatisticRecords &) = default ;
        TableStatisticRecords(TableStatisticRecords &&) = default ;
        TableStatisticRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableStatisticRecords() = default ;
        TableStatisticRecords& operator=(const TableStatisticRecords &) = default ;
        TableStatisticRecords& operator=(TableStatisticRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->coldDataSize_ == nullptr
        && this->dataSize_ == nullptr && this->hotDataSize_ == nullptr && this->indexSize_ == nullptr && this->otherSize_ == nullptr && this->partitionCount_ == nullptr
        && this->primaryKeyIndexSize_ == nullptr && this->rowCount_ == nullptr && this->schemaName_ == nullptr && this->spaceRatio_ == nullptr && this->tableName_ == nullptr
        && this->totalSize_ == nullptr; };
        // coldDataSize Field Functions 
        bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
        void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
        inline int64_t getColdDataSize() const { DARABONBA_PTR_GET_DEFAULT(coldDataSize_, 0L) };
        inline TableStatisticRecords& setColdDataSize(int64_t coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };


        // dataSize Field Functions 
        bool hasDataSize() const { return this->dataSize_ != nullptr;};
        void deleteDataSize() { this->dataSize_ = nullptr;};
        inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
        inline TableStatisticRecords& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


        // hotDataSize Field Functions 
        bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
        void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
        inline int64_t getHotDataSize() const { DARABONBA_PTR_GET_DEFAULT(hotDataSize_, 0L) };
        inline TableStatisticRecords& setHotDataSize(int64_t hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };


        // indexSize Field Functions 
        bool hasIndexSize() const { return this->indexSize_ != nullptr;};
        void deleteIndexSize() { this->indexSize_ = nullptr;};
        inline int64_t getIndexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
        inline TableStatisticRecords& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


        // otherSize Field Functions 
        bool hasOtherSize() const { return this->otherSize_ != nullptr;};
        void deleteOtherSize() { this->otherSize_ = nullptr;};
        inline int64_t getOtherSize() const { DARABONBA_PTR_GET_DEFAULT(otherSize_, 0L) };
        inline TableStatisticRecords& setOtherSize(int64_t otherSize) { DARABONBA_PTR_SET_VALUE(otherSize_, otherSize) };


        // partitionCount Field Functions 
        bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
        void deletePartitionCount() { this->partitionCount_ = nullptr;};
        inline int64_t getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0L) };
        inline TableStatisticRecords& setPartitionCount(int64_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


        // primaryKeyIndexSize Field Functions 
        bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
        void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
        inline int64_t getPrimaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
        inline TableStatisticRecords& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


        // rowCount Field Functions 
        bool hasRowCount() const { return this->rowCount_ != nullptr;};
        void deleteRowCount() { this->rowCount_ = nullptr;};
        inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
        inline TableStatisticRecords& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline TableStatisticRecords& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // spaceRatio Field Functions 
        bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
        void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
        inline double getSpaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
        inline TableStatisticRecords& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline TableStatisticRecords& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // totalSize Field Functions 
        bool hasTotalSize() const { return this->totalSize_ != nullptr;};
        void deleteTotalSize() { this->totalSize_ = nullptr;};
        inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
        inline TableStatisticRecords& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      protected:
        // The size of cold data. Unit: bytes.
        // 
        // >  This parameter is supported only for AnalyticDB for MySQL clusters of V3.1.3.4 or later.
        shared_ptr<int64_t> coldDataSize_ {};
        // The data size of the table. Unit: bytes.
        shared_ptr<int64_t> dataSize_ {};
        // The size of hot data. Unit: bytes.
        shared_ptr<int64_t> hotDataSize_ {};
        // The data size of indexes. Unit: bytes.
        shared_ptr<int64_t> indexSize_ {};
        // The data size of other data. Unit: bytes.
        shared_ptr<int64_t> otherSize_ {};
        // The number of partitions.
        shared_ptr<int64_t> partitionCount_ {};
        // The data size of the primary key index. Unit: bytes.
        shared_ptr<int64_t> primaryKeyIndexSize_ {};
        // The number of rows in the table.
        shared_ptr<int64_t> rowCount_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The percentage of the table size. Unit: %.
        // 
        // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
        shared_ptr<double> spaceRatio_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
        // The total data size of the table. Unit: bytes.
        // 
        // >  The following formulas can be used to calculate the total data size:
        // 
        // *   Formula 1: Total data size = Hot data size + Cold data size.
        // *   Formula 2: Total data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
        shared_ptr<int64_t> totalSize_ {};
      };

      virtual bool empty() const override { return this->tableStatisticRecords_ == nullptr; };
      // tableStatisticRecords Field Functions 
      bool hasTableStatisticRecords() const { return this->tableStatisticRecords_ != nullptr;};
      void deleteTableStatisticRecords() { this->tableStatisticRecords_ = nullptr;};
      inline const vector<Items::TableStatisticRecords> & getTableStatisticRecords() const { DARABONBA_PTR_GET_CONST(tableStatisticRecords_, vector<Items::TableStatisticRecords>) };
      inline vector<Items::TableStatisticRecords> getTableStatisticRecords() { DARABONBA_PTR_GET(tableStatisticRecords_, vector<Items::TableStatisticRecords>) };
      inline Items& setTableStatisticRecords(const vector<Items::TableStatisticRecords> & tableStatisticRecords) { DARABONBA_PTR_SET_VALUE(tableStatisticRecords_, tableStatisticRecords) };
      inline Items& setTableStatisticRecords(vector<Items::TableStatisticRecords> && tableStatisticRecords) { DARABONBA_PTR_SET_RVALUE(tableStatisticRecords_, tableStatisticRecords) };


    protected:
      shared_ptr<vector<Items::TableStatisticRecords>> tableStatisticRecords_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->schemaNames_ == nullptr
        && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeTableStatisticsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeTableStatisticsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeTableStatisticsResponseBody::Items) };
    inline DescribeTableStatisticsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeTableStatisticsResponseBody::Items) };
    inline DescribeTableStatisticsResponseBody& setItems(const DescribeTableStatisticsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTableStatisticsResponseBody& setItems(DescribeTableStatisticsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeTableStatisticsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeTableStatisticsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaNames Field Functions 
    bool hasSchemaNames() const { return this->schemaNames_ != nullptr;};
    void deleteSchemaNames() { this->schemaNames_ = nullptr;};
    inline string getSchemaNames() const { DARABONBA_PTR_GET_DEFAULT(schemaNames_, "") };
    inline DescribeTableStatisticsResponseBody& setSchemaNames(string schemaNames) { DARABONBA_PTR_SET_VALUE(schemaNames_, schemaNames) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeTableStatisticsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried table statistics.
    shared_ptr<DescribeTableStatisticsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The names of databases.
    shared_ptr<string> schemaNames_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
