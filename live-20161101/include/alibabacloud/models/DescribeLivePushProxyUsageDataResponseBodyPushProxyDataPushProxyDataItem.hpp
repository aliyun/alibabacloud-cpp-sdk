// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODYPUSHPROXYDATAPUSHPROXYDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODYPUSHPROXYDATAPUSHPROXYDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem() = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem(const DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem &) = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem(DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem &&) = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem() = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& operator=(const DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem &) = default ;
    DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& operator=(DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->region_ == nullptr && return this->streamCount_ == nullptr && return this->timeStamp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // streamCount Field Functions 
    bool hasStreamCount() const { return this->streamCount_ != nullptr;};
    void deleteStreamCount() { this->streamCount_ = nullptr;};
    inline int64_t streamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0L) };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& setStreamCount(int64_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyDataPushProxyDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The domain name. If the value of SplitBy includes domain, the returned data is grouped by domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the region. If the value of SplitBy includes region, the returned data is grouped by region.
    std::shared_ptr<string> region_ = nullptr;
    // The peak number of live center stream relay channels.
    std::shared_ptr<int64_t> streamCount_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
