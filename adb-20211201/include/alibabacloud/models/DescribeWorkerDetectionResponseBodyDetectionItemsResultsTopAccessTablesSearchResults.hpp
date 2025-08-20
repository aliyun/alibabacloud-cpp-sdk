// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSTOPACCESSTABLESSEARCHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSTOPACCESSTABLESSEARCHRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& obj) { 
      DARABONBA_PTR_TO_JSON(AccessCount, accessCount_);
      DARABONBA_PTR_TO_JSON(AvgScanCost, avgScanCost_);
      DARABONBA_PTR_TO_JSON(AvgScanSize, avgScanSize_);
      DARABONBA_PTR_TO_JSON(MaxScanCost, maxScanCost_);
      DARABONBA_PTR_TO_JSON(MaxScanSize, maxScanSize_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessCount, accessCount_);
      DARABONBA_PTR_FROM_JSON(AvgScanCost, avgScanCost_);
      DARABONBA_PTR_FROM_JSON(AvgScanSize, avgScanSize_);
      DARABONBA_PTR_FROM_JSON(MaxScanCost, maxScanCost_);
      DARABONBA_PTR_FROM_JSON(MaxScanSize, maxScanSize_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults(DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessCount_ != nullptr
        && this->avgScanCost_ != nullptr && this->avgScanSize_ != nullptr && this->maxScanCost_ != nullptr && this->maxScanSize_ != nullptr && this->tableName_ != nullptr; };
    // accessCount Field Functions 
    bool hasAccessCount() const { return this->accessCount_ != nullptr;};
    void deleteAccessCount() { this->accessCount_ = nullptr;};
    inline int64_t accessCount() const { DARABONBA_PTR_GET_DEFAULT(accessCount_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& setAccessCount(int64_t accessCount) { DARABONBA_PTR_SET_VALUE(accessCount_, accessCount) };


    // avgScanCost Field Functions 
    bool hasAvgScanCost() const { return this->avgScanCost_ != nullptr;};
    void deleteAvgScanCost() { this->avgScanCost_ = nullptr;};
    inline double avgScanCost() const { DARABONBA_PTR_GET_DEFAULT(avgScanCost_, 0.0) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& setAvgScanCost(double avgScanCost) { DARABONBA_PTR_SET_VALUE(avgScanCost_, avgScanCost) };


    // avgScanSize Field Functions 
    bool hasAvgScanSize() const { return this->avgScanSize_ != nullptr;};
    void deleteAvgScanSize() { this->avgScanSize_ = nullptr;};
    inline double avgScanSize() const { DARABONBA_PTR_GET_DEFAULT(avgScanSize_, 0.0) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& setAvgScanSize(double avgScanSize) { DARABONBA_PTR_SET_VALUE(avgScanSize_, avgScanSize) };


    // maxScanCost Field Functions 
    bool hasMaxScanCost() const { return this->maxScanCost_ != nullptr;};
    void deleteMaxScanCost() { this->maxScanCost_ = nullptr;};
    inline int64_t maxScanCost() const { DARABONBA_PTR_GET_DEFAULT(maxScanCost_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& setMaxScanCost(int64_t maxScanCost) { DARABONBA_PTR_SET_VALUE(maxScanCost_, maxScanCost) };


    // maxScanSize Field Functions 
    bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
    void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
    inline int64_t maxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& setMaxScanSize(int64_t maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsTopAccessTablesSearchResults& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The number of accesses to the table.
    std::shared_ptr<int64_t> accessCount_ = nullptr;
    // The average amount of time for scanning. Unit: milliseconds.
    std::shared_ptr<double> avgScanCost_ = nullptr;
    // The average data size for scanning. Unit: bytes.
    std::shared_ptr<double> avgScanSize_ = nullptr;
    // The maximum amount of time for scanning. Unit: milliseconds.
    std::shared_ptr<int64_t> maxScanCost_ = nullptr;
    // The maximum data size for scanning. Unit: bytes.
    std::shared_ptr<int64_t> maxScanSize_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
