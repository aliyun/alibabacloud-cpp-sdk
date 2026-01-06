// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODY_HPP_
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
  class DescribeWorkerDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWorkerDetectionResponseBody() = default ;
    DescribeWorkerDetectionResponseBody(const DescribeWorkerDetectionResponseBody &) = default ;
    DescribeWorkerDetectionResponseBody(DescribeWorkerDetectionResponseBody &&) = default ;
    DescribeWorkerDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBody() = default ;
    DescribeWorkerDetectionResponseBody& operator=(const DescribeWorkerDetectionResponseBody &) = default ;
    DescribeWorkerDetectionResponseBody& operator=(DescribeWorkerDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionItems& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DetectionItems() = default ;
      DetectionItems(const DetectionItems &) = default ;
      DetectionItems(DetectionItems &&) = default ;
      DetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionItems() = default ;
      DetectionItems& operator=(const DetectionItems &) = default ;
      DetectionItems& operator=(DetectionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(OperatorAgg, operatorAgg_);
          DARABONBA_PTR_TO_JSON(OperatorDetails, operatorDetails_);
          DARABONBA_PTR_TO_JSON(PartitionedTables, partitionedTables_);
          DARABONBA_PTR_TO_JSON(SkewedTables, skewedTables_);
          DARABONBA_PTR_TO_JSON(TopAccessTables, topAccessTables_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(OperatorAgg, operatorAgg_);
          DARABONBA_PTR_FROM_JSON(OperatorDetails, operatorDetails_);
          DARABONBA_PTR_FROM_JSON(PartitionedTables, partitionedTables_);
          DARABONBA_PTR_FROM_JSON(SkewedTables, skewedTables_);
          DARABONBA_PTR_FROM_JSON(TopAccessTables, topAccessTables_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TopAccessTables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TopAccessTables& obj) { 
            DARABONBA_PTR_TO_JSON(MetricName, metricName_);
            DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
          };
          friend void from_json(const Darabonba::Json& j, TopAccessTables& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
            DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
          };
          TopAccessTables() = default ;
          TopAccessTables(const TopAccessTables &) = default ;
          TopAccessTables(TopAccessTables &&) = default ;
          TopAccessTables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TopAccessTables() = default ;
          TopAccessTables& operator=(const TopAccessTables &) = default ;
          TopAccessTables& operator=(TopAccessTables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SearchResults : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SearchResults& obj) { 
              DARABONBA_PTR_TO_JSON(AccessCount, accessCount_);
              DARABONBA_PTR_TO_JSON(AvgScanCost, avgScanCost_);
              DARABONBA_PTR_TO_JSON(AvgScanSize, avgScanSize_);
              DARABONBA_PTR_TO_JSON(MaxScanCost, maxScanCost_);
              DARABONBA_PTR_TO_JSON(MaxScanSize, maxScanSize_);
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, SearchResults& obj) { 
              DARABONBA_PTR_FROM_JSON(AccessCount, accessCount_);
              DARABONBA_PTR_FROM_JSON(AvgScanCost, avgScanCost_);
              DARABONBA_PTR_FROM_JSON(AvgScanSize, avgScanSize_);
              DARABONBA_PTR_FROM_JSON(MaxScanCost, maxScanCost_);
              DARABONBA_PTR_FROM_JSON(MaxScanSize, maxScanSize_);
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            SearchResults() = default ;
            SearchResults(const SearchResults &) = default ;
            SearchResults(SearchResults &&) = default ;
            SearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SearchResults() = default ;
            SearchResults& operator=(const SearchResults &) = default ;
            SearchResults& operator=(SearchResults &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->accessCount_ == nullptr
        && this->avgScanCost_ == nullptr && this->avgScanSize_ == nullptr && this->maxScanCost_ == nullptr && this->maxScanSize_ == nullptr && this->tableName_ == nullptr; };
            // accessCount Field Functions 
            bool hasAccessCount() const { return this->accessCount_ != nullptr;};
            void deleteAccessCount() { this->accessCount_ = nullptr;};
            inline int64_t getAccessCount() const { DARABONBA_PTR_GET_DEFAULT(accessCount_, 0L) };
            inline SearchResults& setAccessCount(int64_t accessCount) { DARABONBA_PTR_SET_VALUE(accessCount_, accessCount) };


            // avgScanCost Field Functions 
            bool hasAvgScanCost() const { return this->avgScanCost_ != nullptr;};
            void deleteAvgScanCost() { this->avgScanCost_ = nullptr;};
            inline double getAvgScanCost() const { DARABONBA_PTR_GET_DEFAULT(avgScanCost_, 0.0) };
            inline SearchResults& setAvgScanCost(double avgScanCost) { DARABONBA_PTR_SET_VALUE(avgScanCost_, avgScanCost) };


            // avgScanSize Field Functions 
            bool hasAvgScanSize() const { return this->avgScanSize_ != nullptr;};
            void deleteAvgScanSize() { this->avgScanSize_ = nullptr;};
            inline double getAvgScanSize() const { DARABONBA_PTR_GET_DEFAULT(avgScanSize_, 0.0) };
            inline SearchResults& setAvgScanSize(double avgScanSize) { DARABONBA_PTR_SET_VALUE(avgScanSize_, avgScanSize) };


            // maxScanCost Field Functions 
            bool hasMaxScanCost() const { return this->maxScanCost_ != nullptr;};
            void deleteMaxScanCost() { this->maxScanCost_ = nullptr;};
            inline int64_t getMaxScanCost() const { DARABONBA_PTR_GET_DEFAULT(maxScanCost_, 0L) };
            inline SearchResults& setMaxScanCost(int64_t maxScanCost) { DARABONBA_PTR_SET_VALUE(maxScanCost_, maxScanCost) };


            // maxScanSize Field Functions 
            bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
            void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
            inline int64_t getMaxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, 0L) };
            inline SearchResults& setMaxScanSize(int64_t maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
            inline SearchResults& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          protected:
            // The number of accesses to the table.
            shared_ptr<int64_t> accessCount_ {};
            // The average amount of time for scanning. Unit: milliseconds.
            shared_ptr<double> avgScanCost_ {};
            // The average data size for scanning. Unit: bytes.
            shared_ptr<double> avgScanSize_ {};
            // The maximum amount of time for scanning. Unit: milliseconds.
            shared_ptr<int64_t> maxScanCost_ {};
            // The maximum data size for scanning. Unit: bytes.
            shared_ptr<int64_t> maxScanSize_ {};
            // The name of the table.
            shared_ptr<string> tableName_ {};
          };

          virtual bool empty() const override { return this->metricName_ == nullptr
        && this->searchResults_ == nullptr; };
          // metricName Field Functions 
          bool hasMetricName() const { return this->metricName_ != nullptr;};
          void deleteMetricName() { this->metricName_ = nullptr;};
          inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
          inline TopAccessTables& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


          // searchResults Field Functions 
          bool hasSearchResults() const { return this->searchResults_ != nullptr;};
          void deleteSearchResults() { this->searchResults_ = nullptr;};
          inline const vector<TopAccessTables::SearchResults> & getSearchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<TopAccessTables::SearchResults>) };
          inline vector<TopAccessTables::SearchResults> getSearchResults() { DARABONBA_PTR_GET(searchResults_, vector<TopAccessTables::SearchResults>) };
          inline TopAccessTables& setSearchResults(const vector<TopAccessTables::SearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
          inline TopAccessTables& setSearchResults(vector<TopAccessTables::SearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


        protected:
          // The name of the detection metric.
          shared_ptr<string> metricName_ {};
          // The detection result items of table access.
          shared_ptr<vector<TopAccessTables::SearchResults>> searchResults_ {};
        };

        class SkewedTables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkewedTables& obj) { 
            DARABONBA_PTR_TO_JSON(DDL, DDL_);
            DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
            DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_TO_JSON(ShardSkewedRows, shardSkewedRows_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
            DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
            DARABONBA_PTR_TO_JSON(TotalLocalDataSize, totalLocalDataSize_);
            DARABONBA_PTR_TO_JSON(TotalPkSize, totalPkSize_);
            DARABONBA_PTR_TO_JSON(TotalRemoteDataSize, totalRemoteDataSize_);
            DARABONBA_PTR_TO_JSON(TotalRowCount, totalRowCount_);
          };
          friend void from_json(const Darabonba::Json& j, SkewedTables& obj) { 
            DARABONBA_PTR_FROM_JSON(DDL, DDL_);
            DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
            DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_FROM_JSON(ShardSkewedRows, shardSkewedRows_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
            DARABONBA_PTR_FROM_JSON(TotalLocalDataSize, totalLocalDataSize_);
            DARABONBA_PTR_FROM_JSON(TotalPkSize, totalPkSize_);
            DARABONBA_PTR_FROM_JSON(TotalRemoteDataSize, totalRemoteDataSize_);
            DARABONBA_PTR_FROM_JSON(TotalRowCount, totalRowCount_);
          };
          SkewedTables() = default ;
          SkewedTables(const SkewedTables &) = default ;
          SkewedTables(SkewedTables &&) = default ;
          SkewedTables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkewedTables() = default ;
          SkewedTables& operator=(const SkewedTables &) = default ;
          SkewedTables& operator=(SkewedTables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->DDL_ == nullptr
        && this->partitionCount_ == nullptr && this->schemaName_ == nullptr && this->shardSkewedRows_ == nullptr && this->tableName_ == nullptr && this->totalDataSize_ == nullptr
        && this->totalLocalDataSize_ == nullptr && this->totalPkSize_ == nullptr && this->totalRemoteDataSize_ == nullptr && this->totalRowCount_ == nullptr; };
          // DDL Field Functions 
          bool hasDDL() const { return this->DDL_ != nullptr;};
          void deleteDDL() { this->DDL_ = nullptr;};
          inline string getDDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, "") };
          inline SkewedTables& setDDL(string DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


          // partitionCount Field Functions 
          bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
          void deletePartitionCount() { this->partitionCount_ = nullptr;};
          inline int32_t getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
          inline SkewedTables& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


          // schemaName Field Functions 
          bool hasSchemaName() const { return this->schemaName_ != nullptr;};
          void deleteSchemaName() { this->schemaName_ = nullptr;};
          inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
          inline SkewedTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


          // shardSkewedRows Field Functions 
          bool hasShardSkewedRows() const { return this->shardSkewedRows_ != nullptr;};
          void deleteShardSkewedRows() { this->shardSkewedRows_ = nullptr;};
          inline string getShardSkewedRows() const { DARABONBA_PTR_GET_DEFAULT(shardSkewedRows_, "") };
          inline SkewedTables& setShardSkewedRows(string shardSkewedRows) { DARABONBA_PTR_SET_VALUE(shardSkewedRows_, shardSkewedRows) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline SkewedTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // totalDataSize Field Functions 
          bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
          void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
          inline int64_t getTotalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalDataSize_, 0L) };
          inline SkewedTables& setTotalDataSize(int64_t totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };


          // totalLocalDataSize Field Functions 
          bool hasTotalLocalDataSize() const { return this->totalLocalDataSize_ != nullptr;};
          void deleteTotalLocalDataSize() { this->totalLocalDataSize_ = nullptr;};
          inline string getTotalLocalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalLocalDataSize_, "") };
          inline SkewedTables& setTotalLocalDataSize(string totalLocalDataSize) { DARABONBA_PTR_SET_VALUE(totalLocalDataSize_, totalLocalDataSize) };


          // totalPkSize Field Functions 
          bool hasTotalPkSize() const { return this->totalPkSize_ != nullptr;};
          void deleteTotalPkSize() { this->totalPkSize_ = nullptr;};
          inline int64_t getTotalPkSize() const { DARABONBA_PTR_GET_DEFAULT(totalPkSize_, 0L) };
          inline SkewedTables& setTotalPkSize(int64_t totalPkSize) { DARABONBA_PTR_SET_VALUE(totalPkSize_, totalPkSize) };


          // totalRemoteDataSize Field Functions 
          bool hasTotalRemoteDataSize() const { return this->totalRemoteDataSize_ != nullptr;};
          void deleteTotalRemoteDataSize() { this->totalRemoteDataSize_ = nullptr;};
          inline int64_t getTotalRemoteDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalRemoteDataSize_, 0L) };
          inline SkewedTables& setTotalRemoteDataSize(int64_t totalRemoteDataSize) { DARABONBA_PTR_SET_VALUE(totalRemoteDataSize_, totalRemoteDataSize) };


          // totalRowCount Field Functions 
          bool hasTotalRowCount() const { return this->totalRowCount_ != nullptr;};
          void deleteTotalRowCount() { this->totalRowCount_ = nullptr;};
          inline int64_t getTotalRowCount() const { DARABONBA_PTR_GET_DEFAULT(totalRowCount_, 0L) };
          inline SkewedTables& setTotalRowCount(int64_t totalRowCount) { DARABONBA_PTR_SET_VALUE(totalRowCount_, totalRowCount) };


        protected:
          // The SQL statement that is used to create the table.
          shared_ptr<string> DDL_ {};
          // The number of partitions.
          shared_ptr<int32_t> partitionCount_ {};
          // The name of the database.
          shared_ptr<string> schemaName_ {};
          // The number of skewed rows in the table.
          shared_ptr<string> shardSkewedRows_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
          // The total data size of the table. Unit: bytes.
          shared_ptr<int64_t> totalDataSize_ {};
          // The size of hot data. Unit: bytes.
          shared_ptr<string> totalLocalDataSize_ {};
          // The data size of the primary key. Unit: bytes.
          shared_ptr<int64_t> totalPkSize_ {};
          // The size of cold data. Unit: bytes.
          shared_ptr<int64_t> totalRemoteDataSize_ {};
          // The number of rows in the table.
          shared_ptr<int64_t> totalRowCount_ {};
        };

        class PartitionedTables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PartitionedTables& obj) { 
            DARABONBA_PTR_TO_JSON(DDL, DDL_);
            DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
            DARABONBA_PTR_TO_JSON(PartitionIds, partitionIds_);
            DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
            DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
          };
          friend void from_json(const Darabonba::Json& j, PartitionedTables& obj) { 
            DARABONBA_PTR_FROM_JSON(DDL, DDL_);
            DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
            DARABONBA_PTR_FROM_JSON(PartitionIds, partitionIds_);
            DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
          };
          PartitionedTables() = default ;
          PartitionedTables(const PartitionedTables &) = default ;
          PartitionedTables(PartitionedTables &&) = default ;
          PartitionedTables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PartitionedTables() = default ;
          PartitionedTables& operator=(const PartitionedTables &) = default ;
          PartitionedTables& operator=(PartitionedTables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->DDL_ == nullptr
        && this->partitionCount_ == nullptr && this->partitionIds_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr && this->totalDataSize_ == nullptr; };
          // DDL Field Functions 
          bool hasDDL() const { return this->DDL_ != nullptr;};
          void deleteDDL() { this->DDL_ = nullptr;};
          inline string getDDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, "") };
          inline PartitionedTables& setDDL(string DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


          // partitionCount Field Functions 
          bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
          void deletePartitionCount() { this->partitionCount_ = nullptr;};
          inline string getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, "") };
          inline PartitionedTables& setPartitionCount(string partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


          // partitionIds Field Functions 
          bool hasPartitionIds() const { return this->partitionIds_ != nullptr;};
          void deletePartitionIds() { this->partitionIds_ = nullptr;};
          inline string getPartitionIds() const { DARABONBA_PTR_GET_DEFAULT(partitionIds_, "") };
          inline PartitionedTables& setPartitionIds(string partitionIds) { DARABONBA_PTR_SET_VALUE(partitionIds_, partitionIds) };


          // schemaName Field Functions 
          bool hasSchemaName() const { return this->schemaName_ != nullptr;};
          void deleteSchemaName() { this->schemaName_ = nullptr;};
          inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
          inline PartitionedTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline PartitionedTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // totalDataSize Field Functions 
          bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
          void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
          inline int64_t getTotalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalDataSize_, 0L) };
          inline PartitionedTables& setTotalDataSize(int64_t totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };


        protected:
          // The SQL statement that is used to create the table.
          shared_ptr<string> DDL_ {};
          // The number of partitions.
          shared_ptr<string> partitionCount_ {};
          // The ID of the improper partition.
          shared_ptr<string> partitionIds_ {};
          // The name of the database.
          shared_ptr<string> schemaName_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
          // The total data size of the table.
          shared_ptr<int64_t> totalDataSize_ {};
        };

        class OperatorDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperatorDetails& obj) { 
            DARABONBA_PTR_TO_JSON(MetricName, metricName_);
            DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
          };
          friend void from_json(const Darabonba::Json& j, OperatorDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
            DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
          };
          OperatorDetails() = default ;
          OperatorDetails(const OperatorDetails &) = default ;
          OperatorDetails(OperatorDetails &&) = default ;
          OperatorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperatorDetails() = default ;
          OperatorDetails& operator=(const OperatorDetails &) = default ;
          OperatorDetails& operator=(OperatorDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SearchResults : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SearchResults& obj) { 
              DARABONBA_PTR_TO_JSON(InputRows, inputRows_);
              DARABONBA_PTR_TO_JSON(InputSize, inputSize_);
              DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
              DARABONBA_PTR_TO_JSON(OperatorInfo, operatorInfo_);
              DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
              DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
              DARABONBA_PTR_TO_JSON(OutputSize, outputSize_);
              DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
              DARABONBA_PTR_TO_JSON(ProcessId, processId_);
              DARABONBA_PTR_TO_JSON(StageId, stageId_);
            };
            friend void from_json(const Darabonba::Json& j, SearchResults& obj) { 
              DARABONBA_PTR_FROM_JSON(InputRows, inputRows_);
              DARABONBA_PTR_FROM_JSON(InputSize, inputSize_);
              DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
              DARABONBA_PTR_FROM_JSON(OperatorInfo, operatorInfo_);
              DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
              DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
              DARABONBA_PTR_FROM_JSON(OutputSize, outputSize_);
              DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
              DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
              DARABONBA_PTR_FROM_JSON(StageId, stageId_);
            };
            SearchResults() = default ;
            SearchResults(const SearchResults &) = default ;
            SearchResults(SearchResults &&) = default ;
            SearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SearchResults() = default ;
            SearchResults& operator=(const SearchResults &) = default ;
            SearchResults& operator=(SearchResults &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->inputRows_ == nullptr
        && this->inputSize_ == nullptr && this->operatorCost_ == nullptr && this->operatorInfo_ == nullptr && this->operatorName_ == nullptr && this->outputRows_ == nullptr
        && this->outputSize_ == nullptr && this->peakMemory_ == nullptr && this->processId_ == nullptr && this->stageId_ == nullptr; };
            // inputRows Field Functions 
            bool hasInputRows() const { return this->inputRows_ != nullptr;};
            void deleteInputRows() { this->inputRows_ = nullptr;};
            inline int64_t getInputRows() const { DARABONBA_PTR_GET_DEFAULT(inputRows_, 0L) };
            inline SearchResults& setInputRows(int64_t inputRows) { DARABONBA_PTR_SET_VALUE(inputRows_, inputRows) };


            // inputSize Field Functions 
            bool hasInputSize() const { return this->inputSize_ != nullptr;};
            void deleteInputSize() { this->inputSize_ = nullptr;};
            inline int64_t getInputSize() const { DARABONBA_PTR_GET_DEFAULT(inputSize_, 0L) };
            inline SearchResults& setInputSize(int64_t inputSize) { DARABONBA_PTR_SET_VALUE(inputSize_, inputSize) };


            // operatorCost Field Functions 
            bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
            void deleteOperatorCost() { this->operatorCost_ = nullptr;};
            inline int64_t getOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
            inline SearchResults& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


            // operatorInfo Field Functions 
            bool hasOperatorInfo() const { return this->operatorInfo_ != nullptr;};
            void deleteOperatorInfo() { this->operatorInfo_ = nullptr;};
            inline string getOperatorInfo() const { DARABONBA_PTR_GET_DEFAULT(operatorInfo_, "") };
            inline SearchResults& setOperatorInfo(string operatorInfo) { DARABONBA_PTR_SET_VALUE(operatorInfo_, operatorInfo) };


            // operatorName Field Functions 
            bool hasOperatorName() const { return this->operatorName_ != nullptr;};
            void deleteOperatorName() { this->operatorName_ = nullptr;};
            inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
            inline SearchResults& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


            // outputRows Field Functions 
            bool hasOutputRows() const { return this->outputRows_ != nullptr;};
            void deleteOutputRows() { this->outputRows_ = nullptr;};
            inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
            inline SearchResults& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


            // outputSize Field Functions 
            bool hasOutputSize() const { return this->outputSize_ != nullptr;};
            void deleteOutputSize() { this->outputSize_ = nullptr;};
            inline int64_t getOutputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, 0L) };
            inline SearchResults& setOutputSize(int64_t outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


            // peakMemory Field Functions 
            bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
            void deletePeakMemory() { this->peakMemory_ = nullptr;};
            inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
            inline SearchResults& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


            // processId Field Functions 
            bool hasProcessId() const { return this->processId_ != nullptr;};
            void deleteProcessId() { this->processId_ = nullptr;};
            inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
            inline SearchResults& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


            // stageId Field Functions 
            bool hasStageId() const { return this->stageId_ != nullptr;};
            void deleteStageId() { this->stageId_ = nullptr;};
            inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
            inline SearchResults& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


          protected:
            // The number of rows input by the operator.
            shared_ptr<int64_t> inputRows_ {};
            // The amount of data input by the operator. Unit: bytes.
            shared_ptr<int64_t> inputSize_ {};
            // The total CPU time consumed by all operators in the stage, which is equivalent to the total CPU time of the stage. You can use this parameter to determine which parts of the stage consume a large amount of computing resources. Unit: milliseconds.
            shared_ptr<int64_t> operatorCost_ {};
            // The property information about the operator.
            shared_ptr<string> operatorInfo_ {};
            // The name of the operator.
            shared_ptr<string> operatorName_ {};
            // The number of rows output by the operator.
            shared_ptr<int64_t> outputRows_ {};
            // The amount of data output by the operator. Unit: bytes.
            shared_ptr<int64_t> outputSize_ {};
            // The peak memory. Unit: bytes.
            shared_ptr<int64_t> peakMemory_ {};
            // The query ID that can be used for diagnostics.
            shared_ptr<string> processId_ {};
            // The stage ID.
            shared_ptr<string> stageId_ {};
          };

          virtual bool empty() const override { return this->metricName_ == nullptr
        && this->searchResults_ == nullptr; };
          // metricName Field Functions 
          bool hasMetricName() const { return this->metricName_ != nullptr;};
          void deleteMetricName() { this->metricName_ = nullptr;};
          inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
          inline OperatorDetails& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


          // searchResults Field Functions 
          bool hasSearchResults() const { return this->searchResults_ != nullptr;};
          void deleteSearchResults() { this->searchResults_ = nullptr;};
          inline const vector<OperatorDetails::SearchResults> & getSearchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<OperatorDetails::SearchResults>) };
          inline vector<OperatorDetails::SearchResults> getSearchResults() { DARABONBA_PTR_GET(searchResults_, vector<OperatorDetails::SearchResults>) };
          inline OperatorDetails& setSearchResults(const vector<OperatorDetails::SearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
          inline OperatorDetails& setSearchResults(vector<OperatorDetails::SearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


        protected:
          // The name of the detection metric.
          shared_ptr<string> metricName_ {};
          // The detection result items of abnormal operators.
          shared_ptr<vector<OperatorDetails::SearchResults>> searchResults_ {};
        };

        class OperatorAgg : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperatorAgg& obj) { 
            DARABONBA_PTR_TO_JSON(MetricName, metricName_);
            DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
          };
          friend void from_json(const Darabonba::Json& j, OperatorAgg& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
            DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
          };
          OperatorAgg() = default ;
          OperatorAgg(const OperatorAgg &) = default ;
          OperatorAgg(OperatorAgg &&) = default ;
          OperatorAgg(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperatorAgg() = default ;
          OperatorAgg& operator=(const OperatorAgg &) = default ;
          OperatorAgg& operator=(OperatorAgg &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SearchResults : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SearchResults& obj) { 
              DARABONBA_PTR_TO_JSON(AvgValue, avgValue_);
              DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
              DARABONBA_PTR_TO_JSON(OperatorCount, operatorCount_);
              DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
              DARABONBA_PTR_TO_JSON(TotalValue, totalValue_);
            };
            friend void from_json(const Darabonba::Json& j, SearchResults& obj) { 
              DARABONBA_PTR_FROM_JSON(AvgValue, avgValue_);
              DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
              DARABONBA_PTR_FROM_JSON(OperatorCount, operatorCount_);
              DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
              DARABONBA_PTR_FROM_JSON(TotalValue, totalValue_);
            };
            SearchResults() = default ;
            SearchResults(const SearchResults &) = default ;
            SearchResults(SearchResults &&) = default ;
            SearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SearchResults() = default ;
            SearchResults& operator=(const SearchResults &) = default ;
            SearchResults& operator=(SearchResults &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->avgValue_ == nullptr
        && this->maxValue_ == nullptr && this->operatorCount_ == nullptr && this->operatorName_ == nullptr && this->totalValue_ == nullptr; };
            // avgValue Field Functions 
            bool hasAvgValue() const { return this->avgValue_ != nullptr;};
            void deleteAvgValue() { this->avgValue_ = nullptr;};
            inline double getAvgValue() const { DARABONBA_PTR_GET_DEFAULT(avgValue_, 0.0) };
            inline SearchResults& setAvgValue(double avgValue) { DARABONBA_PTR_SET_VALUE(avgValue_, avgValue) };


            // maxValue Field Functions 
            bool hasMaxValue() const { return this->maxValue_ != nullptr;};
            void deleteMaxValue() { this->maxValue_ = nullptr;};
            inline int64_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0L) };
            inline SearchResults& setMaxValue(int64_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


            // operatorCount Field Functions 
            bool hasOperatorCount() const { return this->operatorCount_ != nullptr;};
            void deleteOperatorCount() { this->operatorCount_ = nullptr;};
            inline int64_t getOperatorCount() const { DARABONBA_PTR_GET_DEFAULT(operatorCount_, 0L) };
            inline SearchResults& setOperatorCount(int64_t operatorCount) { DARABONBA_PTR_SET_VALUE(operatorCount_, operatorCount) };


            // operatorName Field Functions 
            bool hasOperatorName() const { return this->operatorName_ != nullptr;};
            void deleteOperatorName() { this->operatorName_ = nullptr;};
            inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
            inline SearchResults& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


            // totalValue Field Functions 
            bool hasTotalValue() const { return this->totalValue_ != nullptr;};
            void deleteTotalValue() { this->totalValue_ = nullptr;};
            inline int64_t getTotalValue() const { DARABONBA_PTR_GET_DEFAULT(totalValue_, 0L) };
            inline SearchResults& setTotalValue(int64_t totalValue) { DARABONBA_PTR_SET_VALUE(totalValue_, totalValue) };


          protected:
            // The average value of the operator metric.
            shared_ptr<double> avgValue_ {};
            // The maximum value of the operator metric.
            shared_ptr<int64_t> maxValue_ {};
            // The number of occurrences of the operator.
            shared_ptr<int64_t> operatorCount_ {};
            // The name of the operator.
            shared_ptr<string> operatorName_ {};
            // The cumulative value of the operator metric.
            shared_ptr<int64_t> totalValue_ {};
          };

          virtual bool empty() const override { return this->metricName_ == nullptr
        && this->searchResults_ == nullptr; };
          // metricName Field Functions 
          bool hasMetricName() const { return this->metricName_ != nullptr;};
          void deleteMetricName() { this->metricName_ = nullptr;};
          inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
          inline OperatorAgg& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


          // searchResults Field Functions 
          bool hasSearchResults() const { return this->searchResults_ != nullptr;};
          void deleteSearchResults() { this->searchResults_ = nullptr;};
          inline const vector<OperatorAgg::SearchResults> & getSearchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<OperatorAgg::SearchResults>) };
          inline vector<OperatorAgg::SearchResults> getSearchResults() { DARABONBA_PTR_GET(searchResults_, vector<OperatorAgg::SearchResults>) };
          inline OperatorAgg& setSearchResults(const vector<OperatorAgg::SearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
          inline OperatorAgg& setSearchResults(vector<OperatorAgg::SearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


        protected:
          // The detection result items of operator metric aggregation.
          shared_ptr<string> metricName_ {};
          // The detection result items of operator metric aggregation.
          shared_ptr<vector<OperatorAgg::SearchResults>> searchResults_ {};
        };

        virtual bool empty() const override { return this->operatorAgg_ == nullptr
        && this->operatorDetails_ == nullptr && this->partitionedTables_ == nullptr && this->skewedTables_ == nullptr && this->topAccessTables_ == nullptr; };
        // operatorAgg Field Functions 
        bool hasOperatorAgg() const { return this->operatorAgg_ != nullptr;};
        void deleteOperatorAgg() { this->operatorAgg_ = nullptr;};
        inline const vector<Results::OperatorAgg> & getOperatorAgg() const { DARABONBA_PTR_GET_CONST(operatorAgg_, vector<Results::OperatorAgg>) };
        inline vector<Results::OperatorAgg> getOperatorAgg() { DARABONBA_PTR_GET(operatorAgg_, vector<Results::OperatorAgg>) };
        inline Results& setOperatorAgg(const vector<Results::OperatorAgg> & operatorAgg) { DARABONBA_PTR_SET_VALUE(operatorAgg_, operatorAgg) };
        inline Results& setOperatorAgg(vector<Results::OperatorAgg> && operatorAgg) { DARABONBA_PTR_SET_RVALUE(operatorAgg_, operatorAgg) };


        // operatorDetails Field Functions 
        bool hasOperatorDetails() const { return this->operatorDetails_ != nullptr;};
        void deleteOperatorDetails() { this->operatorDetails_ = nullptr;};
        inline const vector<Results::OperatorDetails> & getOperatorDetails() const { DARABONBA_PTR_GET_CONST(operatorDetails_, vector<Results::OperatorDetails>) };
        inline vector<Results::OperatorDetails> getOperatorDetails() { DARABONBA_PTR_GET(operatorDetails_, vector<Results::OperatorDetails>) };
        inline Results& setOperatorDetails(const vector<Results::OperatorDetails> & operatorDetails) { DARABONBA_PTR_SET_VALUE(operatorDetails_, operatorDetails) };
        inline Results& setOperatorDetails(vector<Results::OperatorDetails> && operatorDetails) { DARABONBA_PTR_SET_RVALUE(operatorDetails_, operatorDetails) };


        // partitionedTables Field Functions 
        bool hasPartitionedTables() const { return this->partitionedTables_ != nullptr;};
        void deletePartitionedTables() { this->partitionedTables_ = nullptr;};
        inline const vector<Results::PartitionedTables> & getPartitionedTables() const { DARABONBA_PTR_GET_CONST(partitionedTables_, vector<Results::PartitionedTables>) };
        inline vector<Results::PartitionedTables> getPartitionedTables() { DARABONBA_PTR_GET(partitionedTables_, vector<Results::PartitionedTables>) };
        inline Results& setPartitionedTables(const vector<Results::PartitionedTables> & partitionedTables) { DARABONBA_PTR_SET_VALUE(partitionedTables_, partitionedTables) };
        inline Results& setPartitionedTables(vector<Results::PartitionedTables> && partitionedTables) { DARABONBA_PTR_SET_RVALUE(partitionedTables_, partitionedTables) };


        // skewedTables Field Functions 
        bool hasSkewedTables() const { return this->skewedTables_ != nullptr;};
        void deleteSkewedTables() { this->skewedTables_ = nullptr;};
        inline const vector<Results::SkewedTables> & getSkewedTables() const { DARABONBA_PTR_GET_CONST(skewedTables_, vector<Results::SkewedTables>) };
        inline vector<Results::SkewedTables> getSkewedTables() { DARABONBA_PTR_GET(skewedTables_, vector<Results::SkewedTables>) };
        inline Results& setSkewedTables(const vector<Results::SkewedTables> & skewedTables) { DARABONBA_PTR_SET_VALUE(skewedTables_, skewedTables) };
        inline Results& setSkewedTables(vector<Results::SkewedTables> && skewedTables) { DARABONBA_PTR_SET_RVALUE(skewedTables_, skewedTables) };


        // topAccessTables Field Functions 
        bool hasTopAccessTables() const { return this->topAccessTables_ != nullptr;};
        void deleteTopAccessTables() { this->topAccessTables_ = nullptr;};
        inline const vector<Results::TopAccessTables> & getTopAccessTables() const { DARABONBA_PTR_GET_CONST(topAccessTables_, vector<Results::TopAccessTables>) };
        inline vector<Results::TopAccessTables> getTopAccessTables() { DARABONBA_PTR_GET(topAccessTables_, vector<Results::TopAccessTables>) };
        inline Results& setTopAccessTables(const vector<Results::TopAccessTables> & topAccessTables) { DARABONBA_PTR_SET_VALUE(topAccessTables_, topAccessTables) };
        inline Results& setTopAccessTables(vector<Results::TopAccessTables> && topAccessTables) { DARABONBA_PTR_SET_RVALUE(topAccessTables_, topAccessTables) };


      protected:
        // The detection result items of operator metric aggregation.
        shared_ptr<vector<Results::OperatorAgg>> operatorAgg_ {};
        // The detection result items of abnormal operators.
        shared_ptr<vector<Results::OperatorDetails>> operatorDetails_ {};
        // The detection result items of improper partitioned tables.
        shared_ptr<vector<Results::PartitionedTables>> partitionedTables_ {};
        // The detection result items of skewed tables.
        shared_ptr<vector<Results::SkewedTables>> skewedTables_ {};
        // The detection result items of table access.
        shared_ptr<vector<Results::TopAccessTables>> topAccessTables_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->name_ == nullptr && this->results_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const DetectionItems::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, DetectionItems::Results) };
      inline DetectionItems::Results getResults() { DARABONBA_PTR_GET(results_, DetectionItems::Results) };
      inline DetectionItems& setResults(const DetectionItems::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline DetectionItems& setResults(DetectionItems::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The information about the detection result.
      shared_ptr<string> message_ {};
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The detection result items.
      shared_ptr<DetectionItems::Results> results_ {};
      // The severity level of the detection result. Valid values:
      // 
      // *   NORMAL
      // *   WARNING
      // *   CRITICAL
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->detectionItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeWorkerDetectionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeWorkerDetectionResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeWorkerDetectionResponseBody::DetectionItems>) };
    inline vector<DescribeWorkerDetectionResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeWorkerDetectionResponseBody::DetectionItems>) };
    inline DescribeWorkerDetectionResponseBody& setDetectionItems(const vector<DescribeWorkerDetectionResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeWorkerDetectionResponseBody& setDetectionItems(vector<DescribeWorkerDetectionResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWorkerDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeWorkerDetectionResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeWorkerDetectionResponseBody::DetectionItems>> detectionItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
