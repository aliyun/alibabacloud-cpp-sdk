// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODY_HPP_
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
  class DescribeVodStorageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStorageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageData, storageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStorageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageData, storageData_);
    };
    DescribeVodStorageDataResponseBody() = default ;
    DescribeVodStorageDataResponseBody(const DescribeVodStorageDataResponseBody &) = default ;
    DescribeVodStorageDataResponseBody(DescribeVodStorageDataResponseBody &&) = default ;
    DescribeVodStorageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStorageDataResponseBody() = default ;
    DescribeVodStorageDataResponseBody& operator=(const DescribeVodStorageDataResponseBody &) = default ;
    DescribeVodStorageDataResponseBody& operator=(DescribeVodStorageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageData& obj) { 
        DARABONBA_PTR_TO_JSON(StorageDataItem, storageDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, StorageData& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageDataItem, storageDataItem_);
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
      class StorageDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(NetworkOut, networkOut_);
          DARABONBA_PTR_TO_JSON(StorageUtilization, storageUtilization_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, StorageDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(NetworkOut, networkOut_);
          DARABONBA_PTR_FROM_JSON(StorageUtilization, storageUtilization_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        StorageDataItem() = default ;
        StorageDataItem(const StorageDataItem &) = default ;
        StorageDataItem(StorageDataItem &&) = default ;
        StorageDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageDataItem() = default ;
        StorageDataItem& operator=(const StorageDataItem &) = default ;
        StorageDataItem& operator=(StorageDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->networkOut_ == nullptr
        && this->storageUtilization_ == nullptr && this->timeStamp_ == nullptr; };
        // networkOut Field Functions 
        bool hasNetworkOut() const { return this->networkOut_ != nullptr;};
        void deleteNetworkOut() { this->networkOut_ = nullptr;};
        inline string getNetworkOut() const { DARABONBA_PTR_GET_DEFAULT(networkOut_, "") };
        inline StorageDataItem& setNetworkOut(string networkOut) { DARABONBA_PTR_SET_VALUE(networkOut_, networkOut) };


        // storageUtilization Field Functions 
        bool hasStorageUtilization() const { return this->storageUtilization_ != nullptr;};
        void deleteStorageUtilization() { this->storageUtilization_ = nullptr;};
        inline string getStorageUtilization() const { DARABONBA_PTR_GET_DEFAULT(storageUtilization_, "") };
        inline StorageDataItem& setStorageUtilization(string storageUtilization) { DARABONBA_PTR_SET_VALUE(storageUtilization_, storageUtilization) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline StorageDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The outbound traffic. Unit: bytes. The outbound traffic is generated when videos are directly downloaded or played from OSS buckets without Alibaba Cloud CDN acceleration.
        shared_ptr<string> networkOut_ {};
        // The detailed usage data of storage-related resources. Unit: bytes.
        shared_ptr<string> storageUtilization_ {};
        // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->storageDataItem_ == nullptr; };
      // storageDataItem Field Functions 
      bool hasStorageDataItem() const { return this->storageDataItem_ != nullptr;};
      void deleteStorageDataItem() { this->storageDataItem_ = nullptr;};
      inline const vector<StorageData::StorageDataItem> & getStorageDataItem() const { DARABONBA_PTR_GET_CONST(storageDataItem_, vector<StorageData::StorageDataItem>) };
      inline vector<StorageData::StorageDataItem> getStorageDataItem() { DARABONBA_PTR_GET(storageDataItem_, vector<StorageData::StorageDataItem>) };
      inline StorageData& setStorageDataItem(const vector<StorageData::StorageDataItem> & storageDataItem) { DARABONBA_PTR_SET_VALUE(storageDataItem_, storageDataItem) };
      inline StorageData& setStorageDataItem(vector<StorageData::StorageDataItem> && storageDataItem) { DARABONBA_PTR_SET_RVALUE(storageDataItem_, storageDataItem) };


    protected:
      shared_ptr<vector<StorageData::StorageDataItem>> storageDataItem_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->requestId_ == nullptr && this->storageData_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodStorageDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodStorageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageData Field Functions 
    bool hasStorageData() const { return this->storageData_ != nullptr;};
    void deleteStorageData() { this->storageData_ = nullptr;};
    inline const DescribeVodStorageDataResponseBody::StorageData & getStorageData() const { DARABONBA_PTR_GET_CONST(storageData_, DescribeVodStorageDataResponseBody::StorageData) };
    inline DescribeVodStorageDataResponseBody::StorageData getStorageData() { DARABONBA_PTR_GET(storageData_, DescribeVodStorageDataResponseBody::StorageData) };
    inline DescribeVodStorageDataResponseBody& setStorageData(const DescribeVodStorageDataResponseBody::StorageData & storageData) { DARABONBA_PTR_SET_VALUE(storageData_, storageData) };
    inline DescribeVodStorageDataResponseBody& setStorageData(DescribeVodStorageDataResponseBody::StorageData && storageData) { DARABONBA_PTR_SET_RVALUE(storageData_, storageData) };


  protected:
    // The time granularity at which the data was queried. Valid values:
    // 
    // *   **hour**
    // *   **day**
    shared_ptr<string> dataInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The storage usage data returned.
    shared_ptr<DescribeVodStorageDataResponseBody::StorageData> storageData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
