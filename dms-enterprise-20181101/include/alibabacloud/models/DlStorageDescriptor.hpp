// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLSTORAGEDESCRIPTOR_HPP_
#define ALIBABACLOUD_MODELS_DLSTORAGEDESCRIPTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DLColumn.hpp>
#include <alibabacloud/models/DLSerdeInfo.hpp>
#include <alibabacloud/models/DLSkewedInfo.hpp>
#include <alibabacloud/models/DLOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLStorageDescriptor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLStorageDescriptor& obj) { 
      DARABONBA_PTR_TO_JSON(BucketCols, bucketCols_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(IsCompressed, isCompressed_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(NumBuckets, numBuckets_);
      DARABONBA_PTR_TO_JSON(OriginalColumns, originalColumns_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SerdeInfo, serdeInfo_);
      DARABONBA_PTR_TO_JSON(SkewedInfo, skewedInfo_);
      DARABONBA_PTR_TO_JSON(SortCols, sortCols_);
    };
    friend void from_json(const Darabonba::Json& j, DLStorageDescriptor& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketCols, bucketCols_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(IsCompressed, isCompressed_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(NumBuckets, numBuckets_);
      DARABONBA_PTR_FROM_JSON(OriginalColumns, originalColumns_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SerdeInfo, serdeInfo_);
      DARABONBA_PTR_FROM_JSON(SkewedInfo, skewedInfo_);
      DARABONBA_PTR_FROM_JSON(SortCols, sortCols_);
    };
    DLStorageDescriptor() = default ;
    DLStorageDescriptor(const DLStorageDescriptor &) = default ;
    DLStorageDescriptor(DLStorageDescriptor &&) = default ;
    DLStorageDescriptor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLStorageDescriptor() = default ;
    DLStorageDescriptor& operator=(const DLStorageDescriptor &) = default ;
    DLStorageDescriptor& operator=(DLStorageDescriptor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketCols_ == nullptr
        && this->columns_ == nullptr && this->inputFormat_ == nullptr && this->isCompressed_ == nullptr && this->location_ == nullptr && this->numBuckets_ == nullptr
        && this->originalColumns_ == nullptr && this->outputFormat_ == nullptr && this->parameters_ == nullptr && this->serdeInfo_ == nullptr && this->skewedInfo_ == nullptr
        && this->sortCols_ == nullptr; };
    // bucketCols Field Functions 
    bool hasBucketCols() const { return this->bucketCols_ != nullptr;};
    void deleteBucketCols() { this->bucketCols_ = nullptr;};
    inline const vector<string> & getBucketCols() const { DARABONBA_PTR_GET_CONST(bucketCols_, vector<string>) };
    inline vector<string> getBucketCols() { DARABONBA_PTR_GET(bucketCols_, vector<string>) };
    inline DLStorageDescriptor& setBucketCols(const vector<string> & bucketCols) { DARABONBA_PTR_SET_VALUE(bucketCols_, bucketCols) };
    inline DLStorageDescriptor& setBucketCols(vector<string> && bucketCols) { DARABONBA_PTR_SET_RVALUE(bucketCols_, bucketCols) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<DLColumn> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<DLColumn>) };
    inline vector<DLColumn> getColumns() { DARABONBA_PTR_GET(columns_, vector<DLColumn>) };
    inline DLStorageDescriptor& setColumns(const vector<DLColumn> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DLStorageDescriptor& setColumns(vector<DLColumn> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string getInputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline DLStorageDescriptor& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // isCompressed Field Functions 
    bool hasIsCompressed() const { return this->isCompressed_ != nullptr;};
    void deleteIsCompressed() { this->isCompressed_ = nullptr;};
    inline bool getIsCompressed() const { DARABONBA_PTR_GET_DEFAULT(isCompressed_, false) };
    inline DLStorageDescriptor& setIsCompressed(bool isCompressed) { DARABONBA_PTR_SET_VALUE(isCompressed_, isCompressed) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DLStorageDescriptor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // numBuckets Field Functions 
    bool hasNumBuckets() const { return this->numBuckets_ != nullptr;};
    void deleteNumBuckets() { this->numBuckets_ = nullptr;};
    inline int32_t getNumBuckets() const { DARABONBA_PTR_GET_DEFAULT(numBuckets_, 0) };
    inline DLStorageDescriptor& setNumBuckets(int32_t numBuckets) { DARABONBA_PTR_SET_VALUE(numBuckets_, numBuckets) };


    // originalColumns Field Functions 
    bool hasOriginalColumns() const { return this->originalColumns_ != nullptr;};
    void deleteOriginalColumns() { this->originalColumns_ = nullptr;};
    inline const vector<DLColumn> & getOriginalColumns() const { DARABONBA_PTR_GET_CONST(originalColumns_, vector<DLColumn>) };
    inline vector<DLColumn> getOriginalColumns() { DARABONBA_PTR_GET(originalColumns_, vector<DLColumn>) };
    inline DLStorageDescriptor& setOriginalColumns(const vector<DLColumn> & originalColumns) { DARABONBA_PTR_SET_VALUE(originalColumns_, originalColumns) };
    inline DLStorageDescriptor& setOriginalColumns(vector<DLColumn> && originalColumns) { DARABONBA_PTR_SET_RVALUE(originalColumns_, originalColumns) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline DLStorageDescriptor& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline DLStorageDescriptor& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DLStorageDescriptor& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // serdeInfo Field Functions 
    bool hasSerdeInfo() const { return this->serdeInfo_ != nullptr;};
    void deleteSerdeInfo() { this->serdeInfo_ = nullptr;};
    inline const DLSerdeInfo & getSerdeInfo() const { DARABONBA_PTR_GET_CONST(serdeInfo_, DLSerdeInfo) };
    inline DLSerdeInfo getSerdeInfo() { DARABONBA_PTR_GET(serdeInfo_, DLSerdeInfo) };
    inline DLStorageDescriptor& setSerdeInfo(const DLSerdeInfo & serdeInfo) { DARABONBA_PTR_SET_VALUE(serdeInfo_, serdeInfo) };
    inline DLStorageDescriptor& setSerdeInfo(DLSerdeInfo && serdeInfo) { DARABONBA_PTR_SET_RVALUE(serdeInfo_, serdeInfo) };


    // skewedInfo Field Functions 
    bool hasSkewedInfo() const { return this->skewedInfo_ != nullptr;};
    void deleteSkewedInfo() { this->skewedInfo_ = nullptr;};
    inline const DLSkewedInfo & getSkewedInfo() const { DARABONBA_PTR_GET_CONST(skewedInfo_, DLSkewedInfo) };
    inline DLSkewedInfo getSkewedInfo() { DARABONBA_PTR_GET(skewedInfo_, DLSkewedInfo) };
    inline DLStorageDescriptor& setSkewedInfo(const DLSkewedInfo & skewedInfo) { DARABONBA_PTR_SET_VALUE(skewedInfo_, skewedInfo) };
    inline DLStorageDescriptor& setSkewedInfo(DLSkewedInfo && skewedInfo) { DARABONBA_PTR_SET_RVALUE(skewedInfo_, skewedInfo) };


    // sortCols Field Functions 
    bool hasSortCols() const { return this->sortCols_ != nullptr;};
    void deleteSortCols() { this->sortCols_ = nullptr;};
    inline const vector<DLOrder> & getSortCols() const { DARABONBA_PTR_GET_CONST(sortCols_, vector<DLOrder>) };
    inline vector<DLOrder> getSortCols() { DARABONBA_PTR_GET(sortCols_, vector<DLOrder>) };
    inline DLStorageDescriptor& setSortCols(const vector<DLOrder> & sortCols) { DARABONBA_PTR_SET_VALUE(sortCols_, sortCols) };
    inline DLStorageDescriptor& setSortCols(vector<DLOrder> && sortCols) { DARABONBA_PTR_SET_RVALUE(sortCols_, sortCols) };


  protected:
    shared_ptr<vector<string>> bucketCols_ {};
    shared_ptr<vector<DLColumn>> columns_ {};
    shared_ptr<string> inputFormat_ {};
    shared_ptr<bool> isCompressed_ {};
    shared_ptr<string> location_ {};
    shared_ptr<int32_t> numBuckets_ {};
    shared_ptr<vector<DLColumn>> originalColumns_ {};
    shared_ptr<string> outputFormat_ {};
    Darabonba::Json parameters_ {};
    shared_ptr<DLSerdeInfo> serdeInfo_ {};
    shared_ptr<DLSkewedInfo> skewedInfo_ {};
    shared_ptr<vector<DLOrder>> sortCols_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
