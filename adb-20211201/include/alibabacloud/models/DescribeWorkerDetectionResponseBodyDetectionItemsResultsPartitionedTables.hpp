// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSPARTITIONEDTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSPARTITIONEDTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& obj) { 
      DARABONBA_PTR_TO_JSON(DDL, DDL_);
      DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(PartitionIds, partitionIds_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& obj) { 
      DARABONBA_PTR_FROM_JSON(DDL, DDL_);
      DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(PartitionIds, partitionIds_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables(DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DDL_ != nullptr
        && this->partitionCount_ != nullptr && this->partitionIds_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr && this->totalDataSize_ != nullptr; };
    // DDL Field Functions 
    bool hasDDL() const { return this->DDL_ != nullptr;};
    void deleteDDL() { this->DDL_ = nullptr;};
    inline string DDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& setDDL(string DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline string partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& setPartitionCount(string partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // partitionIds Field Functions 
    bool hasPartitionIds() const { return this->partitionIds_ != nullptr;};
    void deletePartitionIds() { this->partitionIds_ = nullptr;};
    inline string partitionIds() const { DARABONBA_PTR_GET_DEFAULT(partitionIds_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& setPartitionIds(string partitionIds) { DARABONBA_PTR_SET_VALUE(partitionIds_, partitionIds) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline int64_t totalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalDataSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsPartitionedTables& setTotalDataSize(int64_t totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };


  protected:
    // The SQL statement that is used to create the table.
    std::shared_ptr<string> DDL_ = nullptr;
    // The number of partitions.
    std::shared_ptr<string> partitionCount_ = nullptr;
    // The ID of the improper partition.
    std::shared_ptr<string> partitionIds_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total data size of the table.
    std::shared_ptr<int64_t> totalDataSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
