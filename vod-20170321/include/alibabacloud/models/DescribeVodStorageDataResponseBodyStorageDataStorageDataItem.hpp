// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODYSTORAGEDATASTORAGEDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODYSTORAGEDATASTORAGEDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStorageDataResponseBodyStorageDataStorageDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkOut, networkOut_);
      DARABONBA_PTR_TO_JSON(StorageUtilization, storageUtilization_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkOut, networkOut_);
      DARABONBA_PTR_FROM_JSON(StorageUtilization, storageUtilization_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVodStorageDataResponseBodyStorageDataStorageDataItem() = default ;
    DescribeVodStorageDataResponseBodyStorageDataStorageDataItem(const DescribeVodStorageDataResponseBodyStorageDataStorageDataItem &) = default ;
    DescribeVodStorageDataResponseBodyStorageDataStorageDataItem(DescribeVodStorageDataResponseBodyStorageDataStorageDataItem &&) = default ;
    DescribeVodStorageDataResponseBodyStorageDataStorageDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStorageDataResponseBodyStorageDataStorageDataItem() = default ;
    DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& operator=(const DescribeVodStorageDataResponseBodyStorageDataStorageDataItem &) = default ;
    DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& operator=(DescribeVodStorageDataResponseBodyStorageDataStorageDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkOut_ == nullptr
        && return this->storageUtilization_ == nullptr && return this->timeStamp_ == nullptr; };
    // networkOut Field Functions 
    bool hasNetworkOut() const { return this->networkOut_ != nullptr;};
    void deleteNetworkOut() { this->networkOut_ = nullptr;};
    inline string networkOut() const { DARABONBA_PTR_GET_DEFAULT(networkOut_, "") };
    inline DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& setNetworkOut(string networkOut) { DARABONBA_PTR_SET_VALUE(networkOut_, networkOut) };


    // storageUtilization Field Functions 
    bool hasStorageUtilization() const { return this->storageUtilization_ != nullptr;};
    void deleteStorageUtilization() { this->storageUtilization_ = nullptr;};
    inline string storageUtilization() const { DARABONBA_PTR_GET_DEFAULT(storageUtilization_, "") };
    inline DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& setStorageUtilization(string storageUtilization) { DARABONBA_PTR_SET_VALUE(storageUtilization_, storageUtilization) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodStorageDataResponseBodyStorageDataStorageDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The outbound traffic. Unit: bytes. The outbound traffic is generated when videos are directly downloaded or played from OSS buckets without Alibaba Cloud CDN acceleration.
    std::shared_ptr<string> networkOut_ = nullptr;
    // The detailed usage data of storage-related resources. Unit: bytes.
    std::shared_ptr<string> storageUtilization_ = nullptr;
    // The timestamp of the returned data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
