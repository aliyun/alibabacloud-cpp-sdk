// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTIERINGSTORAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTieringStorageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTieringStorageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageData, storageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTieringStorageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageData, storageData_);
    };
    DescribeVodTieringStorageDataResponseBody() = default ;
    DescribeVodTieringStorageDataResponseBody(const DescribeVodTieringStorageDataResponseBody &) = default ;
    DescribeVodTieringStorageDataResponseBody(DescribeVodTieringStorageDataResponseBody &&) = default ;
    DescribeVodTieringStorageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTieringStorageDataResponseBody() = default ;
    DescribeVodTieringStorageDataResponseBody& operator=(const DescribeVodTieringStorageDataResponseBody &) = default ;
    DescribeVodTieringStorageDataResponseBody& operator=(DescribeVodTieringStorageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageData& obj) { 
        DARABONBA_PTR_TO_JSON(LessthanMonthDatasize, lessthanMonthDatasize_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(StorageUtilization, storageUtilization_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, StorageData& obj) { 
        DARABONBA_PTR_FROM_JSON(LessthanMonthDatasize, lessthanMonthDatasize_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(StorageUtilization, storageUtilization_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      StorageData() = default ;
      StorageData(const StorageData &) = default ;
      StorageData(StorageData &&) = default ;
      StorageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageData() = default ;
      StorageData& operator=(const StorageData &) = default ;
      StorageData& operator=(StorageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lessthanMonthDatasize_ == nullptr
        && this->region_ == nullptr && this->storageClass_ == nullptr && this->storageUtilization_ == nullptr && this->timeStamp_ == nullptr; };
      // lessthanMonthDatasize Field Functions 
      bool hasLessthanMonthDatasize() const { return this->lessthanMonthDatasize_ != nullptr;};
      void deleteLessthanMonthDatasize() { this->lessthanMonthDatasize_ = nullptr;};
      inline int64_t getLessthanMonthDatasize() const { DARABONBA_PTR_GET_DEFAULT(lessthanMonthDatasize_, 0L) };
      inline StorageData& setLessthanMonthDatasize(int64_t lessthanMonthDatasize) { DARABONBA_PTR_SET_VALUE(lessthanMonthDatasize_, lessthanMonthDatasize) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline StorageData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline StorageData& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // storageUtilization Field Functions 
      bool hasStorageUtilization() const { return this->storageUtilization_ != nullptr;};
      void deleteStorageUtilization() { this->storageUtilization_ = nullptr;};
      inline int64_t getStorageUtilization() const { DARABONBA_PTR_GET_DEFAULT(storageUtilization_, 0L) };
      inline StorageData& setStorageUtilization(int64_t storageUtilization) { DARABONBA_PTR_SET_VALUE(storageUtilization_, storageUtilization) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline StorageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The data that is stored less than a month. Unit: bytes.
      shared_ptr<int64_t> lessthanMonthDatasize_ {};
      // The region in which data is queried.
      shared_ptr<string> region_ {};
      // The storage type.
      shared_ptr<string> storageClass_ {};
      // The storage usage. Unit: bytes.
      shared_ptr<int64_t> storageUtilization_ {};
      // The timestamp of the data returned. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->storageData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodTieringStorageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageData Field Functions 
    bool hasStorageData() const { return this->storageData_ != nullptr;};
    void deleteStorageData() { this->storageData_ = nullptr;};
    inline const vector<DescribeVodTieringStorageDataResponseBody::StorageData> & getStorageData() const { DARABONBA_PTR_GET_CONST(storageData_, vector<DescribeVodTieringStorageDataResponseBody::StorageData>) };
    inline vector<DescribeVodTieringStorageDataResponseBody::StorageData> getStorageData() { DARABONBA_PTR_GET(storageData_, vector<DescribeVodTieringStorageDataResponseBody::StorageData>) };
    inline DescribeVodTieringStorageDataResponseBody& setStorageData(const vector<DescribeVodTieringStorageDataResponseBody::StorageData> & storageData) { DARABONBA_PTR_SET_VALUE(storageData_, storageData) };
    inline DescribeVodTieringStorageDataResponseBody& setStorageData(vector<DescribeVodTieringStorageDataResponseBody::StorageData> && storageData) { DARABONBA_PTR_SET_RVALUE(storageData_, storageData) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The storage usage data returned.
    shared_ptr<vector<DescribeVodTieringStorageDataResponseBody::StorageData>> storageData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
