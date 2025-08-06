// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGERETRIEVALDATARESPONSEBODYRETRIEVALDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGERETRIEVALDATARESPONSEBODYRETRIEVALDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& obj) { 
      DARABONBA_PTR_TO_JSON(CABulkRetrievalData, CABulkRetrievalData_);
      DARABONBA_PTR_TO_JSON(CAHighPriorRetrievalData, CAHighPriorRetrievalData_);
      DARABONBA_PTR_TO_JSON(CAStdRetrievalData, CAStdRetrievalData_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RetrievalData, retrievalData_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& obj) { 
      DARABONBA_PTR_FROM_JSON(CABulkRetrievalData, CABulkRetrievalData_);
      DARABONBA_PTR_FROM_JSON(CAHighPriorRetrievalData, CAHighPriorRetrievalData_);
      DARABONBA_PTR_FROM_JSON(CAStdRetrievalData, CAStdRetrievalData_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RetrievalData, retrievalData_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData() = default ;
    DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData(const DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData &) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData(DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData &&) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData() = default ;
    DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& operator=(const DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData &) = default ;
    DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& operator=(DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CABulkRetrievalData_ != nullptr
        && this->CAHighPriorRetrievalData_ != nullptr && this->CAStdRetrievalData_ != nullptr && this->region_ != nullptr && this->retrievalData_ != nullptr && this->storageClass_ != nullptr
        && this->timeStamp_ != nullptr; };
    // CABulkRetrievalData Field Functions 
    bool hasCABulkRetrievalData() const { return this->CABulkRetrievalData_ != nullptr;};
    void deleteCABulkRetrievalData() { this->CABulkRetrievalData_ = nullptr;};
    inline int64_t CABulkRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(CABulkRetrievalData_, 0L) };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setCABulkRetrievalData(int64_t CABulkRetrievalData) { DARABONBA_PTR_SET_VALUE(CABulkRetrievalData_, CABulkRetrievalData) };


    // CAHighPriorRetrievalData Field Functions 
    bool hasCAHighPriorRetrievalData() const { return this->CAHighPriorRetrievalData_ != nullptr;};
    void deleteCAHighPriorRetrievalData() { this->CAHighPriorRetrievalData_ = nullptr;};
    inline int64_t CAHighPriorRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(CAHighPriorRetrievalData_, 0L) };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setCAHighPriorRetrievalData(int64_t CAHighPriorRetrievalData) { DARABONBA_PTR_SET_VALUE(CAHighPriorRetrievalData_, CAHighPriorRetrievalData) };


    // CAStdRetrievalData Field Functions 
    bool hasCAStdRetrievalData() const { return this->CAStdRetrievalData_ != nullptr;};
    void deleteCAStdRetrievalData() { this->CAStdRetrievalData_ = nullptr;};
    inline int64_t CAStdRetrievalData() const { DARABONBA_PTR_GET_DEFAULT(CAStdRetrievalData_, 0L) };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setCAStdRetrievalData(int64_t CAStdRetrievalData) { DARABONBA_PTR_SET_VALUE(CAStdRetrievalData_, CAStdRetrievalData) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // retrievalData Field Functions 
    bool hasRetrievalData() const { return this->retrievalData_ != nullptr;};
    void deleteRetrievalData() { this->retrievalData_ = nullptr;};
    inline int64_t retrievalData() const { DARABONBA_PTR_GET_DEFAULT(retrievalData_, 0L) };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setRetrievalData(int64_t retrievalData) { DARABONBA_PTR_SET_VALUE(retrievalData_, retrievalData) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodTieringStorageRetrievalDataResponseBodyRetrievalData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The retrieved Cold Archive data in the bulk mode.
    std::shared_ptr<int64_t> CABulkRetrievalData_ = nullptr;
    // The retrieved Cold Archive data in the expedited mode.
    std::shared_ptr<int64_t> CAHighPriorRetrievalData_ = nullptr;
    // The retrieved Cold Archive data in the standard mode.
    std::shared_ptr<int64_t> CAStdRetrievalData_ = nullptr;
    // The storage region.
    std::shared_ptr<string> region_ = nullptr;
    // The data retrieval information.
    std::shared_ptr<int64_t> retrievalData_ = nullptr;
    // The storage type.
    std::shared_ptr<string> storageClass_ = nullptr;
    // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
