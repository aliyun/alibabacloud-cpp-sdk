// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODYDELAYDATADELAYDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODYDELAYDATADELAYDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem() = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem(const DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem(DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem &&) = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem() = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& operator=(const DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& operator=(DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->duration_ == nullptr && return this->region_ == nullptr && return this->streamName_ == nullptr && return this->timeStamp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayDataDelayDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The domain name. If SplitBy is set to domain, the data returned is grouped by domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The duration of stream delay.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The ID of the region. If SplitBy is set to region, the data returned is grouped by region.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the stream. If SplitBy is set to stream, the data returned is grouped by stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
