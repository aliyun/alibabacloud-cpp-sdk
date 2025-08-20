// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODYDATAHOTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODYDATAHOTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterSpaceSummaryResponseBodyDataHotData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSpaceSummaryResponseBodyDataHotData& obj) { 
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
      DARABONBA_PTR_TO_JSON(OtherSize, otherSize_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSpaceSummaryResponseBodyDataHotData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
      DARABONBA_PTR_FROM_JSON(OtherSize, otherSize_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeDBClusterSpaceSummaryResponseBodyDataHotData() = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataHotData(const DescribeDBClusterSpaceSummaryResponseBodyDataHotData &) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataHotData(DescribeDBClusterSpaceSummaryResponseBodyDataHotData &&) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataHotData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSpaceSummaryResponseBodyDataHotData() = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataHotData& operator=(const DescribeDBClusterSpaceSummaryResponseBodyDataHotData &) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataHotData& operator=(DescribeDBClusterSpaceSummaryResponseBodyDataHotData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSize_ != nullptr
        && this->indexSize_ != nullptr && this->otherSize_ != nullptr && this->primaryKeyIndexSize_ != nullptr && this->totalSize_ != nullptr; };
    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataHotData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataHotData& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // otherSize Field Functions 
    bool hasOtherSize() const { return this->otherSize_ != nullptr;};
    void deleteOtherSize() { this->otherSize_ = nullptr;};
    inline int64_t otherSize() const { DARABONBA_PTR_GET_DEFAULT(otherSize_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataHotData& setOtherSize(int64_t otherSize) { DARABONBA_PTR_SET_VALUE(otherSize_, otherSize) };


    // primaryKeyIndexSize Field Functions 
    bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
    void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
    inline int64_t primaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataHotData& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataHotData& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The data size of table records. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The data size of regular indexes. Unit: bytes.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The data size of other data. Unit: bytes.
    std::shared_ptr<int64_t> otherSize_ = nullptr;
    // The data size of primary key indexes. Unit: bytes.
    std::shared_ptr<int64_t> primaryKeyIndexSize_ = nullptr;
    // The hot data size. Unit: bytes.
    // 
    // >  Formula: Hot data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
