// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGEDESCRIPTOR_HPP_
#define ALIBABACLOUD_MODELS_STORAGEDESCRIPTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldSchema.hpp>
#include <map>
#include <alibabacloud/models/SerDeInfo.hpp>
#include <alibabacloud/models/SkewedInfo.hpp>
#include <alibabacloud/models/Order.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StorageDescriptor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageDescriptor& obj) { 
      DARABONBA_PTR_TO_JSON(BucketCols, bucketCols_);
      DARABONBA_PTR_TO_JSON(Cols, cols_);
      DARABONBA_PTR_TO_JSON(Compressed, compressed_);
      DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(NumBuckets, numBuckets_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SerDeInfo, serDeInfo_);
      DARABONBA_PTR_TO_JSON(SkewedInfo, skewedInfo_);
      DARABONBA_PTR_TO_JSON(SortCols, sortCols_);
      DARABONBA_PTR_TO_JSON(StoredAsSubDirectories, storedAsSubDirectories_);
    };
    friend void from_json(const Darabonba::Json& j, StorageDescriptor& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketCols, bucketCols_);
      DARABONBA_PTR_FROM_JSON(Cols, cols_);
      DARABONBA_PTR_FROM_JSON(Compressed, compressed_);
      DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(NumBuckets, numBuckets_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SerDeInfo, serDeInfo_);
      DARABONBA_PTR_FROM_JSON(SkewedInfo, skewedInfo_);
      DARABONBA_PTR_FROM_JSON(SortCols, sortCols_);
      DARABONBA_PTR_FROM_JSON(StoredAsSubDirectories, storedAsSubDirectories_);
    };
    StorageDescriptor() = default ;
    StorageDescriptor(const StorageDescriptor &) = default ;
    StorageDescriptor(StorageDescriptor &&) = default ;
    StorageDescriptor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageDescriptor() = default ;
    StorageDescriptor& operator=(const StorageDescriptor &) = default ;
    StorageDescriptor& operator=(StorageDescriptor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketCols_ == nullptr
        && return this->cols_ == nullptr && return this->compressed_ == nullptr && return this->inputFormat_ == nullptr && return this->location_ == nullptr && return this->numBuckets_ == nullptr
        && return this->outputFormat_ == nullptr && return this->parameters_ == nullptr && return this->serDeInfo_ == nullptr && return this->skewedInfo_ == nullptr && return this->sortCols_ == nullptr
        && return this->storedAsSubDirectories_ == nullptr; };
    // bucketCols Field Functions 
    bool hasBucketCols() const { return this->bucketCols_ != nullptr;};
    void deleteBucketCols() { this->bucketCols_ = nullptr;};
    inline const vector<string> & bucketCols() const { DARABONBA_PTR_GET_CONST(bucketCols_, vector<string>) };
    inline vector<string> bucketCols() { DARABONBA_PTR_GET(bucketCols_, vector<string>) };
    inline StorageDescriptor& setBucketCols(const vector<string> & bucketCols) { DARABONBA_PTR_SET_VALUE(bucketCols_, bucketCols) };
    inline StorageDescriptor& setBucketCols(vector<string> && bucketCols) { DARABONBA_PTR_SET_RVALUE(bucketCols_, bucketCols) };


    // cols Field Functions 
    bool hasCols() const { return this->cols_ != nullptr;};
    void deleteCols() { this->cols_ = nullptr;};
    inline const vector<FieldSchema> & cols() const { DARABONBA_PTR_GET_CONST(cols_, vector<FieldSchema>) };
    inline vector<FieldSchema> cols() { DARABONBA_PTR_GET(cols_, vector<FieldSchema>) };
    inline StorageDescriptor& setCols(const vector<FieldSchema> & cols) { DARABONBA_PTR_SET_VALUE(cols_, cols) };
    inline StorageDescriptor& setCols(vector<FieldSchema> && cols) { DARABONBA_PTR_SET_RVALUE(cols_, cols) };


    // compressed Field Functions 
    bool hasCompressed() const { return this->compressed_ != nullptr;};
    void deleteCompressed() { this->compressed_ = nullptr;};
    inline bool compressed() const { DARABONBA_PTR_GET_DEFAULT(compressed_, false) };
    inline StorageDescriptor& setCompressed(bool compressed) { DARABONBA_PTR_SET_VALUE(compressed_, compressed) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string inputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline StorageDescriptor& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline StorageDescriptor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // numBuckets Field Functions 
    bool hasNumBuckets() const { return this->numBuckets_ != nullptr;};
    void deleteNumBuckets() { this->numBuckets_ = nullptr;};
    inline int32_t numBuckets() const { DARABONBA_PTR_GET_DEFAULT(numBuckets_, 0) };
    inline StorageDescriptor& setNumBuckets(int32_t numBuckets) { DARABONBA_PTR_SET_VALUE(numBuckets_, numBuckets) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline StorageDescriptor& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline StorageDescriptor& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline StorageDescriptor& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // serDeInfo Field Functions 
    bool hasSerDeInfo() const { return this->serDeInfo_ != nullptr;};
    void deleteSerDeInfo() { this->serDeInfo_ = nullptr;};
    inline const SerDeInfo & serDeInfo() const { DARABONBA_PTR_GET_CONST(serDeInfo_, SerDeInfo) };
    inline SerDeInfo serDeInfo() { DARABONBA_PTR_GET(serDeInfo_, SerDeInfo) };
    inline StorageDescriptor& setSerDeInfo(const SerDeInfo & serDeInfo) { DARABONBA_PTR_SET_VALUE(serDeInfo_, serDeInfo) };
    inline StorageDescriptor& setSerDeInfo(SerDeInfo && serDeInfo) { DARABONBA_PTR_SET_RVALUE(serDeInfo_, serDeInfo) };


    // skewedInfo Field Functions 
    bool hasSkewedInfo() const { return this->skewedInfo_ != nullptr;};
    void deleteSkewedInfo() { this->skewedInfo_ = nullptr;};
    inline const SkewedInfo & skewedInfo() const { DARABONBA_PTR_GET_CONST(skewedInfo_, SkewedInfo) };
    inline SkewedInfo skewedInfo() { DARABONBA_PTR_GET(skewedInfo_, SkewedInfo) };
    inline StorageDescriptor& setSkewedInfo(const SkewedInfo & skewedInfo) { DARABONBA_PTR_SET_VALUE(skewedInfo_, skewedInfo) };
    inline StorageDescriptor& setSkewedInfo(SkewedInfo && skewedInfo) { DARABONBA_PTR_SET_RVALUE(skewedInfo_, skewedInfo) };


    // sortCols Field Functions 
    bool hasSortCols() const { return this->sortCols_ != nullptr;};
    void deleteSortCols() { this->sortCols_ = nullptr;};
    inline const vector<Order> & sortCols() const { DARABONBA_PTR_GET_CONST(sortCols_, vector<Order>) };
    inline vector<Order> sortCols() { DARABONBA_PTR_GET(sortCols_, vector<Order>) };
    inline StorageDescriptor& setSortCols(const vector<Order> & sortCols) { DARABONBA_PTR_SET_VALUE(sortCols_, sortCols) };
    inline StorageDescriptor& setSortCols(vector<Order> && sortCols) { DARABONBA_PTR_SET_RVALUE(sortCols_, sortCols) };


    // storedAsSubDirectories Field Functions 
    bool hasStoredAsSubDirectories() const { return this->storedAsSubDirectories_ != nullptr;};
    void deleteStoredAsSubDirectories() { this->storedAsSubDirectories_ = nullptr;};
    inline bool storedAsSubDirectories() const { DARABONBA_PTR_GET_DEFAULT(storedAsSubDirectories_, false) };
    inline StorageDescriptor& setStoredAsSubDirectories(bool storedAsSubDirectories) { DARABONBA_PTR_SET_VALUE(storedAsSubDirectories_, storedAsSubDirectories) };


  protected:
    std::shared_ptr<vector<string>> bucketCols_ = nullptr;
    std::shared_ptr<vector<FieldSchema>> cols_ = nullptr;
    std::shared_ptr<bool> compressed_ = nullptr;
    std::shared_ptr<string> inputFormat_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int32_t> numBuckets_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<SerDeInfo> serDeInfo_ = nullptr;
    std::shared_ptr<SkewedInfo> skewedInfo_ = nullptr;
    std::shared_ptr<vector<Order>> sortCols_ = nullptr;
    std::shared_ptr<bool> storedAsSubDirectories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
