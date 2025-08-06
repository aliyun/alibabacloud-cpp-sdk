// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGEDATARESPONSEBODYSTORAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGEDATARESPONSEBODYSTORAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTieringStorageDataResponseBodyStorageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTieringStorageDataResponseBodyStorageData& obj) { 
      DARABONBA_PTR_TO_JSON(LessthanMonthDatasize, lessthanMonthDatasize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(StorageUtilization, storageUtilization_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTieringStorageDataResponseBodyStorageData& obj) { 
      DARABONBA_PTR_FROM_JSON(LessthanMonthDatasize, lessthanMonthDatasize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(StorageUtilization, storageUtilization_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodTieringStorageDataResponseBodyStorageData() = default ;
    DescribeVodTieringStorageDataResponseBodyStorageData(const DescribeVodTieringStorageDataResponseBodyStorageData &) = default ;
    DescribeVodTieringStorageDataResponseBodyStorageData(DescribeVodTieringStorageDataResponseBodyStorageData &&) = default ;
    DescribeVodTieringStorageDataResponseBodyStorageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTieringStorageDataResponseBodyStorageData() = default ;
    DescribeVodTieringStorageDataResponseBodyStorageData& operator=(const DescribeVodTieringStorageDataResponseBodyStorageData &) = default ;
    DescribeVodTieringStorageDataResponseBodyStorageData& operator=(DescribeVodTieringStorageDataResponseBodyStorageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lessthanMonthDatasize_ != nullptr
        && this->region_ != nullptr && this->storageClass_ != nullptr && this->storageUtilization_ != nullptr && this->timeStamp_ != nullptr; };
    // lessthanMonthDatasize Field Functions 
    bool hasLessthanMonthDatasize() const { return this->lessthanMonthDatasize_ != nullptr;};
    void deleteLessthanMonthDatasize() { this->lessthanMonthDatasize_ = nullptr;};
    inline int64_t lessthanMonthDatasize() const { DARABONBA_PTR_GET_DEFAULT(lessthanMonthDatasize_, 0L) };
    inline DescribeVodTieringStorageDataResponseBodyStorageData& setLessthanMonthDatasize(int64_t lessthanMonthDatasize) { DARABONBA_PTR_SET_VALUE(lessthanMonthDatasize_, lessthanMonthDatasize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodTieringStorageDataResponseBodyStorageData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeVodTieringStorageDataResponseBodyStorageData& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // storageUtilization Field Functions 
    bool hasStorageUtilization() const { return this->storageUtilization_ != nullptr;};
    void deleteStorageUtilization() { this->storageUtilization_ = nullptr;};
    inline int64_t storageUtilization() const { DARABONBA_PTR_GET_DEFAULT(storageUtilization_, 0L) };
    inline DescribeVodTieringStorageDataResponseBodyStorageData& setStorageUtilization(int64_t storageUtilization) { DARABONBA_PTR_SET_VALUE(storageUtilization_, storageUtilization) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodTieringStorageDataResponseBodyStorageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The data that is stored less than a month. Unit: bytes.
    std::shared_ptr<int64_t> lessthanMonthDatasize_ = nullptr;
    // The region in which data is queried.
    std::shared_ptr<string> region_ = nullptr;
    // The storage type.
    std::shared_ptr<string> storageClass_ = nullptr;
    // The storage usage. Unit: bytes.
    std::shared_ptr<int64_t> storageUtilization_ = nullptr;
    // The timestamp of the data returned. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
