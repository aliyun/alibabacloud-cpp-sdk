// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTablePartitionDiagnoseResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablePartitionDiagnoseResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(PartitionDetail, partitionDetail_);
      DARABONBA_PTR_TO_JSON(PartitionNumber, partitionNumber_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablePartitionDiagnoseResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(PartitionDetail, partitionDetail_);
      DARABONBA_PTR_FROM_JSON(PartitionNumber, partitionNumber_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeTablePartitionDiagnoseResponseBodyItems() = default ;
    DescribeTablePartitionDiagnoseResponseBodyItems(const DescribeTablePartitionDiagnoseResponseBodyItems &) = default ;
    DescribeTablePartitionDiagnoseResponseBodyItems(DescribeTablePartitionDiagnoseResponseBodyItems &&) = default ;
    DescribeTablePartitionDiagnoseResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablePartitionDiagnoseResponseBodyItems() = default ;
    DescribeTablePartitionDiagnoseResponseBodyItems& operator=(const DescribeTablePartitionDiagnoseResponseBodyItems &) = default ;
    DescribeTablePartitionDiagnoseResponseBodyItems& operator=(DescribeTablePartitionDiagnoseResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->partitionDetail_ == nullptr
        && return this->partitionNumber_ == nullptr && return this->schemaName_ == nullptr && return this->spaceRatio_ == nullptr && return this->tableName_ == nullptr && return this->totalSize_ == nullptr; };
    // partitionDetail Field Functions 
    bool hasPartitionDetail() const { return this->partitionDetail_ != nullptr;};
    void deletePartitionDetail() { this->partitionDetail_ = nullptr;};
    inline string partitionDetail() const { DARABONBA_PTR_GET_DEFAULT(partitionDetail_, "") };
    inline DescribeTablePartitionDiagnoseResponseBodyItems& setPartitionDetail(string partitionDetail) { DARABONBA_PTR_SET_VALUE(partitionDetail_, partitionDetail) };


    // partitionNumber Field Functions 
    bool hasPartitionNumber() const { return this->partitionNumber_ != nullptr;};
    void deletePartitionNumber() { this->partitionNumber_ = nullptr;};
    inline int32_t partitionNumber() const { DARABONBA_PTR_GET_DEFAULT(partitionNumber_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBodyItems& setPartitionNumber(int32_t partitionNumber) { DARABONBA_PTR_SET_VALUE(partitionNumber_, partitionNumber) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeTablePartitionDiagnoseResponseBodyItems& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // spaceRatio Field Functions 
    bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
    void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
    inline double spaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
    inline DescribeTablePartitionDiagnoseResponseBodyItems& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeTablePartitionDiagnoseResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeTablePartitionDiagnoseResponseBodyItems& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The improper partitions.
    std::shared_ptr<string> partitionDetail_ = nullptr;
    // The number of partitions.
    std::shared_ptr<int32_t> partitionNumber_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The storage percentage of the table. Unit: %.
    // 
    // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
    std::shared_ptr<double> spaceRatio_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total data size of the table. Unit: bytes.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
